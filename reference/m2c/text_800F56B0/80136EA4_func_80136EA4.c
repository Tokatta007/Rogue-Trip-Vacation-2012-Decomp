/* m2c reference for func_80136EA4 @ 80136EA4 (1298 words). Generated; not compiled or validated. */
? func_8011425C(s32, ?);                            /* extern */
? func_801161F8(s32);                               /* extern */
? func_80120288(void *);                            /* extern */
? func_80120B68(void *);                            /* extern */
? func_80121008(void *, ?, s32, ?, s32);            /* extern */
? func_801211B4(void *, s32, s32);                  /* extern */
s32 func_80126E2C(void *, u8);                      /* extern */
? func_80126E7C(void *);                            /* extern */
? func_8012D7B8(?, ?, ?, ?);                        /* extern */
? func_801313FC(s32, s32);                          /* extern */
? func_80131AC4();                                  /* extern */
? func_80131B34();                                  /* extern */
s32 func_80131F64(?, s32);                          /* extern */
? func_801382EC(s32, ?);                            /* extern */
? func_8013B478(?, ?);                              /* extern */
? func_8013B5A4(?);                                 /* extern */
? func_8013C120(s32, s32, ? *);                     /* extern */
? func_80154AFC(? *, ? *, ? *, ? *, ? *);           /* extern */
s32 func_80166D2C(s32, ? *);                        /* extern */
? func_8016BD94(?, ?);                              /* extern */
extern ? D_801B379C;
extern ? D_801B3828;
extern ? D_801B386C;
extern s32 D_801B38E4;
extern s32 D_801B393C;
extern ? D_801B3960;
extern u8 D_801B3964;
extern u8 D_801B3965;
extern u8 D_801B3969;
extern u8 D_801B396A;
extern u8 D_801B396B;
extern u8 D_801B396D;
extern u8 D_801B396E;
extern s8 D_801B396F;
extern ? D_801B399C;
extern u8 D_801B39A4;
extern u8 D_801B39A5;
extern s32 D_801C3834;
extern s32 D_801C3848;
extern s32 D_801C384C;
static ? *D_801C3474 = NULL;
static ? D_801C348C;                                /* unable to generate initializer: unknown type */
static ? D_801C3494;                                /* unable to generate initializer: unknown type */
static ? D_801C3498;                                /* unable to generate initializer: unknown type */
static ? D_801C349C;                                /* unable to generate initializer: unknown type */
static ? D_801C34A4;                                /* unable to generate initializer: unknown type */
static ? D_801C34AC;                                /* unable to generate initializer: unknown type */
static void *D_801C34EC = NULL;
static s32 D_801C34F4 = 0;
static ? D_800F3C88;                                /* unable to generate initializer: unknown type; const */

