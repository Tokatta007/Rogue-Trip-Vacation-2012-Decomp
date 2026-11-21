/* m2c reference for func_800FF20C @ 800FF20C (41 words). Generated; not compiled or validated. */
s32 func_80125094(?, s32);                          /* extern */

s32 func_800FF20C(void *arg0, ? arg1) {
    s32 temp_v0;
    s32 var_s0;
    s32 var_s1;
    s32 var_s2;
    s32 var_v0;

    var_s2 = 0x7FFFFFFF;
    var_s0 = 0;
    var_s1 = 0;
    if (arg0->unk74 > 0) {
        var_v0 = 0 << 5;
        do {
            temp_v0 = func_80125094(arg1, arg0->unk0 + var_v0);
            if (temp_v0 < var_s2) {
                var_s1 = var_s0;
                var_s2 = temp_v0;
            }
            var_s0 += 1;
            var_v0 = var_s0 << 5;
        } while (var_s0 < arg0->unk74);
    }
    return var_s1;
}
