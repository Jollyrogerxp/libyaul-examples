/*
 * Copyright (c) 2012-2016 Israel Jacquez
 * See LICENSE for details.
 *
 * Israel Jacquez <mrkotfw@gmail.com>
 */

#include <yaul.h>

#include <assert.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

static void _hardware_init(void);

static const char *_error_message =
    "[1;4H[2K[11CThe extended RAM\n"
    "[11Ccartridge is not\n"
    "[11Cinserted properly.\n"
    "\n"
    "[11CPlease turn off\n"
    "[11Cpower and re-insert\n"
    "[11Cthe extended RAM\n"
    "[11Ccartridge.\n";

int
main(void)
{
        _hardware_init();

        dbgio_dev_default_init(DBGIO_DEV_VDP2);
        dbgio_dev_set(DBGIO_DEV_VDP2);

        uint32_t id;
        id = dram_cart_id_get();

        if ((id != DRAM_CART_ID_1MIB) && (id != DRAM_CART_ID_4MIB)) {
                dbgio_buffer(_error_message);
                dbgio_flush();
                vdp_sync(0);
                abort();
        }

        char buffer[64];

        uint32_t *cart_area __unused;
        cart_area = (uint32_t *)dram_cart_area_get();

        size_t cart_len;
        cart_len = dram_cart_size_get();

        char *type_str = ((id == DRAM_CART_ID_1MIB)
            ? "8-Mbit"
            : "32-Mbit");

        (void)sprintf(buffer, "%s DRAM Cartridge detected (%i bytes)\n",
            type_str, cart_len);
        dbgio_buffer(buffer);

        vdp_sync(0);

        while (true) {
        }
}

static void
_hardware_init(void)
{
        vdp2_tvmd_display_res_set(VDP2_TVMD_INTERLACE_NONE, VDP2_TVMD_HORZ_NORMAL_A,
            VDP2_TVMD_VERT_224);

        vdp2_scrn_back_screen_color_set(VDP2_VRAM_ADDR(3, 0x01FFFE),
            COLOR_RGB555(0, 3, 3));

        cpu_intc_mask_set(0);

        vdp2_tvmd_display_set();
}
