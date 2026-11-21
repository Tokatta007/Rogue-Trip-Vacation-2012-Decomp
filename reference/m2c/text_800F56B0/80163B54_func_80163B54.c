/* m2c reference for func_80163B54 @ 80163B54 (31 words). Generated; not compiled or validated. */
? func_80163BD0(? *);                               /* extern */
extern ? D_801ECB48;

void func_80163B54(void) {
    ? *var_s0;
    s32 var_s1;

    var_s1 = 0;
    var_s0 = &D_801ECB48;
    do {
        if ((var_s0->unk0 != 0) && ((u32) var_s0->unk20->unk4 < 9U)) {
            func_80163BD0(var_s0);
            func_80163BD0(var_s0);
        }
        var_s1 += 1;
        var_s0 += 0x4C;
    } while (var_s1 < 7);
}
