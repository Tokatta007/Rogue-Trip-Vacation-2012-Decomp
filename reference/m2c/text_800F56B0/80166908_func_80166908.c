/* m2c reference for func_80166908 @ 80166908 (43 words). Generated; not compiled or validated. */
s32 func_80166D2C(s32);                             /* extern */
extern s32 D_801BC170;
extern s32 D_801F2E40;
extern s32 D_801F2E50;

s32 func_80166908(s32 arg0) {
    s32 *var_s0;
    s32 *var_s2;
    s32 *var_v1;
    s32 var_s1;

    var_s1 = 0;
    var_s0 = &D_801F2E50;
    var_s2 = &D_801F2E40;
    var_v1 = &D_801BC170;
loop_1:
    if (*var_v1 == 0) {
        *var_v1 = 1;
        *var_s0 = func_80166D2C(arg0);
        *var_s2 = arg0;
        *(arg0 + *var_s0) = 0xFF;
        return var_s1;
    }
    var_s0 += 4;
    var_s2 += 4;
    var_s1 += 1;
    var_v1 += 4;
    if (var_s1 >= 4) {
        return -1;
    }
    goto loop_1;
}
