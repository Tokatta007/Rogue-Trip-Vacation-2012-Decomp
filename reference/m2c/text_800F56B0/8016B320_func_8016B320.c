/* m2c reference for func_8016B320 @ 8016B320 (21 words). Generated; not compiled or validated. */
extern s32 D_801C38A4;
extern s32 D_801C38B0;
static s32 D_801C3650 = 0;

s32 func_8016B320(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_a1;

    temp_a1 = (arg2 * D_801C38B0) + (arg1 * D_801C38A4) + arg0;
    return (*(((temp_a1 >> 5) * 4) + D_801C3650) & (1 << (temp_a1 & 0x1F))) == 0;
}
