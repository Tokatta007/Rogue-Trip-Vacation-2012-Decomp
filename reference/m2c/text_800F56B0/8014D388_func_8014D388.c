/* m2c reference for func_8014D388 @ 8014D388 (1317 words). Generated; not compiled or validated. */
? func_8011BC6C(s32 *, s32 *, s32, ?, s32, s32);    /* extern */
void *func_8011D40C(void *, ?, s32, ?);             /* extern */
s32 func_801233B4(void *, u8);                      /* extern */
void *func_801244FC(void *, s32);                   /* extern */
void *func_80124CBC(void *);                        /* extern */
? func_80124CF4(s32 *, void *, ?, ?, s32);          /* extern */
? func_80124FC8(void *, void *, void *);            /* extern */
? func_801251C0(? *, void *);                       /* extern */
? func_801253C8(s32 *, s32 *);                      /* extern */
? func_801253F4(? *, void *);                       /* extern */
? func_801256B0(? *, ?, ? *, s32 *, void *, s32);   /* extern */
? func_8012A154(s32, ? *, s16, ?, s32, s32);        /* extern */
? func_8013BDCC(void *, ?, ?, ? *);                 /* extern */
s32 func_8013C918(void *, s32);                     /* extern */
? func_8013CAE0(void *, s32, s32 *);                /* extern */
? func_8014245C(void *);                            /* extern */
? func_80148A00(void *, ?);                         /* extern */
? func_80149950(void *, s32);                       /* extern */
? func_8014E81C(s32, void *, void *, void *);       /* extern */
? func_8014EAA8(s32, void *);                       /* extern */
? func_8014F214(s32, s32 *, ? *, ?);                /* extern */
? func_80152BE4(s32, void *, s32, void *, s32);     /* extern */
? func_80153260(s32, s32, s32);                     /* extern */
? func_801547DC(s32, void *);                       /* extern */
? func_801548C8(s32, void *);                       /* extern */
? func_80154918(s32, void *);                       /* extern */
? func_8015A05C(void *, ? *);                       /* extern */
? func_8016408C(void *);                            /* extern */
? func_801683EC(void *, ? *, ?, ? *, s32 *);        /* extern */
? func_8016A274(s16, s16, s32 *, s16, u8 *);        /* extern */
? func_801F71E8(void *, void *);                    /* extern */
extern ? D_801C3100;
extern ? D_801C31CC;
extern s32 D_801C31D4;
static void *D_801C34EC = NULL;
static s32 D_801C34F0 = 0;
static void *D_801C34F4 = NULL;

