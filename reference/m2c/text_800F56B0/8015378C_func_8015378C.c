/* m2c reference for func_8015378C @ 8015378C (13 words). Generated; not compiled or validated. */
s32 func_8015378C(void *arg0) {
    s32 var_v1;
    void *var_a0;

    var_a0 = arg0;
    var_v1 = 0;
    if (var_a0->unk1478 != 0) {
loop_1:
        var_a0 += 0x10;
        if (var_v1 < 0x1E) {
            var_v1 += 1;
            if (var_a0->unk1478 != 0) {
                goto loop_1;
            }
        }
    }
    return var_v1;
}
