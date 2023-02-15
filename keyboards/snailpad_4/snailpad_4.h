// Copyright 2023 SnailDOS (@snaildos)
// SPDX-License-Identifier: GPL-2.0-or-later
#pragma once

#include "quantum.h"

// clang-format off
#define LAYOUT( \
    K00, K01, \
    K10, K11 \
) { \
    { K00, K01 }, \
    { K10, K11 }  \
}
// clang-format on