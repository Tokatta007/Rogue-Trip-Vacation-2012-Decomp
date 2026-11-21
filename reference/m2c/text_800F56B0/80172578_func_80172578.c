/* m2c reference for func_80172578 @ 80172578 (33 words). Generated; not compiled or validated. */
extern ? D_801F4850;
extern ? D_801F4870;
extern ? D_801F4872;

s32 func_80172578(s16 arg0, s16 arg1, s16 arg2) {
    s32 temp_a3;

    if ((u32) (arg0 & 0xFFFF) >= 0x18U) {
        return -1;
    }
    temp_a3 = arg0 * 0x10;
    *(&D_801F4872 + temp_a3) = arg2 * 0x81;
    *(&D_801F4870 + temp_a3) = arg1 * 0x81;
    *(&D_801F4850 + arg0) = *(&D_801F4850 + arg0) | 3;
    return 0;
}
