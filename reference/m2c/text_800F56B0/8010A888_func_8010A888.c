/* m2c reference for func_8010A888 @ 8010A888 (127 words). Generated; not compiled or validated. */
s32 func_80133040(s32);                             /* extern */
? func_8015CE18(s32, ?, ?, u16, s32);               /* extern */
? func_80167ED0(?, u8 *, ?);                        /* extern */

void func_8010A888(s32 arg0, ? arg1) {
    u8 sp18;
    s32 sp28;
    s32 sp2C;
    s32 sp30;
    s32 sp38;
    s32 sp3C;
    s32 sp40;
    s16 var_s1;
    s16 var_v0;
    s32 temp_a0;
    s32 temp_v0;
    s32 var_a0;
    s32 var_fp;
    s32 var_s2;
    s32 var_s3;
    s32 var_s4;
    s32 var_s5;
    s32 var_s6;
    s32 var_s7;
    s32 var_t0;
    s32 var_t1;
    void *temp_s0;

    sp28 = 0;
    func_80167ED0(arg1, &sp18, 1);
    var_t1 = 0;
    var_t0 = 0;
    sp30 = 0;
    do {
        var_fp = 0;
        if (var_t1 == 1) {
            sp28 = -0xC;
        }
        sp2C = var_t0;
        var_s7 = 0x4C5C;
        var_s6 = var_t0;
        var_s5 = 0;
loop_4:
        var_s4 = 0;
        var_a0 = var_s5;
        var_s1 = 0x12B;
        var_s3 = var_s6;
        var_s2 = arg0;
loop_5:
        temp_s0 = sp2C + (var_a0 + var_s2) + 0x4BBC;
        temp_s0->unk3 = 4;
        temp_s0->unk7 = 0x64;
        (arg0 + var_s3)->unk4BCA = sp1E;
        temp_s0->unkC = sp18;
        temp_s0->unkD = sp19;
        temp_s0->unk10 = (s16) sp1A;
        temp_s0->unk12 = (s16) sp1B;
        temp_s0->unk4 = sp20;
        temp_s0->unk5 = sp21;
        temp_s0->unk6 = sp22;
        sp38 = var_a0;
        sp3C = var_t0;
        sp40 = var_t1;
        temp_v0 = func_80133040(var_a0);
        var_v0 = 0xC9;
        if (temp_v0 != 0) {
            temp_s0->unk8 = var_s1;
            var_v0 = sp28 + 0x60;
        } else {
            temp_s0->unk8 = var_s1;
        }
        temp_s0->unkA = var_v0;
        var_s1 += 5;
        var_s3 += 0x50;
        var_s4 += 1;
        var_s2 += 0x50;
        if (var_s4 < 2) {
            goto loop_5;
        }
        var_s6 += 0x28;
        var_s5 += 0x28;
        var_fp += 1;
        sp3C = var_t0;
        sp40 = var_t1;
        temp_a0 = arg0 + var_s7;
        var_s7 += 0x18;
        func_8015CE18(temp_a0 + sp30, 0, 0, sp1C, 0);
        if (var_fp < 2) {
            goto loop_4;
        }
        var_t0 += 0x14;
        var_t1 += 1;
        sp30 += 0xC;
    } while (var_t1 < 2);
}
