/* m2c reference for func_80164E30 @ 80164E30 (28 words). Generated; not compiled or validated. */
? func_8016429C(s32, ?);                            /* extern */
extern ? D_801F2360;
extern ? D_801F25E0;

void func_80164E30(void) {
    ? *var_s0;
    s32 *var_v0;
    s32 temp_a0;
    s32 var_s1;
    s32 var_s1_2;

    var_s1 = 0;
    var_s0 = &D_801F2360;
    do {
        temp_a0 = var_s0->unk14;
        var_s0->unk18 = 0;
        var_s0 += 0x24;
        var_s1 += 1;
        func_8016429C(temp_a0, 0);
    } while (var_s1 < 8);
    var_s1_2 = 3;
    var_v0 = &D_801F25E0 + 0x648;
    do {
        *var_v0 = 0;
        var_s1_2 -= 1;
        var_v0 -= 0x218;
    } while (var_s1_2 >= 0);
}
