/* m2c reference for func_80124A30 @ 80124A30 (25 words). Generated; not compiled or validated. */
s32 func_80124A30(void *arg0, s32 arg1, s32 *arg2) {
    s32 var_v1;
    void *temp_a3;
    void *var_a0;
    void *var_v0;

    var_a0 = arg0;
    temp_a3 = var_a0 + 0x10000;
    var_v1 = 0;
    if (var_a0->unk1270C > 0) {
        var_v0 = var_a0 + 0x10000;
loop_2:
        var_a0 += 4;
        if (var_v0->unk241C == arg1) {
            *arg2 = var_v1;
            return 1;
        }
        var_v1 += 1;
        var_v0 = var_a0 + 0x10000;
        if (var_v1 >= temp_a3->unk270C) {
            /* Duplicate return node #5. Try simplifying control flow for better match */
            return 0;
        }
        goto loop_2;
    }
    return 0;
}
