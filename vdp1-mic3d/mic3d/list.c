/*
 * Copyright (c) 2020
 * See LICENSE for details.
 *
 * Israel Jacquez <mrkotfw@gmail.com>
 */

#include <assert.h>
#include <stdint.h>
#include <stdlib.h>

#include "list.h"

void
__list_alloc(list_t *list, uint16_t count)
{
        assert(count > 0);

        if (list->count < count) {
                list->list = realloc(list->list, list->size * count);
                assert(list->list);

                list->count = count;

                list->flags |= LIST_FLAGS_ALLOCATED;
        }
}

void
__list_free(list_t *list)
{
        __list_set(list, NULL, 0);
}

void
__list_set(list_t *list, void *list_ptr, uint16_t count)
{
        if ((list->flags & LIST_FLAGS_ALLOCATED) == LIST_FLAGS_ALLOCATED) {
                free(list->list);

                list->flags &= ~LIST_FLAGS_ALLOCATED;
        }

        if ((list_ptr != NULL) && (count != 0)) {
                list->list = list_ptr;
                list->count = count;

                list->flags |= LIST_FLAGS_USER_ALLOCATED;
        } else {
                list->list = list->default_element;
                list->count = 0;

                list->flags &= ~LIST_FLAGS_USER_ALLOCATED;
        }
}
