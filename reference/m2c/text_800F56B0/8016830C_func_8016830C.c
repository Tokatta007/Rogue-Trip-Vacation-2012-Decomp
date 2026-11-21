/* m2c reference for func_8016830C @ 8016830C (56 words). Generated; not compiled or validated. */
? func_8016827C(void *);                            /* extern */

s32 func_8016830C(s32 *arg0) {
    s32 *var_s0;
    s32 temp_s3;
    s32 temp_s4;
    s32 var_s1;
    u32 *temp_s0;
    u32 *temp_s0_2;
    u32 var_s2;
    void *var_s0_2;
    void *var_s0_3;

    if (arg0 == NULL) {
        return 0;
    }
    var_s0 = arg0 + 4;
    if (*arg0 != 0x50535854) {
        var_s0 -= 4;
        exit(-1);
    }
    var_s0_2 = var_s0 + 4;
    if (*var_s0 != 0x43) {
        var_s0_2 -= 4;
        exit(-1);
    }
    temp_s4 = var_s0_2->unk0;
    temp_s3 = var_s0_2->unk4;
    var_s1 = 0;
    temp_s0 = var_s0_2 + 4 + 4 + (temp_s3 * 4);
    var_s2 = *temp_s0;
    if (temp_s3 > 0) {
        var_s0_3 = temp_s0 + 4;
        do {
            func_8016827C(var_s0_3);
            temp_s0_2 = var_s0_3 + ((var_s2 >> 2) * 4);
            var_s2 = *temp_s0_2;
            var_s1 += 1;
            var_s0_3 = temp_s0_2 + 4;
        } while (var_s1 < temp_s3);
    }
    return temp_s4;
}
