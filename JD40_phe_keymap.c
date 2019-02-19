#include QMK_KEYBOARD_H

#define _BL 0
#define _AL 1
#define _FL 2
#define _UL 3

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BL] = LAYOUT(
        KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,   KC_P, KC_BSPC,
        KC_TAB,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,   KC_ENT,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_RSFT,KC_DOT,
        KC_LCTL, KC_LALT, MO(_AL) ,KC_LGUI, KC_SPC      ,KC_BSPC     , MO(_FL), MO(_FL), KC_RALT, KC_RCTL
    ),

    [_AL] = LAYOUT(
        KC_GRV,  KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F11,  KC_F12, _______, KC_MUTE, KC_VOLD, KC_VOLU , KC_DEL,
        KC_CAPS, KC_F4,   KC_F5,   KC_F6, _______, _______, _______, _______, _______, _______, KC_TRNS ,
        _______, KC_F1,   KC_F2,   KC_F3, _______, _______, _______, _______, _______, _______, KC_TRNS ,
        RESET  , _______, _______, _______, _______, _______, _______, _______, _______, _______
    ),

    [_FL] = LAYOUT(
        KC_GRV , KC_7   , KC_8   , KC_9   , KC_MINS, KC_EQL , KC_LBRC, KC_RBRC, KC_SCLN, KC_SLSH,  KC_BSLS, KC_QUOT, 
        KC_CAPS, KC_4   , KC_5   , KC_6   , _______, _______, KC_LEFT, KC_UP  , KC_DOWN, KC_RIGHT, _______,
        _______, KC_1   , KC_2   , KC_3   , _______, _______, _______, KC_HOME, KC_END , KC_PGUP,  KC_PGDN,
        _______, _______, KC_0   , _______, _______, _______, _______, _______, _______, _______
    ),

    [_UL] = LAYOUT(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
    ),
};

void matrix_scan_user(void) {
  // Layer LED indicators
  // ESC led on when in function layer, WASD cluster leds enabled when on arrow cluster
  uint32_t layer = layer_state;
  if (layer & (1 << 1)) {
      //gh60_wasd_leds_on();
  } else {
      //gh60_wasd_leds_off();
  }

  if (layer & (1 << 2)) {
      //gh60_esc_led_on();
  } else {
      //gh60_esc_led_off();
  }
};
