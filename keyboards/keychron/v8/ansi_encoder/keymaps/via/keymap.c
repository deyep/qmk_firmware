/* Copyright 2022 @ Keychron (https://www.keychron.com)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H

// clang-format off


// 同時押しCombo用のenum
enum combos {
    // ランチャー
    F_G_LAUNCH,
    R_T_LAUNCH,
    V_B_LAUNCH,
    F_R_VOLUP,
    F_V_VOLDN,
    G_R_ZOOMIN,
    B_F_ZOOMOUT,
    E_X_PGUP,
    E_V_PGDN,

    // クリック操作
    D_E_DRAG,
    D_V_MOUSE,
    X_D_MOUSE,

    // コピー・ペースト
    X_F_COPY,
    S_C_DBLCLICK_COPY,
    X_C_ALLCOPY,
    C_V_PASTE,
    X_V_CLIPBOARD,
    X_B_CLIPBOARD,

    // メイン
    D_G_ESC,
    D_R_SPACE,
    C_F_CMD_R,

    // タブ
    S_D_CTRL_SHIFT_TAB,
    D_F_CTRL_TAB,
    S_G_CMD_T,
    S_V_CMD_W,
    S_R_CMD_SHIFT_T,
    S_B_CMD_LBRC,
    S_T_CMD_RBRC,
    S_W_DUPLICATE_TAB,

    // ウィンドウ
    S_F_CMD_TAB,
    W_F_CMD_TAB2,
    W_D_CMD_TAB3,
    W_R_ALT_TAB,
    W_T_WIN,
    W_G_WIN,
    W_C_WIN,
    W_V_WIN,
    W_B_WIN,

    // アプリ
    Z_X_APP,
    Z_C_APP,
    Z_V_APP,
    Z_B_APP,
    Z_A_APP,
    Z_S_APP,
    Z_D_APP,
    Z_F_APP,
    Z_G_APP,
    Z_W_APP,
    Z_R_APP,
    Z_T_APP,
    Z_3_APP,

    COMBO_LENGTH
};

// ランチャー
const uint16_t PROGMEM f_g_combo[] = {KC_F, KC_G, COMBO_END};
const uint16_t PROGMEM r_t_combo[] = {KC_R, KC_T, COMBO_END};
const uint16_t PROGMEM v_b_combo[] = {KC_V, KC_B, COMBO_END};
const uint16_t PROGMEM f_r_combo[] = {KC_F, KC_R, COMBO_END};
const uint16_t PROGMEM f_v_combo[] = {KC_F, KC_V, COMBO_END};
const uint16_t PROGMEM g_r_combo[] = {KC_G, KC_R, COMBO_END};
const uint16_t PROGMEM b_f_combo[] = {KC_B, KC_F, COMBO_END};
const uint16_t PROGMEM e_x_combo[] = {KC_E, KC_X, COMBO_END};
const uint16_t PROGMEM e_v_combo[] = {KC_E, KC_V, COMBO_END};

// クリック操作
const uint16_t PROGMEM d_e_combo[] = {KC_D, KC_E, COMBO_END};
const uint16_t PROGMEM d_v_combo[] = {KC_D, KC_V, COMBO_END};
const uint16_t PROGMEM x_d_combo[] = {KC_X, KC_D, COMBO_END};

// コピー・ペースト
const uint16_t PROGMEM x_f_combo[] = {KC_X, KC_F, COMBO_END};
const uint16_t PROGMEM s_c_combo[] = {KC_S, KC_C, COMBO_END};
const uint16_t PROGMEM x_c_combo[] = {KC_X, KC_C, COMBO_END};
const uint16_t PROGMEM c_v_combo[] = {KC_C, KC_V, COMBO_END};
const uint16_t PROGMEM x_v_combo[] = {KC_X, KC_V, COMBO_END};
const uint16_t PROGMEM x_b_combo[] = {KC_X, KC_B, COMBO_END};

// メイン
const uint16_t PROGMEM d_g_combo[] = {KC_D, KC_G, COMBO_END};
const uint16_t PROGMEM d_r_combo[] = {KC_D, KC_R, COMBO_END};
const uint16_t PROGMEM c_f_combo[] = {KC_C, KC_F, COMBO_END};

// タブ
const uint16_t PROGMEM s_d_combo[] = {KC_S, KC_D, COMBO_END};
const uint16_t PROGMEM d_f_combo[] = {KC_D, KC_F, COMBO_END};
const uint16_t PROGMEM s_g_combo[] = {KC_S, KC_G, COMBO_END};
const uint16_t PROGMEM s_v_combo[] = {KC_S, KC_V, COMBO_END};
const uint16_t PROGMEM s_r_combo[] = {KC_S, KC_R, COMBO_END};
const uint16_t PROGMEM s_b_combo[] = {KC_S, KC_B, COMBO_END};
const uint16_t PROGMEM s_t_combo[] = {KC_S, KC_T, COMBO_END};
const uint16_t PROGMEM s_w_combo[] = {KC_S, KC_W, COMBO_END};

// ウィンドウ
const uint16_t PROGMEM s_f_combo[] = {KC_S, KC_F, COMBO_END};
const uint16_t PROGMEM w_f_combo[] = {KC_W, KC_F, COMBO_END};
const uint16_t PROGMEM w_d_combo[] = {KC_W, KC_D, COMBO_END};
const uint16_t PROGMEM w_r_combo[] = {KC_W, KC_R, COMBO_END};
const uint16_t PROGMEM w_t_combo[] = {KC_W, KC_T, COMBO_END};
const uint16_t PROGMEM w_g_combo[] = {KC_W, KC_G, COMBO_END};
const uint16_t PROGMEM w_c_combo[] = {KC_W, KC_C, COMBO_END};
const uint16_t PROGMEM w_v_combo[] = {KC_W, KC_V, COMBO_END};
const uint16_t PROGMEM w_b_combo[] = {KC_W, KC_B, COMBO_END};

// アプリ
const uint16_t PROGMEM z_x_combo[] = {KC_Z, KC_X, COMBO_END };
const uint16_t PROGMEM z_c_combo[] = {KC_Z, KC_C, COMBO_END };
const uint16_t PROGMEM z_v_combo[] = {KC_Z, KC_V, COMBO_END };
const uint16_t PROGMEM z_b_combo[] = {KC_Z, KC_B, COMBO_END };
const uint16_t PROGMEM z_a_combo[] = {KC_Z, KC_A, COMBO_END };
const uint16_t PROGMEM z_s_combo[] = {KC_Z, KC_S, COMBO_END };
const uint16_t PROGMEM z_d_combo[] = {KC_Z, KC_D, COMBO_END };
const uint16_t PROGMEM z_f_combo[] = {KC_Z, KC_F, COMBO_END };
const uint16_t PROGMEM z_g_combo[] = {KC_Z, KC_G, COMBO_END };
const uint16_t PROGMEM z_w_combo[] = {KC_Z, KC_W, COMBO_END };
const uint16_t PROGMEM z_r_combo[] = {KC_Z, KC_R, COMBO_END };
const uint16_t PROGMEM z_t_combo[] = {KC_Z, KC_T, COMBO_END };
const uint16_t PROGMEM z_3_combo[] = {KC_Z, KC_3, COMBO_END };

// コンボ配列に登録
combo_t key_combos[] = {
    // ランチャー
    [F_G_LAUNCH] = COMBO(f_g_combo, KC_NO),
    [R_T_LAUNCH] = COMBO(r_t_combo, KC_NO),
    [V_B_LAUNCH] = COMBO(v_b_combo, KC_NO),
    [F_R_VOLUP] = COMBO(f_r_combo, KC_AUDIO_VOL_UP),   // ボリュームアップ
    [F_V_VOLDN] = COMBO(f_v_combo, KC_AUDIO_VOL_DOWN), // ボリュームダウン
    [G_R_ZOOMIN] = COMBO(g_r_combo, LGUI(KC_EQL)),     // 拡大
    [B_F_ZOOMOUT] = COMBO(b_f_combo, LGUI(KC_MINS)),   // 縮小
    [E_X_PGUP] = COMBO(e_x_combo, KC_PGUP),            // ページアップ
    [E_V_PGDN] = COMBO(e_v_combo, KC_PGDN),            // ページダウン

    // クリック操作
    [D_E_DRAG] = COMBO(d_e_combo, KC_NO),             // ドラッグ
    [D_V_MOUSE] = COMBO(d_v_combo, KC_MS_BTN1),        // 左クリック
    [X_D_MOUSE] = COMBO(x_d_combo, KC_MS_BTN3),        // 中クリック

    // コピー・ペースト
    [X_F_COPY] = COMBO(x_f_combo, KC_NO),              // コピー
    [S_C_DBLCLICK_COPY] = COMBO(s_c_combo, KC_NO),     // ダブルクリックコピー
    [X_C_ALLCOPY] = COMBO(x_c_combo, KC_NO),           // すべてコピー
    [C_V_PASTE] = COMBO(c_v_combo, KC_NO),             // ペースト
    [X_V_CLIPBOARD] = COMBO(x_v_combo, KC_NO),         // クリップボード2
    [X_B_CLIPBOARD] = COMBO(x_b_combo, KC_NO),         // クリップボード3

    // メイン
    [D_G_ESC] = COMBO(d_g_combo, KC_ESC),       // ESCキー
    [D_R_SPACE] = COMBO(d_r_combo, KC_SPC),     // スペースキー
    [C_F_CMD_R] = COMBO(c_f_combo, LGUI(KC_R)), // 再読み込み

    // タブ
    [S_D_CTRL_SHIFT_TAB] = COMBO(s_d_combo, LCTL(LSFT(KC_TAB))), // 前のタブ
    [D_F_CTRL_TAB] = COMBO(d_f_combo, LCTL(KC_TAB)),             // 次のタブ
    [S_G_CMD_T] = COMBO(s_g_combo, LGUI(KC_T)), // 新規タブ
    [S_V_CMD_W] = COMBO(s_v_combo, LGUI(KC_W)), // タブを閉じる
    [S_R_CMD_SHIFT_T] = COMBO(s_r_combo, LGUI(LSFT(KC_T))), // 閉じたタブを復元
    [S_B_CMD_LBRC] = COMBO(s_b_combo, LGUI(KC_LBRC)), // 戻る
    [S_T_CMD_RBRC] = COMBO(s_t_combo, LGUI(KC_RBRC)), // 進む
    [S_W_DUPLICATE_TAB] = COMBO(s_w_combo, LCTL(LALT(LGUI(KC_T)))), // Chromeタブを複製

    // ウィンドウ
    [S_F_CMD_TAB] = COMBO(s_f_combo, KC_NO),    // Cmd+Tab
    [W_F_CMD_TAB2] = COMBO(w_f_combo, KC_NO),   // Cmd+Tab2
    [W_D_CMD_TAB3] = COMBO(w_d_combo, KC_NO),   // Cmd+Tab3
    [W_R_ALT_TAB] = COMBO(w_r_combo, KC_NO),    // Alt+Tab
    [W_T_WIN] = COMBO(w_t_combo, LCTL(LALT(LGUI(LSFT(KC_2))))),
    [W_G_WIN] = COMBO(w_g_combo, LCTL(LALT(LGUI(LSFT(KC_3))))),
    [W_C_WIN] = COMBO(w_c_combo, LCTL(LALT(LGUI(LSFT(KC_4))))),
    [W_V_WIN] = COMBO(w_v_combo, LCTL(LALT(LGUI(LSFT(KC_5))))),
    [W_B_WIN] = COMBO(w_b_combo, LCTL(LALT(LGUI(LSFT(KC_6))))),

    // アプリ
    [Z_X_APP] = COMBO(z_x_combo, KC_NO),
    [Z_C_APP] = COMBO(z_c_combo, KC_NO),
    [Z_V_APP] = COMBO(z_v_combo, KC_NO),
    [Z_B_APP] = COMBO(z_b_combo, KC_NO),
    [Z_A_APP] = COMBO(z_a_combo, KC_NO),
    [Z_S_APP] = COMBO(z_s_combo, KC_NO),
    [Z_D_APP] = COMBO(z_d_combo, KC_NO),
    [Z_F_APP] = COMBO(z_f_combo, KC_NO),
    [Z_G_APP] = COMBO(z_g_combo, KC_NO),
    [Z_W_APP] = COMBO(z_w_combo, KC_NO),
    [Z_R_APP] = COMBO(z_r_combo, KC_NO),
    [Z_T_APP] = COMBO(z_t_combo, KC_NO),
    [Z_3_APP] = COMBO(z_3_combo, KC_NO),
};


// 特殊な動作をさせるための関数
void process_combo_event(uint16_t combo_index, bool pressed) {
    switch(combo_index) {
        // Cmd+Tab
        case S_F_CMD_TAB:
            if (pressed) {
                register_code(KC_LGUI);
                wait_ms(50);

                register_code(KC_TAB);
                unregister_code(KC_TAB);
                wait_ms(50);

                unregister_code(KC_LGUI);
            }
            break;
        case W_F_CMD_TAB2:
            if (pressed) {
                register_code(KC_LGUI);
                wait_ms(50);

                register_code(KC_TAB);
                unregister_code(KC_TAB);
                wait_ms(50);

                register_code(KC_TAB);
                unregister_code(KC_TAB);
                wait_ms(50);

                unregister_code(KC_LGUI);
            }
            break;
        case W_D_CMD_TAB3:
            if (pressed) {
                register_code(KC_LGUI);
                wait_ms(50);

                register_code(KC_TAB);
                unregister_code(KC_TAB);
                wait_ms(50);

                register_code(KC_TAB);
                unregister_code(KC_TAB);
                wait_ms(50);

                register_code(KC_TAB);
                unregister_code(KC_TAB);
                wait_ms(50);

                unregister_code(KC_LGUI);
            }
            break;
        // Alt+Tab
        case W_R_ALT_TAB:
            if (pressed) {
                register_code(KC_LALT);
                wait_ms(50);

                register_code(KC_TAB);
                unregister_code(KC_TAB);
                wait_ms(50);

                unregister_code(KC_LALT);
            }
            break;


        // ドラッグ
        case D_E_DRAG: {
            static bool dragging = false;
            if (pressed) {
                dragging = !dragging;
                if (dragging) {
                    register_code(KC_MS_BTN1);   // 1回目の押下でドラッグ開始（ボタン押しっぱなし）
                } else {
                    unregister_code(KC_MS_BTN1); // 2回目の押下でドラッグ終了（ボタン解放）
                }
            }
            break;
        }

        // ダブルクリックコピー
        case S_C_DBLCLICK_COPY:
            if (pressed) {
                tap_code16(KC_MS_BTN1);
                wait_ms(20);
                tap_code16(KC_MS_BTN1);
                wait_ms(20);
                tap_code16(LGUI(KC_C));
            }
            break;
        // コピー
        case X_F_COPY:
            if (pressed) {
                tap_code16(LGUI(KC_C));
            }
            break;
        // すべてコピー
        case X_C_ALLCOPY:
            if (pressed) {
                tap_code16(LGUI(KC_A));
                wait_ms(20);
                tap_code16(LGUI(KC_C));
            }
            break;
        // ペースト
        case C_V_PASTE:
            if (pressed) {
                tap_code16(LGUI(KC_V));
            }
            break;
        // クリップボード2
        case X_V_CLIPBOARD:
            if (pressed) {
                tap_code16(LCTL(LGUI(KC_C)));
                wait_ms(100);
                tap_code(KC_2);
            }
            break;
        // クリップボード3
        case X_B_CLIPBOARD:
            if (pressed) {
                tap_code16(LCTL(LGUI(KC_C)));
                wait_ms(100);
                tap_code(KC_3);
            }
            break;


        // Googole検索
        case F_G_LAUNCH:
            if (pressed) {
                tap_code16(LGUI(KC_C));
                wait_ms(20);
                tap_code16(LCTL(KC_F3));
                wait_ms(20);
                SEND_STRING("g");
                tap_code(KC_ENTER);
                wait_ms(20);
                tap_code16(LGUI(KC_T));
                wait_ms(20);
                tap_code16(LGUI(KC_V));
                wait_ms(20);
                tap_code(KC_ENTER);
            }
            break;
        // Google翻訳
        case R_T_LAUNCH:
            if (pressed) {
                tap_code16(LGUI(KC_C));
                wait_ms(20);
                tap_code16(LCTL(KC_F3));
                wait_ms(20);
                SEND_STRING("g");
                tap_code(KC_ENTER);
                wait_ms(20);
                tap_code16(LGUI(KC_T));
                wait_ms(20);
                SEND_STRING("f");
                wait_ms(20);
                tap_code(KC_TAB);
                wait_ms(20);
                tap_code16(LGUI(KC_V));
                wait_ms(20);
                tap_code(KC_ENTER);
            }
            break;
        // AI
        case V_B_LAUNCH:
            if (pressed) {
                tap_code16(LCTL(KC_F3));
                wait_ms(20);
                SEND_STRING("g");
                tap_code(KC_ENTER);
                wait_ms(20);
                tap_code16(LGUI(KC_1));
                wait_ms(40);
                tap_code16(LGUI(LSFT(KC_O)));
                wait_ms(40);
                tap_code16(LGUI(KC_V));
            }
            break;
        // アプリ
        case Z_X_APP:
            if (pressed) {
                tap_code16(LCTL(KC_F3));  // Dockにフォーカスする
                wait_ms(10);
                SEND_STRING("finder");
                tap_code(KC_ENTER);
            }
            break;
        case Z_C_APP:
            if (pressed) {
                tap_code16(LCTL(KC_F3));
                wait_ms(10);
                SEND_STRING("wezterm");
                tap_code(KC_ENTER);
            }
            break;
        case Z_V_APP:
            if (pressed) {
                tap_code16(LCTL(KC_F3));
                wait_ms(10);
                SEND_STRING("claude");
                tap_code(KC_ENTER);
            }
            break;
        case Z_B_APP:
            if (pressed) {
                tap_code16(LCTL(KC_F3));
                wait_ms(10);
                SEND_STRING("dbeaver");
                tap_code(KC_ENTER);
            }
            break;
        case Z_A_APP:
            if (pressed) {
                tap_code16(LCTL(KC_F3));
                wait_ms(10);
                SEND_STRING("cisco");
                tap_code(KC_ENTER);
            }
            break;
        case Z_S_APP:
            if (pressed) {
                tap_code16(LCTL(KC_F3));
                wait_ms(10);
                SEND_STRING("slack");
                tap_code(KC_ENTER);
            }
            break;
        case Z_D_APP:
            if (pressed) {
                tap_code16(LCTL(KC_F3));
                wait_ms(10);
                SEND_STRING("obsidian");
                tap_code(KC_ENTER);
            }
            break;
        case Z_F_APP:
            if (pressed) {
                tap_code16(LCTL(KC_F3));
                wait_ms(10);
                SEND_STRING("google chrome");
                tap_code(KC_ENTER);
            }
            break;
        case Z_G_APP:
            if (pressed) {
                tap_code16(LCTL(KC_F3));
                wait_ms(10);
                SEND_STRING("vscode");
                tap_code(KC_ENTER);
            }
            break;
        case Z_W_APP:
            if (pressed) {
                tap_code16(LCTL(KC_F3));
                wait_ms(10);
                SEND_STRING("simulator");
                tap_code(KC_ENTER);
            }
            break;
        case Z_R_APP:
            if (pressed) {
                tap_code16(LCTL(KC_F3));
                wait_ms(10);
                SEND_STRING("figma");
                tap_code(KC_ENTER);
            }
            break;
        case Z_T_APP:
            if (pressed) {
                tap_code16(LCTL(KC_F3));
                wait_ms(10);
                SEND_STRING("google meet");
                tap_code(KC_ENTER);
            }
            break;
        case Z_3_APP:
            if (pressed) {
                tap_code16(LCTL(KC_F3));
                wait_ms(10);
                SEND_STRING("postman");
                tap_code(KC_ENTER);
            }
            break;
    }
}

enum layers{
    MAC_BASE,
    WIN_BASE,
    _FN1,
    _FN2,
    _FN3
};

#define KC_TASK LGUI(KC_TAB)
#define KC_FLXP LGUI(KC_E)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [MAC_BASE] = LAYOUT_ansi_69(
        KC_ESC,  KC_1,     KC_2,     KC_3,    KC_4,    KC_5,    KC_6,     KC_7,    KC_8,    KC_9,    KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,          KC_MUTE,
        KC_TAB,  KC_Q,     KC_W,     KC_E,    KC_R,    KC_T,    KC_Y,     KC_U,    KC_I,    KC_O,    KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS,          KC_DEL,
        KC_CAPS, KC_A,     KC_S,     KC_D,    KC_F,    KC_G,              KC_H,    KC_J,    KC_K,    KC_L,     KC_SCLN,  KC_QUOT,  KC_ENT,           KC_HOME,
        KC_LSFT,           KC_Z,     KC_X,    KC_C,    KC_V,    KC_B,     KC_B,    KC_N,    KC_M,    KC_COMM,  KC_DOT,   KC_SLSH,  KC_RSFT, KC_UP,
        KC_LCTL, KC_LOPT,  KC_LCMD,           KC_SPC,           MO(_FN1), MO(_FN3),         KC_SPC,            KC_RCMD,            KC_LEFT, KC_DOWN, KC_RGHT),

    [WIN_BASE] = LAYOUT_ansi_69(
        KC_ESC,  KC_1,     KC_2,     KC_3,    KC_4,    KC_5,    KC_6,     KC_7,    KC_8,    KC_9,    KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,          KC_MUTE,
        KC_TAB,  KC_Q,     KC_W,     KC_E,    KC_R,    KC_T,    KC_Y,     KC_U,    KC_I,    KC_O,    KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS,          KC_DEL,
        KC_CAPS, KC_A,     KC_S,     KC_D,    KC_F,    KC_G,              KC_H,    KC_J,    KC_K,    KC_L,     KC_SCLN,  KC_QUOT,  KC_ENT,           KC_HOME,
        KC_LSFT,           KC_Z,     KC_X,    KC_C,    KC_V,    KC_B,     KC_B,    KC_N,    KC_M,    KC_COMM,  KC_DOT,   KC_SLSH,  KC_RSFT, KC_UP,
        KC_LCTL, KC_LWIN,  KC_LALT,           KC_SPC,           MO(_FN2), MO(_FN3),         KC_SPC,            KC_RALT,            KC_LEFT, KC_DOWN, KC_RGHT),

    [_FN1] = LAYOUT_ansi_69(
        KC_GRV,  KC_BRID,  KC_BRIU,  KC_NO,   KC_NO,   RM_VALD, RM_VALU,  KC_MPRV, KC_MPLY, KC_MNXT, KC_MUTE,  KC_VOLD,  KC_VOLU,  _______,          RM_TOGG,
        RM_TOGG, RM_NEXT,  RM_VALU,  RM_HUEU, RM_SATU, RM_SPDU, _______,  _______, _______, _______, _______,  _______,  _______,  _______,          _______,
        _______, RM_PREV,  RM_VALD,  RM_HUED, RM_SATD, RM_SPDD,           _______, _______, _______, _______,  _______,  _______,  _______,          _______,
        _______,           _______,  _______, _______, _______, _______,  _______, NK_TOGG, _______, _______,  _______,  _______,  _______, _______,
        _______, _______,  _______,           _______,          _______,  _______,          _______,           _______,            _______, _______, _______),

    [_FN2] = LAYOUT_ansi_69(
        KC_GRV,  KC_BRID,  KC_BRIU,  KC_TASK, KC_FLXP, RM_VALD, RM_VALU,  KC_MPRV, KC_MPLY, KC_MNXT, KC_MUTE,  KC_VOLD,  KC_VOLU,  _______,          RM_TOGG,
        RM_TOGG, RM_NEXT,  RM_VALU,  RM_HUEU, RM_SATU, RM_SPDU, _______,  _______, _______, _______, _______,  _______,  _______,  _______,          _______,
        _______, RM_PREV,  RM_VALD,  RM_HUED, RM_SATD, RM_SPDD,           _______, _______, _______, _______,  _______,  _______,  _______,          _______,
        _______,           _______,  _______, _______, _______, _______,  _______, NK_TOGG, _______, _______,  _______,  _______,  _______, _______,
        _______, _______,  _______,           _______,          _______,  _______,          _______,           _______,            _______, _______, _______),

    [_FN3] = LAYOUT_ansi_69(
        KC_TILD, KC_F1,    KC_F2,    KC_F3,   KC_F4,   KC_F5,   KC_F6,    KC_F7,   KC_F8,   KC_F9,   KC_F10,   KC_F11,   KC_F12,   _______,          _______,
        RM_TOGG, RM_NEXT,  RM_VALU,  RM_HUEU, RM_SATU, RM_SPDU, _______,  _______, _______, _______, _______,  _______,  _______,  _______,          _______,
        _______, RM_PREV,  RM_VALD,  RM_HUED, RM_SATD, RM_SPDD,           _______, _______, _______, _______,  _______,  _______,  _______,          _______,
        _______,           _______,  _______, _______, _______, _______,  _______, _______, _______, _______,  _______,  _______,  _______, _______,
        _______, _______,  _______,           _______,          _______,  _______,          _______,           _______,            _______, _______, _______)
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [MAC_BASE] = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
    [WIN_BASE] = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
    [_FN1]   = {ENCODER_CCW_CW(RM_VALD, RM_VALU)},
    [_FN2]   = {ENCODER_CCW_CW(RM_VALD, RM_VALU)},
    [_FN3]   = {ENCODER_CCW_CW(_______, _______)}
};
#endif // ENCODER_MAP_ENABLE
