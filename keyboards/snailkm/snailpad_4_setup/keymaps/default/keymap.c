#include QMK_KEYBOARD_H

enum layers {
    Layer1,
    Layer2,
    Layer3,
    Layer4
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	[Layer1] = LAYOUT_default(
		KC_3, KC_4,
		KC_1, KC_2),

    [Layer2] = LAYOUT_default(
		KC_SPC, KC_SPC,
		KC_SPC, KC_SPC),

    [Layer3] = LAYOUT_default(
		KC_SPC, KC_SPC,
		KC_SPC, KC_SPC),

    [Layer4] = LAYOUT_default(
		KC_SPC, KC_SPC,
		KC_SPC, KC_SPC)

};

// clang-format on