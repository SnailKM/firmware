// SPDX-License-Identifier: GPL-2.0-or-later
#pragma once

/* key matrix size */
#define MATRIX_ROWS 3
#define MATRIX_COLS 4

/* key matrix pins */
#define MATRIX_ROW_PINS { B1, B3, B2 }
#define MATRIX_COL_PINS { F4, F5, F6, F7 }

/* encoders */
#define ENCODERS_PAD_A { B4 }
#define ENCODERS_PAD_B { B5 } 

/* misc */
#define LAYER_STATE_8BIT
#define NO_ACTION_TAPPING
