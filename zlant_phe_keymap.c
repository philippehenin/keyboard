#include QMK_KEYBOARD_H

#define _BL 0
#define _AL 1
#define _FL 2
#define _UL 3

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BL] = LAYOUT(
    KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
    KC_TAB,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_ENT,
    KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
    KC_LCTL, KC_LALT, KC_LGUI, KC_LSFT, MO(_AL), KC_SPC,  KC_SPC,  MO(_FL), KC_LBRC, KC_RBRC, KC_BSLS, KC_QUOT
  ),

    [_AL] = LAYOUT(
        KC_GRV,  KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F11,  KC_F12, _______, KC_MUTE, KC_VOLD,  KC_VOLU, KC_DEL,
        KC_CAPS, KC_F4,   KC_F5,   KC_F6,  _______, _______, _______, _______, _______, _______, KC_TRNS, KC_TRNS,
        _______, KC_F1,   KC_F2,   KC_F3,  _______, _______, _______, _______, _______, _______, KC_TRNS, KC_TRNS,
        RESET  , _______, _______, _______,_______, _______, _______, _______, _______, _______, _______, _______
    ),

    [_FL] = LAYOUT(
        KC_GRV , KC_7   , KC_8   , KC_9   , KC_MINS, KC_EQL , KC_LBRC, KC_RBRC, KC_SCLN, KC_SLSH,  KC_BSLS, KC_QUOT,
        KC_CAPS, KC_4   , KC_5   , KC_6   , _______, _______, KC_LEFT, KC_UP  , KC_DOWN, KC_RIGHT, _______, KC_TRNS,
        _______, KC_1   , KC_2   , KC_3   , _______, _______, _______, KC_HOME, KC_END , KC_PGUP,  KC_PGDN, KC_TRNS,
        _______, _______, KC_0   , _______, _______, _______, _______, _______, _______, _______,  _______, _______
    ),

    [_UL] = LAYOUT(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_TRNS,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_TRNS,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
    ),
};
