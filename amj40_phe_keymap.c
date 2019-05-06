


#include QMK_KEYBOARD_H

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _QWERTY 0
#define _LOWER 1
#define _RAISE 2
#define _ADJUST 3



enum custom_keycodes {
  QWERTY = SAFE_RANGE,
  LOWER,
  RAISE,
  ADJUST,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
        /* Default Layer
     */
    [_QWERTY] = LAYOUT( \
        KC_ESC,  KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,    KC_O,    KC_P,   KC_BSPC,\
        KC_TAB,  KC_A,   KC_S,   KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,    KC_L,    KC_ENT,\
        KC_LSFT, KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_SLSH, KC_UP,  KC_RSFT,\
        KC_LCTL, KC_LGUI, KC_LALT,          LT(_LOWER, KC_SPC),LT(_RAISE, KC_SPC),LT(_ADJUST, KC_LEFT), KC_DOWN, KC_RGHT \
		),

    /* Function Layer Lower 
     */
    [_LOWER] = LAYOUT( \
        KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,     KC_5,      KC_6,      KC_7,    KC_8,    KC_9,    KC_0,  KC_QUOTE, \
	KC_CAPS, KC_F1,   KC_F2,   KC_F3,   KC_INS,   KC_HOME,   KC_PGUP,   KC_LBRC, KC_RBRC, KC_EQUAL, KC_MINUS, \
	_______, KC_F4,   KC_F5,   KC_F6,   KC_DEL,   KC_END,    KC_PGDN,   KC_SCOLON, KC_QUOTE, KC_VOLU, _______, \
	_______, _______, KC_MUTE,  _______,KC_BSPC,  KC_MPRV,   KC_VOLD,   KC_MNXT \
		),
	
	/* Function Layer  Raise
     */
    [_RAISE] = LAYOUT( \
        KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_QUOTE, \
	_______, KC_F7,   KC_F8,   KC_F9,   _______, _______, KC_SLASH,KC_NUBS, _______, _______, _______, \
	_______, KC_F10,  KC_F11,  KC_F12,  _______, _______, KC_COMMA,KC_DOT , _______, _______, _______, \
	_______, _______, _______, _______, _______, _______, _______, _______ \
		),
	
	/* Function Layer Adjust
     */
    [_ADJUST] = LAYOUT( \
        _______, RESET,   _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_DEL, \
	_______, _______, _______, AU_ON,   AU_OFF,  AG_NORM, AG_SWAP, _______, _______, _______,  _______,  \
	_______, _______, _______, RGB_TOG,  RGB_MOD,  RGB_HUI,  RGB_HUD,  RGB_SAI,  RGB_SAD,  RGB_VAI,  RGB_VAD, \
	KC_SYSTEM_SLEEP, _______, _______, _______, _______, _______, _______, _______ \
		),

    

};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
    // MACRODOWN only works in this function
   
    return MACRO_NONE;
};




bool process_record_user(uint16_t keycode, keyrecord_t *record) {
 
  switch (keycode) {
    
    case LOWER:
      if (record->event.pressed) {
        layer_on(_LOWER);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      } else {
        layer_off(_LOWER);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      }
      return false;
      break;
    case RAISE:
      if (record->event.pressed) {
        layer_on(_RAISE);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      } else {
        layer_off(_RAISE);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      }
      return false;
      break;
    case ADJUST:
      if (record->event.pressed) {
        layer_on(_ADJUST);
      } else {
        layer_off(_ADJUST);
      }
      return false;
      break;
  }
  return true;
}
