/*
 * Copyright (c) 2012-2016 Israel Jacquez
 * See LICENSE for details.
 *
 * Israel Jacquez <mrkotfw@gmail.com>
 */

#include <yaul.h>

#include <stdio.h>

static void _ovi_handler(void);

static volatile uint32_t _ovf_count = 0;

/* Transfer 512 KiB */
static uint8_t _copy_buffer[62] __aligned(0x100);

int
main(void)
{
        (void)memset(_copy_buffer, '\0', sizeof(_copy_buffer));
        usb_cart_dma_read(_copy_buffer, sizeof(_copy_buffer));

        dbgio_dev_default_init(DBGIO_DEV_VDP2_ASYNC);
        dbgio_dev_font_load();

        dbgio_puts("Using f/8 CPU FRT divisor\n\n");

        uint16_t before;
        uint16_t after;
        uint32_t count;

        uint32_t i;

        cpu_frt_count_set(0);
        _ovf_count = 0;

        before = cpu_frt_count_get();
        for (i = 0; i < sizeof(_copy_buffer); i++) {
                usb_cart_byte_send(_copy_buffer[i]);
        }
        after = cpu_frt_count_get();
        count = (after - before) + (65535 * _ovf_count);

        dbgio_printf("Using CPU byte transfer:\n%16lu FRT ticks\n", count);

        cpu_frt_count_set(0);
        _ovf_count = 0;

        before = cpu_frt_count_get();
        usb_cart_dma_send(_copy_buffer, sizeof(_copy_buffer));
        after = cpu_frt_count_get();
        count = (after - before) + (65535 * _ovf_count);

        dbgio_printf("Using CPU-DMAC:\n%16lu FRT ticks\n", count);

        dbgio_puts(".\n");

        dbgio_flush();

        vdp2_sync();
        vdp2_sync_wait();

        while (true) {
        }

        return 0;
}

void
user_init(void)
{
        vdp2_tvmd_display_res_set(VDP2_TVMD_INTERLACE_NONE, VDP2_TVMD_HORZ_NORMAL_A,
            VDP2_TVMD_VERT_224);

        vdp2_scrn_back_color_set(VDP2_VRAM_ADDR(3, 0x01FFFE),
            COLOR_RGB1555(1, 0, 3, 15));

        vdp2_tvmd_display_set();

        cpu_frt_init(CPU_FRT_CLOCK_DIV_8);
        cpu_frt_ovi_set(_ovi_handler);
}

static void
_ovi_handler(void)
{
        _ovf_count++;
}
