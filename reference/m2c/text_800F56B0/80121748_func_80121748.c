/* m2c reference for func_80121748 @ 80121748 (22 words). Generated; not compiled or validated. */
s32 func_80121748(void *arg0, s32 arg1) {
    s32 var_a3;
    s32 var_v1;
    void *temp_a2;
    void *var_a0;
    void *var_v0;

    var_a0 = arg0;
    var_a3 = -1;
    temp_a2 = var_a0 + 0x10000;
    var_v1 = 0;
    if (var_a0->unk12750 > 0) {
        var_v0 = var_a0 + 0x10000;
loop_2:
        var_a0 += 4;
        if (var_v0->unk2734 == arg1) {
            var_a3 = var_v1;
        } else {
            var_v1 += 1;
            var_v0 = var_a0 + 0x10000;
            if (var_v1 < temp_a2->unk2750) {
                goto loop_2;
            }
        }
    }
    return var_a3;
}
