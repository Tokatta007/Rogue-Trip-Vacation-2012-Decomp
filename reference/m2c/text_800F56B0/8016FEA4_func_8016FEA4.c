/* m2c reference for func_8016FEA4 @ 8016FEA4 (21 words). Generated; not compiled or validated. */
s32 func_8016FEA4(void *arg0, void *arg1) {
    s32 var_a0;
    s32 var_a2;

    var_a2 = arg0->unk0 - arg1->unk0;
    var_a0 = arg0->unk4 - arg1->unk4;
    if (var_a2 < 0) {
        var_a2 = -var_a2;
    }
    if (var_a0 < 0) {
        var_a0 = -var_a0;
    }
    if (var_a0 >= var_a2) {
        return var_a0 + (var_a2 >> 1);
    }
    return var_a2 + (var_a0 >> 1);
}
