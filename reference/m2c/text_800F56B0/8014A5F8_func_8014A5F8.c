/* m2c reference for func_8014A5F8 @ 8014A5F8 (1137 words). Generated; not compiled or validated. */
? func_800FE250(void *, ?);                         /* extern */
s32 func_801129F4(void *, void *, void *, s16);     /* extern */
void *func_8011D40C(?, ?, void *, ?);               /* extern */
s32 func_8012340C(void *, u16 **);                  /* extern */
void *func_801244FC(void *, s32);                   /* extern */
s32 func_801250C8(void *, u16 **);                  /* extern */
? func_80125518(? *, ?, ?, ?);                      /* extern */
? func_80130984(void *, void *);                    /* extern */
s32 func_8014B7BC(u32);                             /* extern */
? func_80150E7C(void *, s32);                       /* extern */
? func_80153E34(void *, void *, u16 **, ?);         /* extern */
? func_8015A05C(void *, void *);                    /* extern */
? func_801640EC(void *);                            /* extern */
s32 func_8016B6DC(?, s32);                          /* extern */
s16 func_80178A1C();                                /* extern */
extern ? D_80180D1C;
static void *D_801C34EC = NULL;

s32 func_8014A5F8(void *arg0, void *arg1) {
    ? var_a3;
    s16 temp_v0_6;
    s16 var_v0;
    s16 var_v0_2;
    s16 var_v0_5;
    s16 var_v1_4;
    s16 var_v1_8;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s0_3;
    s32 temp_v0_2;
    s32 temp_v0_7;
    s32 var_a0;
    s32 var_s0;
    s32 var_s4;
    s32 var_v0_3;
    s32 var_v0_6;
    s32 var_v1;
    s32 var_v1_6;
    s32 var_v1_7;
    s8 temp_v1_5;
    u16 **var_a2;
    u16 var_v0_4;
    u16 var_v0_7;
    u16 var_v1_2;
    u16 var_v1_3;
    u16 var_v1_5;
    u32 temp_v1;
    u32 temp_v1_4;
    void *temp_a0;
    void *temp_a1;
    void *temp_a1_2;
    void *temp_a1_3;
    void *temp_a1_4;
    void *temp_v0;
    void *temp_v0_3;
    void *temp_v0_4;
    void *temp_v0_5;
    void *temp_v0_8;
    void *temp_v1_10;
    void *temp_v1_11;
    void *temp_v1_2;
    void *temp_v1_3;
    void *temp_v1_6;
    void *temp_v1_7;
    void *temp_v1_8;
    void *temp_v1_9;
    void *var_a0_2;
    void *var_a1;
    void *var_a2_2;

    arg1->unk28 = 0;
    temp_s0 = arg1->unk1C->unk280;
    arg1->unk24 = func_8014B7BC(arg1->unk20);
    arg1->unk46 = 0xF0;
    arg1->unk4A = 0x50;
    arg1->unk3A = 5;
    arg1->unk34 = 0;
    arg1->unk3C = 0;
    arg1->unk3E = 0;
    arg1->unk14->unk48 = 0;
    arg1->unk54 = 0;
    arg1->unk62 = 0;
    arg1->unk63 = 0;
    temp_v1 = arg1->unk20;
    var_s4 = 1;
    switch (temp_v1) {                              /* switch 1 */
    case 0:                                         /* switch 1 */
        arg1->unk48 = 4U;
        arg1->unk38 = 0x35U;
        arg1->unk44 = (u16) ((arg1->unk61 * 0x14) + 0x64);
        var_v1 = 0;
        if (arg1->unk1C != NULL) {
            var_v1 = arg1->unk1C->unk2A3 != 0;
        }
        if (var_v1 != 0) {
            arg1->unk38 = (u16) (arg1->unk38 * 2);
            arg1->unk44 = (u16) (arg1->unk44 + 0xA);
            var_v0 = 0xFA;
        } else {
            var_v0 = 0x96;
        }
        arg1->unk54 = var_v0;
        temp_v0 = arg1->unk14;
        temp_v0->unk24 = (s32) (temp_v0->unk24 + 0x28);
        if ((arg1->unk5E != 0) && (func_801250C8(arg1->unk14 + 0x1C, arg1->unk18 + 0x1C) >= 0x641)) {
            var_v0_2 = arg1->unk14->unk14 - 0xE3;
block_92:
            arg1->unk14->unk14 = var_v0_2;
        }
block_93:
        func_8015A05C(arg1->unk14 + 0x14, arg1->unk14 + 0x28);
        break;
    case 1:                                         /* switch 1 */
        arg1->unk28 = 3;
        arg1->unk4E = 0x46U;
        arg1->unk48 = 0x14U;
        arg1->unk38 = 0x48U;
        arg1->unk44 = 0U;
        if (arg1->unk1C->unk7C0 == 0xE0) {
            arg1->unk44 = 0x1EU;
            arg1->unk24 = 1;
        }
        break;
    case 2:                                         /* switch 1 */
        arg1->unk28 = 2;
        var_v1_2 = 3;
        if (arg1->unk61 != 0) {
            var_v1_2 = 0x2B;
        }
        arg1->unk4E = var_v1_2;
        func_80125518(&D_80180D1C, 0x43, -0x50, 0x13);
        D_80180D1C.unk10 = 1;
        arg1->unk10 = func_801129F4(arg1->unk14 + 0x1C, arg1->unk14 + 0x28, NULL, (s16) arg1->unk4E);
        func_80125518(&D_80180D1C, -0x43, -0x50, 0x13);
        D_80180D1C.unk10 = 1;
        arg1->unk48 = 0xAU;
        arg1->unk38 = 0x3CU;
        arg1->unk44 = (u16) (0x1E << arg1->unk61);
        if (arg1->unk5E != 0) {
            temp_v0_2 = func_801250C8(arg1->unk14 + 0x1C, arg1->unk18 + 0x1C);
            if (temp_v0_2 >= 0xC81) {
                var_v0_2 = arg1->unk14->unk14 - 0x11C;
                goto block_92;
            }
            var_v0_3 = temp_v0_2;
            if (temp_v0_2 >= 0x4B1) {
                temp_a1 = arg1->unk14;
                if (var_v0_3 < 0) {
                    var_v0_3 += 7;
                }
                temp_a1->unk14 = (u16) (temp_a1->unk14 - (((var_v0_3 >> 7) << 0xC) / 360));
            }
            goto block_93;
        }
        break;
    case 3:                                         /* switch 1 */
        arg1->unk28 = 2;
        var_v1_3 = 0x40;
        if (arg1->unk61 != 0) {
            var_v1_3 = 0x41;
        }
        arg1->unk4E = var_v1_3;
        if (arg1->unk1C->unkBA != 0) {
            func_80125518(&D_80180D1C, 0, -0x60, 0);
            D_80180D1C.unk10 = 1;
            var_v1_4 = 0x64;
            if (arg1->unk61 != 0) {
                var_v1_4 = 0xC8;
            }
        } else {
            func_80125518(&D_80180D1C, 0, 0x50, 0);
            D_80180D1C.unk10 = 1;
            var_v1_4 = -0x64;
            if (arg1->unk61 != 0) {
                var_v1_4 = -0xC8;
            }
        }
        D_80180D1C.unk8 = var_v1_4;
        D_80180D1C.unk10 = 1;
        D_80180D1C.unkE = 2;
        D_80180D1C.unkC = 8;
        D_80180D1C.unk10 = 1;
        D_80180D1C.unkF = 5;
        arg1->unk46 = 0xB4;
        arg1->unk48 = 1U;
        arg1->unk38 = 0U;
        arg1->unk44 = 0U;
        arg1->unk4A = 0xA0;
        break;
    case 4:                                         /* switch 1 */
        arg1->unk28 = 2;
        arg1->unk4E = 0U;
        D_80180D1C.unkE = 2;
        D_80180D1C.unk10 = 1;
        D_80180D1C.unkC = 0x18;
        func_80125518(&D_80180D1C, 0, -0x28, 0);
        D_80180D1C.unk10 = 1;
        var_v0_4 = 1;
        if (D_801C34EC->unk11D2C == 0) {
            var_v0_4 = 5;
        }
        arg1->unk48 = var_v0_4;
        arg1->unk38 = (u16) ((((arg1->unk61 & 0xFF) * 0x320) / 60) + 0x2E);
        arg1->unk44 = (u16) (0x32 << arg1->unk61);
        temp_a1_2 = arg1->unk14;
        temp_a1_2->unk18 = (u16) (temp_a1_2->unk18 + ((((rand() & 0x1F) - 0xF) << 0xC) / 360));
        break;
    case 5:                                         /* switch 1 */
        arg1->unk28 = 3;
        var_v1_5 = 0x17;
        if (arg1->unk61 != 0) {
            var_v1_5 = 0x16;
        }
        arg1->unk4E = var_v1_5;
        arg1->unk48 = 6U;
        arg1->unk38 = 0x42U;
        arg1->unk44 = (u16) ((arg1->unk61 & 0xFF) * 0x64);
        break;
    case 6:                                         /* switch 1 */
        arg1->unk46 = 0xE10;
        arg1->unk48 = 0x19U;
        arg1->unk3A = 1;
        arg1->unk38 = 0x10U;
        arg1->unk44 = 0x14U;
        temp_v1_2 = arg1->unk14;
        temp_v1_2->unk14 = (u16) (temp_v1_2->unk14 - 0x11C);
        if ((temp_s0 << 0x10) != 0) {
            arg1->unk32 = (s16) (temp_s0 + 0x10);
        }
        arg1->unk34 = 0x10;
        if (func_8016B6DC(0x10, arg1->unk1C->unk750) & 0xFF) {
            temp_v0_3 = arg1->unk14;
            temp_v0_3->unk18 = (u16) (temp_v0_3->unk18 + 0x800);
            func_801640EC(arg1->unk14 + 0x18);
        }
        func_8015A05C(arg1->unk14 + 0x14, arg1->unk14 + 0x28);
        arg1->unk14->unk48 = 1;
        var_a3 = -0x20;
block_106:
        func_80125518(arg1->unk14 + 0x4C, 0, 0, var_a3);
        break;
    case 7:                                         /* switch 1 */
        arg1->unk28 = 3;
        arg1->unk4E = 0xBU;
        arg1->unk48 = 0x28U;
        arg1->unk38 = (u16) ((((arg1->unk61 & 0xFF) * 0x190) / 60) + 0x35);
        arg1->unk44 = 0x32U;
        temp_v0_4 = arg1->unk1C;
        if (temp_v0_4 != NULL) {
            temp_s0_2 = temp_v0_4->unk7B8;
            if (temp_s0_2 == 1) {
                temp_v1_3 = arg1->unk14;
                temp_v1_3->unk14 = (u16) (temp_v1_3->unk14 - 0x38);
                arg1->unk24 = 3;
                arg1->unk46 = 0x708;
                func_80130984(arg1->unk1C, arg1);
                if (arg1->unk61 != 0) {
                    func_800FE250(arg1->unk1C, 1);
                    arg1->unk1C->unk8B = (s8) temp_s0_2;
                    arg1->unk1C->unk192 = 0x708;
                }
            }
        } else {
            arg1->unk32 = 0xA;
            arg1->unk48 = 0xAU;
        }
        arg1->unk14->unk48 = 2;
        func_80125518(arg1->unk14 + 0x4C, 0, 0x50, 0);
        func_80125518(arg1->unk14 + 0x54, 0, -0x50, 0);
        break;
    case 8:                                         /* switch 1 */
        arg1->unk46 = 0xB4;
        arg1->unk48 = 2U;
        arg1->unk38 = 0x5DU;
        arg1->unk44 = 0U;
        if (arg1->unk1C == NULL) {
            arg1->unk48 = 1U;
        }
        break;
    case 9:                                         /* switch 1 */
        if (arg1->unk1C != NULL) {
            var_v1_6 = 0;
            if ((arg1->unk18 != NULL) && ((u32) ((u16) **arg1->unk18 >> 4) < 0x120U)) {
                var_v1_6 = func_801244FC(D_801C34EC, func_8012340C(D_801C34EC, arg1->unk18))->unk8B == 0;
            }
            if (var_v1_6 != 0) {
                temp_v0_5 = func_801244FC(D_801C34EC, func_8012340C(D_801C34EC, arg1->unk18));
                temp_v0_5->unk82E = 0;
                if ((temp_v0_5->unk7DC >= 0x3E9) && (arg1->unk1C->unk7B8 == 1)) {
                    temp_v1_4 = D_801C34EC->unk12688;
                    switch (temp_v1_4) {            /* switch 2 */
                    case 0:                         /* switch 2 */
                    case 1:                         /* switch 2 */
                    case 2:                         /* switch 2 */
                        var_s0 = 0xF;
                        break;
                    case 3:                         /* switch 2 */
                    case 5:                         /* switch 2 */
                    case 6:                         /* switch 2 */
                        var_s0 = 7;
                        break;
                    default:                        /* switch 2 */
                        var_s0 = 3;
                        break;
                    }
                    temp_v1_5 = rand() & var_s0;
                    if (temp_v1_5 == 1) {
                        arg1->unk1C->unk82E = temp_v1_5;
                    }
                }
                var_a2 = arg1->unk18;
            } else {
                var_a2 = NULL;
            }
            func_80153E34(arg0, arg1->unk1C, var_a2, 9);
        }
        arg1->unk46 = 0;
        break;
    case 10:                                        /* switch 1 */
        arg1->unk48 = 5U;
        var_v1_7 = arg1->unk1C->unk20C;
        temp_v0_6 = func_80178A1C();
        if (var_v1_7 < 0) {
            var_v1_7 = -var_v1_7;
        }
        arg1->unk38 = (u16) (((s32) (var_v1_7 / temp_v0_6) >> 6) + 0x28);
        arg1->unk44 = 0x14U;
        break;
    case 11:                                        /* switch 1 */
        arg1->unk48 = 0xCU;
        arg1->unk38 = 0U;
        arg1->unk44 = 0U;
        arg1->unk14->unk48 = 1;
        func_80125518(arg1->unk14 + 0x4C, 0, 0, -8);
        arg1->unk46 = 0x4B0;
        break;
    case 12:                                        /* switch 1 */
        arg1->unk46 = 0;
        arg1->unk48 = 3U;
        arg1->unk38 = 0U;
        arg1->unk44 = 0U;
        break;
    case 14:                                        /* switch 1 */
        arg1->unk28 = 2;
        arg1->unk4E = 0x32U;
        D_80180D1C.unkE = 4;
        D_80180D1C.unk10 = 1;
        func_80125518(&D_80180D1C, 0, 0x78, 0);
        D_80180D1C.unk8 = -0x96;
        D_80180D1C.unkC = 8;
        D_80180D1C.unk10 = 1;
        D_80180D1C.unkF = 5;
        arg1->unk46 = 0xB4;
        arg1->unk48 = 0xFU;
        arg1->unk38 = 0U;
        arg1->unk44 = 0U;
        arg1->unk4A = 0xA0;
        (arg0 + arg1->unk1C->unk78)->unk17D8 = 1;
        break;
    case 15:                                        /* switch 1 */
        arg1->unk28 = 2;
        func_80125518(&D_80180D1C, 0, -0x10, 0);
        D_80180D1C.unk10 = 1;
        temp_v1_6 = arg1->unk1C;
        arg1->unk4E = 0x25U;
        arg1->unk48 = 3U;
        arg1->unk38 = 0x35U;
        arg1->unk44 = 0U;
        if ((arg0 + temp_v1_6->unk78)->unk17DC == 0) {
            func_80150E7C(arg0, temp_v1_6->unk78);
        }
        if (arg0->unk1760 != 0) {
            arg1->unk3C = 0;
            arg1->unk40 = -0xB;
            arg1->unk3E = 0x16;
            arg1->unk42 = 0xB;
            temp_v1_7 = arg1->unk14;
            temp_v1_7->unk14 = (u16) (temp_v1_7->unk14 + 0x2D);
            var_v0_5 = arg1->unk14->unk18 - 0x22;
        } else {
            arg1->unk3C = 0;
            arg1->unk40 = 0xB;
            arg1->unk3E = 0x16;
            arg1->unk42 = -0xB;
            temp_v1_8 = arg1->unk14;
            temp_v1_8->unk14 = (u16) (temp_v1_8->unk14 - 0x33);
            var_v0_5 = arg1->unk14->unk18 + 0x22;
        }
        arg1->unk14->unk18 = var_v0_5;
        goto block_93;
    case 19:                                        /* switch 1 */
        arg1->unk28 = 2;
        D_80180D1C.unkC = 0x50;
        D_80180D1C.unk10 = 1;
        arg1->unk4E = 0x20U;
        arg1->unk48 = 0xFU;
        arg1->unk38 = 0x48U;
        arg1->unk44 = 0x3CU;
        if ((arg1->unk5E != 0) && (func_801250C8(arg1->unk14 + 0x1C, arg1->unk18 + 0x1C) >= 0x641)) {
            var_v0_2 = arg1->unk14->unk14 - 0xE3;
            goto block_92;
        }
        break;
    case 21:                                        /* switch 1 */
        arg1->unk48 = 0x10U;
        arg1->unk38 = 0x42U;
        arg1->unk44 = 0x1EU;
        if (arg1->unk5E != 0) {
            temp_v0_7 = func_801250C8(arg1->unk14 + 0x1C, arg1->unk18 + 0x1C);
            var_v0_6 = temp_v0_7;
            if (temp_v0_7 >= 0xC81) {
                temp_v1_9 = arg1->unk14;
                temp_v1_9->unk14 = (u16) (temp_v1_9->unk14 - 0x11C);
            } else {
                temp_a1_3 = arg1->unk14;
                if (var_v0_6 < 0) {
                    var_v0_6 += 7;
                }
                temp_a1_3->unk14 = (u16) (temp_a1_3->unk14 - (((var_v0_6 >> 7) << 0xC) / 360));
            }
            func_8015A05C(arg1->unk14 + 0x14, arg1->unk14 + 0x28);
            if ((**arg1->unk18 & 0xFFF0) == 0x2120) {
                arg1->unk44 = (u16) ((s16) arg1->unk44 * 3);
            }
        }
        break;
    case 22:                                        /* switch 1 */
        arg1->unk28 = 2;
        arg1->unk4E = 0x2DU;
        arg1->unk48 = 0x19U;
        arg1->unk38 = 0x50U;
        arg1->unk44 = 0U;
        break;
    case 23:                                        /* switch 1 */
        arg1->unk28 = 2;
        arg1->unk4E = 0x2BU;
        arg1->unk48 = 0x14U;
        arg1->unk38 = 0x35U;
        arg1->unk44 = 0x64U;
        var_v0_2 = arg1->unk14->unk14 - 0x71;
        goto block_92;
    case 24:                                        /* switch 1 */
        arg1->unk46 = 0xB4;
        if (arg1->unk1C != NULL) {
            temp_a0 = arg1->unk1C;
            arg1->unk48 = 0x14U;
            arg1->unk44 = 0x32U;
            arg1->unk24 = 2;
            if ((temp_a0->unk7B8 == 1) && (temp_a0->unk7C0 == 0xF0) && (arg1->unk18 != NULL)) {
                temp_v1_10 = arg1->unk14;
                temp_v1_10->unk14 = (u16) (temp_v1_10->unk14 + 0x71);
                func_8015A05C(arg1->unk14 + 0x14, arg1->unk14 + 0x28);
            }
        } else {
            arg1->unk48 = 1U;
            arg1->unk44 = 0U;
        }
        arg1->unk38 = 0x5DU;
        break;
    case 25:                                        /* switch 1 */
        arg1->unk46 = 0xB4;
        arg1->unk48 = 1U;
        arg1->unk38 = 0xDU;
        arg1->unk44 = 0U;
        temp_v0_8 = func_8011D40C(0, 0x14, arg1->unk14, 0x44);
        temp_v0_8->unkC = 0;
        temp_v0_8->unk10 = 0;
        temp_v0_8->unk14 = 4;
        temp_v0_8->unk33 = 3;
        temp_v0_8->unk34 = 0xA;
        temp_v0_8->unk35 = 0;
        temp_v0_8->unk36 = 0;
        temp_v0_8->unk37 = 2;
        temp_v0_8->unk38 = 0;
        break;
    case 26:                                        /* switch 1 */
        arg1->unk48 = 5U;
        temp_s0_3 = D_801C34EC->unk110EC;
        arg1->unk38 = (u16) (temp_s0_3 + ((((rand() & 0x7F) * 8) / 60) + 0xA));
        arg1->unk4A = 0xF0;
        temp_a1_4 = arg1->unk14;
        temp_a1_4->unk14 = (u16) (temp_a1_4->unk14 - ((((rand() & 0x1F) + 0xA) << 0xC) / 360));
        if (rand() & 1) {
            var_v1_8 = arg1->unk14->unk18 + (((rand() & 0x1F) << 0xC) / 360);
        } else {
            var_v1_8 = arg1->unk14->unk18 - (((rand() & 0x1F) << 0xC) / 360);
        }
        arg1->unk14->unk18 = var_v1_8;
        arg1->unk34 = 5;
        func_8015A05C(arg1->unk14 + 0x14, arg1->unk14 + 0x28);
        arg1->unk14->unk48 = 1;
        var_a3 = 0;
        goto block_106;
    default:                                        /* switch 1 */
        var_s4 = 0;
        break;
    }
    if (arg1->unk61 != 0) {
        if (arg1->unk20 != 8) {
            arg1->unk48 = (u16) (arg1->unk48 + ((s32) (arg1->unk48 << 0x10) >> 0x11));
        } else {
            arg1->unk48 = (u16) (arg1->unk61 + arg1->unk48);
        }
    }
    var_a0 = 0;
    if (arg1->unk28 == 2) {
        if ((arg1->unk20 == 3) || (arg1->unk20 == 0xE)) {
            var_a0 = 1;
        }
        var_a2_2 = NULL;
        if (var_a0 != 0) {
            if (arg1->unk1C != NULL) {
                var_a0_2 = arg1->unk1C + 0x1E4;
                var_a1 = arg1->unk1C->unk738 + 0x28;
                var_a2_2 = arg1->unk1C + 0x208;
                goto block_120;
            }
        } else {
            var_a0_2 = arg1->unk14 + 0x1C;
            var_a1 = arg1->unk14 + 0x28;
block_120:
            arg1->unkC = func_801129F4(var_a0_2, var_a1, var_a2_2, (s16) arg1->unk4E);
        }
    }
    if (arg1->unk1C != NULL) {
        temp_v1_11 = arg1->unk1C;
        var_v0_7 = 0x1F4;
        if (temp_v1_11->unk1A0 == 0) {
            if (temp_v1_11->unk1A3 != 0) {
                var_v0_7 = arg1->unk48 * 4;
                goto block_125;
            }
        } else {
block_125:
            arg1->unk48 = var_v0_7;
        }
    }
    return var_s4;
}
