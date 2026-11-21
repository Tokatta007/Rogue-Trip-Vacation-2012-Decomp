/* m2c reference for func_80123630 @ 80123630 (25 words). Generated; not compiled or validated. */
s32 func_80123630(void *arg0, s32 arg1) {
    s32 var_a2;
    void *temp_t0;
    void *var_a0;
    void *var_v1;

    var_a0 = arg0;
    var_a2 = 0;
    if (var_a0->unk1278C > 0) {
        temp_t0 = var_a0 + 0x10000;
        var_v1 = var_a0 + 0x10000;
loop_2:
        var_a0 += 4;
        if (var_v1->unk2764 == arg1) {
            return var_v1->unk2654;
        }
        var_a2 += 1;
        var_v1 = var_a0 + 0x10000;
        if (var_a2 >= temp_t0->unk278C) {
            /* Duplicate return node #5. Try simplifying control flow for better match */
            return 0;
        }
        goto loop_2;
    }
    return 0;
}
