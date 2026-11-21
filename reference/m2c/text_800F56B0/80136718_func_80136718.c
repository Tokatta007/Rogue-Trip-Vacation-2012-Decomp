/* m2c reference for func_80136718 @ 80136718 (74 words). Generated; not compiled or validated. */
extern s32 D_801B38E4;
extern ? D_801B38F4;
extern ? D_801B3960;
extern u8 D_801B3966;
extern ? D_801B399C;

s32 func_80136718(s32 arg0, s32 arg1) {
    s32 *var_a2;
    s32 *var_a2_2;
    s32 temp_v1;
    s32 var_v1;
    s32 var_v1_2;

    if (arg1 != 0xB) {
        if (arg1 >= 0xC) {
            temp_v1 = arg1 - 0xC;
            if ((temp_v1 + &D_801B399C)->unkC != 0) {
                if (temp_v1 == 2) {
                    if ((D_801B3960.unk4 != 0xB) || (D_801B399C.unk3 == 1) || (D_801B3960.unk7 != 0)) {
                        /* Duplicate return node #7. Try simplifying control flow for better match */
                        return 1;
                    }
                    var_v1 = 0;
                    if (D_801B3960.unk6 != 0) {
                        var_a2 = &D_801B38E4;
loop_11:
                        if ((var_v1 == arg0) || (*var_a2 != arg1)) {
                            var_v1 += 1;
                            var_a2 += 4;
                            if (var_v1 >= (s32) D_801B3960.unk6) {
                                goto block_14;
                            }
                            goto loop_11;
                        }
                        /* Duplicate return node #7. Try simplifying control flow for better match */
                        return 1;
                    }
block_14:
                    goto block_15;
                }
                goto block_15;
            }
            /* Duplicate return node #7. Try simplifying control flow for better match */
            return 1;
        }
block_15:
        var_v1_2 = 0;
        if (D_801B3966 != 0) {
            var_a2_2 = &D_801B38E4;
loop_17:
            if ((var_v1_2 == arg0) || (arg1 != *var_a2_2)) {
                var_v1_2 += 1;
                var_a2_2 += 4;
                if (var_v1_2 >= (s32) D_801B3966) {
                    /* Duplicate return node #20. Try simplifying control flow for better match */
                    return 0;
                }
                goto loop_17;
            }
            return *((arg1 * 4) + &D_801B38F4) != 0;
        }
        return 0;
    }
    return 1;
}
