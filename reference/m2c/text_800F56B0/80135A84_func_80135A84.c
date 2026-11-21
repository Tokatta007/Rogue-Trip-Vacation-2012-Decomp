/* m2c reference for func_80135A84 @ 80135A84 (805 words). Generated; not compiled or validated. */
? func_8012700C();                                  /* extern */
? func_80127148(s32, u16 *);                        /* extern */
? func_801274CC(s32, ? *);                          /* extern */
? func_8012D1AC(s32 *, ?, s32);                     /* extern */
s32 func_80132ED4();                                /* extern */
? func_80133658();                                  /* extern */
? func_801351F4(?);                                 /* extern */
s32 func_80136718(u32, s8);                         /* extern */
? func_8013841C(s32, ? *, ? *);                     /* extern */
? func_80138494(s32, ? *, s32 *, s32 *, u32, s32 *); /* extern */
? func_8013AF34(?);                                 /* extern */
? func_8013B478(?, ?);                              /* extern */
? func_8013BDCC(s32, ?, ?);                         /* extern */
? func_8013BEA8(s32);                               /* extern */
? func_8013C120(s32, ?, s32);                       /* extern */
? func_80154AFC(? *, ? *, s32);                     /* extern */
s32 func_801594CC(s16);                             /* extern */
s32 func_8015959C(s16);                             /* extern */
? func_8015A01C(void *, ? *);                       /* extern */
? func_8015A05C(void *, void *);                    /* extern */
? func_8015C008(?);                                 /* extern */
? func_8015EBDC(?);                                 /* extern */
? func_80164168(void *);                            /* extern */
void *func_801641F8();                              /* extern */
? func_8016428C();                                  /* extern */
s32 func_80166D2C(?, ? *);                          /* extern */
? func_80167020(?, ?, ?, ? *);                      /* extern */
? func_801670B4(?);                                 /* extern */
? func_80167104(?);                                 /* extern */
s32 func_8016B6DC(?, s32);                          /* extern */
? func_8016BB58();                                  /* extern */
? func_8016BB9C();                                  /* extern */
s32 *func_8016C088(s32);                            /* extern */
s32 func_8016C0F0(s32);                             /* extern */
? func_8016CDEC();                                  /* extern */
? func_8016CE78(?);                                 /* extern */
? func_8016F064();                                  /* extern */
? func_8016F564();                                  /* extern */
? func_80178CB8();                                  /* extern */
? func_80178D44(s32, ?, ?);                         /* extern */
s32 func_8017D580(?);                               /* extern */
? func_8017DE0C(s32, s32);                          /* extern */
extern ? D_801B37D0;
extern s32 D_801B38E4;
extern ? D_801B38F4;
extern s32 D_801B393C;
extern ? D_801B394C;
extern ? D_801B3960;
extern u8 D_801B3967;
extern u8 D_801B399E;
extern ? D_801B39B0;
extern ? D_801B3A50;
extern ? D_801C31CC;
static s32 D_801C34F4 = 0;
static s32 D_801C34FC = 0;
static s32 D_801C36C0 = 0;
static s32 D_801C36CC = 0;
static s32 D_801C36D8 = 0;
static s32 D_801C36DC = 0;
static ? D_800F3AB8;                                /* unable to generate initializer: unknown type; const */
static s32 D_800F3B60[0x11] = {
    0x2328,
    0x283C,
    0x2710,
    0x206C,
    0x206C,
    0x206C,
    0x206C,
    0x2198,
    0x2328,
    0x2328,
    0x206C,
    0x206C,
    0x2968,
    0x2AF8,
    0x9470,
    0x2328,
    0x2710,
}; /* const */
static ? D_800F3BA4;                                /* unable to generate initializer: unknown type; const */
static ? D_800F3BB4;                                /* unable to generate initializer: unknown type; const */

