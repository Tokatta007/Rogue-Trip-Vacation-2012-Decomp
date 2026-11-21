/* m2c reference for func_8015112C @ 8015112C (462 words). Generated; not compiled or validated. */
? func_8011BC6C(s32 *, s32 *, ?, ?, s32, s32);      /* extern */
void *func_80124584(s32, ?, s32);                   /* extern */
void *func_80124CBC(s32);                           /* extern */
? func_80124CF4(s32 *, VECTOR *, ?, ?, s32);        /* extern */
? func_80124FC8(void *, s32 *, s32 *);              /* extern */
? func_801253C8(void *, void *);                    /* extern */
? func_8012A154(s32, ? *, ?, ?, s32, void *);       /* extern */
? func_8013BDCC(s32, ?, ?, ? *);                    /* extern */
? func_8013BEA8(s32);                               /* extern */
? func_8015A05C(void *, MATRIX *);                  /* extern */
? func_8016A274(u32, s32, s32 *, ?, u8 *);          /* extern */
? func_8016D6BC(s32, ?);                            /* extern */
u16 func_80176CBC(s16, s16, ?);                     /* extern */
extern ? D_801C3100;
extern ? D_801C31CC;
static s32 D_801C34EC = 0;
static s32 D_801C34F0 = 0;
static s32 D_801C34F4 = 0;
static ? D_801C35E4;                                /* unable to generate initializer: unknown type */
static s16 D_801C35EC[2] = { -1, -1 };
static ? D_800F43E0;                                /* unable to generate initializer: unknown type; const */
static ? D_800F43EC;                                /* unable to generate initializer: unknown type; const */
static ? D_800F43F8;                                /* unable to generate initializer: unknown type; const */

