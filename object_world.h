/*
 * Copyright (c) 2012-2016 Israel Jacquez
 * See LICENSE for details.
 *
 * Israel Jacquez <mrkotfw@gmail.com>
 */

#ifndef OBJECT_WORLD_H
#define OBJECT_WORLD_H

#include "blue.h"

#define OBJECT_ID_WORLD 1

struct object_world {
        OBJECT_DECLARATIONS

        /* Public data */
        struct {
        } functions;

        const struct {
        } data;
};

extern struct object_world object_world;

#endif /* !OBJECT_WORLD_H */
