/* m2c reference for func_80108A94 @ 80108A94 (56 words). Generated; not compiled or validated. */
u8 func_80176CBC(u8, ?, ?);                         /* extern */

void func_80108A94(s32 arg1, void *arg2) {
    ? var_a1;
    ? var_a2;

    if (arg1 < 5) {
        arg2->unk4 = func_80176CBC(arg2->unk4, 0xFF, 0xD);
        var_a1 = 0;
        arg2->unk5 = func_80176CBC(arg2->unk5, 0, 0xD);
        var_a2 = 0xD;
    } else if (arg1 < 9) {
        arg2->unk4 = func_80176CBC(arg2->unk4, 0xFF, 5);
        var_a1 = 0;
        arg2->unk5 = func_80176CBC(arg2->unk5, 0xFF, 5);
        var_a2 = 5;
    } else {
        arg2->unk4 = func_80176CBC(arg2->unk4, 0x1E, 3);
        var_a1 = 0x1E;
        arg2->unk5 = func_80176CBC(arg2->unk5, 0xC8, 3);
        var_a2 = 3;
    }
    arg2->unk6 = func_80176CBC(arg2->unk6, var_a1, var_a2);
}
