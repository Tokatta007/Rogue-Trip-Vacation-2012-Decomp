/* m2c reference for func_801643F8 @ 801643F8 (556 words). Generated; not compiled or validated. */
? func_8015A01C(MATRIX *, ? *);                     /* extern */
? func_801642A8(s32, s32, s32 *, s32, void *);      /* extern */
s32 func_80164358(void **);                         /* extern */
? func_80164CA8(? *, void *);                       /* extern */
? func_80166340(void *);                            /* extern */
? func_8016CFF4(void *);                            /* extern */
extern ? D_801BC2B8;
extern ? D_801BF968;
extern s32 D_801C3874;
static ? *D_801C361C = &D_801BC2B8;
static ? D_800F5104;                                /* unable to generate initializer: unknown type; const */
static s8 D_800F5124[0x34] = {
    0x4D,
    0x65,
    0x6D,
    0x6F,
    0x72,
    0x79,
    0x20,
    0x73,
    0x74,
    0x61,
    0x63,
    0x6B,
    0x20,
    0x6E,
    0x6F,
    0x74,
    0x20,
    0x73,
    0x65,
    0x74,
    0x20,
    0x76,
    0x69,
    0x61,
    0x20,
    0x64,
    0x62,
    0x73,
    0x63,
    0x61,
    0x6E,
    0x49,
    0x6E,
    0x69,
    0x74,
    0x2C,
    0x20,
    0x63,
    0x61,
    0x6E,
    0x27,
    0x74,
    0x20,
    0x73,
    0x63,
    0x61,
    0x6E,
    0x20,
    0xA,
    0,
    0,
    0,
}; /* const */
static s8 D_800F5158[0x1C] = {
    0x42,
    0x61,
    0x64,
    0x20,
    0x68,
    0x69,
    0x65,
    0x72,
    0x61,
    0x72,
    0x63,
    0x68,
    0x79,
    0x20,
    0x6F,
    0x70,
    0x63,
    0x6F,
    0x64,
    0x65,
    0x20,
    0x25,
    0x64,
    0x20,
    0xA,
    0,
    0,
    0,
}; /* const */

