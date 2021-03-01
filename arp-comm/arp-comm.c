/*
 * Copyright (c) 2012-2016 Israel Jacquez
 * See LICENSE for details.
 *
 * Israel Jacquez <mrkotfw@gmail.com>
 */

#include <yaul.h>

#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

static void _local_arp_cb(const arp_callback_t *);

int
main(void)
{
        char *arp_ver;
        arp_ver = arp_version_get();

        if (*arp_ver == '\0') {
                dbgio_puts("No ARP cartridge detected!\n");
                abort();
        }

        dbgio_printf("ARP version \"%s\" detected!\n", arp_ver);

        /* Register callback */
        arp_function_callback_set(&_local_arp_cb);

        dbgio_puts("Ready...\n");

        while (true) {
                arp_function_nonblock();

                dbgio_flush();
                vdp_sync();
        }

        return 0;
}

void
user_init(void)
{
        vdp2_tvmd_display_res_set(VDP2_TVMD_INTERLACE_NONE, VDP2_TVMD_HORZ_NORMAL_A,
            VDP2_TVMD_VERT_224);

        vdp2_scrn_back_screen_color_set(VDP2_VRAM_ADDR(3, 0x01FFFE),
            COLOR_RGB1555(1, 0, 3, 15));

        cpu_intc_mask_set(0);

        vdp2_tvmd_display_set();
}

static void
_local_arp_cb(const struct arp_callback *arp_cb)
{
        dbgio_printf("[2;1H[1JCallback\n"
                     "ptr: %p\n"
                     "len: 0x%04X\n"
                     "function: 0x%02X\n"
                     "execute: %s[5;1H;",
                     arp_cb->ptr,
                     arp_cb->len,
                     arp_cb->function,
                     (arp_cb->exec ? "yes" : "no"));
}
