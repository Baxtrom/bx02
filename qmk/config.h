// Copyright 2023 Nicolas van der Werf (@Baxtrom)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once
#define MASTER_LEFT
#define SOFT_SERIAL_PIN D3
#define MATRIX_ROW_PINS_RIGHT {B1, B3, B2, B6}
#define MATRIX_COL_PINS_RIGHT {B5, B4, E6, D7, C6, D4}

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT
