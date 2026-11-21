/* m2c reference for func_8017DE0C @ 8017DE0C (34 words). Generated; not compiled or validated. */
s32 func_801716DC(s32, s32);                        /* extern */
? func_80171790(s32);                               /* extern */
? func_8017DD9C(s32);                               /* extern */
extern s32 D_801C310C;
static s32 D_801C34E8 = 0;

void func_8017DE0C(void) {
    s32 *var_s1;
    s32 var_s0;

    var_s0 = 0;
    func_80171790(D_801C34E8);
    var_s1 = &D_801C310C;
    do {
        if ((*var_s1 != -1) && (func_801716DC(D_801C34E8, var_s0) == 0)) {
            func_8017DD9C(var_s0);
        }
        var_s0 += 1;
        var_s1 += 8;
    } while (var_s0 < 0x18);
}
