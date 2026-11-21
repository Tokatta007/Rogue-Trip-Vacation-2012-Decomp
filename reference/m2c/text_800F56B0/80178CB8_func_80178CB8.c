/* m2c reference for func_80178CB8 @ 80178CB8 (35 words). Generated; not compiled or validated. */
? func_8017942C(s32 *, s32 *, s32 *, s32);          /* extern */
extern ? D_801C30D4;
extern s32 D_801C38F8;
extern s32 D_801C3900;
extern s32 D_801C3908;
extern ? D_801F5090;
static s32 D_801C369C = 0;

void func_80178CB8(void) {
    ? *var_v1;
    s32 *var_a0;
    s32 *var_a1;
    s32 *var_a2;
    s32 var_a3;

    var_a3 = 0;
    var_v1 = &D_801F5090;
    var_a2 = &D_801C3908;
    var_a1 = &D_801C3900;
    var_a0 = &D_801C38F8;
    do {
        *var_a0 = 0;
        *var_a1 = 0;
        *var_a2 = 1;
        var_v1->unk0 = 0;
        var_v1->unk4 = 0;
        var_v1 += 0x34;
        var_a2 += 4;
        var_a1 += 4;
        var_a3 += 1;
        var_a0 += 4;
    } while (var_a3 < 2);
    func_8017942C(var_a0, var_a1, var_a2, var_a3);
    D_801C30D4.unk8 = 0;
    D_801C30D4.unk4 = 0;
    D_801C30D4.unk0 = 0;
    D_801C369C = 0;
}
