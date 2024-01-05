// SPDX-License-Identifier: GPL-2.0-or-later
#include QMK_KEYBOARD_H

enum layers {
    Layer1,
    Layer2,
    Layer3,
    Layer4
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	[Layer1] = LAYOUT_default(
                	KC_MUTE, 
		KC_7, KC_8, KC_9, 
		KC_4, KC_5, KC_6, 
		KC_1, KC_2, KC_3),

    [Layer2] = LAYOUT_default(
              			KC_SPC,
		KC_SPC, KC_SPC, KC_SPC,
		KC_SPC, KC_SPC, KC_SPC,
		KC_SPC, KC_SPC, KC_SPC),

    [Layer3] = LAYOUT_default(
                		KC_SPC,
		KC_SPC, KC_SPC, KC_SPC,
		KC_SPC, KC_SPC, KC_SPC,
		KC_SPC, KC_SPC, KC_SPC),

    [Layer4] = LAYOUT_default(
                		KC_SPC,
		KC_SPC, KC_SPC, KC_SPC,
		KC_SPC, KC_SPC, KC_SPC,
		KC_SPC, KC_SPC, KC_SPC)

};

/*Encoder Mapping*/
#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [0] =  {ENCODER_CCW_CW(KC_VOLD,  KC_VOLU)},
    [1] =  { ENCODER_CCW_CW(RGB_VAD, RGB_VAI)},
    [2] =  { ENCODER_CCW_CW(KC_LEFT, KC_RGHT)},
    [3] =  { ENCODER_CCW_CW(KC_DOWN,   KC_UP)},

};
#endif

// clang-format on

