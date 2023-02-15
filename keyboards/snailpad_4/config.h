// Copyright 2023 SnailDOS (@snaildos)
// SPDX-License-Identifier: GPL-2.0-or-later
#pragma once

#include "config_common.h"

/* bootmagic */
#define BOOTMAGIC_LITE_ROW 1
#define BOOTMAGIC_LITE_COLUMN 0

/* key matrix size */
#define MATRIX_ROWS 2
#define MATRIX_COLS 2

/* key matrix pins */
#define MATRIX_ROW_PINS { F6, F7 }
#define MATRIX_COL_PINS { F4, F5 }

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION ROW2COL

/* misc */
#define LAYER_STATE_8BIT
#define NO_ACTION_TAPPING
