#include QMK_KEYBOARD_H

#define BASE 0
#define FN   1

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [BASE] = LAYOUT(
    KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC, \
    KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, \
    KC_TAB,  KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_ENT,  \
    RGB_HUI, RGB_HUD, KC_LGUI, KC_LALT, KC_LSFT, KC_SPC,  KC_SPC,  MO(1),   KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT  \
  ),

  [FN]   = LAYOUT(
    _______, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    RESET  , \
    _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_MINS, KC_EQL,  KC_LBRC, KC_RBRC, KC_BSLS, \
    _______, KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  _______, KC_PGUP, KC_HOME, _______, _______, \
    RGB_VAI, RGB_VAD, RESET,   KC_PSCR, _______, _______, _______, _______, KC_PGDN, KC_END,  _______, KC_DEL   \
  )

};
