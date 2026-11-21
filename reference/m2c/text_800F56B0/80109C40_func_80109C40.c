/* m2c reference for func_80109C40 @ 80109C40 (213 words). Generated; not compiled or validated. */
? func_8015CE18(s32, ?, ?, u16, s32);               /* extern */
? func_80167ED0(?, u8 *, ?);                        /* extern */

void func_80109C40(s32 arg0, ? arg1) {
    u8 sp18;
    s32 sp48;
    s32 sp4C;
    s32 sp50;
    s32 temp_s0;
    s32 temp_t0;
    s32 temp_t0_2;
    s32 var_fp;
    s32 var_s2;
    s32 var_s3;
    s32 var_s4;
    s32 var_s5;
    s32 var_s6;
    s32 var_s7;
    void *temp_s0_2;
    void *temp_s1;
    void *temp_v1;
    void *temp_v1_2;
    void *temp_v1_3;

    func_80167ED0(arg1, &sp18, 4);
    var_s2 = 0;
    sp4C = 0;
    sp50 = 0;
    do {
        var_fp = 0x1FBC;
        var_s7 = 0x1F3C;
        var_s6 = 0x1EBC;
        var_s5 = 0x1E3C;
        var_s4 = arg0;
        var_s3 = 0;
        sp48 = 0;
loop_2:
        temp_s0 = sp50 + var_s4;
        temp_v1 = temp_s0 + 0x1DEC;
        temp_v1->unk3 = 4;
        temp_v1->unk7 = 0x64;
        temp_s1 = arg0 + (sp50 + var_s3);
        temp_s1->unk1DFA = sp1E;
        temp_v1->unkC = sp18;
        temp_v1->unkD = sp19;
        temp_v1->unk10 = (s16) sp1A;
        temp_v1->unk12 = (s16) sp1B;
        temp_v1->unk8 = 0x70;
        temp_v1->unkA = -8;
        temp_v1->unk4 = sp20;
        temp_v1->unk5 = sp21;
        temp_v1->unk6 = sp22;
        func_8015CE18(arg0 + var_s5 + var_s2, 0, 0, sp1C, 0);
        temp_v1_2 = temp_s0 + 0x1E6C;
        temp_v1_2->unk3 = 4;
        temp_v1_2->unk7 = 0x64;
        temp_s1->unk1E7A = sp2A;
        temp_v1_2->unkC = sp24;
        temp_v1_2->unkD = sp25;
        temp_v1_2->unk10 = (s16) sp26;
        temp_v1_2->unk12 = (s16) sp27;
        temp_v1_2->unk8 = 0x67;
        temp_v1_2->unkA = 0xE;
        temp_v1_2->unk4 = sp2C;
        temp_v1_2->unk5 = sp2D;
        temp_v1_2->unk6 = sp2E;
        func_8015CE18(arg0 + var_s6 + var_s2, 0, 0, sp28, 0);
        temp_v1_3 = temp_s0 + 0x1EEC;
        temp_v1_3->unk3 = 4;
        temp_v1_3->unk7 = 0x64;
        temp_s1->unk1EFA = sp36;
        temp_v1_3->unkC = sp30;
        temp_v1_3->unkD = sp31;
        temp_v1_3->unk10 = (s16) sp32;
        var_s5 += 0x18;
        temp_v1_3->unk12 = (s16) sp33;
        temp_v1_3->unk8 = 0xE7;
        temp_v1_3->unkA = 0xE;
        temp_v1_3->unk4 = sp38;
        temp_v1_3->unk5 = sp39;
        temp_v1_3->unk6 = sp3A;
        func_8015CE18(arg0 + var_s7 + var_s2, 0, 0, sp34, 0);
        temp_s0_2 = temp_s0 + 0x1F6C;
        temp_s0_2->unk3 = 4;
        temp_s0_2->unk7 = 0x64;
        var_s4 += 0x28;
        temp_s1->unk1F7A = sp42;
        var_s3 += 0x28;
        temp_s0_2->unkC = sp3C;
        temp_t0_2 = sp48 + 1;
        sp48 = temp_t0_2;
        temp_s0_2->unkD = sp3D;
        var_s6 += 0x18;
        temp_s0_2->unk10 = (s16) sp3E;
        var_s7 += 0x18;
        temp_s0_2->unk12 = (s16) sp3F;
        temp_s0_2->unk8 = 0x11D;
        temp_s0_2->unkA = 0xE;
        temp_s0_2->unk4 = sp44;
        temp_s0_2->unk5 = sp45;
        temp_s0_2->unk6 = sp46;
        func_8015CE18(arg0 + var_fp + var_s2, 0, 0, sp40, 0);
        var_fp += 0x18;
        if (temp_t0_2 < 2) {
            goto loop_2;
        }
        sp50 += 0x14;
        var_s2 += 0xC;
        temp_t0 = sp4C + 1;
        sp4C = temp_t0;
    } while (temp_t0 < 2);
}
