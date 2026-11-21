/* m2c reference for func_80131E10 @ 80131E10 (18 words). Generated; not compiled or validated. */
extern s32 *D_801C37F8;
extern s32 D_801C3800;

s32 *func_80131E10(s32 arg0) {
    s32 *var_v1;
    s32 var_a1;

    var_a1 = 0;
    if (D_801C3800 > 0) {
        var_v1 = D_801C37F8;
loop_2:
        var_a1 += 1;
        if (*var_v1 == arg0) {
            return var_v1;
        }
        var_v1 += 0x18;
        if (var_a1 >= D_801C3800) {
            /* Duplicate return node #5. Try simplifying control flow for better match */
            return NULL;
        }
        goto loop_2;
    }
    return NULL;
}
