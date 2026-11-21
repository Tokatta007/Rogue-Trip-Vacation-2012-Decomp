/* m2c reference for func_8015F514 @ 8015F514 (27 words). Generated; not compiled or validated. */
extern ? (*D_801BBF88)();
extern s32 D_801BBFA8;

void func_8015F514(void) {
    ? (**var_s0)();
    ? (*temp_v0)();
    s32 var_s1;

    var_s1 = 0;
    var_s0 = &D_801BBF88;
    D_801BBFA8 += 1;
    do {
        temp_v0 = *var_s0;
        if (temp_v0 != NULL) {
            temp_v0();
        }
        var_s1 += 1;
        var_s0 += 4;
    } while (var_s1 < 8);
}