void func_8015112C(s32 arg0, s32 arg1) {
    s32 sp18;
    s32 sp1C;
    s32 sp20;
    s32 sp28;
    s32 sp2C;
    s32 sp30;
    s32 sp38;
    s32 sp3C;
    s32 sp40;
    VECTOR sp48;
    u8 sp58;
    s32 sp78;
    s32 sp7C;
    s32 sp80;
    ? sp88;
    ? sp8C;
    ? var_a2;
    MATRIX *temp_s6;
    s16 *temp_a0_2;
    s32 var_a1;
    s32 var_s0;
    s32 var_v1;
    s32 var_v1_2;
    s32 var_v1_3;
    s32 var_v1_4;
    u16 var_v0;
    u16 var_v0_2;
    void *temp_a0;
    void *temp_a2;
    void *temp_s0;
    void *temp_s0_2;
    void *temp_s0_3;
    void *temp_s1;
    void *temp_s2;
    void *temp_s3;
    void *temp_s7;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v1;
    void *temp_v1_2;

    sp18 = D_800F43E0.unk0;
    sp1C = D_800F43E0.unk4;
    sp20 = D_800F43E0.unk8;
    sp28 = D_800F43EC.unk0;
    sp2C = D_800F43EC.unk4;
    sp30 = D_800F43EC.unk8;
    sp38 = D_800F43F8.unk0;
    sp3C = D_800F43F8.unk4;
    sp40 = D_800F43F8.unk8;
    sp88 = (unaligned s32) D_801C35E4.unk0;
    sp8C = (unaligned s32) D_801C35E4.unk4;
    temp_s0 = arg0 + (arg1 * 4);
    temp_s3 = temp_s0->unk17E0;
    temp_s2 = temp_s0->unk17E8;
    temp_a0 = arg0 + (arg1 * 2);
    temp_s7 = func_80124584(D_801C34EC, 0x50, arg1);
    temp_a0->unk17F0 = (u16) (temp_a0->unk17F0 + 1);
    var_v1 = 0;
    if (temp_s7->unk8C == 0) {
        var_v1 = (s16) temp_a0->unk17F0 < 0x37;
    }
    if (var_v1 != 0) {
        if (temp_s7->unk87 == 0) {
            temp_s3->unkC = 0;
            sp78 = temp_s3->unk1C - temp_s2->unk1C;
            sp7C = temp_s3->unk20 - temp_s2->unk20;
            sp80 = temp_s3->unk24 - temp_s2->unk24;
            func_801253C8(temp_s2 + 0x1C, temp_s3 + 0x1C);
            temp_s0_2 = arg0 + arg1;
            if (temp_s0_2->unk17F6 != 0) {
                temp_s2->unk14 = func_80176CBC((s16) temp_s2->unk14, -0x38E, 5);
                if ((s16) temp_s2->unk14 < -0x2E3) {
                    temp_s2->unk14 = -0x2E3U;
                    var_v1_2 = 0;
                    if ((temp_s7->unkB8 == 0) || ((temp_s0_2->unk17F4 << 0x18) > 0)) {
                        var_v1_2 = 1;
                    }
                    temp_v1 = arg0 + arg1;
                    if (var_v1_2 != 0) {
                        temp_v1->unk17F6 = 0;
                        temp_v1->unk17F4 = (u8) (temp_v1->unk17F4 + 1);
                        D_801C35EC[arg1] = -1;
                    } else {
                        (arg0 + (arg1 * 2))->unk17F0 = 0;
                    }
                }
                var_a2 = 5;
                var_a1 = temp_s3->unk24 + 0x50;
            } else {
                temp_s2->unk14 = func_80176CBC((s16) temp_s2->unk14, (s16) temp_s3->unk14, 0xD);
                if (((s16) temp_s2->unk14 - (s16) temp_s3->unk14) >= 0) {
                    var_v0 = temp_s3->unk14;
                    var_v1_3 = temp_s2->unk14 << 0x10;
                } else {
                    var_v0 = temp_s2->unk14;
                    var_v1_3 = temp_s3->unk14 << 0x10;
                }
                if (((var_v1_3 >> 0x10) - (s16) var_v0) < 0x71) {
                    D_801C31CC.unk8 = 0x3D;
                    D_801C31CC.unkC = 0x3D;
                    temp_a2 = temp_s3 + 0x1C;
                    D_801C3100.unk0 = (s32) temp_s3->unk1C;
                    D_801C3100.unk4 = (s32) temp_a2->unk4;
                    D_801C31CC.unk0 = &D_801C3100;
                    D_801C3100.unk8 = (s32) temp_a2->unk8;
                    func_8013BDCC(D_801C34F4, 0, 0, &D_801C31CC);
                    mathMulTransVec(temp_s2 + 0x28, (VECTOR *) &sp28, &sp48);
                    sp48 = (s32) sp48 + temp_s2->unk1C;
                    sp48.vy += temp_s2->unk20;
                    sp48.vz += temp_s2->unk24;
                    if (temp_s7->unk90 == 0) {
                        var_s0 = 0;
                        do {
                            func_80124CF4(&sp28, &sp48, 0x3F, 0x3F, 0xF);
                            func_8011BC6C(&sp28, &sp18, 0xC, 0x14, 0, 0);
                            var_s0 += 1;
                        } while (var_s0 < 7);
                    }
                    if (((s16) temp_s2->unk14 - (s16) temp_s3->unk14) >= 0) {
                        var_v0_2 = temp_s3->unk14;
                        var_v1_4 = temp_s2->unk14 << 0x10;
                    } else {
                        var_v0_2 = temp_s2->unk14;
                        var_v1_4 = temp_s3->unk14 << 0x10;
                    }
                    temp_v1_2 = arg0 + arg1;
                    if (((var_v1_4 >> 0x10) - (s16) var_v0_2) < 0x16) {
                        temp_v1_2->unk17F6 = 1;
                        if ((s8) temp_v1_2->unk17F4 == 3) {
                            (arg0 + (arg1 * 2))->unk17F0 = 0x37;
                        }
                    }
                }
                var_a1 = temp_s3->unk24;
                var_a2 = 9;
            }
            temp_s2->unk24 = func_80176CBC((s16) temp_s2->unk24, (s16) var_a1, var_a2);
            temp_s6 = temp_s2 + 0x28;
            temp_s2->unk16 = (u16) temp_s3->unk16;
            temp_s2->unk18 = (u16) temp_s3->unk18;
            func_8015A05C(temp_s2 + 0x14, temp_s6);
            temp_s0_3 = arg0 + (arg1 * 2);
            if ((s16) temp_s0_3->unk17F0 == 3) {
                func_8016D6BC((arg0 + (arg1 * 4))->unk16D8, 2);
            }
            if ((s16) temp_s0_3->unk17F0 == 5) {
                func_8016D6BC((arg0 + (arg1 * 4))->unk16D8, 3);
            }
            if ((s16) temp_s0_3->unk17F0 == 7) {
                func_8016D6BC((arg0 + (arg1 * 4))->unk16D8, 4);
            }
            if ((s16) temp_s0_3->unk17F0 == 0x37) {
                func_8016D6BC((arg0 + (arg1 * 4))->unk16D8, 3);
            }
            if ((s16) temp_s0_3->unk17F0 == 0x39) {
                func_8016D6BC((arg0 + (arg1 * 4))->unk16D8, 2);
            }
            if ((s16) temp_s0_3->unk17F0 == 0x3B) {
                func_8016D6BC((arg0 + (arg1 * 4))->unk16D8, 1);
            }
            mathMulTransVec(temp_s6, (VECTOR *) &sp38, (VECTOR *) &sp28);
            temp_s1 = temp_s2 + 0x1C;
            func_80124FC8(temp_s1, &sp28, &sp28);
            temp_v0 = temp_s2->unk0;
            func_8016A274((u16) temp_v0->unk0 >> 4, temp_v0->unk2 & 0xFF, &sp28, 0x78, &sp58);
            if ((sp58 != 0) || (sp38 = 0, mathMulTransVec(temp_s6, (VECTOR *) &sp38, (VECTOR *) &sp28), func_80124FC8(temp_s1, &sp28, &sp28), temp_v0_2 = temp_s2->unk0, func_8016A274((u16) temp_v0_2->unk0 >> 4, temp_v0_2->unk2 & 0xFF, &sp28, 0x78, &sp58), (sp58 != 0))) {
                temp_v0_3 = func_80124CBC(D_801C34EC);
                temp_v0_3->unk18 = (s32) temp_s7->unk7C4;
                temp_v0_3->unk14 = 0;
                temp_v0_3->unkC = temp_s1;
                temp_a0_2 = &D_801C35EC[arg1];
                if ((sp59 != *temp_a0_2) && ((u32) (sp5A - 0x190) >= 0x13U)) {
                    *temp_a0_2 = (s16) sp59;
                    func_8012A154(D_801C34F0, &sp88, 0xF, 0x1D, (s32) sp59, temp_s1);
                }
            }
        }
    } else {
        (arg0 + arg1)->unk17F8 = 0;
        D_801C31CC.unk8 = 0x3C;
        D_801C31CC.unkC = 0x3C;
        func_8013BEA8(D_801C34F4);
        if (temp_s7->unk8C == 0) {
            temp_s3->unkC = 1;
        }
        temp_s2->unkC = 0;
        temp_s2->unkD = 0;
        func_8016D6BC(temp_s0->unk16D8, 0);
    }
}
