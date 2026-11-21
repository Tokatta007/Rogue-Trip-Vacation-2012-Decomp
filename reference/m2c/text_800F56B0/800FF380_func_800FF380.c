/* m2c reference for func_800FF380 @ 800FF380 (63 words). Generated; not compiled or validated. */
s32 func_80125094(?, s32, s32);                     /* extern */

s32 func_800FF380(void *arg0, ? arg1, s32 arg2) {
    s32 temp_a2;
    s32 var_s0;
    s32 var_s2;
    s32 var_v0;
    void *temp_v1;

    var_s2 = -1;
    var_s0 = 0;
    if (arg0->unk74 > 0) {
loop_2:
        temp_a2 = var_s0 << 5;
        temp_v1 = temp_a2 + arg0->unk0;
        if ((arg2 != (s8) temp_v1->unk1D) || ((s8) temp_v1->unk1F != 3) || (func_80125094(arg1, arg0->unk0 + temp_a2, temp_a2) >= 0x7FFFFFFF) || (var_s2 = var_s0, var_v0 = var_s2, ((rand() & 1) == 0))) {
            var_s0 += 1;
            if (var_s0 >= arg0->unk74) {
                goto block_7;
            }
            goto loop_2;
        }
    } else {
block_7:
        var_v0 = var_s2;
    }
    return var_v0;
}
