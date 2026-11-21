/* m2c reference for func_8012DAC4 @ 8012DAC4 (33 words). Generated; not compiled or validated. */
static s32 D_801C32E8 = 0;
static s32 D_801C3324 = 0;
static s32 D_801C3328 = 0;

void func_8012DAC4(s32 arg0, s32 arg1) {
    if (arg1 != 0) {
        if ((D_801C32E8 == 0) || (D_801C3328 < 0)) {
            D_801C3328 = arg0;
        }
    } else {
        if (D_801C3328 == arg0) {
            D_801C3328 = -1;
            return;
        }
        if ((D_801C32E8 == 0) && (D_801C3324 >= 0)) {
            D_801C3328 = D_801C3324;
        }
    }
}
