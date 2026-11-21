/* m2c reference for func_8013DBB4 @ 8013DBB4 (103 words). Generated; not compiled or validated. */
? func_80124FC8(VECTOR *, void *, void *);          /* extern */
? func_80125050(VECTOR *, void *, void *);          /* extern */
extern ? D_801DFF60;
extern ? D_801DFF84;
extern ? D_801E3930;
extern ? D_801E3EB0;

void func_8013DBB4(void *arg0, void *arg1, s32 arg2) {
    s32 sp10;
    s32 sp14;
    s32 sp18;
    VECTOR sp20;
    s32 var_s0;
    s32 var_s1;
    void *temp_s2;
    void *temp_s2_2;
    void *var_a1;
    void *var_s0_2;

    *((arg2 * 2) + &D_801E3930) = arg0->unk70E;
    *(arg2 + &D_801E3EB0) = 1;
    if (arg1->unk4E == 0) {
        arg1->unk4F = (u8) ((arg0->unk70E << 0x10) > 0);
        var_s0 = arg1->unk4F & 0xFF;
    } else {
        var_s0 = arg1->unk4F == 0;
    }
    sp10 = 0;
    sp14 = 8;
    sp18 = 0;
    mathMulTransVec(arg0->unk3C + 0x28, (VECTOR *) &sp10, &sp20);
    if (var_s0 != 0) {
        var_s1 = arg2 * 0x30;
        func_80125050(&sp20, arg1, var_s1 + &D_801DFF60);
        func_80124FC8(&sp20, arg1, var_s1 + (&D_801DFF60 + 0xC));
        temp_s2 = arg1 + 0xC;
        func_80124FC8(&sp20, temp_s2, var_s1 + (&D_801DFF60 + 0x24));
        var_a1 = temp_s2;
        var_s0_2 = &D_801DFF60 + 0x18;
    } else {
        var_s1 = arg2 * 0x30;
        func_80125050(&sp20, arg1, var_s1 + &D_801DFF84);
        func_80124FC8(&sp20, arg1, var_s1 + (&D_801DFF84 - 0xC));
        temp_s2_2 = arg1 + 0xC;
        func_80124FC8(&sp20, temp_s2_2, var_s1 + (&D_801DFF84 - 0x18));
        var_a1 = temp_s2_2;
        var_s0_2 = &D_801DFF84 - 0x24;
    }
    func_80125050(&sp20, var_a1, var_s1 + var_s0_2);
}
