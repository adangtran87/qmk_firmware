#include "dz60.h"

#define MODS_CTRL_MASK  (MOD_BIT(KC_LSHIFT)|MOD_BIT(KC_RSHIFT))

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  /* Base Layer */
  LAYOUT(
    KC_GRV,          KC_1,     KC_2,     KC_3,   KC_4,   KC_5,    KC_6,     KC_7,     KC_8,   KC_9,     KC_0,      KC_MINS,  KC_EQL,   KC_NO,    KC_NO,
    KC_TAB,          KC_Q,     KC_W,     KC_E,   KC_R,   KC_T,    KC_Y,     KC_U,     KC_I,   KC_O,     KC_P,      KC_LBRC,  KC_RBRC,  KC_BSLS,
    LCTL_T(KC_ESC),  KC_A,     KC_S,     KC_D,   KC_F,   KC_G,    KC_H,     KC_J,     KC_K,   KC_L,     KC_SCLN,   KC_QUOT,  KC_ENT,
    KC_LSFT,         KC_NO,    KC_Z,     KC_X,   KC_C,   KC_V,    KC_B,     KC_N,     KC_M,   KC_COMM,  KC_DOT,    KC_SLSH,  KC_RSFT,  KC_NO,
    KC_LCTL,         KC_LGUI,  KC_LALT,  MO(1),  LT(2, KC_BSPC),  KC_SPC,  KC_RALT,  KC_RGUI,  KC_NO,  KC_NO,    KC_RCTL),

  /* Navigation and Utility Keys */
  LAYOUT(
    KC_NO,  KC_F1,    KC_F2,    KC_F3,    KC_F4,   KC_F5,  KC_F6,    KC_F7,    KC_F8,   KC_F9,     KC_F10,   KC_F11,  KC_F12,  KC_NO,  KC_NO,
    KC_NO,  KC_NO,    KC_VOLU,  KC_PGUP,  KC_NO,   KC_NO,  KC_NO,    KC_NO,    KC_INS,  KC_NO,     KC_PSCR,  KC_NO,   KC_NO,   KC_NO,
    KC_NO,  KC_HOME,  KC_VOLD,  KC_PGDN,  KC_END,  KC_NO,  KC_LEFT,  KC_DOWN,  KC_UP,   KC_RIGHT,  KC_NO,    KC_NO,   KC_NO,
    KC_NO,  KC_NO,    KC_NO,    KC_NO,    KC_NO,   KC_NO,  KC_NO,    KC_NO,    KC_NO,   KC_NO,     KC_NO,    KC_NO,   KC_NO,   KC_NO,
    KC_NO,  KC_NO,    KC_NO,    KC_NO,    KC_DEL,  KC_NO,  KC_NO,    KC_NO,    KC_NO,   KC_NO,     KC_NO),

  /* Programming Layer */
  LAYOUT(
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO),

};

/* Custom Functions */
// enum function_id {
//     SHIFT_ESC,
// };

// const uint16_t PROGMEM fn_actions[] = {
//   [0]  = ACTION_FUNCTION(SHIFT_ESC),
// };

// void action_function(keyrecord_t *record, uint8_t id, uint8_t opt) {
//   static uint8_t shift_esc_shift_mask;
//   switch (id) {
//     case SHIFT_ESC:
//       shift_esc_shift_mask = get_mods()&MODS_CTRL_MASK;
//       if (record->event.pressed) {
//         if (shift_esc_shift_mask) {
//           add_key(KC_GRV);
//           send_keyboard_report();
//         } else {
//           add_key(KC_ESC);
//           send_keyboard_report();
//         }
//       } else {
//         if (shift_esc_shift_mask) {
//           del_key(KC_GRV);
//           send_keyboard_report();
//         } else {
//           del_key(KC_ESC);
//           send_keyboard_report();
//         }
//       }
//       break;
//   }
// }

// void led_set_user(uint8_t usb_led) {
//     if (usb_led & (1 << USB_LED_CAPS_LOCK)) {
//         DDRB |= (1 << 2); PORTB &= ~(1 << 2);
//     } else {
//         DDRB &= ~(1 << 2); PORTB &= ~(1 << 2);
//     }
// }