u8 func_8014D388(s32 arg0, void *arg1) {
    s32 sp18;
    s32 sp1C;
    s32 sp20;
    s32 sp28;
    s32 sp2C;
    s32 sp30;
    ? sp38;
    u8 sp58;
    u8 sp59;
    u16 sp5A;
    s32 sp60;
    ? sp78;
    ? sp200;
    u8 sp208;
    u8 sp210;
    ? *var_s0;
    ? var_a3;
    ? var_a3_2;
    s16 temp_v1;
    s16 var_s2;
    s32 *temp_s0_2;
    s32 *temp_s0_3;
    s32 *temp_s0_4;
    s32 *temp_s1;
    s32 *var_a0_5;
    s32 temp_s2;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a0_3;
    s32 var_a0_4;
    s32 var_a2;
    s32 var_a2_2;
    s32 var_s0_2;
    s32 var_s1;
    s32 var_s1_2;
    s32 var_s1_3;
    s32 var_s6;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v1;
    s32 var_v1_2;
    s32 var_v1_3;
    u8 var_v0;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a2;
    void *temp_a2_2;
    void *temp_s0;
    void *temp_s3;
    void *temp_s7;
    void *temp_v0;
    void *var_s4;

    var_s4 = NULL;
    sp208 = 0;
    sp210 = 0;
    temp_s3 = arg1->unk14;
    temp_s7 = D_801C34EC + 0x10FF4;
    if (((u32) (arg1->unk20 - 6) >= 2U) || (var_v0 = 0, (((s16) arg1->unk4C < 7) == 0))) {
        var_a0 = 0;
        switch (arg1->unk20) {                      /* switch 1; irregular */
        case 6:                                     /* switch 1 */
            if (arg1->unk62 != 0) {
                if (((arg1->unk20 == 0xB) && (arg1->unk62 == 0)) || (arg1->unk20 == 7)) {
                    goto block_7;
                }
            } else {
            case 7:                                 /* switch 1 */
block_7:
                var_a0 = 1;
            }
            break;
        }
        var_a0_2 = 0;
        if (var_a0 != 0) {
            sp18 = temp_s3->unk1C - arg1->unk0;
            sp1C = temp_s3->unk20 - arg1->unk4;
            sp20 = temp_s3->unk24 - arg1->unk8;
            func_8015A05C(temp_s3 + 0x14, &sp38);
            func_801683EC(temp_s3, &sp78, 1, &sp38, &sp18);
            sp58 = 0;
            var_s1 = 0;
            if (temp_s3->unk48 > 0) {
                var_s0 = &sp78;
                var_s6 = 0;
                do {
                    if (var_s0->unk4 != 0) {
                        temp_v1 = var_s0->unk22;
                        if ((temp_v1 >= 0x190) && (temp_v1 < 0x1A3)) {
                            var_s0->unk4 = 0;
                        }
                        if (var_s0->unk4 != 0) {
                            if (var_s0->unk1C == 8) {
                                if (arg1->unk24 == 3) {
                                    temp_s3->unk1C = (s32) (temp_s3->unk1C + ((s32) (-var_s0->unk8 * (var_s0->unk14 + 5)) >> 0xC));
                                    temp_s3->unk20 = (s32) (temp_s3->unk20 + ((s32) (-var_s0->unkC * (var_s0->unk14 + 5)) >> 0xC));
                                    temp_s3->unk24 = (s32) (temp_s3->unk24 + ((s32) (-var_s0->unk10 * (var_s0->unk14 + 5)) >> 0xC));
                                    func_801256B0(&sp78, 0, &sp200, &sp18, arg1, 0x78);
                                    func_801251C0(&sp200, temp_s3 + 0x14);
                                    sp58 = 0;
                                    var_s0->unk4 = 0;
                                    goto block_27;
                                }
                                goto block_20;
                            }
block_20:
                            sp58 = 1;
                            sp5A = (u16) var_s0->unk22;
                            sp59 = var_s0->unk20;
                            func_801253C8(&sp60, var_s6 + &sp78 + 8);
                            if (var_s1 == 0) {
                                if (arg1->unk20 == 0xB) {
                                    var_a0_3 = 0;
                                    if (sp9A != arg1->unk1C->unk7C0) {
                                        var_a0_3 = arg1->unk62 == 0;
                                    }
                                    if (var_a0_3 != 0) {
                                        func_8014F214(arg0, &sp18, &sp78, 0);
                                        temp_s3->unk1C = (s32) (temp_s3->unk1C + sp18);
                                        temp_s3->unk20 = (s32) (temp_s3->unk20 + sp1C);
                                        temp_s3->unk24 = (s32) (temp_s3->unk24 + sp20);
                                        arg1->unk62 = 1U;
                                        var_s0 += 0x20;
                                    } else {
                                        goto block_27;
                                    }
                                } else {
                                    func_8014F214(arg0, &sp18, &sp78, 0);
                                    temp_s3->unk1C = (s32) (temp_s3->unk1C + sp18);
                                    temp_s3->unk20 = (s32) (temp_s3->unk20 + sp1C);
                                    temp_s3->unk24 = (s32) (temp_s3->unk24 + sp20);
                                    goto block_27;
                                }
                            } else {
                                goto block_27;
                            }
                        } else {
                            goto block_27;
                        }
                    } else {
block_27:
                        var_s0 += 0x20;
                    }
                    var_s6 += 0x20;
                    var_s1 += 1;
                } while (var_s1 < temp_s3->unk48);
            }
            if (arg1->unk20 == 6) {
                if (sp58 != 0) {
                    if ((sp5A >= 0x10U) && (sp5A < 0x120U)) {
                        func_8014EAA8(arg0, arg1);
                        sp58 = 0;
                    }
                    goto block_34;
                }
                goto block_44;
            }
block_34:
            if (sp58 != 0) {
                if (arg1->unk20 == 0xB) {
                    temp_v1_2 = sp5A & 0xFFFF;
                    if ((temp_v1_2 == 1) || (temp_v1_2 == 0x44C) || (temp_v1_2 == 0x46A) || ((u32) (sp5A - 0x1F4) < 0x149U) || (((s16) arg1->unk4C < 0x3C) && (sp59 == arg1->unk1C->unk7C4))) {
                        sp58 = 0;
                    }
                    D_801C31CC.unk8 = 0x23;
                    temp_a2 = temp_s3 + 0x1C;
                    D_801C31CC.unkC = (s32) arg1->unk63;
                    D_801C3100.unk0 = (s32) temp_s3->unk1C;
                    D_801C3100.unk4 = (s32) temp_a2->unk4;
                    D_801C31CC.unk0 = &D_801C3100;
                    D_801C3100.unk8 = (s32) temp_a2->unk8;
                    func_8013BDCC(D_801C34F4, 0, 0, &D_801C31CC);
                }
            } else {
block_44:
                if ((arg1->unk20 == 0xB) && (arg1->unk62 == 0)) {
                    temp_s3->unk24 = (s32) (temp_s3->unk24 - 0x18);
                }
            }
            goto block_64;
        }
        if ((arg1->unk20 == 0xB) || (arg1->unk20 == 6)) {
            var_a0_2 = 1;
        }
        if (var_a0_2 != 0) {
            func_8016A274(0, 0, temp_s3 + 0x1C, (s16) arg1->unk4A, &sp58);
            if ((arg1->unk20 == 6) && (sp58 != 0) && (sp5A >= 0x10U) && (sp5A < 0x120U)) {
                func_8014EAA8(arg0, arg1);
                sp58 = 0;
            }
            if (((s16) arg1->unk4C < 0x3C) || (sp5A == 1)) {
                if (sp59 == arg1->unk1C->unk7C4) {
                    sp58 = 0;
                }
                if (sp5A == 1) {
                    sp58 = 0;
                }
            }
            goto block_64;
        }
        sp18 = temp_s3->unk1C - arg1->unk0;
        sp1C = temp_s3->unk20 - arg1->unk4;
        sp20 = temp_s3->unk24 - arg1->unk8;
        func_8016A274((s16) arg1->unk50, (s16) arg1->unk52, &sp18, (s16) arg1->unk4A, &sp58);
        if (sp58 != 0) {
            func_801253C8(temp_s3 + 0x1C, &sp18);
            sp208 = 1;
block_64:
            if (sp58 != 0) {
                var_v1 = 0;
                if ((arg1->unk60 != 0) || (arg1->unk5F != 0)) {
                    var_v1 = 1;
                }
                if ((var_v1 != 0) && ((u32) (sp5A - 0x10) < 0x110U)) {
                    var_s4 = func_801244FC(D_801C34EC, func_801233B4(D_801C34EC, sp59));
                    if (var_s4->unk7B8 == 1) {
                        sp58 = 0;
                    }
                }
                if ((sp58 != 0) && (sp5A >= 0x190U) && (sp5A < 0x1A3U)) {
                    sp58 = 0;
                    sp210 = 0;
                }
            }
        }
        if ((arg1->unk20 == 0xE) && (sp58 != 0) && (sp59 == arg1->unk1C->unk7C4)) {
            sp58 = 0;
            sp210 = 0;
        }
        if (arg1->unk20 == 3) {
            if (sp58 != 0) {
                if (rand() & 3) {
                    sp58 = 0;
                }
                goto block_84;
            }
        } else {
block_84:
            if (sp58 != 0) {
                arg1->unk5C = sp5A;
                if (sp5A == 0x460) {
                    var_s0_2 = -1;
                    if (arg1->unk1C != NULL) {
                        var_s0_2 = arg1->unk1C->unk7C8;
                    }
                    temp_s2 = D_801C34EC->unk1270C;
                    var_s1_2 = 0;
                    if (temp_s2 > 0) {
                        do {
                            if (var_s1_2 != var_s0_2) {
                                var_s4 = func_801244FC(D_801C34EC, var_s1_2);
                                if (var_s4->unk542 != 0) {
                                    sp5A = (u16) var_s4->unk7C0;
                                    sp59 = (u8) var_s4->unk7C4;
                                }
                            }
                            var_s1_2 += 1;
                        } while (var_s1_2 < temp_s2);
                    }
                }
                if (sp5A == 0x271) {
                    func_801F71E8(D_801C34EC + 0x11C24, arg1->unk1C);
                }
                temp_v1_3 = sp5A & 0xFFFF;
                if ((temp_v1_3 == 1) || (temp_v1_3 == 0x44C) || (temp_v1_3 == 0x46A) || ((u32) (sp5A - 0x1F4) < 0x149U)) {
                    if (arg1->unk20 == 4) {
                        sp210 = 1;
                        temp_s3->unk24 = (s32) (temp_s3->unk24 + 0x50);
                        func_8011BC6C(temp_s3 + 0x1C, NULL, (rand() & 0x1F) + 0x14, 0x49, 0, 0);
                    } else if (arg1->unk20 == 6) {
                        sp59 = 0;
                        func_801256B0(&sp78, 0, &sp200, &sp60, arg1, 0x78);
                        temp_s0 = temp_s3 + 0x14;
                        func_801251C0(&sp200, temp_s0);
                        func_8015A05C(temp_s0, temp_s3 + 0x28);
                        sp210 = 0;
                        if (sp68 < -0x800) {
                            if ((arg1->unk32 << 0x10) > 0) {
                                var_v0_2 = 0x10 >> arg1->unk63;
                                goto block_107;
                            }
                        } else {
                            var_v0_2 = -(s32) arg1->unk34;
block_107:
                            arg1->unk34 = (u16) var_v0_2;
                        }
                        if (arg1->unk61 != 0) {
                            D_801C31CC.unk8 = 9;
                            D_801C31CC.unk18 = 0x46;
                        } else {
                            D_801C31D4 = 0x23;
                        }
                        temp_a2_2 = temp_s3 + 0x1C;
                        D_801C31CC.unkC = (s32) arg1->unk63;
                        D_801C3100.unk0 = (s32) temp_s3->unk1C;
                        D_801C3100.unk4 = (s32) temp_a2_2->unk4;
                        D_801C31CC.unk0 = &D_801C3100;
                        D_801C3100.unk8 = (s32) temp_a2_2->unk8;
                        func_8013BDCC(D_801C34F4, 0, 0, &D_801C31CC);
                        arg1->unk63 = (u8) (arg1->unk63 + 1);
                    } else {
                        sp210 = 1;
                    }
                }
                if (sp5A >= 0x10U) {
                    var_a0_4 = 0;
                    if (sp59 != 0) {
                        if (arg1->unk20 != 3) {
                            var_a0_4 = (u32) (arg1->unk20 ^ 0xE) > 0U;
                        }
                        if (var_a0_4 != 0) {
                            sp210 = 1;
                        }
                        temp_v0 = func_80124CBC(D_801C34EC);
                        temp_v0->unkC = (void *) (temp_s3 + 0x1C);
                        if (sp5A < 0x120U) {
                            var_s4 = func_801244FC(D_801C34EC, func_801233B4(D_801C34EC, sp59));
                            var_v1_2 = 0;
                            if (var_s4->unk89 != 0) {
                                var_v1_2 = (u32) (arg1->unk20 ^ 0xE) > 0U;
                            }
                            if (var_v1_2 != 0) {
                                func_801548C8(arg0, var_s4);
                            }
                        } else {
                            var_s4 = NULL;
                            if ((sp5A == 0x212) && (temp_s7->unk88 == 1)) {
                                arg1->unk48 = 0xFU;
                                func_80154918(arg0, temp_s7);
                            }
                        }
                        if (var_s4 != NULL) {
                            temp_v0_2 = arg1->unk20;
                            switch (temp_v0_2) {    /* switch 2 */
                            case 1:                 /* switch 2 */
                                if (arg1->unk61 != 0) {
                                    func_801547DC(arg0, var_s4);
                                }
                                break;
                            case 3:                 /* switch 2 */
                            case 4:                 /* switch 2 */
                                func_801547DC(arg0, var_s4);
                                if (arg1->unk20 == 4) {
                                    func_80148A00(var_s4, 3);
                                    if (var_s4->unk820 == 0) {
                                        func_8011BC6C(temp_s3 + 0x1C, NULL, (rand() & 0xF) + 0x14, 0x49, 0, 0);
                                    }
                                }
                                break;
                            case 11:                /* switch 2 */
                                func_8013CAE0(D_801C34F4, 0xE, var_s4 + 0x1E4);
                                func_80148A00(var_s4, 4);
                                break;
                            case 14:                /* switch 2 */
                                var_v1_3 = 0;
                                if (var_s4->unk89 == 0) {
                                    var_v1_3 = var_s4->unk8B == 0;
                                }
                                if (var_v1_3 != 0) {
                                    var_s4->unk89 = 1U;
                                    var_s4->unk184 = 0;
                                    temp_a0 = arg0 + 0x1050;
                                    var_s4->unk74C = temp_a0;
                                    memcpy(temp_a0, arg1, 0x68);
                                    arg1->unk48 = 2U;
                                    var_s4->unk740 = func_8011D40C(var_s4 + 0x244, 0x64, var_s4->unk738, 0x34);
                                    var_s4->unk740->unkC = 0;
                                    var_s4->unk740->unk10 = 0;
                                    var_s4->unk740->unk14 = 4;
                                    var_s4->unk740->unk33 = 3;
                                    var_s4->unk740->unk34 = 5;
                                    var_s4->unk740->unk35 = 0;
                                    var_s4->unk740->unk36 = 0;
                                    var_s4->unk740->unk37 = 3;
                                    var_s4->unk740->unk38 = 0;
                                } else {
                                    goto block_150;
                                }
                                break;
                            default:                /* switch 2 */
                                temp_v0->unk14 = 0;
                                break;
                            }
                        } else {
                            if ((s16) arg1->unk48 >= 0xFB) {
                                arg1->unk48 = 0xFAU;
                            }
                            if ((arg1->unk20 == 0xA) && (sp5A != 0x212)) {
                                arg1->unk48 = 0x64U;
                            }
                            if ((arg1->unk20 == 0xE) && (sp5A == 0x212)) {
                                if (temp_s7->unk88 == 0) {
                                    temp_s7->unk88 = 1U;
                                    temp_s7->unkB0 = 0;
                                    arg1->unk48 = 2U;
                                    temp_s7->unk158 = func_8011D40C(NULL, 0x64, temp_s7->unk13C, 0x34);
                                    temp_s7->unk158->unkC = 0;
                                    temp_s7->unk158->unk10 = 0;
                                    temp_s7->unk158->unk14 = 4;
                                    temp_s7->unk158->unk33 = 3;
                                    temp_s7->unk158->unk34 = 7;
                                    temp_s7->unk158->unk35 = 0;
                                    temp_s7->unk158->unk36 = 0;
                                    temp_s7->unk158->unk37 = 3;
                                    temp_s7->unk158->unk38 = 0;
                                } else {
block_150:
                                    arg1->unk48 = 0U;
                                }
                            }
                        }
                        if (arg1->unk1C != NULL) {
                            temp_v0->unk18 = (s32) arg1->unk1C->unk7C4;
                        } else {
                            temp_v0->unk18 = 0;
                        }
                        func_801253F4(&sp200, arg1);
                        temp_v0->unk10 = arg1;
                        temp_v0->unk20 = 0U;
                        temp_v0->unk21 = 0;
                        func_8012A154(D_801C34F0, &sp200, (s16) arg1->unk48, 0x1D, (s32) sp59, 0);
                        if (temp_v0->unk20 != 0) {
                            func_8014E81C(arg0, arg1, temp_v0, var_s4);
                            sp210 = 0;
                        } else if (var_s4 != NULL) {
                            if (arg1->unk20 == 0x15) {
                                func_80152BE4(arg0, var_s4, var_s4->unk738, temp_s3 + 0x14, arg1->unk1C->unk78);
                            }
                            if (arg1->unk20 == 0x16) {
                                func_80153260(arg0, var_s4->unk738, arg1->unk1C->unk78);
                                func_80148A00(var_s4, 3);
                            }
                            if ((arg1->unk20 == 5) && (var_s4->unk82A != 0)) {
                                func_8014245C(D_801C34EC + 0x10A64);
                                func_80149950(var_s4, arg1->unk1C->unk738);
                            }
                        } else if (sp5A == 0x212) {
                            if (arg1->unk20 == 0x15) {
                                func_80152BE4(arg0, NULL, temp_s7->unk13C, temp_s3 + 0x14, arg1->unk1C->unk78);
                            }
                            if (arg1->unk20 == 0x16) {
                                func_80153260(arg0, temp_s7->unk13C, arg1->unk1C->unk78);
                            }
                        }
                    }
                }
                if (sp210 != 0) {
                    func_801253C8(&sp18, temp_s3 + 0x1C);
                    var_s2 = 0x1E;
                    if ((s16) arg1->unk48 < 0x1F) {
                        var_s2 = (s16) arg1->unk48;
                    }
                    temp_v0_3 = arg1->unk20;
                    switch (temp_v0_3) {            /* switch 3 */
                    case 3:                         /* switch 3 */
                    case 14:                        /* switch 3 */
                        break;
                    case 8:                         /* switch 3 */
                        var_v0_3 = var_s2 >> 4;
                        if (!(rand() & 0xF)) {
                            D_801C31CC.unk8 = 0x29;
                            D_801C31CC.unkC = 0x29;
                            D_801C3100.unk0 = sp18;
                            D_801C3100.unk4 = (s32) sp18.unk4;
                            D_801C31CC.unk0 = &D_801C3100;
                            D_801C31CC.unk4 = (s32) (D_801C31CC.unk4 | 8);
                            D_801C3100.unk8 = (s32) sp18.unk8;
                            func_8013BDCC(D_801C34F4, 0, 0, &D_801C31CC);
                            var_v0_3 = var_s2 >> 4;
                        }
                        var_a0_5 = &sp18;
                        var_a2 = (var_v0_3 + 7) & 0xFFFF;
                        var_a3 = 0x28;
block_185:
                        func_8011BC6C(var_a0_5, NULL, var_a2, var_a3, 0, 0);
                        break;
                    case 19:                        /* switch 3 */
                        D_801C31CC.unk8 = 0x42;
                        temp_s0_2 = temp_s3 + 0x1C;
                        D_801C3100.unk0 = (s32) temp_s3->unk1C;
                        D_801C3100.unk4 = (s32) temp_s0_2->unk4;
                        D_801C31CC.unk0 = &D_801C3100;
                        D_801C3100.unk8 = (s32) temp_s0_2->unk8;
                        func_8013BDCC(D_801C34F4, 0, 0, &D_801C31CC);
                        if (var_s4 != NULL) {
                            func_8011BC6C(temp_s0_2, NULL, 0xF, 6, 0, 0);
                            var_s4->unk86 = 1;
                            var_s4->unk450 = (s32) ((var_s4->unk1F8 + 0x1FF) - (rand() & 0x3FF));
                            func_8016408C(var_s4 + 0x450);
                            var_s4->unk537 = 1;
                            var_s4->unk50C = 0x3C;
                            func_80148A00(var_s4, 3);
                        }
                        var_s1_3 = 0;
                        do {
                            func_80124CF4(&sp18, temp_s3 + 0x1C, 0x7F, 0x7F, 0);
                            var_s1_3 += 1;
                            sp28 = 0x1F - (rand() & 0x3F);
                            sp2C = 0x1F - (rand() & 0x3F);
                            sp30 = 0x14;
                            func_8011BC6C(&sp18, &sp28, 0x28, 0x1F, 0, 0);
                        } while (var_s1_3 < 3);
                        break;
                    case 26:                        /* switch 3 */
                        D_801C31CC.unk8 = 0x50;
                        D_801C34F4->unk2A0 = (s32) (D_801C34F4->unk2A0 + 1);
                        if ((D_801C34F4 + 0x2A0)->unk4 < D_801C34F4->unk2A0) {
                            D_801C34F4->unk2A0 = 1;
                        }
                        D_801C31CC.unkC = (s32) D_801C34F4->unk2A0;
                        D_801C31CC.unk4 = (s32) (D_801C31CC.unk4 | 8);
                        func_8013BDCC(D_801C34F4, 0, 0, &D_801C31CC);
                        temp_s0_3 = temp_s3 + 0x1C;
                        func_8011BC6C(temp_s0_3, NULL, 0xA, 0xE, 0, 0);
                        func_8011BC6C(temp_s0_3, NULL, 0xA, 0x28, 0, 0);
                        var_a0_5 = temp_s0_3;
                        var_a2 = 0x23;
                        var_a3 = 0x1A;
                        goto block_185;
                    default:                        /* switch 3 */
                    case 4:                         /* switch 3 */
                    case 5:                         /* switch 3 */
                    case 6:                         /* switch 3 */
                    case 7:                         /* switch 3 */
                    case 9:                         /* switch 3 */
                    case 10:                        /* switch 3 */
                    case 11:                        /* switch 3 */
                    case 12:                        /* switch 3 */
                    case 13:                        /* switch 3 */
                    case 15:                        /* switch 3 */
                    case 16:                        /* switch 3 */
                    case 17:                        /* switch 3 */
                    case 18:                        /* switch 3 */
                    case 20:                        /* switch 3 */
                    case 21:                        /* switch 3 */
                    case 22:                        /* switch 3 */
                    case 23:                        /* switch 3 */
                    case 24:                        /* switch 3 */
                    case 25:                        /* switch 3 */
                        temp_s1 = var_s4 + 0x1E4;
                        if ((u32) (sp5A - 0x10) < 0x110U) {
                            temp_s0_4 = var_s4 + 0x244;
                            func_8011BC6C(temp_s1, temp_s0_4, 0xC, 6, 0, 0);
                            func_8011BC6C(temp_s1, temp_s0_4, ((var_s2 >> 1) + 3) & 0xFFFF, 0xE, 0, 0);
                            sp18 = (s32) (sp18 + var_s4->unk1E4) >> 1;
                            var_a2_2 = ((var_s2 >> 3) + 1) & 0xFFFF;
                            sp1C = (s32) (sp1C + var_s4->unk1E8) >> 1;
                            var_a3_2 = 0x49;
                            sp20 = (s32) (sp20 + var_s4->unk1EC) >> 1;
                        } else {
                            var_a2_2 = var_s2 & 0xFFFF;
                            var_a3_2 = 5;
                        }
                        func_8011BC6C(&sp18, NULL, var_a2_2, var_a3_2, 0, 0);
                        func_8013CAE0(D_801C34F4, func_8013C918(D_801C34F4, arg1->unk20), &sp18);
                        break;
                    }
                }
            }
        }
        if (sp208 != 0) {
            temp_a0_2 = temp_s3 + 0x1C;
            if (sp210 == 0) {
                func_80124FC8(temp_a0_2, arg1, temp_a0_2);
            }
        }
        var_v0 = sp210;
    }
    return var_v0;
}
