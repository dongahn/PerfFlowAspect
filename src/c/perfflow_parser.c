/************************************************************\
 * Copyright 2021 Lawrence Livermore National Security, LLC
 * (c.f. AUTHORS, NOTICE.LLNS, COPYING)
 *
 * This file is part of the Flux resource manager framework.
 * For details, see https://github.com/flux-framework.
 *
 * SPDX-License-Identifier: LGPL-3.0
\************************************************************/

#include <errno.h>
#include "parser.tab.h"

extern int validate (const char *in);

int perfflow_parser_validate (const char *anno)
{
    if (!anno) {
        errno = EINVAL;
        return -1;
    }
    return validate (anno);
}

/*
 * vi:tabstop=4 shiftwidth=4 expandtab
 */