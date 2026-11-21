/* m2c reference for func_80101780 @ 80101780 (996 words). Generated; not compiled or validated. */
s32 func_80102710(void *, s32, s32, void *);        /* extern */
? func_801029F4(void *, s32);                       /* extern */
? func_80102B34(void *, s32, void *);               /* extern */
? func_80102F48(void *, s32);                       /* extern */
? func_801032C8(void *, s32);                       /* extern */
? func_8010FDC4(void *, s32 *, ?);                  /* extern */
s32 func_80120EB4(void *, void *);                  /* extern */
? func_80124FC8(void *, VECTOR *, VECTOR *);        /* extern */
? func_80125050(void *, void *, s32 *);             /* extern */
s32 func_801250C8(void *, void *);                  /* extern */
? func_801250FC(void *, VECTOR *, VECTOR *);        /* extern */
? func_801253C8(VECTOR *, VECTOR *);                /* extern */
? func_801254DC(VECTOR *, ?, s32, s32);             /* extern */
? func_8015A05C(s16 *, MATRIX *);                   /* extern */
? func_8016408C(s32 *);                             /* extern */
? func_801640EC(void *);                            /* extern */
? func_801683EC(void *, void *, ?, void *, void *); /* extern */
u16 func_80176C1C(s16, s32, s32);                   /* extern */
s32 func_80176CBC(s32, s32, s32);                   /* extern */
s16 func_80178A1C(s32 *);                           /* extern */
? func_801794E4(void *, s32);                       /* extern */
static void *D_801C34EC = NULL;