void func_80136EA4(void) {
    ? sp18;
    ? sp50;
    s32 sp88;
    s32 spB8;
    s32 spBC;
    ? *var_a2_2;
    ? *var_a2_3;
    ? *var_v0_3;
    s32 *temp_s5;
    s32 *var_a0_3;
    s32 *var_s1;
    s32 *var_s1_3;
    s32 *var_s2;
    s32 *var_s2_2;
    s32 *var_s2_4;
    s32 *var_s4;
    s32 *var_s4_2;
    s32 *var_v1;
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_a1_3;
    s32 temp_a1_4;
    s32 temp_a1_5;
    s32 temp_a1_6;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s1;
    s32 temp_s1_2;
    s32 temp_v0;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a0_4;
    s32 var_a1;
    s32 var_a1_2;
    s32 var_a1_3;
    s32 var_a1_4;
    s32 var_a1_5;
    s32 var_a2;
    s32 var_fp;
    s32 var_s0;
    s32 var_s0_10;
    s32 var_s0_11;
    s32 var_s0_2;
    s32 var_s0_3;
    s32 var_s0_4;
    s32 var_s0_5;
    s32 var_s0_6;
    s32 var_s0_7;
    s32 var_s0_8;
    s32 var_s0_9;
    s32 var_s1_2;
    s32 var_s1_4;
    s32 var_s1_5;
    s32 var_s2_3;
    s32 var_s3;
    s32 var_s3_2;
    s32 var_s5;
    s32 var_s6;
    s32 var_s7;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v1_2;
    s32 var_v1_3;
    u8 var_v1_4;

    var_s6 = 0;
    var_s3 = 1;
    spB8 = 0;
    func_8013B5A4(0);
    D_801C34EC->unk7D4 = (s32) D_801B399C.unk0;
    D_801C34EC->unk12728 = (s32) D_801B3960.unk6;
    var_s7 = 0;
    func_80120288(D_801C34EC);
    func_80131AC4();
    func_801161F8(0);
    func_8013B478(0xA, 0);
    func_80154AFC(&sp18, "%s%s.%s", "TMS\\", *((D_801B3960.unk4 * 4) + &D_801B379C), "TMS");
    func_80166D2C(0x800201D0, &sp18);
    var_fp = func_80131F64(0x800201D0, 0);
    func_8013B478(0x14, 0);
    spBC = 0;
    if (D_801B399C.unk3 != 0) {
        D_801C34EC->unk127E5 = 1U;
    } else {
        D_801C34EC->unk127E5 = 0U;
    }
    if (func_80126E2C(D_801C34EC, D_801B3960.unk4) != 0) {
        D_801C34EC->unk127E5 = 0U;
        func_80126E7C(D_801C34EC);
        D_801C3848 = 0;
        D_801C384C = 0;
    } else if ((D_801B3960.unk4 == 4) || (D_801B3960.unk4 == 0xA) || ((D_801B3960.unkA != 0) && (D_801B3960.unk4 == 5)) || ((D_801B3960.unkB != 0) && (D_801B3960.unk4 == 0xB))) {
        D_801C34EC->unk127E5 = 0U;
    }
    if (D_801C34EC->unk127E5 != 0) {
        var_v0 = D_801B396F - 1;
        if (D_801B396F <= 0) {
            var_v0 = rand() & 3;
        }
        D_801C3474 = (? *) var_v0;
        func_80154AFC(&sp50, &D_800F3C88, D_801C3474);
        func_80154AFC(&sp18, "%s%s.%s", "TMS\\", &sp50, "TMS");
        func_80166D2C(0x800201D0, &sp18);
        var_s3 = 2;
        var_fp = func_80131F64(0x800201D0, 1);
    }
    var_s0 = 0;
    if (D_801B3960.unk6 != 0) {
        var_s1 = &D_801B38E4;
        do {
            temp_v0 = *var_s1;
            var_s1 += 4;
            var_s0 += 1;
            func_80154AFC(&sp18, "%s%s.%s", "TMS\\", *((temp_v0 * 4) + &D_801B3828), "TMS");
            func_80166D2C(0x800201D0, &sp18);
            temp_a1 = var_s3;
            var_s3 += 1;
            var_fp = func_80131F64(0x800201D0, temp_a1);
        } while (var_s0 < (s32) D_801B3960.unk6);
    }
    func_8013B478(0x1E, 0);
    if (D_801B3960.unk5 != 0) {
        if (D_801C34EC->unk7D8 == 0) {
            var_s6 = 4;
        } else if (D_801B3960.unk4 == 4) {
            var_s6 = 0;
            if (func_80126E2C(D_801C34EC, D_801B3960.unk4) == 0) {
                goto block_25;
            }
        } else {
block_25:
            if (D_801B38E4.unk0 == 0xE) {
                var_s6 = 2;
            } else {
                var_s6 = *((D_801B3964 * 4) + &D_801B386C);
            }
        }
        if ((D_801C34EC->unk7D8 == 3) && (D_801B3964 != 4)) {
            var_s6 -= 1;
        }
        var_a0 = 0;
        if (var_s6 >= 0) {
            var_v1 = &sp88;
            do {
                *var_v1 = -1;
                var_a0 += 1;
                var_v1 += 4;
            } while (var_s6 >= var_a0);
        }
        if (D_801B3969 == 0) {
            var_a1 = 0;
            if ((D_801C34EC->unk7D8 == 1) || (D_801C34EC->unk7D8 == 3)) {
                var_a1 = 1;
            }
            if ((var_a1 != 0) && ((u32) (D_801B3964 - 2) < 2U)) {
                var_s0_2 = 0;
                if ((D_801B38E4.unk0 != 0xD0) && (D_801B38E4.unk4 != 0xD0)) {
                    if ((D_801B3964 != 2) || (var_s4 = (s32 *)0x801B0000, ((rand() & 1) != 0))) {
                        goto block_44;
                    }
                } else {
                    goto block_74;
                }
            } else {
                goto block_46;
            }
        } else {
block_46:
            var_a1_2 = 0;
            if (D_801B396A != 0) {
                if ((D_801C34EC->unk7D8 == 1) || (D_801C34EC->unk7D8 == 3)) {
                    var_a1_2 = 1;
                }
                if ((var_a1_2 == 0) || (D_801B3964 != 5)) {
                    goto block_52;
                }
                goto block_72;
            }
block_52:
            var_a1_3 = 0;
            if (D_801B396B != 0) {
                if ((D_801C34EC->unk7D8 == 1) || (D_801C34EC->unk7D8 == 3)) {
                    var_a1_3 = 1;
                }
                if ((var_a1_3 == 0) || (D_801B3964 != 0xB)) {
                    goto block_58;
                }
                goto block_64;
            }
block_58:
            var_a0_2 = 0;
            if (D_801C34EC->unk7D8 == 2) {
                var_a0_2 = D_801C34EC->unk127E5 == 0;
            }
            if (var_a0_2 != 0) {
                if (D_801B3960.unkC != 0) {
                    if ((D_801B3960.unk4 == 0xB) && (D_801B38E4.unk0 != 0xE)) {
block_64:
                        var_s6 = 1;
                        spBC = 1;
                        goto block_73;
                    }
                    goto block_66;
                }
block_66:
                if (D_801B396D != 0) {
                    if (D_801B38E4.unk0 != 0xC) {
                        var_s6 = 2;
block_44:
                        var_s7 = 1;
                        goto block_73;
                    }
                    goto block_70;
                }
block_70:
                if (D_801B396E != 0) {
                    var_s0_2 = 0;
                    if (D_801B38E4.unk0 != 0xD) {
block_72:
                        var_s6 = 1;
                        spB8 = 1;
                        goto block_73;
                    }
                } else {
                    goto block_73;
                }
            } else {
block_73:
                var_s0_2 = 0;
            }
block_74:
            var_s4 = &D_801B38E4;
        }
        var_s2 = &sp88;
        temp_s5 = var_s2;
loop_76:
        var_s1_2 = 0;
        if (var_s0_2 < var_s6) {
loop_77:
            if (var_s1_2 == 0) {
loop_78:
                var_a2 = 0xC;
                if (var_s7 != 0) {
                    var_s7 = 0;
                    D_801B3960.unk9 = 1;
                } else {
                    var_a2 = 0xD;
                    if (spB8 == 0) {
                        var_a2 = 0xE;
                        if (spBC == 0) {
                            if (var_s4->unk0 == 0xE) {
                                var_a2 = 0xD;
                                if (var_s0_2 == 0) {
                                    var_a2 = 0xC;
                                }
                            } else {
                                var_a2 = rand() % (s32) D_801C3834;
                            }
                        }
                    }
                }
                if ((var_a2 != var_s4->unk0) && (var_a2 != var_s4->unk4)) {
                    var_s1_2 = 1;
                    *var_s2 = var_a2;
                    var_v1_2 = 0;
                    if (var_s0_2 > 0) {
                        var_a0_3 = temp_s5;
loop_91:
                        var_v1_2 += 1;
                        if (var_a2 != *var_a0_3) {
                            var_a0_3 += 4;
                            if (var_v1_2 < var_s0_2) {
                                goto loop_91;
                            }
                        } else {
                            var_s1_2 = 0;
                        }
                    }
                    if (var_s1_2 != 0) {
                        func_80154AFC(&sp18, "%s%s.%s", "TMS\\", *((var_a2 * 4) + &D_801B3828), "TMS");
                        func_80166D2C(0x800201D0, &sp18);
                        temp_a1_2 = var_s3;
                        var_s3 += 1;
                        var_fp = func_80131F64(0x800201D0, temp_a1_2);
                    } else {
                        goto loop_78;
                    }
                }
                goto loop_77;
            }
            var_s2 += 4;
            var_s0_2 += 1;
            goto loop_76;
        }
        func_8013B478(0x2D, 0);
    }
    func_8013C120(D_801C34F4, 0, &D_801C34AC);
    if ((D_801B3964 == 0) || (D_801B3964 == 3) || (D_801B3964 == 4) || (D_801B3964 == 5) || (D_801B3964 == 7) || (D_801B3964 == 9) || (D_801B3964 == 0xA)) {
        func_8013C120(D_801C34F4, D_801B3964 + 0x11, *((D_801B3964 * 4) + &D_801B379C));
    }
    if (D_801C34EC->unk127E5 != 0) {
        func_8013C120(D_801C34F4, 2, &sp50);
    }
    var_s0_3 = 0;
    if (D_801B3960.unk6 != 0) {
        var_s1_3 = &D_801B38E4;
        do {
            temp_a1_3 = *var_s1_3;
            if (temp_a1_3 < 0xB) {
                var_a2_2 = *((temp_a1_3 * 4) + &D_801B3828);
                var_a1_4 = temp_a1_3 + 3;
                goto block_113;
            }
            if ((u32) (temp_a1_3 - 0xC) < 3U) {
                var_a2_2 = *((temp_a1_3 * 4) + &D_801B3828);
                var_a1_4 = temp_a1_3 + 2;
block_113:
                func_8013C120(D_801C34F4, var_a1_4, var_a2_2);
            }
            var_s0_3 += 1;
            var_s1_3 += 4;
        } while (var_s0_3 < (s32) D_801B3960.unk6);
    }
    if (D_801B3965 != 0) {
        var_s0_4 = 0;
        if (var_s6 > 0) {
            var_v0_2 = 0 * 4;
            do {
                temp_a1_4 = (sp + var_v0_2)->unk88;
                if (temp_a1_4 < 0xB) {
                    var_a2_3 = *((temp_a1_4 * 4) + &D_801B3828);
                    var_a1_5 = temp_a1_4 + 3;
                    goto block_122;
                }
                if ((u32) (temp_a1_4 - 0xC) < 3U) {
                    var_a2_3 = *((temp_a1_4 * 4) + &D_801B3828);
                    var_a1_5 = temp_a1_4 + 2;
block_122:
                    func_8013C120(D_801C34F4, var_a1_5, var_a2_3);
                }
                var_s0_4 += 1;
                var_v0_2 = var_s0_4 * 4;
            } while (var_s0_4 < var_s6);
        }
    }
    func_8013B478(0x3C, 0);
    func_80154AFC(&sp18, "%s%s.%s", "DMD\\", *((D_801B3964 * 4) + &D_801B379C), "DMD");
    var_s0_5 = func_80166D2C(0x800201D0, &sp18);
    if (var_s0_5 & 3) {
        var_s0_6 = var_s0_5 + 1;
        do {
            var_s0_6 += 1;
        } while (var_s0_6 & 3);
        var_s0_5 = var_s0_6 - 1;
    }
    func_8013B478(0x46, 0);
    func_8011425C(var_fp, 0);
    var_s3_2 = 1;
    if (D_801C34EC->unk127E5 != 0) {
        temp_s1 = var_s0_5;
        func_80154AFC(&sp18, "%s%s.%s", "DMD\\", &sp50, "DMD");
        var_s0_5 = temp_s1 + func_80166D2C(temp_s1 + 0x800201D0, &sp18);
        if (var_s0_5 & 3) {
            var_s0_7 = var_s0_5 + 1;
            do {
                var_s0_7 += 1;
            } while (var_s0_7 & 3);
            var_s0_5 = var_s0_7 - 1;
        }
        var_s3_2 = 2;
        func_801313FC(temp_s1 + 0x800201D0, 1);
    }
    var_s5 = 0;
    var_s2_2 = &D_801B38E4;
    var_s4_2 = &D_801B393C;
loop_136:
    temp_s1_2 = var_s0_5;
    if (var_s5 < (s32) D_801B3960.unk6) {
        func_80154AFC(&sp18, "%s%s.%s", "DMD\\", *((*var_s2_2 * 4) + &D_801B3828), "DMD");
        var_s0_5 = temp_s1_2 + func_80166D2C(temp_s1_2 + 0x800201D0, &sp18);
        if (var_s0_5 & 3) {
            var_s0_8 = var_s0_5 + 1;
            do {
                var_s0_8 += 1;
            } while (var_s0_8 & 3);
            var_s0_5 = var_s0_8 - 1;
        }
        func_801161F8(*var_s4_2);
        temp_a1_5 = var_s3_2;
        var_s3_2 += 1;
        func_801313FC(temp_s1_2 + 0x800201D0, temp_a1_5);
        if (*var_s2_2 == 0xE) {
            D_801C34EC->unk127E5 = 0U;
        }
        var_s2_2 += 4;
        var_s4_2 += 4;
        var_s5 += 1;
        goto loop_136;
    }
    func_8013B478(0x50, 0);
    func_801161F8(0);
    if (D_801B3965 != 0) {
        var_s2_3 = 0;
        if (var_s6 > 0) {
            var_s1_4 = var_s0_5;
            do {
                func_80154AFC(&sp18, "%s%s.%s", "DMD\\", *(((sp + (var_s2_3 * 4))->unk88 * 4) + &D_801B3828), "DMD");
                var_s0_9 = var_s1_4 + func_80166D2C(var_s1_4 + 0x800201D0, &sp18);
                if (var_s0_9 & 3) {
                    var_s0_10 = var_s0_9 + 1;
                    do {
                        var_s0_10 += 1;
                    } while (var_s0_10 & 3);
                    var_s0_9 = var_s0_10 - 1;
                }
                temp_a1_6 = var_s3_2;
                var_s3_2 += 1;
                func_801313FC(var_s1_4 + 0x800201D0, temp_a1_6);
                var_s2_3 += 1;
                var_s1_4 = var_s0_9;
            } while (var_s2_3 < var_s6);
        }
    }
    func_8013B478(0x5A, 0);
    func_80131B34();
    func_80120B68(D_801C34EC);
    temp_s0 = (D_801B38E4.unk0 + 1) * 0x10;
    func_8013B478(0x64, 0);
    if (D_801B3960.unk7 == 0) {
        D_801C34EC->unk12728 = (s32) D_801B3960.unk6;
        func_80121008(D_801C34EC, 0, temp_s0, 0, D_801B393C.unk0);
        (D_801C34EC + 0xB788)->unk8B5 = (u8) D_801B399C.unk8;
        func_801382EC(0, 0xB788);
        func_8016BD94(0, 0);
        if ((u8) D_801B3960.unk6 >= 2U) {
            func_80121008(D_801C34EC, 1, (D_801B38E4.unk4 + 1) * 0x10, 1, D_801B393C.unk4);
            (D_801C34EC + 0xC040)->unk8B5 = (u8) D_801B399C.unk9;
            func_801382EC(1, 0xC040);
            func_8016BD94(1, 1);
        }
        D_801C34EC->unk12750 = 0;
        if (D_801B3960.unk5 != 0) {
            D_801C34EC->unk12750 = var_s6;
            var_s1_5 = 0;
            var_s2_4 = &sp88;
loop_158:
            if (var_s1_5 < var_s6) {
                temp_s0_2 = (*var_s2_4 + 1) * 0x10;
                if (temp_s0_2 == 0xF0) {
                    D_801C34EC->unk1106D = 1;
                    D_801C34EC->unk12750 = 0;
                    var_s2_4 += 4;
                } else {
                    func_801211B4(D_801C34EC, var_s1_5, temp_s0_2);
                    var_s2_4 += 4;
                }
                var_s1_5 += 1;
                goto loop_158;
            }
        }
    } else {
        var_v1_3 = 0;
        if (D_801B3960.unk6 != 0) {
            var_v0_3 = &D_801B3960;
            do {
                var_v0_3->unk10 = 0;
                var_v1_3 += 1;
                var_v0_3 = var_v1_3 + &D_801B3960;
            } while (var_v1_3 < (s32) D_801B3960.unk6);
        }
        D_801C34EC->unk12728 = (s32) D_801B3960.unk6;
        switch (D_801B3960.unk7) {                  /* switch 1; irregular */
        case 1:                                     /* switch 1 */
            switch (D_801B3960.unk6) {              /* switch 2; irregular */
            case 2:                                 /* switch 2 */
                func_8012D7B8(1, 1, 0, 0);
                func_8016BD94(0, 0);
                func_8016BD94(1, 2);
                func_80121008(D_801C34EC, 0, (D_801B38E4.unk0 + 1) * 0x10, 0, D_801B393C.unk0);
                func_80121008(D_801C34EC, 1, (D_801B38E4.unk4 + 1) * 0x10, -1, D_801B393C.unk4);
                var_v1_4 = D_801B39A4;
                var_a0_4 = 0xB788;
block_181:
                (D_801C34EC + var_a0_4)->unk8B5 = var_v1_4;
                break;
            case 3:                                 /* switch 2 */
                func_8012D7B8(2, 1, 0, 1);
                func_8016BD94(0, 0);
                func_8016BD94(1, 1);
                func_8016BD94(2, 2);
                func_80121008(D_801C34EC, 0, (D_801B38E4.unk0 + 1) * 0x10, 0, D_801B393C.unk0);
                func_80121008(D_801C34EC, 1, (D_801B38E4.unk4 + 1) * 0x10, 1, D_801B393C.unk4);
                func_80121008(D_801C34EC, 2, (D_801B38E4.unk8 + 1) * 0x10, -1, D_801B393C.unk8);
                (D_801C34EC + 0xB788)->unk8B5 = (u8) D_801B399C.unk8;
                var_a0_4 = 0xC040;
block_180:
                var_v1_4 = D_801B399C.unk9;
                goto block_181;
            case 4:                                 /* switch 2 */
                func_8012D7B8(2, 2, 0, 1);
                func_8016BD94(0, 0);
                func_8016BD94(1, 1);
                func_8016BD94(2, 2);
                func_8016BD94(3, 3);
                func_80121008(D_801C34EC, 0, (D_801B38E4.unk0 + 1) * 0x10, 0, D_801B393C.unk0);
                func_80121008(D_801C34EC, 1, (D_801B38E4.unk4 + 1) * 0x10, 1, D_801B393C.unk4);
                func_80121008(D_801C34EC, 2, (D_801B38E4.unk8 + 1) * 0x10, -1, D_801B393C.unk8);
                func_80121008(D_801C34EC, 3, (D_801B38E4.unkC + 1) * 0x10, -1, D_801B393C.unkC);
                (D_801C34EC + 0xB788)->unk8B5 = (u8) D_801B399C.unk8;
                var_a0_4 = 0xC040;
                goto block_180;
            }
            break;
        case 2:                                     /* switch 1 */
            if (D_801B3960.unk6 == D_801B3960.unk7) {
                func_8016BD94(0, 2);
                func_8016BD94(1, 0);
                func_8012D7B8(1, 1, 1, 0);
                func_80121008(D_801C34EC, 0, (D_801B38E4.unk0 + 1) * 0x10, -1, D_801B393C.unk0);
                func_80121008(D_801C34EC, 1, (D_801B38E4.unk4 + 1) * 0x10, 0, D_801B393C.unk4);
                var_v1_4 = D_801B39A5;
                var_a0_4 = 0xC040;
                goto block_181;
            }
            if (D_801B3960.unk6 == 3) {
                func_8016BD94(0, 2);
                func_8016BD94(1, 3);
                func_8016BD94(2, 0);
                func_8012D7B8(1, 2, 2, 0);
                func_80121008(D_801C34EC, 0, (D_801B38E4.unk0 + 1) * 0x10, -1, D_801B393C.unk0);
                func_80121008(D_801C34EC, 1, (D_801B38E4.unk4 + 1) * 0x10, -1, D_801B393C.unk4);
                func_80121008(D_801C34EC, 2, (D_801B38E4.unk8 + 1) * 0x10, 0, D_801B393C.unk8);
                var_v1_4 = D_801B39A4;
                var_a0_4 = 0xC8F8;
                goto block_181;
            }
            if (D_801B3960.unk6 == 4) {
                func_8016BD94(0, 2);
                func_8016BD94(1, 3);
                func_8016BD94(2, 0);
                func_8016BD94(3, 1);
                func_8012D7B8(2, 2, 2, 3);
                func_80121008(D_801C34EC, 0, (D_801B38E4.unk0 + 1) * 0x10, -1, D_801B393C.unk0);
                func_80121008(D_801C34EC, 1, (D_801B38E4.unk4 + 1) * 0x10, -1, D_801B393C.unk4);
                func_80121008(D_801C34EC, 2, (D_801B38E4.unk8 + 1) * 0x10, 0, D_801B393C.unk8);
                func_80121008(D_801C34EC, 3, (D_801B38E4.unkC + 1) * 0x10, 1, D_801B393C.unkC);
                (D_801C34EC + 0xC8F8)->unk8B5 = (u8) D_801B399C.unk8;
                var_a0_4 = 0xD1B0;
                goto block_180;
            }
            break;
        }
        var_s0_11 = 0;
        if (D_801B3960.unk6 != 0) {
            do {
                func_801382EC(var_s0_11);
                var_s0_11 += 1;
            } while (var_s0_11 < (s32) D_801B3960.unk6);
        }
    }
}
