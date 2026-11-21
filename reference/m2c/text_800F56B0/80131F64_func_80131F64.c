/* m2c reference for func_80131F64 @ 80131F64 (63 words). Generated; not compiled or validated. */
? func_80131E04(void *);                            /* extern */
? func_80131E58(void *, ?, s32);                    /* extern */

s32 func_80131F64(s32 *arg0, ? arg1) {
    s32 *var_s0;
    s32 temp_s3;
    s32 temp_s4;
    s32 var_s1;
    u32 *temp_s0_2;
    u32 *temp_s0_3;
    u32 var_s2;
    void *temp_s0;
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
    temp_s0 = var_s0_2 + 4 + 4;
    func_80131E04(temp_s0);
    var_s1 = 0;
    temp_s0_2 = temp_s0 + (temp_s3 * 4);
    var_s2 = *temp_s0_2;
    if (temp_s3 > 0) {
        var_s0_3 = temp_s0_2 + 4;
        do {
            func_80131E58(var_s0_3, arg1, var_s1);
            temp_s0_3 = var_s0_3 + ((var_s2 >> 2) * 4);
            var_s2 = *temp_s0_3;
            var_s1 += 1;
            var_s0_3 = temp_s0_3 + 4;
        } while (var_s1 < temp_s3);
    }
    return temp_s4;
}
