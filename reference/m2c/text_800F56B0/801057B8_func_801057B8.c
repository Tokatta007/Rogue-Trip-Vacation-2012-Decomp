/* m2c reference for func_801057B8 @ 801057B8 (1440 words). Generated; not compiled or validated. */
? func_80106E38(void *, void *, s32, s16, s32);     /* extern */
? func_80107094(void *, void *, s16, s32, s32);     /* extern */
? func_80108650(void *, void *, s32, s16, void **, s32); /* extern */
? func_80108A94(void *, s32, void *, s16);          /* extern */
? func_801253C8(s32 *, s32);                        /* extern */
? func_8012552C(s32 *, u16 *, s32);                 /* extern */
void **func_80132F10();                             /* extern */
void **func_80132F28();                             /* extern */
s32 func_8013A06C();                                /* extern */
s32 func_8013A9F0(s32);                             /* extern */
? func_80154AFC(s8 *, ? *, s32, s32);               /* extern */
s16 func_8015A62C(s32, s32, s32);                   /* extern */
? func_801640EC(s16 *);                             /* extern */
? func_80167088(?, ?, ?, ?);                        /* extern */
? func_80167154(?);                                 /* extern */
? func_801675F4(?, ?, s32, s8 *, void **);          /* extern */
? func_80167620(?, ?, s32, s8 *, void **);          /* extern */
? func_80167F30(s32, void *, void *, void *);       /* extern */
s16 func_80178A1C();                                /* extern */
static ? D_801C328C;                                /* unable to generate initializer: unknown type */
static ? D_801C3298;                                /* unable to generate initializer: unknown type */
static void *D_801C34EC = NULL;

