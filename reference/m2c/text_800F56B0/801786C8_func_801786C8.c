/* m2c reference for func_801786C8 @ 801786C8 (65 words). Generated; not compiled or validated. */
s32 func_801786C8(u8 *arg0, VECTOR *arg1) {
    VECTOR sp10;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 var_s0;
    s32 var_s3;
    s32 var_v0;
    u8 *var_s1;

    var_s0 = 0;
    if (*arg0 != 0) {
        var_s1 = arg0;
        var_s3 = 4;
loop_2:
        mathMulVec(arg0 + var_s3, arg1, &sp10);
        var_v0 = 0;
        if (((var_s1->unk18 + (s32) sp10) > 0) && ((temp_s0 = var_s0 + 1, ((temp_s0 < (s32) *arg0) == 0)) || (var_v0 = 0, ((var_s1->unk1C + sp10.vy) > 0)))) {
            temp_s0_2 = temp_s0 + 1;
            if (temp_s0_2 < (s32) *arg0) {
                var_s0 = temp_s0_2 + 1;
                if ((var_s1->unk20 + sp10.vz) <= 0) {
                    return 0;
                }
                goto block_9;
            }
            var_s0 = temp_s0_2 + 1;
block_9:
            var_s1 += 0x20;
            var_s3 += 0x20;
            if (var_s0 >= (s32) *arg0) {
                goto block_10;
            }
            goto loop_2;
        }
        /* Duplicate return node #11. Try simplifying control flow for better match */
        return var_v0;
    }
block_10:
    var_v0 = 1;
    return var_v0;
}
