/* m2c reference for func_80164EC0 @ 80164EC0 (29 words). Generated; not compiled or validated. */
? func_80165438(s32, s32 *, ?);                     /* extern */
extern s32 D_801F25E0;

void func_80164EC0(s32 arg0, ? arg1) {
    s32 *var_s0;
    s32 var_s1;

    var_s1 = 0;
    var_s0 = &D_801F25E0;
    do {
        if (*var_s0 != 0) {
            func_80165438(arg0, var_s0, arg1);
        }
        var_s1 += 1;
        var_s0 += 0x218;
    } while (var_s1 < 4);
}