void func_801057B8(void *arg0, s32 arg1) {
    u16 sp18;
    s32 sp1C;
    s32 sp28;
    s32 sp30;
    s8 sp38;
    s8 sp39;
    s16 sp58;
    void **sp5C;
    u16 sp60;
    void *sp68;
    s32 sp6C;
    s32 sp70;
    s32 sp74;
    void *sp78;
    void *sp7C;
    s32 sp80;
    s32 sp84;
    s32 sp88;
    s32 sp8C;
    s32 sp90;
    s16 temp_a3_2;
    s16 temp_s2;
    s16 temp_s6;
    s16 temp_t0;
    s16 temp_t1;
    s16 temp_v0_11;
    s16 temp_v0_6;
    s16 temp_v0_7;
    s16 temp_v0_8;
    s16 temp_v1_10;
    s16 temp_v1_5;
    s16 temp_v1_6;
    s16 temp_v1_9;
    s16 var_v0_4;
    s16 var_v0_8;
    s32 temp_a0_4;
    s32 temp_a1_3;
    s32 temp_a2;
    s32 temp_a2_2;
    s32 temp_a3;
    s32 temp_s0_13;
    s32 temp_s0_14;
    s32 temp_s0_7;
    s32 temp_s0_9;
    s32 temp_s1_3;
    s32 temp_s1_4;
    s32 temp_s1_5;
    s32 temp_s1_6;
    s32 temp_s2_3;
    s32 temp_s3_3;
    s32 temp_s3_4;
    s32 temp_s4_2;
    s32 temp_s7;
    s32 temp_t3_2;
    s32 temp_v0;
    s32 temp_v0_5;
    s32 temp_v1_13;
    s32 temp_v1_7;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a1_4;
    s32 var_a2_3;
    s32 var_a2_4;
    s32 var_a3;
    s32 var_s0;
    s32 var_s1;
    s32 var_s1_2;
    s32 var_s3;
    s32 var_s3_2;
    s32 var_s4;
    s32 var_s5;
    s32 var_v0_3;
    s32 var_v0_5;
    s32 var_v0_7;
    s32 var_v1;
    s32 var_v1_2;
    s32 var_v1_3;
    s32 var_v1_4;
    s8 var_s2;
    s8 var_s2_2;
    s8 var_v0_2;
    u8 temp_v0_3;
    u8 temp_v1;
    u8 var_v0;
    u8 var_v0_6;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a0_3;
    void *temp_a0_5;
    void *temp_a0_6;
    void *temp_a0_7;
    void *temp_a0_8;
    void *temp_a1;
    void *temp_a1_2;
    void *temp_s0;
    void *temp_s0_10;
    void *temp_s0_11;
    void *temp_s0_12;
    void *temp_s0_2;
    void *temp_s0_3;
    void *temp_s0_4;
    void *temp_s0_5;
    void *temp_s0_6;
    void *temp_s0_8;
    void *temp_s1;
    void *temp_s1_2;
    void *temp_s2_2;
    void *temp_s2_4;
    void *temp_s2_5;
    void *temp_s3;
    void *temp_s3_2;
    void *temp_s4;
    void *temp_t3;
    void *temp_v0_10;
    void *temp_v0_2;
    void *temp_v0_4;
    void *temp_v0_9;
    void *temp_v1_11;
    void *temp_v1_12;
    void *temp_v1_14;
    void *temp_v1_15;
    void *temp_v1_16;
    void *temp_v1_2;
    void *temp_v1_3;
    void *temp_v1_4;
    void *temp_v1_8;
    void *var_a0_3;
    void *var_a1;
    void *var_a1_2;
    void *var_a1_3;
    void *var_a2;
    void *var_a2_2;
    void *var_s5_2;

    temp_s6 = (s16) arg0->unk3F6;
    if (arg1 == 0) {
        sp5C = func_80132F10();
        sp6C = 0;
    } else {
        sp5C = func_80132F28();
        sp6C = -0xC;
    }
    temp_t3 = *sp5C;
    sp68 = temp_t3;
    if (arg1 == 1) {
        temp_v0 = temp_s6 * 0x30;
        temp_v0_2 = temp_v0 + arg0 + 0x548C;
        temp_v0_2->unk8 = 0;
        temp_v0_2->unkA = 0;
        temp_v0_2->unkC = 0x140;
        temp_v0_2->unkE = 0;
        temp_v0_2->unk10 = 0;
        temp_v0_2->unk12 = 2;
        temp_v0_2->unk14 = 0x140;
        temp_v0_2->unk16 = 2;
        AddPrim(temp_t3, temp_v0 + arg0 + 0x548C);
    }
    temp_s0 = arg0 + arg1;
    if (temp_s0->unk3EE != 0) {
        func_80106E38(arg0, sp68, arg1, temp_s6, sp6C);
    }
    var_s0 = 0;
    if ((temp_s0->unk3EE != 0) && (func_8013A06C() == 0)) {
        var_s0 = D_801C34EC->unk7D8 == 3;
    }
    if (var_s0 != 0) {
        func_80108650(arg0, sp68, arg1, temp_s6, sp5C, sp6C);
    }
    temp_a1 = arg0 + (arg1 * 4);
    temp_a0 = arg0 + arg1;
    sp60 = (u16) (s8) temp_a1->unk3A0->unk2A5;
    if (temp_a0->unk3EE != 0) {
        var_v0 = 1;
        if (temp_a1->unk3A0->unk294 != 0) {
            temp_a0->unk4D6E = (u8) (temp_a0->unk4D6E + 1);
            var_s3 = 0;
            if ((s8) temp_a0->unk4D6E >= 0xB) {
                var_v0 = temp_a0->unk4D6C ^ 1;
                goto block_16;
            }
        } else {
block_16:
            temp_a0->unk4D6C = var_v0;
            temp_a0->unk4D6E = 0U;
            var_s3 = 0;
        }
        var_s5 = 0;
        sp8C = 0;
        sp90 = 0;
        sp74 = arg1 * 0x14;
        sp78 = arg0 + (arg1 * 4);
        sp84 = arg1 * 0x28;
        temp_t3_2 = temp_s6 * 0x28;
        sp70 = temp_t3_2;
        sp7C = arg0 + (temp_t3_2 + 0x4CEC);
        sp80 = temp_s6 * 0x50;
        do {
            temp_v1 = (sp78->unk3A0 + var_s3)->unk2A7;
            temp_s0_2 = arg0 + ((sp90 * 0x10) + 0x214C) + sp70 + sp74;
            var_s2 = (s8) temp_v1;
            if (temp_v1 & 0x80) {
                var_s2 = 0x63;
            }
            if ((var_s2 << 0x10) > 0) {
                temp_a0_2 = sp78->unk3A0;
                var_v1 = 0;
                if (((temp_a0_2 + var_s3)->unk2B0 != 0) || (temp_a0_2->unk1A1 != 0)) {
                    var_v1 = 1;
                }
                if (var_v1 != 0) {
                    if ((s16) sp60 == var_s3) {
                        temp_s0_2->unk4 = 0xFF;
                        temp_s0_2->unk5 = 0;
                        temp_s0_2->unk6 = 0;
                    } else {
                        temp_s0_2->unk4 = 0x64;
                        temp_s0_2->unk5 = 7;
                        temp_s0_2->unk6 = 7;
                    }
                } else if ((s16) sp60 == var_s3) {
                    temp_s0_2->unk4 = 0x23;
                    temp_s0_2->unk5 = 0xFF;
                    temp_s0_2->unk6 = 0x23;
                } else {
                    temp_s0_2->unk4 = 7;
                    temp_s0_2->unk5 = 0x64;
                    temp_s0_2->unk6 = 7;
                }
                temp_s0_2->unk8 = 0x118;
                temp_s0_2->unkA = (s16) (var_s5 + (sp6C + 0x2E));
                if ((s16) sp60 == var_s3) {
                    temp_v1_2 = sp74 + (sp70 + arg0) + 0x4CEC;
                    temp_v1_2->unk8 = 0x114;
                    temp_v1_2->unkA = (s16) (var_s5 + (sp6C + 0x2C));
                    AddPrim(sp68, sp7C + sp74);
                    AddPrim(sp68, arg0 + ((temp_s6 * 0x18) + 0x4D3C) + (arg1 * 0xC));
                }
                if (var_s3 == 7) {
                    temp_v1_3 = sp78->unk3A0;
                    if (temp_v1_3->unk294 != 0) {
                        if ((arg0 + arg1)->unk4D6C != 0) {
                            var_a0 = 0;
                            if (((temp_v1_3 + 7)->unk2B0 != 0) || (temp_v1_3->unk1A1 != 0)) {
                                var_a0 = 1;
                            }
                            if (var_a0 != 0) {
                                temp_s0_2->unk4 = 0xFF;
                                goto block_43;
                            }
                            temp_s0_2->unk4 = 0x23;
                            temp_s0_2->unk5 = 0xFF;
                            temp_s0_2->unk6 = 0x23;
                        } else {
                            temp_s0_2->unk4 = 0;
block_43:
                            temp_s0_2->unk5 = 0;
                            temp_s0_2->unk6 = 0;
                        }
                    }
                }
                AddPrim(sp68, temp_s0_2);
                AddPrim(sp68, arg0 + (sp8C + 0x278C) + (temp_s6 * 0x18) + (arg1 * 0xC));
                var_v1_2 = 0;
                temp_a0_3 = sp78->unk3A0;
                temp_s0_3 = arg0 + ((sp90 << 5) + 0x35CC) + sp80 + sp84;
                temp_s1 = temp_s0_3 + 0x14;
                if (((temp_a0_3 + var_s3)->unk2B0 != 0) || (temp_a0_3->unk1A1 != 0)) {
                    var_v1_2 = 1;
                }
                if (var_v1_2 != 0) {
                    if ((s16) sp60 == var_s3) {
                        temp_s0_3->unk4 = 0xFF;
                        temp_s0_3->unk5 = 0;
                        temp_s0_3->unk6 = 0;
                        temp_s1->unk4 = 0xFF;
                        temp_s1->unk5 = 0;
                        temp_s1->unk6 = 0;
                    } else {
                        var_v0_2 = 7;
                        temp_s0_3->unk4 = 0x64;
                        temp_s0_3->unk5 = 7;
                        temp_s0_3->unk6 = 7;
                        temp_s1->unk4 = 0x64;
                        temp_s1->unk5 = 7;
                        goto block_54;
                    }
                } else {
                    var_v0_2 = 7;
                    if ((s16) sp60 == var_s3) {
                        var_v0_2 = 0x23;
                        temp_s0_3->unk4 = 0x23;
                        temp_s0_3->unk5 = 0xFF;
                        temp_s0_3->unk6 = 0x23;
                        temp_s1->unk4 = 0x23;
                        temp_s1->unk5 = 0xFF;
                    } else {
                        temp_s0_3->unk4 = 7;
                        temp_s0_3->unk5 = 0x64;
                        temp_s0_3->unk6 = 7;
                        temp_s1->unk4 = 7;
                        temp_s1->unk5 = 0x64;
                    }
block_54:
                    temp_s1->unk6 = var_v0_2;
                }
                var_v0_3 = var_s2 << 0x10;
                if (var_s3 == 7) {
                    temp_v1_4 = sp78->unk3A0;
                    var_v0_3 = var_s2 << 0x10;
                    if (temp_v1_4->unk294 != 0) {
                        if ((arg0 + arg1)->unk4D6C != 0) {
                            var_a0_2 = 0;
                            if (((temp_v1_4 + 7)->unk2B0 != 0) || (temp_v1_4->unk1A1 != 0)) {
                                var_a0_2 = 1;
                            }
                            if (var_a0_2 != 0) {
                                temp_s0_3->unk4 = 0xFF;
                                temp_s0_3->unk5 = 0;
                                temp_s0_3->unk6 = 0;
                                temp_s1->unk4 = 0xFF;
                                goto block_65;
                            }
                            temp_s0_3->unk4 = 0x23;
                            temp_s0_3->unk5 = 0xFF;
                            temp_s0_3->unk6 = 0x23;
                            temp_s1->unk4 = 0x23;
                            temp_s1->unk5 = 0xFF;
                            temp_s1->unk6 = 0x23;
                            var_v0_3 = var_s2 << 0x10;
                        } else {
                            temp_s0_3->unk4 = 0;
                            temp_s0_3->unk5 = 0;
                            temp_s0_3->unk6 = 0;
                            temp_s1->unk4 = 0;
block_65:
                            temp_s1->unk5 = 0;
                            temp_s1->unk6 = 0;
                            var_v0_3 = var_s2 << 0x10;
                        }
                    }
                }
                temp_a0_4 = var_v0_3 >> 0x10;
                if (temp_a0_4 != 0x63) {
                    if (temp_a0_4 < 0xA) {
                        var_a1 = temp_s1;
                        var_a1->unk8 = 0x126;
                        var_a2 = arg0 + 0x3D1C;
                        var_a1->unkA = (s16) (var_s5 + (sp6C + 0x2E));
                    } else {
                        var_a1 = temp_s0_3;
                        var_a2 = arg0 + 0x3D1C;
                        var_a1->unk8 = 0x122;
                        temp_v1_5 = var_s5 + (sp6C + 0x2E);
                        var_a1->unkA = temp_v1_5;
                        temp_s1->unk8 = 0x126;
                        temp_s1->unkA = temp_v1_5;
                    }
                    func_80167F30(temp_a0_4, var_a1, var_a2, sp68);
                    AddPrim(sp68, arg0 + (sp8C + 0x3B6C) + (temp_s6 * 0x18) + (arg1 * 0xC));
                }
            }
            var_s5 += 7;
            var_s3 += 1;
            sp8C += 0x30;
            sp90 += 5;
        } while (var_s3 < 9);
    }
    if ((arg0 + arg1)->unk3EE != 0) {
        temp_s0_4 = arg0 + (((s16) sp60 * 0x50) + 0x2BCC) + (temp_s6 * 0x28) + (arg1 * 0x14);
        temp_s0_4->unk8 = 0xF6;
        temp_s0_4->unkA = (s16) (sp6C + 0x6F);
        temp_a1_2 = (arg0 + (arg1 * 4))->unk3A0;
        temp_s1_2 = arg0 + (((s16) sp60 * 0xA0) + 0x3D94) + (temp_s6 * 0x50) + (arg1 * 0x28);
        var_v1_3 = 0;
        if (((temp_a1_2 + (s16) sp60)->unk2B0 != 0) || (temp_a1_2->unk1A1 != 0)) {
            var_v1_3 = 1;
        }
        if (var_v1_3 != 0) {
            temp_s0_4->unk4 = 0xFF;
            temp_s0_4->unk5 = 0;
            temp_s0_4->unk6 = 0;
            temp_s1_2->unk4 = 0xFF;
            temp_s1_2->unk5 = 0;
            temp_s1_2->unk6 = 0;
            temp_a0_5 = (arg1 * 0x28) + ((temp_s6 * 0x50) + (((s16) sp60 * 0xA0) + arg0)) + 0x3DA8;
            temp_a0_5->unk4 = 0xFF;
            temp_a0_5->unk5 = 0;
            temp_a0_5->unk6 = 0;
        } else {
            temp_s0_4->unk4 = 0x23;
            temp_s0_4->unk5 = 0xFF;
            temp_s0_4->unk6 = 0x23;
            temp_s1_2->unk4 = 0x23;
            temp_s1_2->unk5 = 0xFF;
            temp_s1_2->unk6 = 0x23;
            temp_a0_6 = (arg1 * 0x28) + ((temp_s6 * 0x50) + (((s16) sp60 * 0xA0) + arg0)) + 0x3DA8;
            temp_a0_6->unk4 = 0x23;
            temp_a0_6->unk5 = 0xFF;
            temp_a0_6->unk6 = 0x23;
        }
        AddPrim(sp68, temp_s0_4);
        AddPrim(sp68, arg0 + (((s16) sp60 * 0x30) + 0x320C) + (temp_s6 * 0x18) + (arg1 * 0xC));
        temp_v0_3 = ((arg0 + (arg1 * 4))->unk3A0 + (s16) sp60)->unk2A7;
        temp_s0_5 = arg0 + (((s16) sp60 * 0xA0) + 0x3D94) + (temp_s6 * 0x50) + (arg1 * 0x28) + 0x14;
        var_s2_2 = (s8) temp_v0_3;
        if (temp_v0_3 & 0x80) {
            var_s2_2 = 0x63;
        }
        if ((s16) var_s2_2 != 0x63) {
            if ((s16) var_s2_2 < 0xA) {
                var_a1_2 = temp_s0_5;
                var_a1_2->unk8 = 0x124;
                var_a2_2 = arg0 + 0x44E4;
                var_a1_2->unkA = (s16) (sp6C + 0x6F);
            } else {
                var_a1_2 = temp_s1_2;
                var_a2_2 = arg0 + 0x44E4;
                var_a1_2->unk8 = 0x11E;
                temp_v1_6 = sp6C + 0x6F;
                var_a1_2->unkA = temp_v1_6;
                temp_s0_5->unk8 = 0x126;
                temp_s0_5->unkA = temp_v1_6;
            }
            func_80167F30((s32) (s16) var_s2_2, var_a1_2, var_a2_2, sp68);
        }
        AddPrim(sp68, arg0 + (((s16) sp60 * 0x30) + 0x4334) + (temp_s6 * 0x18) + (arg1 * 0xC));
    }
    temp_a0_7 = (arg0 + (arg1 * 4))->unk3A0;
    if ((temp_a0_7 + (s16) sp60)->unk2A7 != 0) {
        if ((s16) sp60 == 7) {
            var_v1_4 = 0;
            if (((temp_a0_7 + 7)->unk2B0 != 0) || (temp_a0_7->unk1A1 != 0)) {
                var_v1_4 = 1;
            }
            if (var_v1_4 != 0) {
                sp60 = 9;
            }
        }
        if ((arg0 + arg1)->unk3EE != 0) {
            var_a0_3 = (arg1 * 0x14) + ((temp_s6 * 0x28) + (((s16) sp60 * 0x50) + arg0)) + 0x4D74;
            var_a0_3->unk8 = 0xF3;
            var_v0_4 = sp6C + 0x44;
        } else {
            var_a0_3 = (arg1 * 0x14) + ((temp_s6 * 0x28) + (((s16) sp60 * 0x50) + arg0)) + 0x4D74;
            var_a0_3->unk8 = 0x118;
            var_v0_4 = sp6C + 0x4F;
        }
        var_a0_3->unkA = var_v0_4;
        AddPrim(sp68, arg0 + (((s16) sp60 * 0x50) + 0x4D74) + (temp_s6 * 0x28) + (arg1 * 0x14));
        AddPrim(sp68, arg0 + (((s16) sp60 * 0x30) + 0x5094) + (temp_s6 * 0x18) + (arg1 * 0xC));
    }
    if ((arg0 + arg1)->unk3EE != 0) {
        temp_v1_7 = func_8013A9F0((arg0 + (arg1 * 4))->unk3A0->unk7D0) & 0xFF;
        temp_a2 = temp_v1_7 - 1;
        if (temp_a2 >= 0xA) {
            func_80154AFC(&sp38, "%d", temp_a2);
        } else {
            sp38 = temp_v1_7 + 0x2F;
            sp39 = 0;
        }
        func_801675F4(1, 0x12D, sp6C + 0x2F, &sp38, sp5C);
    }
    temp_a0_8 = arg0 + arg1;
    if (temp_a0_8->unk3EE != 0) {
        temp_v1_8 = (arg0 + (arg1 * 4))->unk3A0;
        var_s1 = (s32) (temp_v1_8->unk10C * 0x10) / (s32) temp_v1_8->unk110;
        if (var_s1 >= 0x11) {
            var_s1 = 0x10;
        }
        var_v0_5 = var_s1 < 5;
        if (var_s1 == 0) {
            var_s1 = 1;
            var_v0_5 = 1 < 5;
        }
        var_v0_6 = 1;
        if (var_v0_5 != 0) {
            temp_a0_8->unk4D72 = (u8) (temp_a0_8->unk4D72 + 1);
            if ((s8) temp_a0_8->unk4D72 >= 6) {
                var_v0_6 = temp_a0_8->unk4D70 ^ 1;
                goto block_111;
            }
        } else {
block_111:
            temp_a0_8->unk4D70 = var_v0_6;
            temp_a0_8->unk4D72 = 0U;
        }
        var_s3_2 = 0;
        if (var_s1 > 0) {
            var_s5_2 = arg0;
            var_s4 = 0x455C;
            sp88 = temp_s6 * 0x30;
            temp_s7 = arg1 * 0x18;
            do {
                temp_s0_6 = arg0 + var_s4 + sp88 + temp_s7;
                func_80108A94(arg0, var_s1, temp_s0_6);
                if ((arg0 + arg1)->unk4D70 != 0) {
                    temp_v0_4 = temp_s7 + (sp88 + var_s5_2) + 0x455C;
                    temp_v0_4->unk8 = 0x12C;
                    temp_v1_9 = (sp6C + 0x58) - (var_s3_2 * 2);
                    temp_v0_4->unkA = temp_v1_9;
                    temp_v0_4->unkC = 0x134;
                    temp_v0_4->unkE = temp_v1_9;
                    temp_v1_10 = temp_v1_9 + 1;
                    temp_v0_4->unk10 = 0x12C;
                    temp_v0_4->unk12 = temp_v1_10;
                    temp_v0_4->unk14 = 0x134;
                    temp_v0_4->unk16 = temp_v1_10;
                    AddPrim(sp68, temp_s0_6);
                }
                var_s5_2 += 0x60;
                var_s3_2 += 1;
                var_s4 += 0x60;
            } while (var_s3_2 < var_s1);
        }
    }
    if ((arg0 + arg1)->unk3EE != 0) {
        temp_s4 = arg0 + (arg1 * 4);
        if (temp_s4->unk3A0->unk2A4 != 0) {
            temp_s1_3 = arg1 * 0x14;
            temp_s0_7 = temp_s6 * 0x28;
            temp_s3 = temp_s1_3 + (temp_s0_7 + arg0);
            temp_v1_11 = temp_s3 + 0x4BBC;
            temp_v1_11->unk8 = 0x12B;
            temp_s2 = sp6C + 0x60;
            temp_v1_11->unkA = temp_s2;
            AddPrim(sp68, arg0 + (temp_s0_7 + 0x4BBC) + temp_s1_3);
            var_v0_7 = temp_s6 * 2;
            if ((s8) temp_s4->unk3A0->unk2A4 >= 2) {
                temp_v1_12 = temp_s3 + 0x4C0C;
                temp_v1_12->unk8 = 0x130;
                temp_v1_12->unkA = temp_s2;
                AddPrim(sp68, arg0 + (temp_s0_7 + 0x4C0C) + temp_s1_3);
                var_v0_7 = temp_s6 * 2;
            }
            AddPrim(sp68, arg0 + (((var_v0_7 + temp_s6) * 8) + 0x4C5C) + (arg1 * 0xC));
        }
    }
    if ((arg0 + arg1)->unk3EE != 0) {
        var_s1_2 = ((arg0 + (arg1 * 4))->unk3A0->unk28C * 0x10) / 1000;
        if (var_s1_2 >= 0x11) {
            var_s1_2 = 0x10;
        }
        temp_v0_5 = temp_s6 * 0x30;
        temp_a3 = (0x10 - var_s1_2) * 2;
        temp_t1 = temp_a3 + 0xF4;
        temp_v1_13 = arg1 * 0x18;
        temp_s0_8 = arg0 + (temp_v0_5 + 0x4B5C) + temp_v1_13;
        temp_v1_14 = temp_v1_13 + (temp_v0_5 + arg0) + 0x4B5C;
        temp_v1_14->unk8 = temp_t1;
        temp_a3_2 = temp_a3 + ((var_s1_2 * 2) + 0xF4);
        temp_t0 = sp6C + 0x68;
        temp_v0_6 = sp6C + 0x6C;
        temp_v1_14->unkA = temp_t0;
        temp_v1_14->unkC = temp_a3_2;
        temp_v1_14->unkE = temp_t0;
        temp_v1_14->unk10 = temp_t1;
        temp_v1_14->unk12 = temp_v0_6;
        temp_v1_14->unk14 = temp_a3_2;
        temp_v1_14->unk16 = temp_v0_6;
        func_80108A94(arg0, var_s1_2, temp_s0_8, temp_a3_2);
        AddPrim(sp68, temp_s0_8);
    }
    temp_s3_2 = arg0 + arg1;
    if (temp_s3_2->unk3EE != 0) {
        func_80107094(arg0, sp68, temp_s6, arg1, sp6C);
    }
    if (temp_s3_2->unk3EE != 0) {
        temp_s1_4 = temp_s6 * 0x30;
        temp_s0_9 = arg1 * 0x18;
        temp_s2_2 = arg0 + (temp_s1_4 + 0x4C8C) + temp_s0_9;
        func_80108A94(arg0, ((0x1F4 - (arg0 + (arg1 * 4))->unk3A0->unk26C) * 0x10) / 500, temp_s2_2);
        temp_s0_10 = temp_s0_9 + (temp_s1_4 + arg0) + 0x4C8C;
        temp_s0_10->unk8 = 0x12B;
        temp_v0_7 = sp6C + 0x6E;
        temp_s0_10->unkA = temp_v0_7;
        temp_s0_10->unkC = 0x134;
        temp_s0_10->unkE = temp_v0_7;
        temp_v0_8 = sp6C + 0x75;
        temp_s0_10->unk10 = 0x12B;
        temp_s0_10->unk12 = temp_v0_8;
        temp_s0_10->unk14 = 0x134;
        temp_s0_10->unk16 = temp_v0_8;
        AddPrim(sp68, temp_s2_2);
    }
    if (temp_s3_2->unk3EE != 0) {
        temp_s0_11 = (arg0 + (arg1 * 4))->unk3A0;
        var_a2_3 = (s32) (((s32) temp_s0_11->unk20C >> 6) * 0x3E8) / (s32) (func_80178A1C() * 0xC3);
        if (var_a2_3 < 0) {
            var_a2_3 = -var_a2_3;
        }
        func_80154AFC(&sp38, "%d", var_a2_3);
        func_80167088(0, 0x1E, 0xC8, 0x1E);
        func_801675F4(0, 0xCC, sp6C + 0x69, &sp38, sp5C);
        func_80167154(0);
    }
    temp_s0_12 = arg0 + (arg1 * 4);
    if (temp_s0_12->unk3A0->unk82A != 0) {
        temp_s1_5 = arg1 * 0x14;
        temp_s0_13 = temp_s6 * 0x28;
        temp_v0_9 = temp_s1_5 + (temp_s0_13 + arg0) + 0x5374;
        temp_v0_9->unk8 = 0x36;
        temp_v0_9->unkA = (s16) (sp6C + 0x65);
        AddPrim(sp68, arg0 + (temp_s0_13 + 0x5374) + temp_s1_5);
        temp_s3_3 = temp_s6 * 0x18;
        temp_s2_3 = arg1 * 0xC;
        AddPrim(sp68, arg0 + (temp_s3_3 + 0x53C4) + temp_s2_3);
        if ((arg0 + arg1)->unk3EE != 0) {
            AddPrim(sp68, arg0 + (temp_s0_13 + 0x53F4) + temp_s1_5);
            var_a1_3 = arg0 + (temp_s3_3 + 0x5444) + temp_s2_3;
            goto block_143;
        }
    } else if (D_801C34EC->unk127E5 != 0) {
        func_801253C8(&sp28, (D_801C34EC + 0x10A64)->unk38 + 0x1C);
        sp30 += 0x50;
        temp_v0_10 = temp_s0_12->unk3A0;
        temp_v0_11 = func_8015A62C(sp28 - temp_v0_10->unk1E4, sp2C - temp_v0_10->unk1E8, sp28);
        sp58 = temp_v0_11;
        sp58 = temp_v0_11 - temp_s0_12->unk3A0->unk1F8;
        func_801640EC(&sp58);
        var_v0_8 = sp58;
        if (var_v0_8 < 0) {
            var_v0_8 = -var_v0_8;
        }
        if (var_v0_8 < 0x200) {
            func_8012552C(&sp28, &sp18, arg1);
            sp1C += sp6C;
            temp_a2_2 = arg1 * 0x14;
            temp_a1_3 = temp_s6 * 0x28;
            temp_v1_15 = temp_a2_2 + (temp_a1_3 + arg0) + 0x54D4;
            temp_v1_15->unk8 = sp18;
            temp_v1_15->unkA = (u16) sp1C;
            temp_v1_15->unkC = (s16) (sp18 - 5);
            temp_v1_15->unkE = (s16) ((u16) sp1C - 0xA);
            temp_v1_15->unk10 = (s16) (sp18 + 5);
            temp_v1_15->unk12 = (s16) ((u16) sp1C - 0xA);
            if (sp20 >= 0x51) {
                var_a1_3 = arg0 + (temp_a1_3 + 0x54D4) + temp_a2_2;
block_143:
                AddPrim(sp68, var_a1_3);
            }
        }
    }
    var_a3 = (arg0 + (arg1 * 4))->unk3A0->unk7DC;
    var_a2_4 = 0x20;
    if (var_a3 > 0x1869F) {
        var_a3 = 0x1869F;
    }
    if (var_a3 > 0) {
        var_a2_4 = 0x24;
    }
    func_80154AFC(&sp38, "%c%5d", var_a2_4, var_a3);
    func_801675F4(1, 0x10, sp6C + 0x6A, &sp38, sp5C);
    if ((arg0 + arg1)->unk3EE != 0) {
        temp_s4_2 = arg1 * 0x14;
        temp_s1_6 = temp_s6 * 0x28;
        temp_s2_4 = temp_s4_2 + (temp_s1_6 + arg0);
        temp_v1_16 = temp_s2_4 + 0x5274;
        temp_v1_16->unk8 = -4;
        temp_v1_16->unkA = (s16) (sp6C + 0x65);
        AddPrim(sp68, arg0 + (temp_s1_6 + 0x5274) + temp_s4_2);
        temp_s0_14 = temp_s6 * 0x18;
        temp_s3_4 = arg1 * 0xC;
        AddPrim(sp68, arg0 + (temp_s0_14 + 0x52C4) + temp_s3_4);
        temp_s2_5 = temp_s2_4 + 0x52F4;
        temp_s2_5->unk8 = 0x33;
        temp_s2_5->unkA = (s16) (sp6C + 0x63);
        AddPrim(sp68, arg0 + (temp_s1_6 + 0x52F4) + temp_s4_2);
        AddPrim(sp68, arg0 + (temp_s0_14 + 0x5344) + temp_s3_4);
        var_a1_4 = 0;
        if (D_801C34EC->unk7D8 == 3) {
            var_a1_4 = D_801C34EC->unk12688 == 4;
        }
        if (var_a1_4 != 0) {
            func_80154AFC(&sp38, "%d", D_801C34EC->unk12680 / 60);
            func_80167088(0, 0xC8, 0xC8, 0x32);
            func_80167620(0, 0xA0, sp6C + 0x19, &sp38, sp5C);
        }
    }
}
