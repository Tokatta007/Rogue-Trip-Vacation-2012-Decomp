/* m2c reference for func_801181F0 @ 801181F0 (165 words). Generated; not compiled or validated. */
? func_801253C8(void *, void *);                    /* extern */
? func_80125464(void *, void *);                    /* extern */
? func_80125490(void *, void *);                    /* extern */
? func_8015A05C(void *, void *);                    /* extern */
? func_801640EC(void *);                            /* extern */
u16 func_80176C1C(s16, s16, ?);                     /* extern */
u8 func_80176CBC(u8, ?, ?);                         /* extern */
s16 func_80178A1C();                                /* extern */

void func_801181F0(void *arg0) {
    s32 sp10;
    s32 sp14;
    s32 sp18;
    ? var_a1_2;
    s32 var_a0;
    s32 var_a0_2;
    void *temp_s1;
    void *temp_s2;
    void *var_a0_3;
    void *var_a1;
    void *var_s3;

    temp_s1 = arg0->unk38;
    var_s3 = temp_s1 + 0x14;
    if (arg0->unk2D4 < 0x3E8) {
        arg0->unk2D4 = (s32) (arg0->unk2D4 + func_80178A1C());
        var_s3 = temp_s1 + 0x14;
    }
    temp_s1->unk14 = (u16) (temp_s1->unk14 + ((s32) arg0->unk29C >> 3));
    temp_s1->unk18 = (u16) (temp_s1->unk18 + ((s32) arg0->unk298 >> 3));
    temp_s1->unk16 = (u16) (temp_s1->unk16 + ((s32) arg0->unk2A0 >> 3));
    temp_s2 = temp_s1 + 0x28;
    func_801640EC(var_s3);
    func_801640EC(temp_s1 + 0x16);
    func_801640EC(temp_s1 + 0x18);
    func_8015A05C(var_s3, temp_s2);
    if (arg0->unk302 == 0) {
        func_801253C8(arg0 + 0x23C, temp_s1 + 0x1C);
        func_80125490(arg0 + 0x98, temp_s2);
    }
    sp10 = 0;
    sp18 = 0;
    sp14 = (s32) arg0->unk278 >> 6;
    var_a0 = 0;
    if (arg0->unk300 == 0) {
        func_80125464(arg0 + 0x260, var_s3);
        var_a0_2 = 0;
        if ((arg0->unk2C0 == 0x140) || (arg0->unk2C0 == 0x154) || (arg0->unk2C0 == 0x14A) || (arg0->unk2C0 == 0x186)) {
            var_a0_2 = 1;
        }
        if (var_a0_2 != 0) {
            arg0->unk260 = func_80176C1C((s16) arg0->unk260, (s16) arg0->unk1E, 3);
        }
        var_a0_3 = arg0 + 0x260;
        var_a1 = arg0 + 0x78;
        goto block_17;
    }
    if (arg0->unk2C0 == 0x17C) {
        var_a0 = arg0->unk309 != 0;
    }
    if (var_a0 != 0) {
        var_a0_3 = arg0 + 0x260;
        var_a1 = arg0 + 0x78;
        arg0->unk260 = func_80176C1C((s16) arg0->unk260, 0, 3);
block_17:
        func_8015A05C(var_a0_3, var_a1);
    }
    mathMulTransVec(arg0 + 0x78, (VECTOR *) &sp10, arg0 + 0x248);
    temp_s1->unk1C = (s32) (temp_s1->unk1C + arg0->unk248);
    temp_s1->unk20 = (s32) (temp_s1->unk20 + arg0->unk24C);
    temp_s1->unk24 = (s32) (temp_s1->unk24 + arg0->unk250);
    if (arg0->unk310 != 0) {
        var_a1_2 = 0;
        if (arg0->unk2D4 >= 0xB4) {
            arg0->unk310 = 0U;
            temp_s1->unkD = 1;
            return;
        }
        goto block_22;
    }
    var_a1_2 = 0x80;
    if (temp_s1->unkA != 0x80) {
block_22:
        temp_s1->unkA = func_80176CBC(temp_s1->unkA, var_a1_2, 5);
    }
}