void func_80101780(void *arg0) {
    MATRIX sp18;
    s32 sp38;
    s32 sp3C;
    s32 sp40;
    VECTOR sp48;                                    /* compiler-managed */
    VECTOR sp58;
    s16 sp68;
    s16 sp6A;
    u16 sp6C;
    s32 sp70;
    s32 sp74;
    s32 sp78;
    s32 sp7C;
    s32 sp80;
    void *sp84;
    s32 sp88;
    void *sp8C;
    s32 sp90;
    MATRIX *var_a0_4;
    VECTOR *temp_s0_2;
    VECTOR *temp_s3;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_v0;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a0_3;
    s32 var_a1_2;
    s32 var_s1;
    s32 var_s3;
    s32 var_s7;
    s32 var_s7_2;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v0_4;
    s32 var_v0_5;
    s32 var_v0_6;
    s32 var_v0_7;
    s32 var_v0_8;
    s32 var_v0_9;
    s32 var_v1;
    s32 var_v1_2;
    s32 var_v1_3;
    void *temp_a0;
    void *temp_s0;
    void *temp_s0_3;
    void *temp_s0_4;
    void *temp_s0_5;
    void *temp_s2;
    void *temp_s5;
    void *temp_v1;
    void *var_a1;
    void *var_s4;
    void *var_s6;

    var_s6 = arg0;
    var_s4 = arg0;
    sp78 = 0;
    sp7C = 0x350;
    sp80 = 0;
    sp84 = arg0;
    sp88 = 0;
    sp8C = var_s4;
    sp90 = 8;
    arg0->unk3F6 = (u16) (arg0->unk3F6 ^ 1);
loop_1:
    if (sp78 < arg0->unk3CC) {
        temp_s2 = var_s4->unk390;
        temp_s5 = var_s4->unk3A0;
        if (var_s4->unk3D0 > 0) {
            var_s4->unk3D0 = (s32) (var_s4->unk3D0 - func_80178A1C());
            if (var_s4->unk3D0 < 0) {
                var_s4->unk3D0 = 0;
                var_s6 += 0xC;
            } else {
                goto block_129;
            }
            goto block_130;
        }
        var_v1 = 0;
        if ((sp8C->unk3F0 != 0) || (sp8C->unk3F2 != 0)) {
            var_v1 = 1;
        }
        if (var_v1 != 0) {
            if (sp8C->unk3F2 != 0) {
                func_801032C8(arg0, sp78);
            }
            var_s6 += 0xC;
            func_80102F48(arg0, sp78);
            var_s4 += 4;
        } else {
            if (var_s4->unk0 == 3) {
                sp68 = 0;
                sp6A = 0;
                sp6C = temp_s5->unk738->unk18;
                func_8015A05C(&sp68, &sp18);
                temp_s0 = temp_s2 + 0x1C;
                temp_v0 = func_801250C8(temp_s5->unk738 + 0x1C, temp_s0);
                sp74 = temp_v0;
                if (temp_v0 >= 0x321) {
                    sp74 = 0x320;
                }
                sp38 = 0;
                sp40 = 0;
                sp3C = sp74;
                mathMulTransVec(&sp18, (VECTOR *) &sp38, &sp48);
                func_80124FC8(temp_s5->unk738 + 0x1C, &sp48, &sp48);
                func_801250FC(temp_s0, &sp48, &sp48);
                if (sp84->unk198 < 0x3C) {
                    var_s7 = 0xA - (sp84->unk198 / 12);
                } else {
                    var_s7 = 5;
                }
                temp_s2->unk14 = func_80176C1C((s16) temp_s2->unk14, (s32) sp48, var_s7);
                temp_s2->unk18 = func_80176C1C((s16) temp_s2->unk18, sp48.vz, var_s7);
                temp_s2->unk16 = 0;
                func_8015A05C(temp_s2 + 0x14, temp_s2 + 0x28);
                temp_s3 = arg0 + sp7C;
                func_801254DC(temp_s3, 0, var_s4->unk3AC, var_s4->unk3B4);
                temp_a0 = var_s4->unk3A0;
                if (temp_a0->unk20C < 0) {
                    var_s6->unk354 = (s32) (var_s6->unk354 + ((s32) (temp_a0->unk7A4 * var_s4->unk3AC) / (s32) temp_a0->unkCC));
                }
                if (sp8C->unk3EC != 0) {
                    if (sp84->unk198 < 0x258) {
                        sp84->unk198 = (s32) (sp84->unk198 + 1);
                    }
                    temp_s0_2 = temp_s2 + 0x1C;
                    func_801253C8(&sp58, temp_s0_2);
                    mathMulTransVec(&sp18, temp_s3, &sp48);
                    func_80124FC8(temp_s5->unk738 + 0x1C, &sp48, temp_s0_2);
                    func_801683EC(temp_s2, arg0 + (sp88 + 8), 1, temp_s5 + 0x1C4, temp_s5 + 0x1E4);
                    func_801253C8(temp_s0_2, &sp58);
                    var_s3 = 0;
                    sp38 = 0;
                    sp3C = 0;
                    sp40 = 0;
                    sp84->unk19C = 0U;
                    var_v1_2 = 0 << 5;
                    do {
                        temp_s0_3 = arg0 + sp90 + (var_v1_2 + 4);
                        if (temp_s0_3->unk0 != 0) {
                            if (func_80102710(arg0, sp78, var_s3, temp_s0_3) != 0) {
                                temp_s0_3->unk0 = 0;
                                var_s3 += 1;
                            } else {
                                temp_v1 = arg0 + sp88;
                                temp_v1->unk198 = 0;
                                temp_a1 = temp_s0_3->unk10;
                                if (temp_v1->unk19C == 0) {
                                    temp_v1->unk19C = 1U;
                                    sp38 = (s32) (-temp_s0_3->unk4 * temp_a1) >> 0xC;
                                    sp3C = (s32) (-temp_s0_3->unk8 * temp_a1) >> 0xC;
                                    sp40 = (s32) (-temp_s0_3->unkC * temp_a1) >> 0xC;
                                } else {
                                    temp_a0_2 = (s32) (-temp_s0_3->unk4 * temp_a1) >> 0xC;
                                    sp48 = temp_a0_2;
                                    sp48.vy = (s32) (-temp_s0_3->unk8 * temp_a1) >> 0xC;
                                    sp48.vz = (s32) (-temp_s0_3->unkC * temp_a1) >> 0xC;
                                    if ((sp38 * temp_a0_2) < 0) {
                                        sp38 = (s32) (sp38 + temp_a0_2) >> 1;
                                    } else {
                                        var_v0 = sp38 < temp_a0_2;
                                        if (sp38 < 0) {
                                            var_v0 = temp_a0_2 < sp38;
                                        }
                                        if (var_v0 != 0) {
                                            sp38 = temp_a0_2;
                                        }
                                    }
                                    if ((sp3C * sp48.vy) < 0) {
                                        sp3C = (s32) (sp3C + sp48.vy) >> 1;
                                    } else {
                                        if (sp3C < 0) {
                                            var_v0_2 = sp48.vy < sp3C;
                                        } else {
                                            var_v0_2 = sp3C < sp48.vy;
                                        }
                                        if (var_v0_2 != 0) {
                                            sp3C = sp48.vy;
                                        }
                                    }
                                    if ((sp40 * sp48.vz) < 0) {
                                        sp40 = (s32) (sp40 + sp48.vz) >> 1;
                                    } else {
                                        if (sp40 < 0) {
                                            var_v0_3 = sp48.vz < sp40;
                                        } else {
                                            var_v0_3 = sp40 < sp48.vz;
                                        }
                                        if (var_v0_3 != 0) {
                                            sp40 = sp48.vz;
                                        }
                                    }
                                }
                                goto block_49;
                            }
                        } else {
block_49:
                            var_s3 += 1;
                        }
                        var_v1_2 = var_s3 << 5;
                    } while (var_s3 < 3);
                    if (sp84->unk19C != 0) {
                        mathMulVec(temp_s2 + 0x28, (VECTOR *) &sp38, &sp48);
                        var_s6->unk350 = (s32) (var_s6->unk350 + (s32) sp48);
                        var_s6->unk354 = (s32) (var_s6->unk354 + sp48.vy);
                        var_s6->unk358 = (s32) (var_s6->unk358 + sp48.vz);
                    }
                }
                mathMulTransVec(&sp18, arg0 + sp7C, &sp48);
                func_80124FC8(temp_s5->unk738 + 0x1C, &sp48, &sp48);
                if (sp8C->unk3F4 != 0) {
                    temp_s2->unk1C = (s32) sp48;
                    temp_s2->unk20 = sp48.vy;
                    temp_s2->unk24 = sp48.vz;
                    sp38 = 0;
                    sp40 = 0;
                    sp3C = sp74;
                    mathMulTransVec(&sp18, (VECTOR *) &sp38, &sp48);
                    func_80124FC8(temp_s5->unk738 + 0x1C, &sp48, &sp48);
                    func_801250FC(temp_s2 + 0x1C, &sp48, &sp48);
                    temp_s2->unk14 = (u16) sp48;
                    temp_s2->unk16 = 0;
                    temp_s2->unk18 = (u16) sp48.vz;
                    sp8C->unk3F4 = 0U;
                    var_a1 = temp_s2 + 0x1C;
                } else {
                    temp_s2->unk1C = func_80176CBC(temp_s2->unk1C, (s32) sp48, var_s7);
                    temp_s2->unk20 = func_80176CBC(temp_s2->unk20, sp48.vy, var_s7);
                    var_v1_3 = temp_s2->unk24 - sp48.vz;
                    sp70 = var_v1_3;
                    if (var_v1_3 < 0) {
                        var_v1_3 = -var_v1_3;
                    }
                    if (var_v1_3 >= 0x141) {
                        var_s7_2 = 5;
                    } else {
                        var_s7_2 = var_v1_3 >> 6;
                        if (var_v1_3 < 0) {
                            var_s7_2 = (s32) (var_v1_3 + 0x3F) >> 6;
                        }
                    }
                    temp_s2->unk24 = func_80176CBC(temp_s2->unk24, sp48.vz, var_s7_2);
                    var_a1 = temp_s2 + 0x1C;
                }
                func_80125050(temp_s5->unk738 + 0x1C, var_a1, &sp38);
                mathMulVec(temp_s2 + 0x28, (VECTOR *) &sp38, arg0 + (sp80 + 0x338));
                var_a0 = func_80120EB4(D_801C34EC, var_s4->unk3A0 + 0x1E4);
                if ((D_801C34EC->unk12688 == 3) && (var_s4->unk3A0->unk1EC >= 0x1F41)) {
                    var_a0 = 0x3840;
                }
                if (var_a0 < var_s4->unk3A0->unk1EC) {
                    var_s4->unk3A0->unk1EC = var_a0;
                    var_s4->unk3A0->unk1F0 = func_80176CBC(var_s4->unk3A0->unk1F0, 0xE3, 5);
                }
            } else if (var_s4->unk0 == 5) {
                sp70 = (s16) temp_s2->unk14 - (s16) var_s4->unk398->unk14;
                func_8016408C(&sp70);
                var_v0_4 = sp70;
                if (var_v0_4 < 0) {
                    var_v0_4 = -var_v0_4;
                }
                if (var_v0_4 >= 0x401) {
                    temp_s2->unk14 = (u16) (temp_s2->unk14 + 0x800);
                    func_801640EC(temp_s2 + 0x14);
                    temp_s2->unk18 = (u16) (temp_s2->unk18 + 0x800);
                    func_801640EC(temp_s2 + 0x18);
                }
                temp_s2->unk14 = func_80176C1C((s16) temp_s2->unk14, (s32) (s16) var_s4->unk398->unk14, 3);
                temp_s2->unk18 = func_80176C1C((s16) temp_s2->unk18, (s32) (s16) var_s4->unk398->unk18, 3);
                temp_s2->unk16 = 0;
                func_8015A05C(temp_s2 + 0x14, temp_s2 + 0x28);
                sp38 = 0;
                sp3C = 0;
                sp40 = 0x78;
                mathMulTransVec(var_s4->unk398 + 0x28, (VECTOR *) &sp38, &sp48);
                func_80124FC8(var_s4->unk398 + 0x1C, &sp48, &sp48);
                temp_s2->unk1C = func_80176CBC(temp_s2->unk1C, (s32) sp48, 3);
                temp_s2->unk20 = func_80176CBC(temp_s2->unk20, sp48.vy, 3);
                temp_s2->unk24 = func_80176CBC(temp_s2->unk24, sp48.vz, 3);
            } else {
                func_80178A1C(&sp70);
                if (sp84->unk198 != 0) {
                    var_a0_2 = 0;
                    if (temp_s5->unk86 != 0) {
                        var_a0_3 = 0;
                        var_a1_2 = (s32) (((s32) temp_s5->unk21C >> 3) * var_s4->unk3C4) / (s32) temp_s5->unkE0;
                        if ((arg0->unk3A8 == 1) || (temp_s5->unkA5 != 0)) {
                            var_a0_3 = 1;
                        }
                        if (var_a0_3 != 0) {
                            var_a1_2 = var_a1_2 >> 1;
                        }
                        var_v0_5 = func_80176CBC(var_s6->unk350, var_a1_2, 5);
                        goto block_87;
                    }
                    var_s6->unk350 = (s32) ((s32) (((s32) temp_s5->unk21C >> 3) * var_s4->unk3BC) / (s32) temp_s5->unkE0);
                    if ((arg0->unk3A8 == 1) || (temp_s5->unkA5 != 0)) {
                        var_a0_2 = 1;
                    }
                    if (var_a0_2 != 0) {
                        var_v0_5 = (s32) var_s6->unk350 >> 1;
block_87:
                        var_s6->unk350 = var_v0_5;
                    }
                    var_s6->unk354 = (s32) var_s4->unk3AC;
                    if (var_s6->unk358 != var_s4->unk3B4) {
                        var_s6->unk358 = func_80176CBC(var_s6->unk358, var_s4->unk3B4, 5);
                    }
                }
                func_801029F4(arg0, sp78);
                if (sp8C->unk3EC != 0) {
                    var_a0_4 = temp_s2 + 0x28;
                    if (sp84->unk198 < 0x258) {
                        sp84->unk198 = (s32) (sp84->unk198 + 1);
                        var_a0_4 = temp_s2 + 0x28;
                    }
                    mathMulTransVec(var_a0_4, arg0 + sp7C, &sp48);
                    temp_s0_4 = temp_s5 + 0x1E4;
                    func_80124FC8(temp_s0_4, &sp48, temp_s2 + 0x1C);
                    func_801683EC(temp_s2, arg0 + (sp88 + 8), 1, temp_s5 + 0x1C4, temp_s0_4);
                    var_s1 = 0;
                    sp38 = 0;
                    sp3C = 0;
                    sp40 = 0;
                    sp84->unk19C = 0U;
                    var_v0_6 = sp88 + 8;
                    do {
                        temp_s0_5 = arg0 + var_v0_6 + ((var_s1 << 5) + 4);
                        if (temp_s0_5->unk0 != 0) {
                            if (func_80102710(arg0, sp78, var_s1, temp_s0_5) != 0) {
                                temp_s0_5->unk0 = 0;
                                var_s1 += 1;
                            } else {
                                sp84->unk198 = 0;
                                if ((var_s1 < 3) && (temp_s5->unk85 == 0)) {
                                    sp48 = -temp_s0_5->unk4;
                                    sp48.vy = -temp_s0_5->unk8;
                                    sp48.vz = -temp_s0_5->unkC;
                                    func_8010FDC4(temp_s5, &sp48, 0x28);
                                }
                                if (temp_s5->unk7A4 < temp_s5->unkC8) {
                                    temp_a1_2 = temp_s0_5->unk10 + 2;
                                    if (sp84->unk19C == 0) {
                                        sp84->unk19C = 1U;
                                        sp38 = (s32) (-temp_s0_5->unk4 * temp_a1_2) >> 0xC;
                                        sp3C = (s32) (-temp_s0_5->unk8 * temp_a1_2) >> 0xC;
                                        sp40 = (s32) (-temp_s0_5->unkC * temp_a1_2) >> 0xC;
                                    } else {
                                        temp_a0_3 = (s32) (-temp_s0_5->unk4 * temp_a1_2) >> 0xC;
                                        sp48 = temp_a0_3;
                                        sp48.vy = (s32) (-temp_s0_5->unk8 * temp_a1_2) >> 0xC;
                                        sp48.vz = (s32) (-temp_s0_5->unkC * temp_a1_2) >> 0xC;
                                        if ((sp38 * temp_a0_3) < 0) {
                                            sp38 = (s32) (sp38 + temp_a0_3) >> 1;
                                        } else {
                                            var_v0_7 = sp38 < temp_a0_3;
                                            if (sp38 < 0) {
                                                var_v0_7 = temp_a0_3 < sp38;
                                            }
                                            if (var_v0_7 != 0) {
                                                sp38 = temp_a0_3;
                                            }
                                        }
                                        if ((sp3C * sp48.vy) < 0) {
                                            sp3C = (s32) (sp3C + sp48.vy) >> 1;
                                        } else {
                                            if (sp3C < 0) {
                                                var_v0_8 = sp48.vy < sp3C;
                                            } else {
                                                var_v0_8 = sp3C < sp48.vy;
                                            }
                                            if (var_v0_8 != 0) {
                                                sp3C = sp48.vy;
                                            }
                                        }
                                        if ((sp40 * sp48.vz) < 0) {
                                            sp40 = (s32) (sp40 + sp48.vz) >> 1;
                                        } else {
                                            if (sp40 < 0) {
                                                var_v0_9 = sp48.vz < sp40;
                                            } else {
                                                var_v0_9 = sp40 < sp48.vz;
                                            }
                                            if (var_v0_9 != 0) {
                                                sp40 = sp48.vz;
                                            }
                                        }
                                    }
                                }
                                goto block_123;
                            }
                        } else {
block_123:
                            var_s1 += 1;
                        }
                        var_v0_6 = sp88 + 8;
                    } while (var_s1 < 3);
                    if (sp84->unk19C != 0) {
                        mathMulVec(temp_s2 + 0x28, (VECTOR *) &sp38, (VECTOR *) &sp48);
                        var_s6->unk350 = (s32) (var_s6->unk350 + sp48);
                        var_s6->unk354 = (s32) (var_s6->unk354 + sp48.vy);
                        var_s6->unk358 = (s32) (var_s6->unk358 + sp48.vz);
                    }
                }
                func_80102B34(arg0, sp78, arg0 + sp7C);
            }
            func_801794E4(temp_s2 + 0x1C, sp78);
block_129:
            var_s6 += 0xC;
block_130:
            var_s4 += 4;
        }
        sp7C += 0xC;
        sp80 += 0xC;
        sp84 += 0x198;
        sp88 += 0x198;
        sp8C += 1;
        sp90 += 0x198;
        sp78 += 1;
        goto loop_1;
    }
}
