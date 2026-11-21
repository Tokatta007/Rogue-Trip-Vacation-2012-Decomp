/* m2c reference for func_80160A04 @ 80160A04 (15 words). Generated; not compiled or validated. */
extern s32 D_801BC000;
extern s32 D_801BC028;

u16 func_80160A04(s32 arg0, s32 arg1) {
    u16 temp_a0;

    temp_a0 = *((arg0 * 2) + D_801BC000);
    if (arg1 != -1) {
        return temp_a0 << D_801BC028;
    }
    return temp_a0;
}
