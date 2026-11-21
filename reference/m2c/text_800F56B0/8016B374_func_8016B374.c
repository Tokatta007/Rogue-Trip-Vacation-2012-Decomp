/* m2c reference for func_8016B374 @ 8016B374 (86 words). Generated; not compiled or validated. */
s32 func_8016B320(s32, s32, s32, s32);              /* extern */
extern s32 D_801C3888;
extern s32 D_801C388C;
extern s32 D_801C3890;
extern s32 D_801C3894;
extern s32 D_801C3898;
extern s32 D_801C389C;
extern s32 D_801C38A0;
static s32 D_801C3650 = 0;

s32 func_8016B374(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_a3;

    if (D_801C3650 != 0) {
        if ((D_801C3888 < arg0) && (arg0 < (D_801C3888 + D_801C3894)) && (D_801C388C < arg1) && (arg1 < (D_801C388C + D_801C3898)) && (D_801C3890 < arg2)) {
            if (arg2 < (D_801C3890 + D_801C389C)) {
                temp_a3 = arg2 - D_801C3890;
                return func_8016B320((s32) (arg0 - D_801C3888) / (s32) D_801C38A0, (s32) (arg1 - D_801C388C) / (s32) D_801C38A0, temp_a3 / (s32) D_801C38A0, temp_a3);
            }
            goto block_8;
        }
        /* Duplicate return node #9. Try simplifying control flow for better match */
        return 0;
    }
block_8:
    return 0;
}
