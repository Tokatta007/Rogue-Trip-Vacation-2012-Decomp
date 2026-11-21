/* m2c reference for func_800FF2B0 @ 800FF2B0 (52 words). Generated; not compiled or validated. */
s32 func_80125094(?, s32);                          /* extern */

s32 func_800FF2B0(void *arg0, ? arg1, s32 arg2) {
    s32 temp_v0;
    s32 temp_v1;
    s32 var_s0;
    s32 var_s2;
    s32 var_s3;

    var_s3 = 0x7FFFFFFF;
    var_s0 = 0;
    var_s2 = 0;
    if (arg0->unk74 > 0) {
        do {
            temp_v1 = var_s0 << 5;
            if (arg2 == (s8) (temp_v1 + arg0->unk0)->unk1D) {
                temp_v0 = func_80125094(arg1, arg0->unk0 + temp_v1);
                if (temp_v0 < var_s3) {
                    var_s2 = var_s0;
                    var_s3 = temp_v0;
                }
            }
            var_s0 += 1;
        } while (var_s0 < arg0->unk74);
    }
    return var_s2;
}
