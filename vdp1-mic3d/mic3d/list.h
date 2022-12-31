#ifndef MIC3D_LIST_H
#define MIC3D_LIST_H

#include <stdint.h>

typedef enum {
        LIST_FLAGS_NONE,
        LIST_FLAGS_USER_ALLOCATED = 1 << 0,
        LIST_FLAGS_ALLOCATED      = 1 << 1
} list_flags_t;

typedef struct {
        list_flags_t flags;
        void *list;
        uint16_t count;
        uint16_t size;
        void *default_element;
} __aligned(4) list_t;

void __list_alloc(list_t *list, uint16_t count);
void __list_free(list_t *list);
void __list_set(list_t *list, void *list_ptr, uint16_t count);

#endif /* MIC3D_LIST_H */
