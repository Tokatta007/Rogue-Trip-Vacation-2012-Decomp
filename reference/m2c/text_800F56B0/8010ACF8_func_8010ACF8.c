/* m2c reference for func_8010ACF8 @ 8010ACF8 (118 words). Generated; not compiled or validated. */
s32 func_80133040();                                /* extern */
? func_8015B78C(s32, ?);                            /* extern */
? func_8015B7B4(s32, ?);                            /* extern */
? func_8015CE18(s32, ?, ?, u16, s32);               /* extern */
? func_80167ED0(?, u8 *, ?);                        /* extern */

void func_8010ACF8(s32 arg0, ? arg1) {
    u8 sp18;
    s32 sp28;
    s32 sp2C;
    s32 sp30;
    s16 var_v0_2;
    s32 temp_a0;
    s32 temp_s0;
    s32 temp_t0;
    s32 var_fp;
    s32 var_s2;
    s32 var_s3;
    s32 var_s4;
    s32 var_s5;
    s32 var_s6;
    s32 var_v0;
    void *temp_s1;

    sp2C = 0;
    func_80167ED0(arg1, &sp18, 1);
    var_fp = 0;
    sp28 = 0;
    sp30 = 0;
    do {
        var_s6 = 0;
        if (sp28 == 1) {
            sp2C = -0xC;
        }
        var_s5 = 0x53C4;
        var_s4 = 0x5374;
        var_s3 = var_fp;
        var_s2 = arg0;
        var_v0 = var_fp + var_s2;
loop_4:
        temp_s1 = var_v0 + 0x5374;
        temp_s1->unk3 = 4;
        temp_s1->unk7 = 0x64;
        (arg0 + var_s3)->unk5382 = sp1E;
        temp_s1->unkC = sp18;
        temp_s1->unkD = sp19;
        temp_s0 = arg0 + var_s4 + var_fp;
        temp_s1->unk10 = (s16) sp1A;
        temp_s1->unk12 = (s16) sp1B;
        func_8015B7B4(temp_s0, 0);
        func_8015B78C(temp_s0, 0);
        temp_s1->unk4 = sp20;
        temp_s1->unk5 = sp21;
        temp_s1->unk6 = sp22;
        if (func_80133040() != 0) {
            temp_s1->unk8 = 0x36;
            var_v0_2 = sp2C + 0x65;
        } else {
            var_v0_2 = 0xCB;
            temp_s1->unk8 = 0x36;
        }
        temp_s1->unkA = var_v0_2;
        var_s4 += 0x28;
        var_s3 += 0x28;
        var_s2 += 0x28;
        var_s6 += 1;
        temp_a0 = arg0 + var_s5;
        var_s5 += 0x18;
        func_8015CE18(temp_a0 + sp30, 0, 0, sp1C, 0);
        var_v0 = var_fp + var_s2;
        if (var_s6 < 2) {
            goto loop_4;
        }
        sp30 += 0xC;
        var_fp += 0x14;
        temp_t0 = sp28 + 1;
        sp28 = temp_t0;
    } while (temp_t0 < 2);
}
