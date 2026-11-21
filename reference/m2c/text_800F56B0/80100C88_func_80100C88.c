/* m2c reference for func_80100C88 @ 80100C88 (13 words). Generated; not compiled or validated. */
s32 func_80100C88(u16 *arg0) {
    s32 var_v1;
    u16 *var_a0;

    var_a0 = arg0;
    var_v1 = 0;
    if (!(*var_a0 & 0x8000)) {
        do {
            var_a0 += 4;
            var_v1 += 1;
        } while (!(*var_a0 & 0x8000));
    }
    return var_v1;
}
