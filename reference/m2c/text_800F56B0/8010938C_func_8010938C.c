/* m2c reference for func_8010938C @ 8010938C (110 words). Generated; not compiled or validated. */
? func_8015B78C(s32, ?);                            /* extern */
? func_8015B7B4(s32, s32);                          /* extern */
? func_8015CE18(s32, ?, ?, u16, s32);               /* extern */
? func_80167ED0(?, u8 *, ?);                        /* extern */

void func_8010938C(s32 arg0, ? arg1) {
    u8 sp18;
    s32 sp28;
    s32 sp2C;
    s32 sp30;
    s32 sp34;
    s32 temp_a0;
    s32 temp_s1;
    s32 temp_t0;
    s32 var_fp;
    s32 var_s2;
    s32 var_s3;
    s32 var_s4;
    s32 var_s5;
    s32 var_s6;
    void *temp_s0;

    sp2C = 0;
    func_80167ED0(arg1, &sp18, 1);
    var_fp = 0;
    sp28 = 0;
    sp34 = 0;
    do {
        var_s6 = 0;
        if (sp28 == 1) {
            sp2C = -0xC;
        }
        var_s5 = 0x1128;
        var_s4 = 0x10D8;
        var_s2 = arg0;
        var_s3 = var_fp;
        sp30 = sp34;
loop_4:
        temp_s0 = var_fp + var_s2 + 0x10D8;
        temp_s0->unk3 = 4;
        var_s2 += 0x28;
        temp_s0->unk7 = 0x64;
        (arg0 + var_s3)->unk10E6 = sp1E;
        var_s6 += 1;
        temp_s0->unkC = sp18;
        temp_s0->unkD = sp19;
        temp_s1 = arg0 + var_s4 + var_fp;
        temp_s0->unk10 = (s16) sp1A;
        temp_s0->unk12 = (s16) sp1B;
        func_8015B7B4(temp_s1, 1);
        func_8015B78C(temp_s1, 1);
        temp_s0->unk8 = 3;
        var_s4 += 0x28;
        var_s3 += 0x28;
        temp_s0->unkA = (s16) (sp2C - 8);
        temp_a0 = arg0 + var_s5;
        temp_s0->unk4 = sp20;
        temp_s0->unk5 = sp21;
        var_s5 += 0x18;
        temp_s0->unk6 = sp22;
        func_8015CE18(temp_a0 + sp30, 0, 0, sp1C, 0);
        if (var_s6 < 2) {
            goto loop_4;
        }
        sp34 += 0xC;
        var_fp += 0x14;
        temp_t0 = sp28 + 1;
        sp28 = temp_t0;
    } while (temp_t0 < 2);
}