void func_801643F8(s32 arg0, s32 arg1, ? (*arg2)(u32, void *, void *, VECTOR *, void *)) {
    s32 sp18;
    s32 sp1C;
    s32 sp20;
    VECTOR sp28;
    s32 sp38;
    s32 sp3C;
    s32 sp40;
    void *sp48;
    s32 sp50;
    s32 sp54;
    s32 sp58;
    s32 sp68;
    s32 sp78;
    s32 sp7C;
    s32 sp80;
    s32 sp84;
    s32 sp88;
    s32 sp8C;
    s32 sp90;
    s32 sp94;
    ? sp98;
    MATRIX *temp_s0;
    s32 *var_a1;
    s32 temp_a0;
    s32 temp_a1;
    s32 temp_a3;
    s32 temp_s4;
    s32 temp_v0;
    s32 temp_v1_2;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a0_3;
    s32 var_s0_3;
    s32 var_s1;
    s32 var_s1_3;
    s32 var_s1_4;
    s32 var_s1_5;
    s32 var_s1_6;
    s32 var_s2;
    s32 var_s2_2;
    s32 var_v0;
    s32 var_v0_2;
    u32 temp_v1;
    u32 var_s3;
    void *var_s0;
    void *var_s0_2;
    void *var_s0_4;
    void *var_s0_5;
    void *var_s0_6;
    void *var_s0_7;
    void *var_s0_8;
    void *var_s1_2;

    memset(&sp68, 0, 0xC);
    sp78 = D_800F5104.unk0;
    sp7C = D_800F5104.unk4;
    sp80 = D_800F5104.unk8;
    sp84 = D_800F5104.unkC;
    sp88 = D_800F5104.unk10;
    sp8C = D_800F5104.unk14;
    sp90 = D_800F5104.unk18;
    sp94 = D_800F5104.unk1C;
    if (D_801C361C == NULL) {
        printf(D_800F5124);
        return;
    }
    D_801C3874 = 0;
    func_801642A8(arg0, 0, &sp68, arg1, NULL);
    D_801BF968.unk0 = sp78;
    D_801BF968.unk4 = sp7C;
    D_801BF968.unk8 = sp80;
    D_801BF968.unkC = sp84;
    D_801BF968.unk10 = sp88;
    D_801BF968.unk14 = sp8C;
    D_801BF968.unk18 = sp90;
    D_801BF968.unk1C = sp94;
loop_3:
    if (func_80164358(&sp48) >= 0) {
        temp_v1 = sp48->unk0 & 0xF;
        switch (temp_v1) {
        case 0:
            var_s3 = (u16) sp48->unk0 >> 4;
            if ((u16) sp48->unk10 >= 0x600U) {
                sp48->unk10 = 0U;
            }
            func_80166340(sp48);
            break;
        case 14:
            var_s3 = (u16) sp48->unk0 >> 4;
            func_801642A8(sp48->unk4, sp4C, &sp50, sp5C, sp60);
            break;
        case 1:
            var_s2 = 0;
            var_s3 = (u16) sp48->unk0 >> 4;
            if (sp48->unk3 & 0x7F) {
                var_s0 = sp48;
                do {
                    temp_a0 = var_s0->unk18;
                    var_s0 += 4;
                    func_801642A8(temp_a0, sp4C, &sp50, sp5C, sp48);
                    var_s2 += 1;
                } while (var_s2 < (sp48->unk3 & 0x7F));
            }
            break;
        case 2:
            var_s1 = 0;
            var_s3 = (u16) sp48->unk0 >> 4;
            if (sp48->unk3 & 0x7F) {
                var_s0_2 = sp48;
                do {
                    var_s1 += 1;
                    func_801642A8(var_s0_2->unk18, sp4C, &sp50, sp5C, sp60);
                    var_s0_2 += 0xC;
                } while (var_s1 < (sp48->unk3 & 0x7F));
            }
            break;
        case 3:
            var_s3 = (u16) sp48->unk0 >> 4;
            if (sp48->unk12 == 1) {
                func_8016CFF4(sp48);
            }
            var_s0_3 = 0;
            if (sp48->unkB != 0) {
                var_s1_2 = sp48;
                do {
                    var_s0_3 += 1;
                    func_801642A8(var_s1_2->unk20, sp4C, &sp50, sp5C, sp60);
                    var_s1_2 += 4;
                } while (var_s0_3 < (s32) sp48->unkB);
            }
            break;
        case 4:
            sp50 += sp48->unk4;
            sp54 += sp48->unk8;
            var_s2_2 = 0;
            sp58 += sp48->unkC;
            var_s3 = (u16) sp48->unk0 >> 4;
            if (sp48->unk3 & 0x7F) {
                var_s0_4 = sp48;
                do {
                    var_s2_2 += 1;
                    func_801642A8(var_s0_4->unk10, sp4C, &sp50, sp5C, sp60);
                    var_s0_4 += 4;
                } while (var_s2_2 < (sp48->unk3 & 0x7F));
            }
            break;
        case 5:
            temp_a3 = sp50 + sp48->unk18;
            sp50 = temp_a3;
            temp_s0 = sp48 + 4;
            temp_v1_2 = sp54 + sp48->unk1C;
            sp54 = temp_v1_2;
            var_s3 = (u16) sp48->unk0 >> 4;
            sp38 = temp_a3;
            sp3C = temp_v1_2;
            temp_v0 = sp58 + sp48->unk20;
            sp58 = temp_v0;
            sp40 = temp_v0;
            mathMulVec(temp_s0, (VECTOR *) &sp38, (VECTOR *) &sp50);
            func_8015A01C(temp_s0, &sp98);
            var_s1_3 = 0;
            SetRotMatrix((sp4C << 5) + &D_801BF968);
            func_80164CA8(&sp98, (D_801C3874 << 5) + (&D_801BF968 + 0x20));
            temp_s4 = D_801C3874 + 1;
            if (sp48->unk3 & 0x7F) {
                var_s0_5 = sp48;
                do {
                    var_s1_3 += 1;
                    func_801642A8(var_s0_5->unk24, temp_s4, &sp50, sp5C, sp60);
                    var_s0_5 += 4;
                } while (var_s1_3 < (sp48->unk3 & 0x7F));
            }
            break;
        case 8:
        case 10:
            var_s3 = (u16) sp48->unk0 >> 4;
            break;
        case 13:
            var_s3 = (u16) sp48->unk0 >> 4;
            if (var_s3 == 0x191) {
                sp50 += sp48->unk50;
                sp54 += sp48->unk54;
                sp58 += sp48->unk58;
            }
            break;
        case 9:
            var_s1_4 = 0;
            var_s3 = (u16) sp48->unk0 >> 4;
            if (sp48->unk3 & 0x7F) {
                var_s0_6 = sp48;
                do {
                    var_s1_4 += 1;
                    func_801642A8(var_s0_6->unkC, sp4C, &sp50, sp5C, sp60);
                    var_s0_6 += 4;
                } while (var_s1_4 < (sp48->unk3 & 0x7F));
            }
            break;
        case 11:
            var_s3 = (u16) sp48->unk0 >> 4;
            func_801642A8(sp48->unk4, sp4C, &sp50, sp5C, sp60);
            func_801642A8(sp48->unk8, sp4C, &sp50, sp5C, sp60);
            break;
        case 12:
            var_a0 = sp5C - sp48->unk4;
            var_s3 = 0;
            if (var_a0 < 0) {
                if (var_a0 < 0) {
                    var_a0 = -var_a0;
                }
                sp50 <<= var_a0;
                sp58 <<= var_a0;
                var_v0 = sp54 << var_a0;
                goto block_46;
            }
            if (var_a0 > 0) {
                sp50 = sp50 >> var_a0;
                sp58 = sp58 >> var_a0;
                var_v0 = sp54 >> var_a0;
block_46:
                sp54 = var_v0;
            }
            var_s1_5 = 0;
            if (sp48->unk3 & 0x7F) {
                var_s0_7 = sp48;
                do {
                    var_s1_5 += 1;
                    func_801642A8(var_s0_7->unk8, sp4C, &sp50, sp48->unk4, sp60);
                    var_s0_7 += 4;
                } while (var_s1_5 < (sp48->unk3 & 0x7F));
            }
            break;
        case 15:
            var_s1_6 = 0;
            var_s3 = (u16) sp48->unk0 >> 4;
            if (sp48->unk3 & 0x7F) {
                var_s0_8 = sp48;
                do {
                    var_s1_6 += 1;
                    func_801642A8(var_s0_8->unkC, sp4C, &sp50, sp5C, sp60);
                    var_s0_8 += 4;
                } while (var_s1_6 < (sp48->unk3 & 0x7F));
            }
            break;
        case 6:
            var_s3 = 0;
            break;
        default:
            var_s3 = 0;
            printf(D_800F5158, sp48->unk0 & 0xF);
            break;
        }
        if (var_s3 != 0) {
            temp_a1 = sp5C - arg1;
            if (temp_a1 < 0) {
                var_a0_2 = temp_a1;
                if (temp_a1 < 0) {
                    var_a0_2 = -var_a0_2;
                }
                sp18 = sp50 << var_a0_2;
                sp20 = sp58 << var_a0_2;
                sp1C = sp54 << var_a0_2;
            } else if (temp_a1 > 0) {
                sp18 = sp50 >> temp_a1;
                sp20 = sp58 >> temp_a1;
                sp1C = sp54 >> temp_a1;
            } else {
                sp18 = sp50;
                sp1C = sp54;
                sp20 = sp58;
            }
            if (((s32) sp48->unk0 & 0xF) == 5) {
                if (temp_a1 < 0) {
                    var_a0_3 = temp_a1;
                    if (temp_a1 < 0) {
                        var_a0_3 = -var_a0_3;
                    }
                    sp38 <<= var_a0_3;
                    sp40 <<= var_a0_3;
                    var_v0_2 = sp3C << var_a0_3;
                    goto block_72;
                }
                if (temp_a1 > 0) {
                    sp38 = sp38 >> temp_a1;
                    sp40 = sp40 >> temp_a1;
                    var_v0_2 = sp3C >> temp_a1;
block_72:
                    sp3C = var_v0_2;
                }
                var_a1 = &sp38;
            } else {
                var_a1 = &sp18;
            }
            mathMulVec((sp4C << 5) + &D_801BF968, (VECTOR *) var_a1, &sp28);
            arg2(var_s3, sp48, (sp4C << 5) + &D_801BF968, &sp28, sp60);
        }
        goto loop_3;
    }
}
