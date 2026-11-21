/* m2c reference for func_8010C098 @ 8010C098 (1369 words). Generated; not compiled or validated. */
? func_800FF8B8(void *, s16);                       /* extern */
? func_801011E4(void *, s32, s32, ?);               /* extern */
? func_80102E88(void *, s32, void *, ?);            /* extern */
? func_8010B62C(void *, ?, ?);                      /* extern */
? func_8010BCB0(void *);                            /* extern */
? func_8011B7D4(s32 *, ?, ?);                       /* extern */
? func_8011B918(?, ?);                              /* extern */
? func_8011B994(void *);                            /* extern */
? func_8011BC6C(VECTOR *, ? *, ?, ?, s32, s32);     /* extern */
void *func_8011D40C(void *, ?, void *, ?);          /* extern */
u16 func_80120FE0(void *, ?);                       /* extern */
? func_80124CF4(VECTOR *, VECTOR *, ?, ?, s32);     /* extern */
? func_801253C8(void *, void *);                    /* extern */
? func_80125420(VECTOR *, void *);                  /* extern */
? func_801254DC(? *, ?, ?, ?);                      /* extern */
? func_801298E0(void *, void *, s16);               /* extern */
s32 func_80133040(void *);                          /* extern */
s32 func_8013B584();                                /* extern */
s32 func_8013B594(s32, s32);                        /* extern */
? func_8013BDCC(s32, ?, ?);                         /* extern */
? func_8013BEA8(s32);                               /* extern */
s32 func_8013C958(s32, s32);                        /* extern */
s32 func_8013C98C(s32, s32);                        /* extern */
? func_8013FD30(void *, ?, ?, ?);                   /* extern */
? func_80144150(void *);                            /* extern */
? func_80147764(void *, ?);                         /* extern */
? func_80147778(void *);                            /* extern */
? func_80147A6C(void *, ?);                         /* extern */
? func_80147DD0(void *);                            /* extern */
? func_80148A00(void *, ?);                         /* extern */
? func_8015464C(void *, void *);                    /* extern */
? func_8015FB80(?, s16, s16);                       /* extern */
? func_801683EC(void *, void *, ?, void *, void *); /* extern */
s32 func_8016F210(?);                               /* extern */
s32 func_80176C1C(s32, ?, ?);                       /* extern */
s32 func_80176CBC(s32, ?, ?);                       /* extern */
? func_801787D8(void *, s32 *);                     /* extern */
extern ? D_801C3100;
extern ? D_801C31CC;
static void *D_801C34EC = NULL;
static s32 D_801C34F4 = 0;
static void *D_801C34F8 = NULL;
static s32 D_801C36C0 = 0;
static s32 D_801C36CC = 0;
static s32 D_801C36D8 = 0;
static s32 D_801C36DC = 0;

