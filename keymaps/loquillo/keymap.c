#include QMK_KEYBOARD_H


#define _QWERTY 0
#define _LOWER 1
#define _RAISE 2
#define _ADJUST 3

#define LCTL_KESC LCTL_T(KC_ESC)
#define LGUI_KA   LGUI_T(KC_A)
#define LALT_KS   LALT_T(KC_S)
#define LCTL_KD   LCTL_T(KC_D)
#define LSFT_KF   LSFT_T(KC_F)
#define RSFT_KJ   RSFT_T(KC_J)
#define RCTL_KK   RCTL_T(KC_K)
#define RALT_KL   RALT_T(KC_L)
#define RG_SCLN   RGUI_T(KC_SCLN)
)
#define LT1_ESC LT(1,KC_ESC)
#define LT1_BSPC LT(1, KC_BSPC)

enum custom_keycodes {
  QWERTY = SAFE_RANGE,
  LOWER,
  RAISE,
  ADJUST
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [0] = LAYOUT(
  //┌──────────┬────────┬────────┬────────┬────────┬──────┐                     ┌────────┬────────┬────────┬───────┬──────────┬─────────┐
     XXXXXXX,   KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                        KC_6,    KC_7,    KC_8,    KC_9,    KC_0,      KC_BSPC,
  //├──────────┼────────┼────────┼────────┼────────┼──────┤                     ├────────┼────────┼────────┼───────┼──────────┼─────────┤
     KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                        KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,      KC_BSLS,
  //├──────────┼────────┼────────┼────────┼────────┼──────┤                     ├────────┼────────┼────────┼───────┼──────────┼─────────┤
     LCTL_KESC, LGUI_KA, LALT_KS, LCTL_KD, LSFT_KF, KC_G,                        KC_H,    RSFT_KJ, RCTL_KK, RALT_KL, RG_SCLN, KC_QUOT,
  //├──────────┼────────┼────────┼────────┼────────┼────────┼───────┐  ┌────────┼────────┼────────┼────────┼───────┼──────────┼─────────┤
     KC_LSFT,   KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_LGUI,   KC_RALT, KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,   KC_RSFT,
  //└──────────┴────────┴────────┴─┬──────┴─┬──────┴─┬──────┴─┬─────┘  └───┬────┴───┬────┴───┬────┴───┬────┴───────┴──────────┴─────────┘
                                    KC_LALT, LT1_ESC, KC_ENT,               KC_SPC,  LT1_BSPC, KC_DEL
                                // └────────┴────────┴────────┘            └────────┴────────┴────────┘
  ),

  [1] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                   ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_TRNS, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                       KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                   ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TRNS, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,                     KC_CIRC, KC_AMPR, KC_ASTR, KC_MINS, KC_EQL,  KC_F12,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                   ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TRNS, KC_LPRN, KC_RPRN, KC_LCBR, KC_RCBR, KC_UNDS,                     KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_PPLS, KC_TRNS,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐ ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TRNS, KC_TILD, KC_GRV,  KC_LBRC, KC_RBRC, KC_NO,   KC_TRNS,   KC_TRNS, KC_HOME, KC_PGDN, KC_PGUP, KC_END,  KC_PMNS, KC_TRNS, 
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘ └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
												KC_TRNS, MO(3),   KC_TRNS,            KC_TRNS, MO(2),   KC_TRNS
                                // └────────┴────────┴────────┘          └────────┴────────┴────────┘
  ),

  [2] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_F12,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                              KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     RGB_TOG, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,                            KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     RGB_MOD, KC_MPRV, KC_MNXT, KC_VOLU, KC_PGUP, KC_UNDS,                            KC_EQL,  KC_HOME, RGB_HUI, RGB_SAI, RGB_VAI, KC_BSLS,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_MUTE, KC_MSTP, KC_MPLY, KC_VOLD, KC_PGDN, KC_MINS, KC_LPRN,          _______, KC_PLUS, KC_END,  RGB_HUD, RGB_SAD, RGB_VAD, _______,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    _______, _______, _______,                   _______, _______, _______
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [3] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     _______, _______, _______, _______, _______, _______,                            _______, _______, _______, _______, _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, _______, _______, _______, _______,                            _______, _______, _______, _______, _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, _______, _______, _______, _______,                            _______, _______, _______, _______, _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, _______, _______, _______, _______, _______,          _______, _______, _______, _______, _______, _______, _______,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    _______, _______, _______,                   _______, _______, _______
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  )
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case QWERTY:
      if (record->event.pressed) {
        set_single_persistent_default_layer(_QWERTY);
      }
      return false;
      break;
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
    case KC_ESC:
        // Detect the activation of only Left Alt
        if (get_mods() == MOD_BIT(KC_LALT)) {
            if (record->event.pressed) {
                // No need to register KC_LALT because it's already active.
                // The Alt modifier will apply on this KC_TAB.
                register_code(KC_TAB);
            } else {
                unregister_code(KC_TAB);
            }
            // Do not let QMK process the keycode further
            return false;
        }
        // Else, let QMK process the KC_ESC keycode as usual
        return true;    
  }
  return true;
}

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
   switch (keycode) {
      case LSFT_T(KC_F): 
         return TAPPING_TERM_SFT;
      case RSFT_T(KC_J): 
         return TAPPING_TERM_SFT;
      case LT1_BSPC: 
         return 150;
      default:
         return TAPPING_TERM;
}}


// const key_override_t backspace_alt_tab = ko_make_basic(
//    MOD_MASK_LALT, KC_BSPC, KC_TAB
// );

// // This globally defines all key overrides to be used
// const key_override_t **key_overrides = (const key_override_t *[]){
//    &backspace_alt_tab,
//    NULL
// };

// bool encoder_update_user(uint8_t index, bool clockwise) {
//     if (index == 0) {
//         if (clockwise) {
//             tap_code(kc_volu);
//         } else {
//             tap_code(kc_vold);
//         }
//     }
//     else if (index == 1) {
//         if (clockwise) {
//             tap_code(kc_pgdn);
//         } else {
//             tap_code(kc_pgup);
//         }
//     }
//     return false;
// }
