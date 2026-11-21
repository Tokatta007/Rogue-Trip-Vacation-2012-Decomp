/* m2c reference for func_80164D98 @ 80164D98 (38 words). Generated; not compiled or validated. */
? func_80164168(s32);                               /* extern */
? func_8016417C(? *);                               /* extern */
s32 func_801641F8();                                /* extern */
? func_8016429C(s32, ?);                            /* extern */
extern ? D_801F2360;
extern ? D_801F2480;
extern ? D_801F2530;
extern ? D_801F25E0;

void func_80164D98(void) {
    ? *var_s0;
    s32 *var_v0;
    s32 temp_v0;
    s32 var_s1;
    s32 var_s1_2;

    var_s1 = 0;
    var_s0 = &D_801F2360;
    do {
        var_s1 += 1;
        temp_v0 = func_801641F8();
        var_s0->unk14 = temp_v0;
        func_80164168(temp_v0);
        func_8016429C(var_s0->unk14, 0);
        var_s0->unk18 = 0;
        var_s0 += 0x24;
    } while (var_s1 < 8);
    var_s1_2 = 3;
    var_v0 = &D_801F25E0 + 0x648;
    do {
        *var_v0 = 0;
        var_s1_2 -= 1;
        var_v0 -= 0x218;
    } while (var_s1_2 >= 0);
    func_8016417C(&D_801F2480);
    func_8016417C(&D_801F2530);
}
