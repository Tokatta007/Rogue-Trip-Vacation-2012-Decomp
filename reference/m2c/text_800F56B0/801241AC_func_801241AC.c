/* m2c reference for func_801241AC @ 801241AC (88 words). Generated; not compiled or validated. */
s32 func_80123694(s32, void *);                     /* extern */
s32 func_80125094(s32);                             /* extern */
s16 func_80178A1C();                                /* extern */
static s32 D_801C34EC = 0;

void func_801241AC(s32 arg1, void *arg2, void *arg3) {
    s32 sp10;
    s32 sp14;
    s32 sp18;
    VECTOR sp20;
    s32 temp_s0;
    s32 temp_s1;
    s32 var_a1;
    s32 var_v1;

    temp_s1 = func_80125094(arg2 + 0x1C);
    temp_s0 = func_80123694(D_801C34EC, arg2);
    var_v1 = temp_s0 / func_80178A1C();
    var_a1 = temp_s1;
    if (arg1 != 0) {
        var_a1 = temp_s1 / arg1;
    }
    if (temp_s1 < 0x960) {
        var_v1 = (var_v1 * temp_s1) / 2400;
    }
    sp10 = 0;
    sp18 = 0;
    sp14 = var_v1 * var_a1;
    mathMulTransVec(arg2 + 0x28, (VECTOR *) &sp10, &sp20);
    arg3->unk0 = (s32) (arg2->unk1C + (s32) sp20);
    arg3->unk4 = (s32) (arg2->unk20 + sp20.vy);
    arg3->unk8 = (s32) (arg2->unk24 + sp20.vz);
}
