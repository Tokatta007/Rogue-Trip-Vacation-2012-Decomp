/* m2c reference for func_8010A3B0 @ 8010A3B0 (106 words). Generated; not compiled or validated. */
s32 func_80133040();                                /* extern */
? func_8015CE18(s32, ?, ?, u16, s32);               /* extern */
? func_80167ED0(?, u8 *, ?);                        /* extern */

void func_8010A3B0(s32 arg0, ? arg1) {
    u8 sp18;
    s32 sp28;
    s32 sp2C;
    s16 var_v0;
    s32 temp_a0;
    s32 var_s1;
    s32 var_s2;
    s32 var_s3;
    s32 var_s4;
    s32 var_s5;
    s32 var_s6;
    s32 var_s7;
    void *temp_s0;

    sp28 = 0;
    func_80167ED0(arg1, &sp18, 2);
    var_s6 = 0;
    var_s7 = 0;
    var_s5 = 0;
    do {
        var_s4 = 0;
        if (var_s6 == 1) {
            sp28 = -0xC;
        }
        var_s3 = 0x2B9C;
        var_s1 = arg0;
        var_s2 = var_s5;
        sp2C = var_s5;
loop_4:
        temp_s0 = sp2C + var_s1 + 0x2B4C;
        temp_s0->unk3 = 4;
        temp_s0->unk7 = 0x64;
        (arg0 + var_s2)->unk2B5A = sp1E;
        temp_s0->unkC = sp18;
        temp_s0->unkD = sp19;
        temp_s0->unk10 = (s16) sp1A;
        temp_s0->unk12 = (s16) sp1B;
        temp_s0->unk4 = sp20;
        temp_s0->unk5 = sp21;
        temp_s0->unk6 = sp22;
        if (func_80133040() != 0) {
            temp_s0->unk8 = 0xF0;
            var_v0 = sp28 + 0x66;
        } else {
            var_v0 = 0xCF;
            temp_s0->unk8 = 0xF0;
        }
        temp_s0->unkA = var_v0;
        var_s2 += 0x28;
        var_s1 += 0x28;
        var_s4 += 1;
        temp_a0 = arg0 + var_s3 + var_s7;
        var_s3 += 0x18;
        func_8015CE18(temp_a0, 0, 0, sp1C, 0);
        if (var_s4 < 2) {
            goto loop_4;
        }
        var_s7 += 0xC;
        var_s6 += 1;
        var_s5 += 0x14;
    } while (var_s6 < 2);
}
