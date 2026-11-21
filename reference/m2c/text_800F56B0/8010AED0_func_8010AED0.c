/* m2c reference for func_8010AED0 @ 8010AED0 (94 words). Generated; not compiled or validated. */
? func_8015CE18(s32, ?, ?, u16, s32);               /* extern */
? func_80167ED0(?, u8 *, ?);                        /* extern */

void func_8010AED0(s32 arg0, ? arg1) {
    u8 sp18;
    s32 sp28;
    s32 sp30;
    s32 temp_a0;
    s32 var_s0;
    s32 var_s1;
    s32 var_s2;
    s32 var_s3;
    s32 var_s4;
    s32 var_s5;
    s32 var_s6;
    s32 var_t0;
    s32 var_v1;
    void *temp_v1;

    sp28 = 0;
    sp30 = arg0;
    func_80167ED0(arg1, &sp18, 1);
    var_s5 = 0;
    var_s6 = 0;
    var_s4 = 0;
    var_t0 = sp30;
    do {
        var_s3 = 0;
        if (var_s5 == 1) {
            sp28 = -0xC;
        }
        var_s2 = 0x5444;
        var_s1 = var_s4;
        var_s0 = var_t0;
        var_v1 = var_s4 + var_s0;
loop_4:
        temp_v1 = var_v1 + 0x53F4;
        temp_v1->unk3 = 4;
        temp_v1->unk7 = 0x64;
        (var_t0 + var_s1)->unk5402 = sp1E;
        temp_v1->unkC = sp18;
        temp_v1->unkD = sp19;
        temp_v1->unk10 = (s16) sp1A;
        var_s1 += 0x28;
        temp_v1->unk12 = (s16) sp1B;
        temp_v1->unk8 = 0x11;
        var_s0 += 0x28;
        temp_v1->unkA = (s16) (sp28 + 0xAB);
        var_s3 += 1;
        temp_v1->unk4 = sp20;
        temp_v1->unk5 = sp21;
        temp_a0 = var_t0 + var_s2 + var_s6;
        temp_v1->unk6 = sp22;
        var_s2 += 0x18;
        sp30 = var_t0;
        func_8015CE18(temp_a0, 0, 0, sp1C, 0);
        var_v1 = var_s4 + var_s0;
        if (var_s3 < 2) {
            goto loop_4;
        }
        var_s6 += 0xC;
        var_s5 += 1;
        var_s4 += 0x14;
    } while (var_s5 < 2);
}
