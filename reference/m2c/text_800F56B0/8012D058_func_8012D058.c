/* m2c reference for func_8012D058 @ 8012D058 (54 words). Generated; not compiled or validated. */
s32 func_80161468(?, ?, ? *);                       /* extern */
s32 func_801788E4();                                /* extern */
extern ? func_8012CF24;
static s32 D_801C32E8 = 0;
static s32 D_801C32EC = 0;
static s32 D_801C32F0 = 0;
static s32 D_801C3310 = 0;

s32 func_8012D058(void) {
    s32 var_s0;

    var_s0 = -1;
    D_801C32F0 = func_801788E4();
    if (func_80161468(3, 1, NULL) != 0) {
        if (D_801C3310 == 0) {
            D_801C32E8 = 0;
            D_801C32EC = 1;
            func_80161468(3, 0, (? *)1);
            var_s0 = 0;
        } else {
            goto block_4;
        }
    } else if (D_801C3310 != 0) {
block_4:
        if (func_80161468(3, 1, NULL) != 0) {
            var_s0 = 1;
            D_801C32E8 = 1;
            D_801C32EC = 1;
        }
    } else {
        func_80161468(3, 0, (? *)1);
        D_801C3310 = 1;
    }
    func_80161468(4, 0, &func_8012CF24);
    return var_s0;
}
