/* m2c reference for func_801553AC @ 801553AC (27 words). Generated; not compiled or validated. */
u32 func_801553AC(u32 arg0, u32 arg1, s32 arg2) {
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_a2;
    s32 var_a2_2;
    u32 var_a1;
    u32 var_a3;
    u8 *temp_a0;
    u8 temp_v0;
    u8 temp_v0_2;

    var_a1 = arg1;
    var_a3 = arg0;
    if (var_a3 >= var_a1) {
        var_a2 = arg2 - 1;
        if (arg2 > 0) {
            do {
                temp_a0 = var_a3 + var_a2;
                temp_v1 = var_a2;
                temp_v0 = *(var_a1 + var_a2);
                var_a2 -= 1;
                *temp_a0 = temp_v0;
            } while (temp_v1 > 0);
            return var_a3;
        }
        goto block_6;
    }
    var_a2_2 = arg2 - 1;
    if (arg2 > 0) {
        do {
            temp_v0_2 = *var_a1;
            var_a1 += 1;
            temp_v1_2 = var_a2_2;
            var_a2_2 -= 1;
            *var_a3 = temp_v0_2;
            var_a3 += 1;
        } while (temp_v1_2 > 0);
    }
block_6:
    return var_a3;
}
