/* m2c reference for func_801801C4 @ 801801C4 (13 words). Generated; not compiled or validated. */
extern s32 func_80180028;
extern ? func_80180098;

void func_801801C4(void) {
    s32 *var_t2;
    s32 *var_v0;

    var_v0 = (s32 *)0xDF80;
    var_t2 = &func_80180028;
    do {
        *var_v0 = *var_t2;
        var_t2 += 4;
        var_v0 += 4;
    } while (var_t2 != &func_80180098);
}
