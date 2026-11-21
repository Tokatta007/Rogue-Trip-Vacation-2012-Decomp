/* m2c reference for func_80128EF0 @ 80128EF0 (514 words). Generated; not compiled or validated. */
? func_80124FC8(VECTOR *, void *, s32 *);           /* extern */
? func_80125050(s32 *, s32 *, s32 *);               /* extern */
? func_801253F4(s32, void *);                       /* extern */
? func_80128E80(void *, void *);                    /* extern */
s32 func_80133040();                                /* extern */
s32 func_80133AE0(s32, s32);                        /* extern */
? func_8013BDCC(s32, ?, ?, ? *);                    /* extern */
? func_8013C9C0(s32, ?, void *, s32);               /* extern */
s32 func_801596CC(s32, s32, s32, s32);              /* extern */
? func_8015A05C(s32, s32);                          /* extern */
s16 func_8015A62C(s32, s32);                        /* extern */
? func_8016408C(s32 *, s16);                        /* extern */
s32 func_80176C1C(s32, s16, s32);                   /* extern */
s16 func_80178A1C(s32, void *, s32);                /* extern */
extern ? D_801C3100;
extern ? D_801C31CC;
static s32 D_801C34EC = 0;
static s32 D_801C34F4 = 0;

void func_80128EF0(void *arg0) {
    s32 sp10;
    s32 sp14;
    s32 sp18;
    VECTOR sp20;
    s32 sp30;
    ? *temp_a3_3;
    ? var_a1_2;
    s16 temp_s0_2;
    s16 temp_s0_4;
    s16 var_a1;
    s32 *temp_s0_5;
    s32 temp_a0;
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_a2;
    s32 temp_a2_2;
    s32 temp_a3;
    s32 temp_a3_2;
    s32 temp_s0;
    s32 temp_s0_3;
    s32 temp_s4;
    s32 temp_v0;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a0_3;
    s32 var_a2;
    s32 var_a2_2;
    s32 var_a2_3;
    s32 var_a3;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s0_3;
    s32 var_s0_4;
    s32 var_s1;
    s32 var_s1_2;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v0_4;
    s32 var_v1;
    s32 var_v1_2;
    s32 var_v1_3;
    s32 var_v1_4;
    void *temp_a1_3;
    void *temp_v1;
    void *temp_v1_2;
    void *var_s3;

    if (arg0->unkF4 == 0) {
        var_a1 = 0;
        arg0->unk1F0 = func_80176C1C(arg0->unk1F0, 0, 3);
        var_a2 = 3;
        goto block_34;
    }
    var_v1 = 0;
    if ((arg0->unk9A != 0) || (arg0->unk9B != 0)) {
        var_v1 = 1;
    }
    if (var_v1 != 0) {
        var_a2 = 1;
        arg0->unk1F0 = func_80176C1C(arg0->unk1F0, (s16) arg0->unk186, 1);
        var_a1 = (s16) arg0->unk188;
        goto block_34;
    }
    if (arg0->unk91 != 0) {
        var_s0 = 5;
        if ((s16) arg0->unk6C4 < 0x3D) {
            var_s0 = arg0->unk6C4 / 12;
        }
        var_a1 = 0;
        arg0->unk1F0 = func_80176C1C(arg0->unk1F0, 0x71, var_s0);
        var_a2 = var_s0;
        goto block_34;
    }
    temp_a3 = arg0->unk54C;
    temp_a2 = arg0->unk5A0;
    temp_a1 = arg0->unk5F4 - temp_a2;
    temp_s0 = (s32) ((arg0->unk648 - temp_a3) + temp_a1) >> 1;
    var_v0 = func_801596CC(((s16) arg0->unk176 * (s16) arg0->unk176) - (temp_s0 * temp_s0), temp_a1, temp_a2, temp_a3);
    if (var_v0 == 0) {
        var_v0 = 1;
    }
    temp_s0_2 = func_8015A62C(temp_s0, var_v0);
    var_v1_2 = 0;
    if ((arg0->unk98 != 0) || (arg0->unk97 != 0)) {
        var_v1_2 = 1;
    }
    if (var_v1_2 != 0) {
        var_a2_2 = 5;
        goto block_22;
    }
    sp30 = arg0->unk1F0 - temp_s0_2;
    func_8016408C(&sp30, temp_s0_2);
    var_v0_2 = sp30;
    if (var_v0_2 < 0) {
        var_v0_2 = -var_v0_2;
    }
    if (var_v0_2 >= 0x17) {
        var_a2_2 = 0x14;
block_22:
        arg0->unk1F0 = func_80176C1C(arg0->unk1F0, temp_s0_2, var_a2_2);
    }
    temp_a3_2 = arg0->unk54C;
    temp_a2_2 = arg0->unk648;
    temp_a1_2 = arg0->unk5F4 - temp_a2_2;
    temp_s0_3 = (s32) ((arg0->unk5A0 - temp_a3_2) + temp_a1_2) >> 1;
    var_v0_3 = func_801596CC(((s16) arg0->unk164 * (s16) arg0->unk164) - (temp_s0_3 * temp_s0_3), temp_a1_2, temp_a2_2, temp_a3_2);
    if (var_v0_3 == 0) {
        var_v0_3 = 1;
    }
    temp_s0_4 = func_8015A62C(temp_s0_3, var_v0_3);
    var_v1_3 = 0;
    if ((arg0->unk98 != 0) || (arg0->unk97 != 0)) {
        var_v1_3 = 1;
    }
    var_a1 = temp_s0_4;
    if (var_v1_3 != 0) {
        var_a2 = 5;
        goto block_34;
    }
    sp30 = arg0->unk1F4 - temp_s0_4;
    func_8016408C(&sp30, var_a1);
    var_v0_4 = sp30;
    if (var_v0_4 < 0) {
        var_v0_4 = -var_v0_4;
    }
    if (var_v0_4 >= 0x17) {
        var_a1 = temp_s0_4;
        var_a2 = 0x14;
block_34:
        arg0->unk1F4 = func_80176C1C(arg0->unk1F4, var_a1, var_a2);
    }
    func_801253F4(arg0->unk738 + 0x14, arg0 + 0x1F0);
    func_8015A05C(arg0->unk738 + 0x14, arg0->unk738 + 0x28);
    var_s3 = arg0 + 0x544;
    if (arg0->unk1F4 < 0) {
        var_s3 = arg0 + 0x598;
    }
    sp10 = -var_s3->unk24;
    sp14 = -var_s3->unk28;
    sp18 = -var_s3->unk2C;
    mathMulTransVec(arg0->unk738 + 0x28, (VECTOR *) &sp10, &sp20);
    temp_s0_5 = arg0 + 0x1E4;
    func_80125050(temp_s0_5, arg0 + 0x250, &sp10);
    func_80124FC8(&sp20, var_s3, temp_s0_5);
    func_80125050(&sp10, temp_s0_5, temp_s0_5);
    var_v1_4 = 0;
    if ((arg0->unk9A != 0) || (arg0->unk9B != 0)) {
        var_v1_4 = 1;
    }
    if (var_v1_4 != 0) {
        temp_v0 = func_80133AE0(arg0->unk7C0, arg0->unk78);
        var_s1 = 0;
        if (arg0->unk1EC < (temp_v0 - (s16) arg0->unk16C)) {
            var_s0_2 = 0x544;
            arg0->unk1EC = (s32) (temp_v0 - (s16) arg0->unk16C);
            arg0->unk90 = 0;
            do {
                var_s3 = arg0 + var_s0_2;
                func_80128E80(arg0, var_s3);
                var_s3->unk4C = 0;
                var_s1 += 1;
                var_s0_2 += 0x54;
            } while (var_s1 < 4);
        }
    }
    arg0->unk738->unk24 = (s32) arg0->unk1EC;
    var_s1_2 = 0;
    if (arg0->unk820 != 0) {
        var_s0_3 = 0;
        if (func_80133040() != 0) {
            var_s0_3 = (D_801C34EC + 0x6224)->unk3A0 == (s32) arg0;
        }
        var_a2_3 = 0;
        if (var_s0_3 != 0) {
            var_s1_2 = 1;
        }
        temp_a0 = arg0->unk228;
        temp_a1_3 = D_801C34F4 + (var_s1_2 * 4);
        temp_s4 = temp_a0 - arg0->unk1EC;
        if ((temp_a1_3->unk268 != 0) && (arg0->unk91 == 0)) {
            var_a2_3 = temp_a1_3->unk270 >= 9;
        }
        if (var_a2_3 != 0) {
            var_a0 = 0;
            if (((s16) var_s3->unk4A == 2) || ((s16) var_s3->unk9E == 2) || (arg0->unk8A != 0) || (arg0->unk9F != 0)) {
                var_a0 = 1;
            }
            if (var_a0 != 0) {
                D_801C31CC.unk8 = 0xC;
                D_801C31CC.unkC = (s32) arg0->unk7C4;
                temp_a3_3 = arg0 + 0x1E4;
                D_801C31CC.unk18 = (s32) (D_801C34F4 + (var_s1_2 * 4))->unk270;
                D_801C3100.unk0 = (s32) arg0->unk1E4;
                D_801C3100.unk4 = (s32) temp_a3_3->unk4;
                D_801C31CC.unk0 = &D_801C3100;
                D_801C3100.unk8 = (s32) temp_a3_3->unk8;
                func_8013BDCC(D_801C34F4, 0, 0, temp_a3_3);
                var_a0_2 = var_s1_2 * 4;
            } else {
                temp_v1 = D_801C34F4 + (var_s1_2 * 4);
                var_a1_2 = 9;
                if (temp_v1->unk270 < 0x2E) {
                    var_a3 = temp_v1->unk270;
                } else {
                    var_a1_2 = 0xA;
                    var_a3 = temp_v1->unk270;
                }
                goto block_74;
            }
        } else {
            var_s0_4 = 0;
            if (((s32) (((s32) arg0->unk7A4 >> 6) * 0x3E8) / (s32) (func_80178A1C(temp_a0, temp_a1_3, var_a2_3) * 0xC3)) > 0) {
                var_s0_4 = (arg0->unk22C - arg0->unk1F0) >= 0x3C;
            }
            var_a0_2 = var_s1_2 * 4;
            if (var_s0_4 != 0) {
                var_a0_3 = 0;
                if (((s16) var_s3->unk4A == 2) || ((s16) var_s3->unk9E == 2) || (arg0->unk8A != 0) || (arg0->unk9F != 0)) {
                    var_a0_3 = 1;
                }
                if (var_a0_3 != 0) {
                    D_801C31CC.unk8 = 0xC;
                    D_801C31CC.unkC = (s32) arg0->unk7C4;
                    D_801C31CC.unk18 = (s32) ((s32) (arg0->unk7A4 * 0x32) / (s32) arg0->unkD0);
                    func_8013BDCC(D_801C34F4, 0, 0, &D_801C31CC);
                    var_a0_2 = var_s1_2 * 4;
                } else {
                    var_a3 = (s32) (arg0->unk7A4 * 0x32) / (s32) arg0->unkD0;
                    var_a1_2 = 9;
block_74:
                    func_8013C9C0(D_801C34F4, var_a1_2, arg0 + 0x1E4, var_a3);
                    var_a0_2 = var_s1_2 * 4;
                }
            }
        }
        temp_v1_2 = D_801C34F4 + var_a0_2;
        temp_v1_2->unk268 = (s32) (arg0->unk91 & 0xFF);
        temp_v1_2->unk270 = temp_s4;
    }
}
