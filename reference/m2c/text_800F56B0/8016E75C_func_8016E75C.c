/* m2c reference for func_8016E75C @ 8016E75C (40 words). Generated; not compiled or validated. */
u64 func_8016E62C();                                /* extern */

s32 func_8016E75C(void) {
    s32 temp_s5;
    s32 temp_s5_2;
    s32 temp_s6;
    s32 var_s5;
    u64 temp_ret;
    void *var_s3;

    var_s3 = saved_reg_s3 + 4;
    var_s5 = *saved_reg_s3 & 0xFF;
loop_1:
    GTE_RT11RT12 = var_s3->unk0;
    GTE_RT13RT21 = var_s3->unk4;
    GTE_RT22RT23 = var_s3->unk8;
    GTE_RT31RT32 = var_s3->unkC;
    GTE_RT33 = var_s3->unk10;
    temp_s6 = var_s3->unk14;
    temp_ret = func_8016E62C();
    if ((temp_ret + temp_s6) > 0) {
        temp_s5 = var_s5 - 1;
        if (temp_s5 > 0) {
            temp_s5_2 = temp_s5 - 1;
            if (((u32) temp_ret + var_s3->unk18) > 0) {
                if (temp_s5_2 > 0) {
                    var_s5 = temp_s5_2 - 1;
                    if ((M2C_ERROR(/* Read from unset register $a3 */) + var_s3->unk1C) > 0) {
                        var_s3 += 0x20;
                        if (var_s5 <= 0) {
                            /* Duplicate return node #7. Try simplifying control flow for better match */
                            return 1;
                        }
                        goto loop_1;
                    }
                    /* Duplicate return node #8. Try simplifying control flow for better match */
                    return 0;
                }
                /* Duplicate return node #7. Try simplifying control flow for better match */
                return 1;
            }
            /* Duplicate return node #8. Try simplifying control flow for better match */
            return 0;
        }
        return 1;
    }
    return 0;
}
