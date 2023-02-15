#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	[0] = LAYOUT(
		KC_3, KC_4,
		KC_1, KC_2
	),
    [1] = LAYOUT(
		KC_SPC, KC_SPC,
		KC_SPC, KC_SPC
	),
    [2] = LAYOUT(
		KC_SPC, KC_SPC,
		KC_SPC, KC_SPC
	),
    [3] = LAYOUT(
		KC_SPC, KC_SPC,
		KC_SPC, KC_SPC
	)
};

// clang-format on