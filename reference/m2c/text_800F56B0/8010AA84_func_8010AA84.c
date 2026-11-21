/* m2c reference for func_8010AA84 @ 8010AA84 (157 words). Generated; not compiled or validated. */
s32 func_80133040();                                /* extern */
? func_8015CE18(s32, ?, ?, u16, s32);               /* extern */
? func_80167ED0(?, u8 *, ?);                        /* extern */

void func_8010AA84(s32 arg0, ? arg1) {
    u8 sp18;
    s32 sp30;
    s32 sp34;
    s32 sp38;
    s16 var_v0;
    s16 var_v0_2;
    s32 temp_a0;
    s32 var_s1;
    s32 var_s2;
    s32 var_s3;
    s32 var_s4;
    s32 var_s6;
    s32 var_s7;
    void *temp_s0;
    void *temp_s0_2;

    sp30 = 0;
    func_80167ED0(arg1, &sp18, 2);
    var_s7 = 0;
    var_s6 = 0;
    sp38 = 0;
    do {
        var_s4 = 0x5344;
        if (var_s7 == 1) {
            sp30 = -0xC;
        }
        var_s2 = var_s6;
        var_s1 = arg0;
        var_s3 = 0x52C4;
        sp34 = var_s6;
loop_4:
        temp_s0 = sp34 + var_s1 + 0x5274;
        temp_s0->unk3 = 4;
        temp_s0->unk7 = 0x64;
        (arg0 + var_s2)->unk5282 = sp1E;
        temp_s0->unkC = sp18;
        temp_s0->unkD = sp19;
        temp_s0->unk10 = (s16) sp1A;
        temp_s0->unk12 = (s16) sp1B;
        temp_s0->unk4 = sp20;
        temp_s0->unk5 = sp21;
        temp_s0->unk6 = sp22;
        if (func_80133040() != 0) {
            temp_s0->unk8 = -4;
            var_v0 = sp30 + 0x65;
        } else {
            temp_s0->unk8 = -4;
            var_v0 = 0xCA;
        }
        temp_s0->unkA = var_v0;
        func_8015CE18(arg0 + var_s3 + sp38, 0, 0, sp1C, 0);
        temp_s0_2 = sp34 + var_s1 + 0x52F4;
        temp_s0_2->unk3 = 4;
        temp_s0_2->unk7 = 0x64;
        (arg0 + var_s2)->unk5302 = sp2A;
        temp_s0_2->unkC = sp24;
        temp_s0_2->unkD = sp25;
        temp_s0_2->unk10 = (s16) sp26;
        temp_s0_2->unk12 = (s16) sp27;
        temp_s0_2->unk4 = sp2C;
        temp_s0_2->unk5 = sp2D;
        temp_s0_2->unk6 = sp2E;
        if (func_80133040() != 0) {
            temp_s0_2->unk8 = 0x33;
            var_v0_2 = sp30 + 0x63;
        } else {
            temp_s0_2->unk8 = 0x33;
            var_v0_2 = 0xC7;
        }
        temp_s0_2->unkA = var_v0_2;
        temp_a0 = arg0 + var_s4 + sp38;
        var_s4 += 0x18;
        var_s2 += 0x28;
        var_s1 += 0x28;
        var_s3 += 0x18;
        func_8015CE18(temp_a0, 0, 0, sp28, 0);
        if (var_s1 < (arg0 + 0x50)) {
            goto loop_4;
        }
        var_s6 += 0x14;
        var_s7 += 1;
        sp38 += 0xC;
    } while (var_s7 < 2);
}
