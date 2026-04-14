#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_Q, KC_I, KC_SPC,
        KC_W, KC_K, KC_L,
        KC_SCLN, KC_J,
        KC_A, KC_S, KC_D,
        KC_COMM, KC_DOT, KC_SLSH, KC_M
    )
};