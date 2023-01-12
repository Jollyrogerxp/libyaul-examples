#ifndef MIC3D_LIGHT_H
#define MIC3D_LIGHT_H

#include <fix16.h>

#include "types.h"
#include "state.h"

#define LIGHT_COUNT (3)

typedef struct light {
        vdp1_gouraud_table_t *gsts;
        uint32_t count;
        vdp1_vram_t vram_base;
        uint16_t slot_base;

        /* Light matrix represents the direction of each light */
        fix16_mat33_t light_matrix;
        /* Color matrix represents each light color (column vectors) */
        fix16_mat33_t color_matrix;
        /* Count of enabled lights */
        uint32_t light_count;

        /* Count of used GSTs */
        uint32_t gst_count;
} __aligned(4) light_t;

typedef uint16_t gst_slot_t;

static inline uint16_t __always_inline
__light_shading_slot_calculate(gst_slot_t gst_slot)
{
        return (__state.light->slot_base + gst_slot);
}

static inline gst_slot_t __always_inline
__light_gst_alloc(void)
{
        const gst_slot_t gst_slot =
            __state.light->gst_count++;

        return gst_slot;
}

static inline vdp1_gouraud_table_t * __always_inline
__light_gst_get(gst_slot_t gst_slot)
{
        return &__state.light->gsts[gst_slot];
}

void __light_init(void);
void __light_mesh_transform(void);
void __light_gst_put(void);

#endif /* MIC3D_LIGHT_H */