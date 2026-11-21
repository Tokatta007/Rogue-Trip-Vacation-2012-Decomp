/* m2c reference for func_8012DA78 @ 8012DA78 (19 words). Generated; not compiled or validated. */
extern ? D_8018461C;
static s32 D_801C32E8 = 0;
static s32 D_801C3324 = 0;
static s32 D_801C3328 = 0;

void func_8012DA78(s32 arg0) {
    if (D_801C3328 < 0) {
        *((arg0 * 4) + &D_8018461C) = 1;
        if (D_801C32E8 != 0) {
            D_801C3328 = arg0;
        } else {
            D_801C3324 = arg0;
        }
    }
}
