/* m2c reference for func_8016BB9C @ 8016BB9C (70 words). Generated; not compiled or validated. */
? func_8015EBDC(?);                                 /* extern */
s32 func_8016BF3C(s32);                             /* extern */
extern u8 D_801C38B8;
extern s32 D_801C38BC;
extern s32 D_801C38C4;
extern s32 D_801C38CC;

void func_8016BB9C(void) {
    s32 *var_s0;
    s32 *var_s1;
    s32 *var_s3;
    s32 temp_v1;
    s32 var_s2;
    s32 var_s4;

    if (D_801C38B8 == 0) {
        func_8015EBDC(0);
        var_s4 = 0;
        var_s0 = &D_801C38C4;
        var_s1 = &D_801C38BC;
        var_s3 = &D_801C38CC;
        var_s2 = 0;
        do {
            if (func_8016BF3C(var_s4) & 0xFF) {
                if (*var_s3 != 0) {
                    temp_v1 = *var_s0 + 1;
                    *var_s0 = temp_v1;
                    if (*var_s1 < temp_v1) {
                        *var_s1 = 8;
                        goto block_8;
                    }
                } else {
                    *(var_s2 + &D_801C38BC) = 0x10;
                    *(var_s2 + &D_801C38C4) = 0;
                }
            } else {
                *var_s3 = 0;
                *var_s1 = 0x10;
block_8:
                *var_s0 = 0;
            }
            var_s0 += 4;
            var_s1 += 4;
            var_s3 += 4;
            var_s4 += 1;
            var_s2 += 4;
        } while (var_s4 < 2);
    }
}
