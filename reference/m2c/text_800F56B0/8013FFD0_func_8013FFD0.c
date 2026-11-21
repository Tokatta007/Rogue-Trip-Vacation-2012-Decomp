/* m2c reference for func_8013FFD0 @ 8013FFD0 (14 words). Generated; not compiled or validated. */
extern ? D_801B454C;

? *func_8013FFD0(void) {
    ? *var_v1;
    s32 var_a0;

    var_a0 = 0;
    var_v1 = &D_801B454C;
loop_1:
    var_a0 += 1;
    if (var_v1->unkAC <= 0) {
        return var_v1;
    }
    var_v1 += 0xB4;
    if (var_a0 >= 5) {
        return NULL;
    }
    goto loop_1;
}
