#include QMK_KEYBOARD_H

// readability
#define _______ KC_TRNS
#define XXXXXXX KC_NO

// const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

// 	/* Layer 0
// 	 * ,-----------------------------------------------------------------------------------.
// 	 * | Esc  |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  | Bksp |
// 	 * |------+------+------+------+------+-------------+------+------+------+------+------|
// 	 * | Tab  |   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   ;  |  "   |
// 	 * |------+------+------+------+------+------|------+------+------+------+------+------|
// 	 * | Shift|   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   ,  |   .  |  Up  |Enter |
// 	 * |------+------+------+------+------+------+------+------+------+------+------+------|
// 	 * | Ctrl |  GUI | Caps |  Alt |Layer1|    Space    |Layer2|  /   | Left | Down |Right |
// 	 * `-----------------------------------------------------------------------------------'
// 	 */
// 	[0] = LAYOUT_planck_mit(
// 		KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,  KC_T,   KC_Y,   KC_U,  KC_I,    KC_O,    KC_P,    KC_BSPC,
// 		KC_TAB,  KC_A,    KC_S,    KC_D,    KC_F,  KC_G,   KC_H,   KC_J,  KC_K,    KC_L,    KC_SCLN, KC_QUOT,
// 		KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,  KC_B,   KC_N,   KC_M,  KC_COMM, KC_DOT,  KC_UP,   KC_ENT,
// 		KC_LCTL, KC_LGUI, KC_CAPS, KC_LALT, MO(1),     KC_SPC,     MO(2), KC_SLSH, KC_LEFT, KC_DOWN, KC_RGHT
//   ),

// 	/* Layer 1
// 	 * ,-----------------------------------------------------------------------------------.
// 	 * |   `  |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |  F7  |  F8  |  F9  |  F10 |      |
// 	 * |------+------+------+------+------+-------------+------+------+------+------+------|
// 	 * |      | Vol- | Vol+ | Mute |      |      |      |  F11 |  F12 |      |      |      |
// 	 * |------+------+------+------+------+------|------+------+------+------+------+------|
// 	 * |      |      |      |      |      |      |      |      |      |      |      |      |
// 	 * |------+------+------+------+------+------+------+------+------+------+------+------|
// 	 * | Reset|      |      |      |      |      |      |      |      |      |      |      |
// 	 * `-----------------------------------------------------------------------------------'
// 	 */
// 	[1] = LAYOUT_planck_mit(
// 		KC_GRV,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  _______,
// 		_______, KC_VOLD, KC_VOLU, KC_MUTE, _______, _______, _______, KC_F11,  KC_F12,  _______, _______, _______,
// 		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
// 		RESET,   _______, _______, _______, _______,     _______,      _______, _______, _______, _______, _______
// 	),

// 	/* Layer 2 (r_ Indicates RGB Controls)
// 	 * ,-----------------------------------------------------------------------------------.
// 	 * |      |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  |      |
// 	 * |------+------+------+------+------+-------------+------+------+------+------+------|
// 	 * |      |r_TOG |r_Mode|r_Hue+|r_Hue-|      |      |   -  |   =  |   [  |   ]  |  \   |
// 	 * |------+------+------+------+------+------|------+------+------+------+------+------|
// 	 * |      |BL_TOG|BL_STEP|     |      |      |      |      |      |      |      |      |
// 	 * |------+------+------+------+------+------+------+------+------+------+------+------|
// 	 * |      |      |      |      |      |      |      |      |      |      |      |      |
// 	 * `-----------------------------------------------------------------------------------'
// 	 */
// 	[2] = LAYOUT_planck_mit(
// 		_______, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    _______,
// 		_______, RGB_TOG, RGB_MOD, RGB_HUI, RGB_HUD, _______, _______, KC_MINS, KC_EQL,  KC_LBRC, KC_RBRC, KC_BSLS,
// 		_______, BL_TOGG, BL_STEP, _______, _______, _______, _______, _______, _______, _______, _______, _______,
// 		_______, _______, _______, _______, _______,     _______,      _______, _______, _______, _______, _______
//   )
// };








#define _BL 0
#define _AL 1
#define _FL 2
#define _UL 3

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BL] = LAYOUT_planck_mit(
    KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
    KC_TAB,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
    KC_LCTL, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_ENT,
    KC_LSFT, KC_LALT, KC_LGUI, KC_LSFT, MO(_AL), KC_SPC         ,  MO(_FL), KC_LBRC, KC_RBRC, KC_BSLS, KC_RSFT
  ),

    [_AL] = LAYOUT_planck_mit(
        KC_GRV,  KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F11,  KC_F12, _______, KC_MUTE, KC_VOLD,  KC_VOLU, KC_DEL,
        KC_CAPS, KC_F4,   KC_F5,   KC_F6,  _______, RGB_TOG, RGB_MOD, RGB_HUI, RGB_HUD, _______, KC_TRNS, KC_TRNS,
        _______, KC_F1,   KC_F2,   KC_F3,  _______, BL_TOGG, BL_STEP, _______, _______, _______, KC_TRNS, KC_TRNS,
        RESET  , _______, _______, _______,_______,          _______, _______, _______, _______, _______, _______
    ),

    [_FL] = LAYOUT_planck_mit(
        KC_GRV , KC_7   , KC_8   , KC_9   , KC_MINS, KC_EQL , KC_LBRC, KC_RBRC, KC_SCLN, KC_SLSH,  KC_BSLS, KC_QUOT,
        KC_CAPS, KC_4   , KC_5   , KC_6   , _______, _______, KC_LEFT, KC_UP  , KC_DOWN, KC_RIGHT, _______, KC_TRNS,
        _______, KC_1   , KC_2   , KC_3   , _______, _______, _______, KC_HOME, KC_END , KC_PGUP,  KC_PGDN, KC_TRNS,
        _______, _______, KC_0   , _______, _______,          _______, _______, _______, _______,  _______, _______
    ),

    [_UL] = LAYOUT_planck_mit(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_TRNS,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_TRNS,
        _______, _______, _______, _______, _______,          _______, _______, _______, _______, _______, _______
    ),
};


























void matrix_init_user(void) {
}

void matrix_scan_user(void) {
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	return true;
}

void led_set_user(uint8_t usb_led) {

	if (usb_led & (1 << USB_LED_NUM_LOCK)) {

	} else {

	}

	if (usb_led & (1 << USB_LED_CAPS_LOCK)) {

	} else {

	}

	if (usb_led & (1 << USB_LED_SCROLL_LOCK)) {

	} else {

	}

	if (usb_led & (1 << USB_LED_COMPOSE)) {

	} else {

	}

	if (usb_led & (1 << USB_LED_KANA)) {

	} else {

	}

}