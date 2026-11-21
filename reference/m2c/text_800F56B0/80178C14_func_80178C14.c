/* m2c reference for func_80178C14 @ 80178C14 (12 words). Generated; not compiled or validated. */
extern void *D_801C2DF4;
extern ? D_801C2DFC;

s32 func_80178C14(s32 arg0) {
    s32 temp_v0;

    temp_v0 = arg0 & 0xFFFF;
    D_801C2DF4->unk4 = (s32) (D_801C2DF4->unk4 | *(&D_801C2DFC + (temp_v0 * 4)));
    return temp_v0 < 3;
}
