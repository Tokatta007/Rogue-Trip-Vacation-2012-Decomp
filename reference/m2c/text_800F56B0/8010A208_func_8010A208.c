/* m2c reference for func_8010A208 @ 8010A208 (106 words). Generated; not compiled or validated. */
? func_8015CE18(s32, ?, ?, u16, s32);               /* extern */
? func_80167ED0(?, ? *, ?);                         /* extern */

void func_8010A208(s32 arg0, ? arg1) {
    ? sp18;
    s32 sp88;
    s32 sp8C;
    s32 sp90;
    s32 sp94;
    s32 sp98;
    s32 temp_a0;
    s32 var_fp;
    s32 var_s0;
    s32 var_s1;
    s32 var_s2;
    s32 var_s3;
    s32 var_s4;
    s32 var_s5;
    s32 var_s6;
    s32 var_s7;
    s32 var_t0;
    s32 var_t1;
    s32 var_t2;
    s32 var_t3;
    s32 var_t4;
    s32 var_t5;
    void *temp_a3;
    void *temp_t0;

    sp94 = arg0;
    func_80167ED0(arg1, &sp18, 9);
    var_t5 = 0;
    var_t2 = 0;
    var_t1 = 0;
    var_t4 = sp94;
    do {
        var_fp = 0;
        var_s5 = 0;
        var_s7 = var_t1;
        var_s6 = 0;
loop_2:
        var_s4 = 0;
        var_t3 = var_s6;
        var_s3 = 0x278C;
        var_s2 = 0;
        var_s1 = var_s7;
        var_s0 = var_t4;
        var_t0 = var_t3 + var_s0;
loop_3:
        temp_t0 = var_t1 + var_t0 + 0x214C;
        temp_t0->unk3 = 4;
        temp_a3 = &sp18 + var_s2;
        temp_t0->unk7 = 0x64;
        (var_t4 + var_s1)->unk215A = (u16) temp_a3->unk6;
        temp_a0 = var_t4 + var_s3 + var_s5 + var_t2;
        temp_t0->unkC = (u8) temp_a3->unk0;
        temp_t0->unkD = (u8) temp_a3->unk1;
        temp_t0->unk10 = (s16) temp_a3->unk2;
        var_s3 += 0x30;
        temp_t0->unk12 = (s16) temp_a3->unk3;
        var_s2 += 0xC;
        temp_t0->unk4 = (u8) temp_a3->unk8;
        var_s1 += 0x50;
        temp_t0->unk5 = (u8) temp_a3->unk9;
        var_s0 += 0x50;
        temp_t0->unk6 = (u8) temp_a3->unkA;
        var_s4 += 1;
        sp88 = var_t1;
        sp8C = var_t2;
        sp90 = var_t3;
        sp94 = var_t4;
        sp98 = var_t5;
        func_8015CE18(temp_a0, 0, 0, temp_a3->unk4, 0);
        var_t0 = var_t3 + var_s0;
        if (var_s4 < 9) {
            goto loop_3;
        }
        var_s5 += 0x18;
        var_s7 += 0x28;
        var_fp += 1;
        var_s6 += 0x28;
        if (var_fp < 2) {
            goto loop_2;
        }
        var_t2 += 0xC;
        var_t5 += 1;
        var_t1 += 0x14;
    } while (var_t5 < 2);
}
