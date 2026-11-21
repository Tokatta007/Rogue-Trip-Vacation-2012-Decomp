/* m2c reference for func_8011DDD0 @ 8011DDD0 (752 words). Generated; not compiled or validated. */
? func_8011B93C(s32);                               /* extern */
? func_8011BA5C(void *, s32, void *);               /* extern */
s32 func_8011BB04(void *, s32);                     /* extern */
? func_8011DA64();                                  /* extern */
? func_80159C1C(void *, ? *, s16, s32, void *);     /* extern */
extern ? D_801823B0;
extern ? D_801823F0;
extern ? D_80183408;
extern ? D_801834D8;
extern ? D_801834E0;
extern ? D_801834EC;
extern s32 D_801C3788;
extern ? D_801C7580;
extern ? D_801CAE10;
static s16 D_801C32CC = 0;
static ? D_801C32D0;                                /* unable to generate initializer: unknown type */

void func_8011DDD0(void) {
    ? *var_a1;
    ? *var_v0_12;
    s16 var_v0_17;
    s16 var_v0_18;
    s16 var_v0_19;
    s16 var_v0_23;
    s32 temp_s3;
    s32 temp_v1;
    s32 var_s0;
    s32 var_s1;
    s32 var_s2;
    s32 var_s2_2;
    s32 var_s4;
    s32 var_v0;
    s32 var_v0_10;
    s32 var_v0_11;
    s32 var_v0_3;
    s32 var_v0_4;
    s32 var_v0_5;
    s32 var_v0_6;
    s32 var_v0_7;
    s32 var_v0_8;
    s32 var_v0_9;
    s32 var_v1;
    s32 var_v1_3;
    u16 temp_v0;
    u16 temp_v0_2;
    u16 temp_v0_3;
    u16 temp_v0_4;
    u16 temp_v0_5;
    u16 temp_v0_6;
    u16 var_v0_14;
    u16 var_v0_15;
    u16 var_v0_16;
    u16 var_v0_20;
    u16 var_v0_21;
    u16 var_v0_22;
    u16 var_v1_4;
    u16 var_v1_5;
    u16 var_v1_6;
    u16 var_v1_7;
    u32 var_v0_2;
    u8 var_v0_13;
    u8 var_v1_2;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a0_3;
    void *temp_a3;
    void *temp_s0;
    void *var_a0;

    var_s2 = D_801C3788;
    if (var_s2 != -1) {
        var_v1 = var_s2 * 2;
        do {
            temp_v1 = (var_v1 + var_s2) * 4;
            temp_s0 = ((temp_v1 - var_s2) * 8) + &D_801C7580;
            temp_s3 = (temp_v1 + &D_801823F0)->unk8;
            var_s4 = 3;
            temp_s0->unk3E = (u16) (temp_s0->unk3E - 1);
            var_s1 = temp_s0->unk24 & 0xFFFF;
            if ((temp_s0->unk3E << 0x10) <= 0) {
                if (var_s1 & 0x400) {
                    temp_s0->unk3E = (u16) (temp_s0->unk3E + temp_s0->unk3C);
                    temp_s0->unk47 = (u8) temp_s0->unk46;
                    var_v0 = 3 & 2;
                    goto block_14;
                }
                if ((u8) temp_s0->unk49 >= 0x46U) {
                    if (temp_s0->unk49 == 0x46) {
                        var_v0_2 = (u16) temp_s0->unk3C >> 1;
                    } else {
                        var_v0_2 = temp_s0->unk3C * 2;
                    }
                    temp_s0->unk3C = (u16) var_v0_2;
                    temp_s0->unk40 = (u16) temp_s0->unk3C;
                    temp_s0->unk3E = (u16) temp_s0->unk40;
                    temp_s0->unk47 = (u8) D_80183408.unk0;
                    temp_s0->unk46 = (u8) temp_s0->unk47;
                    temp_s0->unk48 = (u8) D_80183408.unk2;
                    temp_s0->unk24 = (u16) (temp_s0->unk24 | 0x2800);
                    temp_s0->unk2C = (s32) ((temp_s0->unk46 * 0xC) + &D_801834D8)->unk8;
                    temp_s0->unk44 = (u16) ((s32) (temp_s0->unk48 << 0xC) / (s32) temp_s0->unk3C);
                    temp_s0->unk42 = 0x1000U;
                    var_s1 = temp_s0->unk24 & 0xFFFF;
                    if ((u16) temp_s0->unk38 < 8U) {
                        temp_s0->unk38 = 8U;
                    }
                    temp_s0->unk49 = 0xAU;
                    var_s4 = 2;
                    goto block_13;
                }
                goto block_12;
            }
block_13:
            var_v0 = var_s4 & 2;
block_14:
            if (var_v0 != 0) {
                var_v0_3 = var_s1 & 0x100;
                if (var_s1 & 4) {
                    if (temp_s0->unk34 != 0) {
                        temp_s0->unk38 = (u16) ((u32) (temp_s0->unk38 * temp_s0->unk34) >> 0xC);
                    }
                    temp_s0->unk14 = (u32) (temp_s0->unk38 + temp_s0->unk14);
                    temp_s0->unk26 = (u16) ((u32) temp_s0->unk14 >> 4);
                    var_v0_4 = var_s1 & 0x20;
                    if (!(var_s1 & 0x80)) {
                        temp_s0->unk55 = (u8) (((u32) temp_s0->unk14 >> 8) + 0xA);
                        var_v1_2 = temp_s0->unk55;
                        if ((s8) var_v1_2 >= 0x40) {
                            var_v1_2 = 0x3F;
                        }
                        temp_s0->unk55 = var_v1_2;
                        var_v0_4 = var_s1 & 0x20;
                    }
                    if (var_v0_4 != 0) {
                        temp_s0->unk3A = (u16) (temp_s0->unk3A + ((s32) -(s32) temp_s0->unk3A >> 5));
                        temp_s0->unk18 = (u32) (temp_s0->unk3A + temp_s0->unk18);
                        var_v0_3 = var_s1 & 0x100;
                    } else {
                        if (temp_s0->unk49 == 0x18) {
                            temp_s0->unk18 = (u32) temp_s0->unk14;
                            var_v0_5 = (s32) temp_s0->unk18 >> 4;
                        } else {
                            var_v0_5 = (s32) temp_s0->unk26;
                        }
                        temp_s0->unk28 = (s16) var_v0_5;
                        var_v0_3 = var_s1 & 0x100;
                    }
                }
                if (var_v0_3 != 0) {
                    func_8011BA5C(temp_s0, temp_s0->unkC, temp_s0 + 0x10);
                    temp_s0->unk1C = (s16) temp_s0->unk0;
                    temp_s0->unk1E = (s16) temp_s0->unk4;
                    var_v0_6 = temp_s0->unk8;
                    goto block_51;
                }
                var_v0_7 = var_s4 & 1;
                if (var_s1 & 1) {
                    if (temp_s0->unk4E != 0) {
                        temp_s0->unkC = (s16) ((u16) temp_s0->unkC - ((s16) (u16) temp_s0->unkC >> temp_s0->unk4E));
                        temp_s0->unkE = (u16) (temp_s0->unkE - ((s16) temp_s0->unkE >> temp_s0->unk4E));
                        temp_s0->unk10 = (u16) (temp_s0->unk10 - ((s16) temp_s0->unk10 >> temp_s0->unk4E));
                    }
                    temp_s0->unk0 = (s32) (temp_s0->unk0 + (s16) (u16) temp_s0->unkC);
                    temp_s0->unk4 = (s32) (temp_s0->unk4 + (s16) temp_s0->unkE);
                    temp_s0->unk8 = (s32) (temp_s0->unk8 + (s16) temp_s0->unk10);
                    if (temp_s0->unk49 == 0x3D) {
                        temp_s0->unk10 = (u16) (temp_s0->unk10 + 0x19);
                        var_v0_8 = var_s1 & 2;
                        if (temp_s0->unk30 < temp_s0->unk8) {
                            goto block_12;
                        }
                        goto block_47;
                    }
                    var_v0_8 = var_s1 & 2;
                    if (var_s1 & 8) {
                        temp_s0->unk10 = (u16) (temp_s0->unk10 - 0x19);
                        if (var_s1 & 0x10) {
                            var_v0_8 = var_s1 & 2;
                            if (temp_s0->unk8 < temp_s0->unk30) {
                                if ((temp_s0->unk10 << 0x10) <= 0) {
                                    temp_s0->unk8 = (s32) ((temp_s0->unk30 * 2) - temp_s0->unk8);
                                    temp_s0->unk10 = (u16) ((s16) -(s16) temp_s0->unk10 >> 1);
                                    if ((s16) temp_s0->unk10 >= 0x7D) {
                                        temp_s0->unk4D = (u8) (temp_s0->unk4D ^ (rand() & 0x38));
                                        temp_s0->unkC = (s16) ((u16) temp_s0->unkC - ((s32) ((u16) temp_s0->unkC << 0x10) >> 0x12));
                                        temp_s0->unkE = (u16) (temp_s0->unkE - ((s32) (temp_s0->unkE << 0x10) >> 0x12));
                                        var_v0_8 = var_s1 & 2;
                                        goto block_47;
                                    }
                                }
                                goto block_12;
                            }
                            goto block_47;
                        }
                        var_v0_9 = var_s1 & 0x20;
                        if (!(var_s1 & 0x40) || (var_v0_9 = var_s1 & 0x20, ((temp_s0->unk30 >= (temp_s0->unk8 + temp_s0->unk18)) == 0))) {
                            if ((var_v0_9 == 0) || (func_8011BB04(temp_s0, var_s2) != 0)) {
                                var_v0_8 = var_s1 & 2;
                                goto block_47;
                            }
                            goto block_76;
                        }
block_12:
                        func_8011B93C(var_s2);
                        var_s2 = temp_s3;
                    } else {
block_47:
                        if (var_v0_8 != 0) {
                            temp_s0->unk0 = (s32) (temp_s0->unk0 + (temp_s0->unk4A * 4));
                            temp_s0->unk4 = (s32) (temp_s0->unk4 + (temp_s0->unk4B * 4));
                            temp_s0->unk8 = (s32) (temp_s0->unk8 + (temp_s0->unk4C * 4));
                        }
                        temp_s0->unk1C = (s16) ((s32) temp_s0->unk0 >> 4);
                        temp_s0->unk1E = (s16) ((s32) temp_s0->unk4 >> 4);
                        var_v0_7 = var_s4 & 1;
                        if (!(var_s1 & 0x20)) {
                            var_v0_6 = (s32) temp_s0->unk8 >> 4;
block_51:
                            temp_s0->unk20 = (s16) var_v0_6;
                            goto block_52;
                        }
                        goto block_53;
                    }
                } else {
                    goto block_53;
                }
            } else {
block_52:
                var_v0_7 = var_s4 & 1;
block_53:
                var_v0_10 = var_s1 & 0x4000;
                if (var_v0_7 != 0) {
                    temp_s0->unk42 = (u16) (temp_s0->unk42 - temp_s0->unk44);
                    temp_s0->unk40 = (u16) (temp_s0->unk40 - temp_s0->unk48);
                    var_v0_10 = var_s1 & 0x4000;
                    if ((temp_s0->unk40 << 0x10) <= 0) {
                        do {
                            temp_s0->unk40 = (u16) (temp_s0->unk40 + temp_s0->unk3C);
                            temp_s0->unk47 = (u8) (temp_s0->unk47 + 1);
                        } while (temp_s0->unk40 & 0x8000);
                        temp_s0->unk42 = 0x1000U;
                        var_v0_10 = var_s1 & 0x4000;
                    }
                }
                var_v0_11 = var_s1 & 0x200;
                if (var_v0_10 != 0) {
                    if ((temp_s0->unk47 + 1) == (temp_s0->unk48 + temp_s0->unk46)) {
                        if (var_s1 & 0x400) {
                            var_v1_3 = temp_s0->unk46 * 0xC;
                            var_v0_12 = &D_801834E0;
                            goto block_63;
                        }
                        var_a1 = &D_801C32D0;
                    } else {
                        var_v1_3 = temp_s0->unk47 * 0xC;
                        var_v0_12 = &D_801834EC;
block_63:
                        var_a1 = var_v1_3 + var_v0_12;
                    }
                    func_80159C1C((temp_s0->unk47 * 0xC) + &D_801834E0, var_a1, (s16) temp_s0->unk42, 0x1000 - (s16) temp_s0->unk42, temp_s0 + 0x2C);
                    var_v0_11 = var_s1 & 0x200;
                }
                if (var_v0_11 != 0) {
                    temp_s0->unk4D = (u8) *(temp_s0->unk4D + &D_801823B0);
                }
                var_s2 = temp_s3;
                if (var_s1 & 0x1000) {
                    var_v0_13 = temp_s0->unk51 - temp_s0->unk53;
loop_72:
                    temp_s0->unk51 = var_v0_13;
                    if ((temp_s0->unk51 << 0x18) <= 0) {
                        temp_s0->unk4F = (u8) (temp_s0->unk4F + 1);
                        if (temp_s0->unk4F == temp_s0->unk50) {
                            temp_s0->unk4F = 0U;
                        }
                        var_v0_13 = temp_s0->unk51 + temp_s0->unk52;
                        goto loop_72;
                    }
                    var_s2 = temp_s3;
                    if (var_s1 & 0x2000) {
                        if ((u8) temp_s0->unk52 < 0x7FU) {
                            temp_s0->unk52 = (u8) (temp_s0->unk52 + 1);
block_76:
                            var_s2 = temp_s3;
                        }
                    }
                }
            }
            var_v1 = var_s2 * 2;
        } while (var_s2 != -1);
    }
    var_s2_2 = 0;
    if (D_801C32CC > 0) {
        var_s0 = 0;
        do {
            temp_a3 = var_s0 + &D_801CAE10;
            if (temp_a3->unkC != NULL) {
                if (temp_a3->unk20 != 0) {
                    temp_v0 = temp_a3->unk0;
                    if ((temp_a3->unkC->unk0 << 0x10) > 0) {
                        var_v0_14 = (s16) temp_v0 - 2;
                    } else {
                        var_v0_14 = (s16) temp_v0 + 2;
                    }
                    temp_a3->unk0 = var_v0_14;
                    temp_v0_2 = temp_a3->unk2;
                    if ((temp_a3->unkC->unk2 << 0x10) > 0) {
                        var_v0_15 = (s16) temp_v0_2 - 2;
                    } else {
                        var_v0_15 = (s16) temp_v0_2 + 2;
                    }
                    temp_a3->unk2 = var_v0_15;
                    temp_v0_3 = temp_a3->unk4;
                    if ((temp_a3->unkC->unk4 << 0x10) > 0) {
                        var_v0_16 = (s16) temp_v0_3 - 2;
                    } else {
                        var_v0_16 = (s16) temp_v0_3 + 2;
                    }
                    temp_a3->unk4 = var_v0_16;
                    var_v0_17 = (s16) temp_a3->unk0;
                    if (var_v0_17 < 0) {
                        var_v0_17 = -var_v0_17;
                    }
                    if (var_v0_17 >= 0x15) {
                        var_v1_4 = -0x14U;
                        if ((temp_a3->unk0 << 0x10) > 0) {
                            var_v1_4 = 0x14;
                        }
                        temp_a3->unk0 = var_v1_4;
                    }
                    var_v0_18 = (s16) temp_a3->unk2;
                    if (var_v0_18 < 0) {
                        var_v0_18 = -var_v0_18;
                    }
                    if (var_v0_18 >= 0x15) {
                        var_v1_5 = -0x14U;
                        if ((temp_a3->unk2 << 0x10) > 0) {
                            var_v1_5 = 0x14;
                        }
                        temp_a3->unk2 = var_v1_5;
                    }
                    var_v0_19 = (s16) temp_a3->unk4;
                    if (var_v0_19 < 0) {
                        var_v0_19 = -var_v0_19;
                    }
                    if (var_v0_19 >= 0x15) {
                        var_v1_6 = -0xAU;
                        if ((temp_a3->unk4 << 0x10) > 0) {
                            var_v1_6 = 0xA;
                        }
                        temp_a3->unk4 = var_v1_6;
                    }
                } else {
                    temp_v0_4 = temp_a3->unk0;
                    if ((temp_a3->unkC->unk0 << 0x10) > 0) {
                        var_v0_20 = (s16) temp_v0_4 - 9;
                    } else {
                        var_v0_20 = (s16) temp_v0_4 + 9;
                    }
                    temp_a3->unk0 = var_v0_20;
                    temp_v0_5 = temp_a3->unk2;
                    if ((temp_a3->unkC->unk2 << 0x10) > 0) {
                        var_v0_21 = (s16) temp_v0_5 - 9;
                    } else {
                        var_v0_21 = (s16) temp_v0_5 + 9;
                    }
                    temp_a3->unk2 = var_v0_21;
                    temp_v0_6 = temp_a3->unk4;
                    if ((s16) temp_a3->unkC->unk4 >= 0x51) {
                        var_v0_22 = (s16) temp_v0_6 - 6;
                    } else {
                        var_v0_22 = (s16) temp_v0_6 + 6;
                    }
                    temp_a3->unk4 = var_v0_22;
                }
                temp_a0 = temp_a3->unkC;
                temp_a0->unk0 = (u16) (temp_a0->unk0 + temp_a3->unk0);
                temp_a0_2 = temp_a3->unkC;
                temp_a0_2->unk2 = (u16) (temp_a0_2->unk2 + temp_a3->unk2);
                temp_a0_3 = temp_a3->unkC;
                temp_a0_3->unk4 = (u16) (temp_a0_3->unk4 + temp_a3->unk4);
                var_v0_23 = (s16) temp_a3->unk2;
                if (var_v0_23 < 0) {
                    var_v0_23 = -var_v0_23;
                }
                if (var_v0_23 >= 0x29) {
                    var_v1_7 = -0x28U;
                    if ((temp_a3->unk2 << 0x10) > 0) {
                        var_v1_7 = 0x28;
                    }
                    temp_a3->unk2 = var_v1_7;
                }
                temp_a3->unk8 = (u16) (temp_a3->unk8 + temp_a3->unk18);
                if ((s16) temp_a3->unk8 >= 0x1001) {
                    temp_a3->unk8 = 0x1000U;
                    goto block_130;
                }
                var_a0 = temp_a3 + 0x1C;
                if (temp_a3->unk8 & 0x8000) {
                    temp_a3->unk8 = 0U;
block_130:
                    temp_a3->unk18 = (u16) -(s32) temp_a3->unk18;
                    var_a0 = temp_a3 + 0x1C;
                }
                func_80159C1C(var_a0, &D_801C32D0, (s16) temp_a3->unk8, 0x1000 - (s16) temp_a3->unk8, temp_a3->unk14);
            }
            var_s2_2 += 1;
            var_s0 += 0x24;
        } while (var_s2_2 < D_801C32CC);
    }
    func_8011DA64();
}
