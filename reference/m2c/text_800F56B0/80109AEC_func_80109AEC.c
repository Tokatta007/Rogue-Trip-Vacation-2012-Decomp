/* m2c reference for func_80109AEC @ 80109AEC (85 words). Generated; not compiled or validated. */
? func_8015CE18(s32, ?, ?, u16, s32);               /* extern */
? func_80167ED0(?, ? *, ?);                         /* extern */

void func_80109AEC(s32 arg0, ? arg1) {
    ? sp18;
    s32 temp_a0;
    s32 var_a3;
    s32 var_s0;
    s32 var_s1;
    s32 var_s2;
    s32 var_s3;
    s32 var_s4;
    s32 var_s5;
    s32 var_s6;
    s32 var_s7;
    void *temp_a3;
    void *temp_t0;

    func_80167ED0(arg1, &sp18, 0xC);
    var_s7 = 0;
    var_s6 = 0;
    var_s5 = 0;
    do {
        var_s4 = 0;
        var_s3 = 0x1CC8;
        var_s2 = 0;
        var_s1 = var_s5;
        var_s0 = arg0;
        var_a3 = var_s5 + var_s0;
loop_2:
        temp_a3 = var_a3 + 0x1AE8;
        temp_a3->unk3 = 4;
        temp_t0 = &sp18 + var_s2;
        temp_a3->unk7 = 0x64;
        (arg0 + var_s1)->unk1AF6 = (u16) temp_t0->unk6;
        temp_a0 = arg0 + var_s3 + var_s6;
        temp_a3->unkC = (u8) temp_t0->unk0;
        temp_a3->unkD = (u8) temp_t0->unk1;
        temp_a3->unk10 = (s16) temp_t0->unk2;
        var_s3 += 0x18;
        temp_a3->unk12 = (s16) temp_t0->unk3;
        temp_a3->unk8 = 0x67;
        temp_a3->unkA = 0x1C;
        var_s2 += 0xC;
        temp_a3->unk4 = (u8) temp_t0->unk8;
        var_s1 += 0x28;
        temp_a3->unk5 = (u8) temp_t0->unk9;
        var_s0 += 0x28;
        temp_a3->unk6 = (u8) temp_t0->unkA;
        var_s4 += 1;
        func_8015CE18(temp_a0, 0, 0, temp_t0->unk4, 0);
        var_a3 = var_s5 + var_s0;
        if (var_s4 < 0xC) {
            goto loop_2;
        }
        var_s6 += 0xC;
        var_s7 += 1;
        var_s5 += 0x14;
    } while (var_s7 < 2);
}
