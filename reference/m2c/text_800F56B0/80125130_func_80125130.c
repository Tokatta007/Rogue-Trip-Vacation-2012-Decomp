/* m2c reference for func_80125130 @ 80125130 (36 words). Generated; not compiled or validated. */
s32 func_8015A62C(s32, s32);                        /* extern */
s32 func_8016FEA4(s32 *);                           /* extern */

void func_80125130(void *arg0, void *arg1) {
    s32 sp10;
    s32 sp14;
    s32 sp18;
    s32 var_a1;

    sp18 = 0;
    sp14 = 0;
    sp10 = 0;
    var_a1 = func_8016FEA4(&sp10);
    if (arg0->unk4 == 0) {
        arg0->unk4 = 1;
    }
    if (var_a1 == 0) {
        var_a1 = 1;
    }
    arg1->unk0 = (s32) -func_8015A62C(arg0->unk8, var_a1);
    arg1->unk4 = 0;
    arg1->unk8 = func_8015A62C(arg0->unk0, arg0->unk4);
}
