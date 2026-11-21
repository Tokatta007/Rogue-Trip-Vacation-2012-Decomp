/* m2c reference for func_8016091C @ 8016091C (17 words). Generated; not compiled or validated. */
extern s32 D_801BC000;
extern s32 D_801BC028;

void func_8016091C(s32 arg0, u16 arg1, s32 arg2) {
    s32 temp_v0;

    temp_v0 = arg0 * 2;
    if (arg2 == 0) {
        *(temp_v0 + D_801BC000) = arg1;
        return;
    }
    *(temp_v0 + D_801BC000) = (s16) (arg1 >> D_801BC028);
}