void func_8010C098(void *arg0) {
    VECTOR sp18;
    VECTOR sp28;
    ? sp38;
    s32 sp48;
    s32 spA0;
    s32 spA4;
    s32 spA8;
    ? var_a0_7;
    ? var_a1_3;
    ? var_a1_4;
    s32 *temp_v1_3;
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_s0_2;
    s32 temp_s0_3;
    s32 temp_s0_4;
    s32 temp_s0_5;
    s32 temp_v1_4;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a0_3;
    s32 var_a0_4;
    s32 var_a0_5;
    s32 var_a1_2;
    s32 var_s0;
    s32 var_s3;
    s32 var_s4;
    s32 var_s6;
    s32 var_s6_2;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v0_5;
    s32 var_v0_6;
    s32 var_v0_7;
    s32 var_v0_8;
    s32 var_v0_9;
    s32 var_v1;
    s32 var_v1_10;
    s32 var_v1_2;
    s32 var_v1_3;
    s32 var_v1_4;
    s32 var_v1_5;
    s32 var_v1_6;
    s32 var_v1_7;
    s32 var_v1_8;
    s32 var_v1_9;
    u16 temp_v0;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_s0;
    void *temp_s0_6;
    void *temp_s4;
    void *temp_v1;
    void *temp_v1_2;
    void *temp_v1_5;
    void *var_a0_6;
    void *var_a1;
    void *var_v0;
    void *var_v0_4;

    if ((s16) arg0->unk506 < 0x4B0) {
        arg0->unk506 = (u16) (arg0->unk506 + arg0->unk7D4);
    }
    func_8010BCB0(arg0);
    var_v1 = 0;
    if (arg0->unk7C0 == 0x50) {
        var_v1 = (D_801C34EC + 0x496C + arg0->unk78)->unk17F8 != 0;
    }
    var_a1 = arg0 + 0x2C4;
    if (var_v1 != 0) {
        (D_801C34EC + 0x496C + (arg0->unk78 * 4))->unk17E8->unkD = 0;
        var_a1 = arg0 + 0x2C4;
    }
    func_801683EC(arg0->unk738, var_a1, 1, arg0 + 0x1C4, arg0 + 0x220);
    var_v1_2 = 0;
    if (arg0->unk7C0 == 0x50) {
        var_v1_2 = (D_801C34EC + 0x496C + arg0->unk78)->unk17F8 != 0;
    }
    if (var_v1_2 != 0) {
        (D_801C34EC + 0x496C + (arg0->unk78 * 4))->unk17E8->unkD = 1;
        goto block_25;
    }
    if (arg0->unk7C0 == 0xE0) {
        var_s6 = 0;
        if (arg0->unk738->unk48 == 0xA) {
            var_s6_2 = 8;
            var_s3 = 0x100;
            var_s4 = 0x8C;
loop_13:
            if (var_s6_2 < 0xA) {
                if (arg0->unkC8 < arg0->unk7A4) {
                    temp_v1 = arg0 + (var_s3 + 0x2C8);
                    var_v0 = arg0 + var_s3;
                    if (temp_v1->unk0 != 0) {
                        var_a0 = 0;
                        if (((s16) temp_v1->unk1E < 0x18F) || ((u32) (temp_v1->unk1E - 0x1F4) < 0xC8U)) {
                            var_a0 = 1;
                        }
                        var_v0 = arg0 + var_s3;
                        if (var_a0 != 0) {
                            func_80125420(&sp28, arg0->unk738 + var_s4);
                            mathMulTransVec(arg0->unk738 + 0x28, &sp28, &sp18);
                            sp18 = (s32) sp18 + arg0->unk738->unk1C;
                            sp18.vy += arg0->unk738->unk20;
                            var_s0 = 0;
                            sp18.vz += arg0->unk738->unk24;
                            do {
                                func_80124CF4(&sp28, &sp18, 0x3F, 0x3F, 0xF);
                                func_801254DC(&sp38, 0, 0, 0xF);
                                func_8011BC6C(&sp28, &sp38, 0xC, 0x14, 0, 0);
                                var_s0 += 1;
                            } while (var_s0 < 7);
                            goto block_22;
                        }
                    }
                } else {
block_22:
                    var_v0 = arg0 + var_s3;
                }
                var_v0->unk2C8 = 0;
                var_s3 += 0x20;
                var_s4 += 8;
                var_s6_2 += 1;
                goto loop_13;
            }
            goto block_25;
        }
    } else {
block_25:
        var_s6 = 0;
    }
    arg0->unk542 = 0;
    func_801787D8(arg0->unk738 + 0x1C, &sp48);
    temp_s4 = arg0 + 0x1E4;
loop_27:
    if (var_s6 < sp48) {
        temp_v1_2 = &sp48 + (var_s6 * 8);
        temp_v0 = temp_v1_2->unk4;
        switch ((s16) temp_v0) {                    /* switch 1; irregular */
        case 0x44E:                                 /* switch 1 */
            var_a1_2 = 0;
            if (arg0->unk7DC >= 0x3E8) {
                var_a1_2 = arg0->unk10C < arg0->unk110;
            }
            if ((var_a1_2 != 0) && (arg0->unkA3 == 0)) {
                func_801298E0(D_801C34EC, arg0, (s16) temp_v1_2->unk6);
loop_34:
                var_v1_3 = 0;
                if (arg0->unk7DC > 0) {
                    var_v1_3 = arg0->unk10C < arg0->unk110;
                }
                if (var_v1_3 != 0) {
                    arg0->unk7DC = (s32) (arg0->unk7DC - 0x3E8);
                    if (arg0->unk7DC < 0) {
                        arg0->unk7DC = 0;
                    }
                    arg0->unk10C = (s32) (arg0->unk10C + ((s32) arg0->unk110 >> 3));
                    goto loop_34;
                }
                if ((arg0->unk7B8 == 2) && (arg0->unk58 == 8)) {
                    arg0->unk58 = 0;
                }
                if (arg0->unk820 != 0) {
                    func_8010B62C(D_801C34EC + 0x6220, 0x23, 0xA);
                    var_s6 += 1;
                } else {
                    goto block_168;
                }
            } else {
            default:                                /* switch 1 */
block_168:
                var_s6 += 1;
            }
            break;
        case 0x46B:                                 /* switch 1 */
            if (D_801C34EC->unk12408 == NULL) {
                D_801C34EC->unk123F8 = 1U;
                D_801C34EC->unk12408 = arg0;
                arg0->unk50E = (u16) (arg0->unk50E - 1);
                if (arg0->unk50E & 0x8000) {
                    arg0->unk50E = 0U;
                }
                if (arg0->unk7C != 0) {
                    arg0->unk50E = 0U;
                    var_s6 += 1;
                } else {
                    goto block_168;
                }
            } else {
                switch ((s16) temp_v0) {            /* switch 2; irregular */
                case 0x7D0:                         /* switch 1 */
                case 0x7D0:                         /* switch 2 */
                    if (arg0->unk7C0 == 0x10) {
                        temp_s0 = (D_801C34EC + (arg0->unk78 * 4))->unk610C;
                        temp_s0->unk4 = func_8016F210(1);
                    }
                    arg0->unk738->unk4 = func_8016F210(1);
                    if (arg0->unk8A == 0) {
                        spA0 = arg0->unk1E4;
                        spA8 = 0x268;
                        spA4 = arg0->unk1E8;
                        func_8011B7D4(&spA0, 4, 0x2E);
                        func_8011B994(arg0->unk740);
                        arg0->unk740 = func_8011D40C(arg0 + 0x244, 0x1E, arg0->unk738, 0x3D);
                        arg0->unk740->unk2C = 0;
                        arg0->unk740->unk2D = 0;
                        arg0->unk740->unk2E = -0x20;
                        arg0->unk740->unk32 = 7;
                        arg0->unk740->unkC = 0;
                        arg0->unk740->unk10 = 0;
                        arg0->unk740->unk14 = -2;
                        arg0->unk740->unk33 = 0xF;
                        arg0->unk740->unk34 = 3;
                        arg0->unk740->unk35 = 1;
                        arg0->unk740->unk36 = 0;
                        arg0->unk740->unk37 = 1;
                        arg0->unk740->unk38 = 0;
                        arg0->unk740->unk28 = 0x268;
                        arg0->unk740->unk2A = 0xC8;
                        arg0->unk8A = 1U;
                        var_s6 += 1;
                    } else {
                        goto block_168;
                    }
                    break;
                case 0x7D3:                         /* switch 1 */
                case 0x7D3:                         /* switch 2 */
                    if (arg0->unk82F == 0) {
                        arg0->unk510 = (u16) (arg0->unk510 + arg0->unk7D4);
                        if ((s16) arg0->unk510 >= 0x3D) {
                            D_801C31CC.unk8 = 0x5A;
                            D_801C31CC.unkC = 0x5A;
                            D_801C3100.unk0 = (s32) arg0->unk1E4;
                            D_801C3100.unk4 = (s32) temp_s4->unk4;
                            D_801C31CC.unk0 = &D_801C3100;
                            D_801C3100.unk8 = (s32) temp_s4->unk8;
                            D_801C31CC.unk10 = -1;
                            D_801C31CC.unk14 = (s32) ((arg0->unk1EC * 0x7F) / 800);
                            func_8013BDCC(D_801C34F4, 0, 0);
                            func_8011B918(1, 0);
                        }
                        if ((s16) arg0->unk510 >= 0x79) {
                            if (arg0->unk1EC >= 0x321) {
                                D_801C31CC.unk8 = 0x5A;
                                D_801C31CC.unkC = 0x5A;
                                func_8013BEA8(D_801C34F4);
                                func_8011B918(0, 0);
                                func_80147778(arg0);
                                arg0->unkA1 = 0U;
                                if (arg0->unk820 != 0) {
                                    func_80102E88(D_801C34EC + 0x6220, arg0->unk7CC, arg0 + 0x1E4, 0);
                                }
                                arg0->unk510 = 0U;
                                arg0->unk1E4 = (s32) (0x3FF - (rand() & 0x7FF));
                                arg0->unk1E8 = (s32) (0x3FF - (rand() & 0x7FF));
loop_68:
                                var_v0_2 = arg0->unk1E4;
                                if (var_v0_2 < 0) {
                                    var_v0_2 = -var_v0_2;
                                }
                                if (var_v0_2 < 0x258) {
                                    if (arg0->unk1E4 == 0) {
                                        arg0->unk1E4 = (s32) (0x7F - (rand() & 0xFF));
                                    }
                                    arg0->unk1E4 = (s32) (arg0->unk1E4 * 2);
                                    goto loop_68;
                                }
loop_75:
                                var_v0_3 = arg0->unk1E8;
                                if (var_v0_3 < 0) {
                                    var_v0_3 = -var_v0_3;
                                }
                                if (var_v0_3 < 0x258) {
                                    if (arg0->unk1E8 == 0) {
                                        arg0->unk1E8 = (s32) (0x7F - (rand() & 0xFF));
                                    }
                                    arg0->unk1E8 = (s32) (arg0->unk1E8 * 2);
                                    goto loop_75;
                                }
                                arg0->unk1EC = 0x3840;
                                if (arg0->unkF4 != 0) {
                                    arg0->unkF4 = 0x28;
                                    func_80144150(arg0);
                                }
                                if (arg0->unk7B8 != 2) {
                                    if (func_80133040(arg0) == 0) {
                                        temp_s0_2 = func_8013B584();
                                        var_a0_2 = D_801C36D8;
                                        var_v1_4 = ((temp_s0_2 & 0xFF) * func_8013C958(D_801C34F4, 0xC)) / 127;
                                        if (var_v1_4 < var_a0_2) {
                                            var_a0_2 = var_v1_4;
                                        }
                                        D_801C36CC = var_a0_2;
                                        if (var_v1_4 < D_801C36DC) {
                                            var_v1_4 = D_801C36DC;
                                        }
                                        D_801C36CC = var_v1_4;
                                        temp_s0_3 = func_8013B594(var_a0_2, D_801C36DC);
                                        var_a0_3 = D_801C36D8;
                                        var_v1_5 = ((temp_s0_3 & 0xFF) * func_8013C98C(D_801C34F4, 0xC)) / 127;
                                        if (var_v1_5 < var_a0_3) {
                                            var_a0_3 = var_v1_5;
                                        }
                                        D_801C36C0 = var_a0_3;
                                        if (var_v1_5 < D_801C36DC) {
                                            var_v1_5 = D_801C36DC;
                                        }
                                        D_801C36C0 = var_v1_5;
                                        func_8015FB80(0, (s16) D_801C36C0, (s16) D_801C36C0);
                                        var_v0_4 = D_801C34F8->unk8;
                                        var_a1_3 = 0xE;
                                        goto block_131;
                                    }
                                    goto block_168;
                                }
                                goto block_120;
                            }
                            if (arg0->unkA1 == 0) {
                                arg0->unkA1 = 1U;
                                func_80147764(arg0, 0xB4);
                                if (arg0->unk820 != 0) {
                                    temp_a1 = arg0->unk7CC;
                                    temp_a0 = D_801C34EC + 0x6220;
                                    func_80102E88(temp_a0, temp_a1, (temp_a0 + (temp_a1 * 4))->unk390 + 0x1C, 1);
                                }
                            }
                            arg0->unk1E4 = func_80176CBC(arg0->unk1E4, 0, 5);
                            arg0->unk1E8 = func_80176CBC(arg0->unk1E8, 0, 5);
                            arg0->unk1EC = (s32) (((s16) arg0->unk510 + arg0->unk1EC) - 0x68);
                            D_801C31CC.unk8 = 0x5A;
                            D_801C31CC.unkC = 0x5A;
                            D_801C3100.unk0 = (s32) arg0->unk1E4;
                            D_801C3100.unk4 = (s32) temp_s4->unk4;
                            D_801C31CC.unk0 = &D_801C3100;
                            D_801C3100.unk8 = (s32) temp_s4->unk8;
                            var_v0_5 = arg0->unk1EC;
                            goto block_136;
                        }
                        goto block_168;
                    }
                    switch ((s16) temp_v0) {        /* switch 3; irregular */
                    case 0x7D4:                     /* switch 1 */
                    case 0x7D4:                     /* switch 2 */
                    case 0x7D4:                     /* switch 3 */
                        if (arg0->unk82F == 0) {
                            arg0->unk510 = (u16) (arg0->unk510 + arg0->unk7D4);
                            if ((s16) arg0->unk510 >= 0x3D) {
                                func_8011B918(1, 1);
                                D_801C31CC.unk8 = 0x5A;
                                D_801C31CC.unkC = 0x5A;
                                D_801C3100.unk0 = (s32) arg0->unk1E4;
                                D_801C3100.unk4 = (s32) temp_s4->unk4;
                                D_801C31CC.unk0 = &D_801C3100;
                                D_801C3100.unk8 = (s32) temp_s4->unk8;
                                D_801C31CC.unk10 = -1;
                                D_801C31CC.unk14 = (s32) (((arg0->unk1EC - 0x34A8) * 0x7F) / 800);
                                func_8013BDCC(D_801C34F4, 0, 0);
                            }
                            if ((s16) arg0->unk510 >= 0x79) {
                                if (arg0->unk1EC >= 0x37C9) {
                                    D_801C31CC.unk8 = 0x5A;
                                    D_801C31CC.unkC = 0x5A;
                                    func_8013BEA8(D_801C34F4);
                                    func_8011B918(0, 1);
                                    func_80147778(arg0);
                                    arg0->unkA1 = 0U;
                                    if (arg0->unk820 != 0) {
                                        func_80102E88(D_801C34EC + 0x6220, arg0->unk7CC, arg0 + 0x1E4, 0);
                                    }
                                    arg0->unk510 = 0U;
                                    arg0->unk1E4 = (s32) (0x3FF - (rand() & 0x7FF));
                                    arg0->unk1E8 = (s32) (0x3FF - (rand() & 0x7FF));
loop_107:
                                    var_v0_6 = arg0->unk1E4;
                                    if (var_v0_6 < 0) {
                                        var_v0_6 = -var_v0_6;
                                    }
                                    if (var_v0_6 < 0x258) {
                                        if (arg0->unk1E4 == 0) {
                                            arg0->unk1E4 = (s32) (0x7F - (rand() & 0xFF));
                                        }
                                        arg0->unk1E4 = (s32) (arg0->unk1E4 * 2);
                                        goto loop_107;
                                    }
loop_114:
                                    var_v0_7 = arg0->unk1E8;
                                    if (var_v0_7 < 0) {
                                        var_v0_7 = -var_v0_7;
                                    }
                                    if (var_v0_7 < 0x258) {
                                        if (arg0->unk1E8 == 0) {
                                            arg0->unk1E8 = (s32) (0x7F - (rand() & 0xFF));
                                        }
                                        arg0->unk1E8 = (s32) (arg0->unk1E8 * 2);
                                        goto loop_114;
                                    }
                                    arg0->unk1EC = 0x640;
                                    if (arg0->unkF4 != 0) {
                                        arg0->unkF4 = 0x64;
                                        func_80144150(arg0);
                                    }
                                    if (arg0->unk7B8 == 2) {
block_120:
                                        func_80147A6C(arg0, 0x960);
                                        func_80147DD0(arg0);
                                        arg0->unk82C = 0;
                                        var_s6 += 1;
                                    } else if (func_80133040(arg0) == 0) {
                                        temp_s0_4 = func_8013B584();
                                        var_a0_4 = D_801C36D8;
                                        var_v1_6 = ((temp_s0_4 & 0xFF) * func_8013C958(D_801C34F4, D_801C34EC->unk12688)) / 127;
                                        if (var_v1_6 < var_a0_4) {
                                            var_a0_4 = var_v1_6;
                                        }
                                        D_801C36CC = var_a0_4;
                                        if (var_v1_6 < D_801C36DC) {
                                            var_v1_6 = D_801C36DC;
                                        }
                                        D_801C36CC = var_v1_6;
                                        temp_s0_5 = func_8013B594(var_a0_4, D_801C36DC);
                                        var_a0_5 = D_801C36D8;
                                        var_v1_7 = ((temp_s0_5 & 0xFF) * func_8013C98C(D_801C34F4, D_801C34EC->unk12688)) / 127;
                                        if (var_v1_7 < var_a0_5) {
                                            var_a0_5 = var_v1_7;
                                        }
                                        D_801C36C0 = var_a0_5;
                                        if (var_v1_7 < D_801C36DC) {
                                            var_v1_7 = D_801C36DC;
                                        }
                                        D_801C36C0 = var_v1_7;
                                        func_8015FB80(0, (s16) D_801C36C0, (s16) D_801C36C0);
                                        var_v0_4 = D_801C34F8->unk8;
                                        var_a1_3 = 5;
block_131:
                                        (var_v0_4 + 0x10)->unk4(D_801C34F8 + (s16) var_v0_4->unk10, var_a1_3);
                                        var_s6 += 1;
                                    } else {
                                        goto block_168;
                                    }
                                } else {
                                    if (arg0->unkA1 == 0) {
                                        arg0->unkA1 = 1U;
                                        func_80147764(arg0, 0xB4);
                                        if (arg0->unk820 != 0) {
                                            temp_a1_2 = arg0->unk7CC;
                                            temp_a0_2 = D_801C34EC + 0x6220;
                                            func_80102E88(temp_a0_2, temp_a1_2, (temp_a0_2 + (temp_a1_2 * 4))->unk390 + 0x1C, 1);
                                        }
                                    }
                                    arg0->unk1E4 = func_80176CBC(arg0->unk1E4, -0x48, 5);
                                    arg0->unk1E8 = func_80176CBC(arg0->unk1E8, 0x120, 5);
                                    arg0->unk1EC = (s32) (((s16) arg0->unk510 + arg0->unk1EC) - 0x68);
                                    D_801C31CC.unk8 = 0x5A;
                                    D_801C31CC.unkC = 0x5A;
                                    D_801C3100.unk0 = (s32) arg0->unk1E4;
                                    D_801C3100.unk4 = (s32) temp_s4->unk4;
                                    D_801C31CC.unk0 = &D_801C3100;
                                    D_801C3100.unk8 = (s32) temp_s4->unk8;
                                    var_v0_5 = arg0->unk1EC - 0x34A8;
block_136:
                                    D_801C31CC.unk10 = -1;
                                    D_801C31CC.unk14 = (s32) ((var_v0_5 * 0x7F) / 800);
                                    func_8013BDCC(D_801C34F4, 0, 0);
                                    var_s6 += 1;
                                }
                            } else {
                                goto block_168;
                            }
                        } else {
                            switch ((s16) temp_v0) { /* switch 4; irregular */
                            case 0x286:             /* switch 1 */
                            case 0x286:             /* switch 2 */
                            case 0x286:             /* switch 3 */
                            case 0x286:             /* switch 4 */
                                if (arg0->unkCC < arg0->unk7A4) {
                                    func_80148A00(arg0, 5);
                                    var_v0_8 = rand() & 0x7F;
                                    var_v1_8 = arg0->unk204 + 0x40;
                                } else {
                                    func_80148A00(arg0, 6);
                                    var_v0_8 = rand() & 0x1FF;
                                    var_v1_8 = arg0->unk204 + 0xFF;
                                }
                                arg0->unk204 = (s32) (var_v1_8 - var_v0_8);
                                func_8013FD30(arg0, 3, 2, 2);
                                arg0->unk86 = 1;
                                var_s6 += 1;
                                break;
                            case 0x287:             /* switch 1 */
                            case 0x287:             /* switch 2 */
                            case 0x287:             /* switch 3 */
                            case 0x287:             /* switch 4 */
                                if (arg0->unkCC < arg0->unk7A4) {
                                    func_80148A00(arg0, 7);
                                    var_v0_9 = rand() & 0xFF;
                                    var_v1_9 = arg0->unk204 + 0x80;
                                } else {
                                    func_80148A00(arg0, 8);
                                    var_v0_9 = rand() & 0x1FF;
                                    var_v1_9 = arg0->unk204 + 0xFF;
                                }
                                arg0->unk204 = (s32) (var_v1_9 - var_v0_9);
                                func_8013FD30(arg0, 3, 2, 2);
                                arg0->unk86 = 1;
                                arg0->unkA5 = 1;
                                var_s6 += 1;
                                break;
                            case 0x7D5:             /* switch 1 */
                            case 0x7D5:             /* switch 2 */
                            case 0x7D5:             /* switch 3 */
                            case 0x7D5:             /* switch 4 */
                                if ((arg0->unk820 != 0) && (temp_v1_3 = D_801C34EC + 0x6220 + (arg0->unk7CC * 4), (((u32) (*temp_v1_3 - 2) < 2U) != 0))) {
                                    arg0->unk7BC = (s32) *temp_v1_3;
                                    arg0->unkA2 = 1U;
                                    func_801011E4(D_801C34EC + 0x6220, arg0->unk7CC, 1, 0);
                                    var_s6 += 1;
                                } else {
                                    goto block_168;
                                }
                                break;
                            case 0x7D2:             /* switch 1 */
                            case 0x7D2:             /* switch 2 */
                            case 0x7D2:             /* switch 3 */
                            case 0x7D2:             /* switch 4 */
                                if (arg0->unkF4 == 0) {
                                    arg0->unk1F0 = func_80176C1C(arg0->unk1F0, -0x155, 5);
                                    arg0->unk1EC = (s32) (arg0->unk1EC + 8);
                                    var_s6 += 1;
                                } else if (arg0->unkA0 == 0) {
                                    temp_v1_4 = D_801C34EC->unk12688;
                                    if ((temp_v1_4 == 8) || ((temp_v1_4 >= 8) && (temp_v1_4 < 0xC) && (temp_v1_4 >= 0xA))) {
                                        arg0->unkA0 = 1U;
                                    }
                                    if (arg0->unkA0 != 0) {
                                        if (arg0->unk820 != 0) {
                                            func_80102E88(D_801C34EC + 0x6220, arg0->unk7CC, NULL, 1);
                                            var_s6 += 1;
                                        } else {
                                            goto block_168;
                                        }
                                    } else {
                                        var_a0_6 = NULL;
                                        arg0->unk62 = func_80120FE0(D_801C34EC, -0x155);
                                        if (arg0 != NULL) {
                                            var_a0_6 = arg0 + 4;
                                        }
                                        func_800FF8B8(var_a0_6, (s16) arg0->unk62);
                                        func_80125420(arg0 + 0x1F0, arg0->unk738 + 0x14);
                                        func_801253C8(arg0 + 0x1E4, arg0->unk738 + 0x1C);
                                        arg0->unk20C = 0;
                                        arg0->unk21C = 0;
                                        arg0->unk260 = 0;
                                        arg0->unk86 = 0;
                                        arg0->unk1EC = (s32) (arg0->unk1EC + 0x320);
                                        temp_v1_5 = arg0->unk738;
                                        temp_v1_5->unk24 = (s32) (temp_v1_5->unk24 + 0x320);
                                        var_s6 += 1;
                                    }
                                } else {
                                    goto block_168;
                                }
                                break;
                            case 0x7D7:             /* switch 1 */
                            case 0x7D7:             /* switch 2 */
                            case 0x7D7:             /* switch 3 */
                            case 0x7D7:             /* switch 4 */
                                func_8015464C(D_801C34EC + 0x496C, arg0 + 0x1E4);
                                goto block_168;
                            }
                        }
                        break;
                    }
                    break;
                }
            }
            break;
        }
        goto loop_27;
    }
    if ((sp4C != 0x44E) && (sp54 != 0x44E)) {
        if (sp4C != 0x46B) {
            if (sp54 != 0x46B) {
                arg0->unk50E = 0xAU;
            }
            goto block_174;
        }
    } else {
block_174:
        if (sp4C != 0x46B) {
            if ((sp54 != 0x46B) && (D_801C34EC->unk123F8 != 0) && (D_801C34EC->unk12408->unk7C4 == arg0->unk7C4)) {
                D_801C34EC->unk123F8 = 0U;
                D_801C34EC->unk12408 = NULL;
                (D_801C34EC + 0x496C)->unk173C->unkC = 0;
            }
        }
    }
    if ((sp4C != 0x7D5) && (sp54 != 0x7D5) && (arg0->unkA2 != 0)) {
        if (arg0->unk820 != 0) {
            func_801011E4(D_801C34EC + 0x6220, arg0->unk7CC, arg0->unk7BC, 0);
        }
        arg0->unkA2 = 0U;
    }
    if (sp48 == 0) {
        var_v1_10 = 0;
        if (arg0->unk820 != 0) {
            var_v1_10 = arg0->unk510 != 0;
        }
        if (var_v1_10 != 0) {
            func_80102E88(D_801C34EC + 0x6220, arg0->unk7CC, arg0 + 0x1E4, 0);
        }
        if (arg0->unk510 != 0) {
            arg0->unk510 = 0U;
            if (arg0->unk1EC >= 0x1F41) {
                var_a1_4 = 1;
            } else {
                var_a1_4 = 0;
            }
            func_8011B918(0, var_a1_4);
        }
        arg0->unkA1 = 0U;
        if (arg0->unk8A == 1) {
            arg0->unk8A = 0U;
            func_8011B994(arg0->unk740);
        }
        var_a0_7 = 0;
        if ((*arg0->unk738->unk0 & 0xFFF0) == 0x17C0) {
            var_a0_7 = 2;
        }
        arg0->unk738->unk4 = func_8016F210(var_a0_7);
        if (arg0->unk7C0 == 0x10) {
            temp_s0_6 = (D_801C34EC + (arg0->unk78 * 4))->unk610C;
            temp_s0_6->unk4 = func_8016F210(0);
        }
    }
}
