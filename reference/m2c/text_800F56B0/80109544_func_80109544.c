/* m2c reference for func_80109544 @ 80109544 (79 words). Generated; not compiled or validated. */
? func_8015CE18(s32, ?, ?, u16, s32);               /* extern */
? func_80167ED0(?, u8 *, ?);                        /* extern */

void func_80109544(s32 arg0, ? arg1) {
    u8 sp18;
    s32 temp_a0;
    s32 var_s0;
    s32 var_s1;
    s32 var_s2;
    s32 var_s3;
    s32 var_s4;
    s32 var_s5;
    s32 var_s6;
    s32 var_v1;
    void *temp_v1;

    func_80167ED0(arg1, &sp18, 1);
    var_s6 = 0;
    var_s5 = 0;
    var_s4 = 0;
    do {
        var_s3 = 0;
        var_s2 = 0x14B4;
        var_s1 = var_s4;
        var_s0 = arg0;
        var_v1 = var_s4 + var_s0;
loop_2:
        temp_v1 = var_v1 + 0x1464;
        temp_v1->unk3 = 4;
        temp_v1->unk7 = 0x64;
        (arg0 + var_s1)->unk1472 = sp1E;
        temp_v1->unkC = sp18;
        temp_v1->unkD = sp19;
        var_s1 += 0x28;
        temp_v1->unk10 = (s16) sp1A;
        var_s0 += 0x28;
        temp_v1->unk12 = (s16) sp1B;
        temp_v1->unk8 = 0x58;
        temp_v1->unkA = -8;
        var_s3 += 1;
        temp_v1->unk4 = sp20;
        temp_v1->unk5 = sp21;
        temp_a0 = arg0 + var_s2 + var_s5;
        temp_v1->unk6 = sp22;
        var_s2 += 0x18;
        func_8015CE18(temp_a0, 0, 0, sp1C, 0);
        var_v1 = var_s4 + var_s0;
        if (var_s3 < 2) {
            goto loop_2;
        }
        var_s5 += 0xC;
        var_s6 += 1;
        var_s4 += 0x14;
    } while (var_s6 < 2);
}
