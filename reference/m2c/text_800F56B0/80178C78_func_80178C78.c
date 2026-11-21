/* m2c reference for func_80178C78 @ 80178C78 (13 words). Generated; not compiled or validated. */
extern s32 D_801C2DF8;

s32 func_80178C78(s32 arg0) {
    s32 temp_v1;

    temp_v1 = arg0 & 0xFFFF;
    if (temp_v1 < 3) {
        *((temp_v1 * 0x10) + D_801C2DF8) = 0;
        return 1;
    }
    return 0;
}