s32 func_80135A84(s32 arg0) {
    s32 sp18;
    ? sp60;
    ? sp148;
    ? sp168;
    s32 sp16C;
    s32 sp170;
    s32 sp174;
    s32 sp178;
    s32 sp17C;
    u32 sp180;
    s32 sp184;
    s32 sp188;
    s32 sp18C;
    ? var_a0_3;
    s32 *temp_v0_3;
    s32 *var_a0_4;
    s32 *var_a1;
    s32 *var_s0_5;
    s32 *var_s1_3;
    s32 *var_v0;
    s32 *var_v1;
    s32 temp_a1_4;
    s32 temp_a2;
    s32 temp_v0_2;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a0_5;
    s32 var_a0_6;
    s32 var_a2_2;
    s32 var_s0;
    s32 var_s0_10;
    s32 var_s0_2;
    s32 var_s0_3;
    s32 var_s0_6;
    s32 var_s0_7;
    s32 var_s0_8;
    s32 var_s0_9;
    s32 var_s1;
    s32 var_s1_2;
    s32 var_s2;
    s32 var_s2_3;
    s32 var_s2_4;
    s32 var_s3;
    s32 var_s3_2;
    s32 var_s4;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v1_2;
    u16 **var_a2;
    u16 *temp_a1;
    u16 *temp_a1_2;
    u16 *temp_a1_3;
    u32 temp_v1;
    u32 var_s0_4;
    u32 var_s6;
    u8 var_s2_2;
    u8 var_v1_3;
    void *temp_a3;
    void *temp_s1;
    void *temp_s7;
    void *temp_v0;
    void *var_t0;

    var_v1 = &sp18;
    var_v0 = D_800F3B60;
    do {
        var_v1->unk0 = var_v0->unk0;
        var_v1->unk4 = (s32) var_v0->unk4;
        var_v1->unk8 = (s32) var_v0->unk8;
        var_v1->unkC = (s32) var_v0->unkC;
        var_v0 += 0x10;
        var_v1 += 0x10;
    } while (var_v0 != (D_800F3B60 + 0x40));
    sp184 = 0;
    sp188 = 9;
    sp18C = 0;
    *var_v1 = *var_v0;
    sp170 = 0;
    sp16C = 0;
    sp174 = 0;
    func_8015C008(0);
    func_8015EBDC(0);
    var_a0 = func_80166D2C(0x800201D0, &D_800F3BA4);
    if (var_a0 < 0) {
        var_a0 += 3;
    }
    func_8013841C(((var_a0 >> 2) * 4) + 0x800201DC, &D_800F3BB4, &D_801B39B0);
    temp_s1 = *(void **)0x800201F4;
    sp17C = func_80132ED4();
    temp_s7 = temp_s1->unk18;
    func_8012700C();
    if ((u32) (temp_s1->unk3 & 0x7F) >= 2U) {
        temp_a1 = temp_s1->unk1C;
        func_80127148(((u16) *temp_a1 >> 4) - 0xFB4, temp_a1);
        if ((u32) (temp_s1->unk3 & 0x7F) >= 3U) {
            temp_a1_2 = temp_s1->unk20;
            func_80127148(((u16) *temp_a1_2 >> 4) - 0xFB4, temp_a1_2);
        }
    }
    var_s2 = 0;
    if (temp_s7->unk3 & 0x7F) {
        var_t0 = temp_s7;
        var_v0_2 = 0 * 2;
        do {
            temp_a3 = var_t0->unkC;
            var_a0_2 = 0;
            if (temp_a3->unk3 & 0x7F) {
                var_a2 = &(&sp78[0])[var_v0_2 + var_s2];
                var_v0_3 = 0 < 3;
loop_11:
                if (var_v0_3 != 0) {
                    temp_a1_3 = (temp_a3 + (var_a0_2 * 4))->unk18;
                    temp_v1 = (u16) *temp_a1_3 >> 4;
                    if ((temp_v1 < 0xFACU) && (temp_v1 >= 0xFAAU)) {
                        *var_a2 = temp_a1_3;
                        var_a2 += 4;
                    } else {
                        *var_a2 = NULL;
                        var_a2 += 4;
                        var_a0_2 = temp_a3->unk3 & 0x7F;
                    }
                    var_a0_2 += 1;
                    var_v0_3 = var_a0_2 < 3;
                    if (var_a0_2 < (temp_a3->unk3 & 0x7F)) {
                        goto loop_11;
                    }
                }
            }
            var_t0 += 4;
            var_s2 += 1;
            var_v0_2 = var_s2 * 2;
        } while (var_s2 < (temp_s7->unk3 & 0x7F));
    }
    var_s2_2 = 0;
    temp_s1->unk3 = (u8) ((temp_s1->unk3 & 0x80) | 1);
    func_8016428C();
    func_80178CB8();
    func_8016CDEC();
    func_8016F564();
    func_8016F064();
    func_80178D44(sp17C, 0, 0);
    func_8016CE78(8);
    temp_v0 = func_801641F8();
    temp_v0->unk0 = temp_s1;
    func_80164168(temp_v0);
    temp_v0->unk24 = -0x258;
    var_s6 = 0;
    if (D_801B3960.unk7 != 0) {
        sp180 = (u8) D_801B3960.unk6 >> 1;
        if ((D_801B3960.unk4 & 0xFFFF0000) == 0x01030000) {
            sp180 = 2;
        }
        if (D_801B3960.unk7 == 2) {
            var_s6 = D_801B3960.unk6 - 1;
            if (D_801B3960.unk6 == 4) {
                var_s6 = 2;
            }
            sp188 = 0xB;
            sp184 = 1;
        } else {
            sp188 = 0xA;
        }
    } else {
        sp180 = 1;
        if (arg0 >= 3) {
            sp180 = 2;
        }
    }
    var_s4 = 0;
loop_29:
    if (var_s4 < (s32) sp180) {
        var_s3 = 0;
        func_8016BB58();
        func_8016BB9C();
        sp174 = 0;
loop_31:
        if (var_s3 == 0) {
            temp_v0->unk18 = (u16) (temp_v0->unk18 + 0xA);
            temp_v0->unk16 = (s16) ((s32) -func_801594CC((s16) temp_v0->unk18) >> 5);
            temp_v0->unk14 = (s16) ((s32) -func_8015959C((s16) temp_v0->unk18) >> 5);
            func_8015A05C(temp_v0 + 0x14, temp_v0 + 0x28);
            if (func_8016B6DC(0x10, var_s4) & 0xFF) {
                if (sp174 != 0) {
                    func_8013AF34(0x2D);
                    sp174 = 0;
                    goto block_80;
                }
                var_s0 = 0;
                if (D_801B3960.unk7 != 2) {
                    D_801C34FC -= 1;
                    func_8013AF34(0x2D);
                    return *((D_801C34FC * 4) + &D_801B394C);
                }
                goto block_81;
            }
            if (func_8016B6DC(0x80, var_s4) & 0xFF) {
                if (D_801B3960.unk7 != 0) {
                    func_801351F4(1);
                }
                func_8013AF34(0x2D);
                return 1;
            }
            if (func_8016B6DC(0x20, var_s4) & 0xFF) {
                func_8013AF34(0x2C);
                var_s0 = 0;
                if (sp174 == 0) {
                    sp174 = 2;
                }
            } else {
                if ((func_8016B6DC(0x2000, var_s4) & 0xFF) || (sp184 != 0)) {
                    var_s2_2 += 1;
                    var_s1 = (s32) var_s2_2 < 0x11;
loop_47:
                    var_s0_2 = var_s1 ^ 1;
                    if (func_80136718(var_s6, (s8) var_s2_2) != 0) {
                        var_s0_2 = 1;
                    }
                    if (var_s0_2 != 0) {
                        var_s2_2 += 1;
                        if (var_s1 == 0) {
                            var_s2_2 = 0;
                        }
                        var_s1 = (s32) var_s2_2 < 0x11;
                        if (var_s0_2 != 0) {
                            goto loop_47;
                        }
                    }
                    temp_s7->unk4 = var_s2_2;
                    sp170 = 6;
                    if (sp174 == 1) {
                        sp174 = 2;
                    }
                    if (sp184 == 0) {
                        func_8013AF34(0x2E);
                    }
                    sp184 = 0;
                    goto block_80;
                }
                var_s0_3 = 0;
                if (func_8016B6DC(0x8000, var_s4) & 0xFF) {
                    var_s2_2 -= 1;
                    var_s0_4 = var_s2_2 >> 0x1F;
loop_60:
                    if (func_80136718(var_s6, (s8) var_s2_2) != 0) {
                        var_s0_4 = 1;
                    }
                    if (var_s0_4 != 0) {
                        var_s2_2 -= 1;
                        if ((s32) var_s2_2 < 0) {
                            var_s2_2 = 0x10;
                        }
                        var_s0_4 = var_s2_2 >> 0x1F;
                        if (var_s0_4 != 0) {
                            goto loop_60;
                        }
                    }
                    temp_s7->unk4 = var_s2_2;
                    sp16C = 6;
                    if (sp174 == 1) {
                        sp174 = 2;
                    }
                    var_a0_3 = 0x2E;
                    goto block_79;
                }
                if ((func_8016B6DC(0x1000, var_s4) & 0xFF) || (func_8016B6DC(0x4000, var_s4) & 0xFF)) {
                    var_s0_3 = 1;
                }
                var_s0 = 0;
                if ((var_s0_3 != 0) && (sp174 == 0)) {
                    do {
                        temp_v0_2 = rand();
                        var_s2_3 = temp_v0_2 >> 4;
                        if (temp_v0_2 < 0) {
                            var_s2_3 = (s32) (temp_v0_2 + 0xF) >> 4;
                        }
                        var_s2_2 = temp_v0_2 - (var_s2_3 * 0x10);
                    } while (func_80136718(var_s6, (s8) var_s2_2) != 0);
                    temp_s7->unk4 = var_s2_2;
                    var_a0_3 = 0x2C;
                    if (sp174 == 1) {
                        sp174 = 2;
                    }
block_79:
                    func_8013AF34(var_a0_3);
block_80:
                    var_s0 = 0;
                }
            }
block_81:
            temp_v0->unk20 = (s32) (sp + (var_s2_2 * 4))->unk18;
            if ((func_8016B6DC(0x40, var_s4) & 0xFF) || (func_8016B6DC(0x800, var_s4) & 0xFF)) {
                var_s0 = 1;
            }
            if (var_s0 != 0) {
                var_s3 = 1;
                func_8013AF34(0x2D);
            }
            if (sp174 == 0) {
                func_80154AFC(&sp60, &D_800F3AB8, var_s6 + 1);
                func_801670B4(0);
                func_80167020(0, 0x78, 0x26, &sp60);
                func_801670B4(1);
                func_80167104(1);
                func_80167020(1, 0xA0, 0xC8, *((var_s2_2 * 4) + &D_801B37D0));
            }
            func_80138494(sp17C, &sp168, &sp16C, &sp170, (u32) var_s2_2, &sp174);
            var_s1_2 = 0;
            func_8017DE0C();
            func_8015A01C(temp_v0 + 0x28, &sp148);
            var_s0_5 = (var_s2_2 * 0xC) + &sp78[0];
loop_89:
            temp_a1_4 = *var_s0_5;
            if (temp_a1_4 != 0) {
                func_801274CC(temp_a1_4, &sp148);
                var_s1_2 += 1;
                var_s0_5 += 4;
                if (var_s1_2 >= 3) {

                } else {
                    goto loop_89;
                }
            }
            goto loop_31;
        }
        if (D_801B3960.unk7 != 0) {
            temp_a2 = var_s2_2 << 0x18;
            sp178 = (((sp178 & 0xFFFF00FF) | 0x300) & 0x3FF) | temp_a2 | ((var_s6 & 0xFF) << 0x10);
            func_8012D1AC(&sp178, 4, temp_a2);
        }
        var_a2_2 = 0;
        if (D_801B3960.unk6 != 0) {
            var_a1 = &D_801B393C;
            var_a0_4 = &D_801B38E4;
            do {
                if (*var_a0_4 == var_s2_2) {
                    *((var_s2_2 * 4) + &D_801B38F4) = 1;
                    *var_a1 = 1;
                }
                var_a1 += 4;
                var_a2_2 += 1;
                var_a0_4 += 4;
            } while (var_a2_2 < (s32) D_801B3960.unk6);
        }
        temp_v0_3 = &(&D_801B38E4)[var_s6];
        var_s6 += 1;
        var_s3_2 = 0;
        *temp_v0_3 = (s32) var_s2_2;
        sp184 = 1;
        func_8016BB58();
        do {
            var_s0_7 = 0;
            func_8016BB9C();
            func_8017DE0C();
            if ((func_8016B6DC(0x40, 0) & 0xFF) || (func_8016B6DC(0x40, 1) & 0xFF)) {
                var_s0_7 = 1;
            }
            var_s0_6 = 0;
            if (var_s0_7 != 0) {
                var_s3_2 = 1;
            }
            if ((func_8017D580(0x2D) > 0) || (func_8017D580(0x2C) > 0) || (func_8017D580(0x2E) > 0)) {
                var_s0_6 = 1;
            }
        } while (var_s0_6 != 0);
        if (var_s3_2 == 0) {
            func_8013C120(D_801C34F4, 0x1E, *((var_s2_2 * 4) + &D_801B3A50));
            if (sp18C == 0) {
                var_a0_5 = D_801C36D8;
                temp_v1_2 = (D_801C36C0 * 2) / 3;
                if (temp_v1_2 < var_a0_5) {
                    var_a0_5 = temp_v1_2;
                }
                var_v1_2 = temp_v1_2;
                D_801C36CC = var_a0_5;
                if (var_v1_2 < D_801C36DC) {
                    var_v1_2 = D_801C36DC;
                }
                D_801C36CC = var_v1_2;
                D_801C31CC.unk8 = 0x31;
                D_801C31CC.unkC = 0x31;
                func_8013BDCC(D_801C34F4, 0, 0);
                var_a0_6 = D_801C36D8;
                var_v1_3 = D_801B399E;
                if ((s32) var_v1_3 < var_a0_6) {
                    var_a0_6 = (s32) var_v1_3;
                }
                D_801C36CC = var_a0_6;
                if ((s32) var_v1_3 < D_801C36DC) {
                    var_v1_3 = (u8) D_801C36DC;
                }
                D_801C36CC = (s32) var_v1_3;
                func_8017DE0C(var_a0_6, D_801C36DC);
                sp18C = 1;
            }
            D_801C31CC.unk8 = 0x6D;
            D_801C31CC.unkC = 0x6D;
            func_8013BDCC(D_801C34F4, 0, 0);
            do {
                var_s0_8 = 0;
                func_8016BB9C();
                func_8017DE0C();
                if (!(func_8016B6DC(0x40, 0) & 0xFF) && !(func_8016B6DC(0x40, 1) & 0xFF)) {
                    var_s0_8 = func_8017D580(0x6D) > 0;
                }
            } while (var_s0_8 != 0);
            var_s0_9 = 0x7F;
            if (func_8017D580(0x6D) > 0) {
loop_128:
                var_s0_9 -= 1;
                if (var_s0_9 != 0) {
                    D_801C31CC.unk8 = 0x6D;
                    D_801C31CC.unkC = 0x6D;
                    D_801C31CC.unk18 = var_s0_9;
                    func_8013BDCC(D_801C34F4, 0, 0);
                    func_8017DE0C();
                    goto loop_128;
                }
                D_801C31CC.unk8 = 0x6D;
                D_801C31CC.unkC = 0x6D;
                func_8013BEA8(D_801C34F4);
            }
        }
        var_s4 += 1;
        goto loop_29;
    }
    if (D_801B3967 == 2) {
        var_s2_4 = 2;
loop_134:
        if (var_s2_4 < 4) {
            if (func_8016C0F0(var_s2_4) != 0) {
                var_s0_10 = 0;
                var_s1_3 = func_8016C088(var_s2_4);
                sp178.unk1 = 6;
                sp178.unk2 = (s8) (var_s2_4 + 2);
                do {
                    temp_v1_3 = var_s0_10 & 0xF;
                    var_s0_10 += 1;
                    temp_v0_4 = (sp178 & 0xF0FFFFFF) | (temp_v1_3 << 0x18);
                    sp178 = temp_v0_4;
                    temp_v0_5 = *var_s1_3;
                    var_s1_3 += 4;
                    sp178 = (temp_v0_4 & 0x0FFFFFFF) | (temp_v0_5 << 0x1C);
                    func_8012D1AC(&sp178, 4);
                    func_8015EBDC(0);
                } while (var_s0_10 < 8);
            }
            var_s2_4 += 1;
            goto loop_134;
        }
        sp178.unk1 = 4;
        func_8012D1AC(&sp178, 4);
        func_80133658();
        func_8013B478(0, 0x64);
    }
    *((D_801C34FC * 4) + &D_801B394C) = 8;
    D_801C34FC += 1;
    return sp188;
}
