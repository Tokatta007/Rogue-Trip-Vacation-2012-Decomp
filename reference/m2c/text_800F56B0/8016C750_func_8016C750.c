/* m2c reference for func_8016C750 @ 8016C750 (8 words). Generated; not compiled or validated. */
extern ? D_801F3338;

? *func_8016C750(s32 arg0) {
    ? *var_v0;

    var_v0 = &D_801F3338;
    if (arg0 & 0xF0) {
        var_v0 = &D_801F3338 + 0xF0;
    }
    return var_v0;
}
