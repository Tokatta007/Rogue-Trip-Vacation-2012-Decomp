/* m2c reference for func_80178BDC @ 80178BDC (14 words). Generated; not compiled or validated. */
extern s32 D_801C2DF8;

u16 func_80178BDC(s32 arg0) {
    s32 temp_v1;

    temp_v1 = arg0 & 0xFFFF;
    if (temp_v1 < 3) {
        return *((temp_v1 * 0x10) + D_801C2DF8);
    }
    return 0U;
}
