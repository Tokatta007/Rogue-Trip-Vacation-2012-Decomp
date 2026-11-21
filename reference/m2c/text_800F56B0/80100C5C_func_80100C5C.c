/* m2c reference for func_80100C5C @ 80100C5C (11 words). Generated; not compiled or validated. */
s32 func_80100C5C(void *arg0) {
    s32 var_v1;
    void *var_a0;

    var_a0 = arg0;
    var_v1 = 0;
    if (var_a0->unk1C != 0) {
        do {
            var_a0 += 0x20;
            var_v1 += 1;
        } while (var_a0->unk1C != 0);
    }
    return var_v1;
}
