/* m2c reference for func_801072E0 @ 801072E0 (1244 words). Generated; not compiled or validated. */
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
? func_801675F4(?, ?, ?, s8 *, void **);            /* extern */
? func_80167620(?, ?, ?, s8 *, void **);            /* extern */
? func_80167F30(s32, void *, void *, void *);       /* extern */
static ? D_801C328C;                                /* unable to generate initializer: unknown type */
static ? D_801C32A0;                                /* unable to generate initializer: unknown type */
static void *D_801C34EC = NULL;

void func_801072E0(void *arg0, s32 arg1) {
    u16 sp18;
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
    void *sp74;
    void *sp78;
    s32 sp7C;
    s32 sp80;
    s32 sp84;
    s32 sp88;
    s32 sp8C;
    s32 sp90;
    s16 temp_a3_2;
    s16 temp_s6;
    s16 temp_t1;
    s16 temp_v0_9;
    s16 temp_v1_8;
    s16 temp_v1_9;
    s16 var_s5;
    s16 var_v0_7;
    s32 temp_a0_4;
    s32 temp_a1_3;
    s32 temp_a2;
    s32 temp_a2_3;
    s32 temp_a2_4;
    s32 temp_a2_5;
    s32 temp_a3;
    s32 temp_s0_10;
    s32 temp_s0_7;
    s32 temp_s1_3;
    s32 temp_s1_4;
    s32 temp_s2;
    s32 temp_s7;
    s32 temp_t2_2;
    s32 temp_v0;
    s32 temp_v0_4;
    s32 temp_v0_6;
    s32 temp_v0_7;
    s32 temp_v1_12;
    s32 temp_v1_14;
    s32 temp_v1_5;
    s32 temp_v1_6;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a0_3;
    s32 var_a3;
    s32 var_s0;
    s32 var_s1;
    s32 var_s1_2;
    s32 var_s3;
    s32 var_s3_2;
    s32 var_s4;
    s32 var_v0_3;
    s32 var_v0_4;
    s32 var_v0_6;
    s32 var_v1;
    s32 var_v1_2;
    s32 var_v1_3;
    s32 var_v1_5;
    s32 var_v1_6;
    s8 var_s2;
    s8 var_s2_2;
    s8 var_v0_2;
    u8 temp_v0_3;
    u8 temp_v1;
    u8 var_v0;
    u8 var_v0_5;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a0_3;
    void *temp_a0_5;
    void *temp_a0_6;
    void *temp_a0_7;
    void *temp_a0_8;
    void *temp_a1;
    void *temp_a1_2;
    void *temp_a2_2;
    void *temp_s0;
    void *temp_s0_11;
    void *temp_s0_12;
    void *temp_s0_2;
    void *temp_s0_3;
    void *temp_s0_4;
    void *temp_s0_5;
    void *temp_s0_6;
    void *temp_s0_8;
    void *temp_s0_9;
    void *temp_s1;
    void *temp_s1_2;
    void *temp_s2_2;
    void *temp_s2_3;
    void *temp_s3;
    void *temp_t2;
    void *temp_v0_2;
    void *temp_v0_5;
    void *temp_v0_8;
    void *temp_v1_10;
    void *temp_v1_11;
    void *temp_v1_13;
    void *temp_v1_15;
    void *temp_v1_16;
    void *temp_v1_2;
    void *temp_v1_3;
    void *temp_v1_4;
    void *temp_v1_7;
    void *var_a1;
    void *var_a1_2;
    void *var_a1_3;
    void *var_s5_2;
    void *var_v1_4;

    temp_s6 = (s16) arg0->unk3F6;
    if (arg1 == 0) {
        sp5C = func_80132F10();
    } else {
        sp5C = func_80132F28();
    }
    temp_t2 = *sp5C;
    sp68 = temp_t2;
    if (arg1 == 1) {
        temp_v0 = temp_s6 * 0x30;
        temp_v0_2 = temp_v0 + arg0 + 0x548C;
        temp_v0_2->unk8 = 0;
        temp_v0_2->unkA = 0;
        temp_v0_2->unkC = 3;
        temp_v0_2->unkE = 0;
        temp_v0_2->unk10 = 0;
        temp_v0_2->unk12 = 0xF0;
        temp_v0_2->unk14 = 3;
        temp_v0_2->unk16 = 0xF0;
        AddPrim(temp_t2, temp_v0 + arg0 + 0x548C);
    }
    temp_s0 = arg0 + arg1;
    if (temp_s0->unk3EE != 0) {
        func_80106E38(arg0, sp68, arg1, temp_s6, 0);
    }
    var_s0 = 0;
    if ((temp_s0->unk3EE != 0) && (func_8013A06C() == 0)) {
        var_s0 = D_801C34EC->unk7D8 == 3;
    }
    if (var_s0 != 0) {
        func_80108650(arg0, sp68, arg1, temp_s6, sp5C, 0);
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
        var_s5 = 0x97;
        sp88 = 0;
        sp8C = 0;
        sp90 = 0;
        sp70 = arg1 * 0x14;
        sp74 = arg0 + (arg1 * 4);
        sp80 = arg1 * 0x28;
        temp_t2_2 = temp_s6 * 0x28;
        sp6C = temp_t2_2;
        sp78 = arg0 + (temp_t2_2 + 0x4CEC);
        sp7C = temp_s6 * 0x50;
        do {
            temp_v1 = (sp74->unk3A0 + var_s3)->unk2A7;
            temp_s0_2 = arg0 + ((sp90 * 0x10) + 0x214C) + sp6C + sp70;
            var_s2 = (s8) temp_v1;
            if (temp_v1 & 0x80) {
                var_s2 = 0x63;
            }
            if ((var_s2 << 0x10) > 0) {
                temp_a0_2 = sp74->unk3A0;
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
                temp_s0_2->unk8 = 0x78;
                temp_s0_2->unkA = var_s5;
                if ((s16) sp60 == var_s3) {
                    temp_v1_2 = sp70 + (sp6C + arg0) + 0x4CEC;
                    temp_v1_2->unk8 = 0x74;
                    temp_v1_2->unkA = (s16) (sp8C + 0x95);
                    AddPrim(sp68, sp78 + sp70);
                    AddPrim(sp68, arg0 + ((temp_s6 * 0x18) + 0x4D3C) + (arg1 * 0xC));
                }
                if (var_s3 == 7) {
                    temp_v1_3 = sp74->unk3A0;
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
                AddPrim(sp68, arg0 + (sp88 + 0x278C) + (temp_s6 * 0x18) + (arg1 * 0xC));
                var_v1_2 = 0;
                temp_a0_3 = sp74->unk3A0;
                temp_s0_3 = arg0 + ((sp90 << 5) + 0x35CC) + sp7C + sp80;
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
                    temp_v1_4 = sp74->unk3A0;
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
                        var_a1->unk8 = 0x86;
                        var_a1->unkA = var_s5;
                    } else {
                        var_a1 = temp_s0_3;
                        var_a1->unk8 = 0x82;
                        var_a1->unkA = var_s5;
                        temp_s1->unk8 = 0x86;
                        temp_s1->unkA = var_s5;
                    }
                    func_80167F30(temp_a0_4, var_a1, arg0 + 0x3D1C, sp68);
                    AddPrim(sp68, arg0 + (sp88 + 0x3B6C) + (temp_s6 * 0x18) + (arg1 * 0xC));
                }
            }
            var_s5 += 7;
            var_s3 += 1;
            sp88 += 0x30;
            sp8C += 7;
            sp90 += 5;
        } while (var_s3 < 9);
    }
    if ((arg0 + arg1)->unk3EE != 0) {
        temp_s0_4 = arg0 + (((s16) sp60 * 0x50) + 0x2BCC) + (temp_s6 * 0x28) + (arg1 * 0x14);
        temp_s0_4->unk8 = 0x56;
        temp_s0_4->unkA = 0xD7;
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
            var_s2_2 = 1;
        }
        if ((s16) var_s2_2 < 0xA) {
            var_a1_2 = temp_s0_5;
            var_a1_2->unk8 = 0x84;
            var_a1_2->unkA = 0xD7;
        } else {
            var_a1_2 = temp_s1_2;
            var_a1_2->unk8 = 0x7E;
            var_a1_2->unkA = 0xD7;
            temp_s0_5->unk8 = 0x86;
            temp_s0_5->unkA = 0xD7;
        }
        func_80167F30((s32) (s16) var_s2_2, var_a1_2, arg0 + 0x44E4, sp68);
        var_v1_4 = arg0 + (((s16) sp60 * 0x30) + 0x4334) + (temp_s6 * 0x18);
        goto block_94;
    }
    temp_a0_7 = (arg0 + (arg1 * 4))->unk3A0;
    if ((temp_a0_7 + (s16) sp60)->unk2A7 != 0) {
        var_v1_5 = temp_s6 * 4;
        if ((s16) sp60 == 7) {
            var_v1_6 = 0;
            if (((temp_a0_7 + 7)->unk2B0 != 0) || (temp_a0_7->unk1A1 != 0)) {
                var_v1_6 = 1;
            }
            if (var_v1_6 != 0) {
                sp60 = 9;
            }
            var_v1_5 = temp_s6 * 4;
        }
        temp_v1_5 = (var_v1_5 + temp_s6) * 8;
        temp_a2 = arg1 * 0x14;
        temp_v0_4 = (s16) sp60 * 0x50;
        temp_a2_2 = temp_a2 + (temp_v1_5 + (temp_v0_4 + arg0)) + 0x4D74;
        temp_a2_2->unk8 = 0x78;
        temp_a2_2->unkA = 0xC2;
        AddPrim(sp68, arg0 + (temp_v0_4 + 0x4D74) + temp_v1_5 + temp_a2);
        var_v1_4 = arg0 + (((s16) sp60 * 0x30) + 0x5094) + (temp_s6 * 0x18);
block_94:
        AddPrim(sp68, var_v1_4 + (arg1 * 0xC));
    }
    if ((arg0 + arg1)->unk3EE != 0) {
        temp_v1_6 = func_8013A9F0((arg0 + (arg1 * 4))->unk3A0->unk7D0) & 0xFF;
        temp_a2_3 = temp_v1_6 - 1;
        if (temp_a2_3 >= 0xA) {
            func_80154AFC(&sp38, "%d", temp_a2_3);
        } else {
            sp38 = temp_v1_6 + 0x2F;
            sp39 = 0;
        }
        func_801675F4(1, 0x8D, 0x98, &sp38, sp5C);
    }
    temp_a0_8 = arg0 + arg1;
    if (temp_a0_8->unk3EE != 0) {
        temp_v1_7 = (arg0 + (arg1 * 4))->unk3A0;
        var_s1 = (s32) (temp_v1_7->unk10C * 0x10) / (s32) temp_v1_7->unk110;
        if (var_s1 >= 0x11) {
            var_s1 = 0x10;
        }
        var_v0_4 = var_s1 < 5;
        if (var_s1 == 0) {
            var_s1 = 1;
            var_v0_4 = 1 < 5;
        }
        var_v0_5 = 1;
        if (var_v0_4 != 0) {
            temp_a0_8->unk4D72 = (u8) (temp_a0_8->unk4D72 + 1);
            if ((s8) temp_a0_8->unk4D72 >= 6) {
                var_v0_5 = temp_a0_8->unk4D70 ^ 1;
                goto block_108;
            }
        } else {
block_108:
            temp_a0_8->unk4D70 = var_v0_5;
            temp_a0_8->unk4D72 = 0U;
        }
        var_s3_2 = 0;
        if (var_s1 > 0) {
            var_s5_2 = arg0;
            var_s4 = 0x455C;
            sp84 = temp_s6 * 0x30;
            temp_s7 = arg1 * 0x18;
            do {
                temp_s0_6 = arg0 + var_s4 + sp84 + temp_s7;
                func_80108A94(arg0, var_s1, temp_s0_6);
                temp_s2 = var_s3_2 * 2;
                if ((arg0 + arg1)->unk4D70 != 0) {
                    temp_v1_8 = 0xC1 - temp_s2;
                    temp_v0_5 = temp_s7 + (sp84 + var_s5_2) + 0x455C;
                    temp_v0_5->unk8 = 0x8C;
                    temp_v0_5->unkA = temp_v1_8;
                    temp_v0_5->unkC = 0x94;
                    temp_v0_5->unkE = temp_v1_8;
                    temp_v1_9 = 0xC2 - temp_s2;
                    temp_v0_5->unk10 = 0x8C;
                    temp_v0_5->unk12 = temp_v1_9;
                    temp_v0_5->unk14 = 0x94;
                    temp_v0_5->unk16 = temp_v1_9;
                    AddPrim(sp68, temp_s0_6);
                }
                var_s5_2 += 0x60;
                var_s3_2 += 1;
                var_s4 += 0x60;
            } while (var_s3_2 < var_s1);
        }
    }
    if ((arg0 + arg1)->unk3EE != 0) {
        temp_s3 = arg0 + (arg1 * 4);
        if (temp_s3->unk3A0->unk2A4 != 0) {
            temp_s1_3 = arg1 * 0x14;
            temp_s0_7 = temp_s6 * 0x28;
            temp_s2_2 = temp_s1_3 + (temp_s0_7 + arg0);
            temp_v1_10 = temp_s2_2 + 0x4BBC;
            temp_v1_10->unk8 = 0x8B;
            temp_v1_10->unkA = 0xC9;
            AddPrim(sp68, arg0 + (temp_s0_7 + 0x4BBC) + temp_s1_3);
            var_v0_6 = temp_s6 * 2;
            if ((s8) temp_s3->unk3A0->unk2A4 >= 2) {
                temp_v1_11 = temp_s2_2 + 0x4C0C;
                temp_v1_11->unk8 = 0x90;
                temp_v1_11->unkA = 0xC9;
                AddPrim(sp68, arg0 + (temp_s0_7 + 0x4C0C) + temp_s1_3);
                var_v0_6 = temp_s6 * 2;
            }
            AddPrim(sp68, arg0 + (((var_v0_6 + temp_s6) * 8) + 0x4C5C) + (arg1 * 0xC));
        }
    }
    if ((arg0 + arg1)->unk3EE != 0) {
        var_s1_2 = ((arg0 + (arg1 * 4))->unk3A0->unk28C * 0x10) / 1000;
        if (var_s1_2 >= 0x11) {
            var_s1_2 = 0x10;
        }
        temp_v0_6 = temp_s6 * 0x30;
        temp_a3 = (0x10 - var_s1_2) * 2;
        temp_t1 = temp_a3 + 0x54;
        temp_v1_12 = arg1 * 0x18;
        temp_s0_8 = arg0 + (temp_v0_6 + 0x4B5C) + temp_v1_12;
        temp_v1_13 = temp_v1_12 + (temp_v0_6 + arg0) + 0x4B5C;
        temp_a3_2 = temp_a3 + ((var_s1_2 * 2) + 0x54);
        temp_v1_13->unk8 = temp_t1;
        temp_v1_13->unkA = 0xD1;
        temp_v1_13->unkC = temp_a3_2;
        temp_v1_13->unkE = 0xD1;
        temp_v1_13->unk10 = temp_t1;
        temp_v1_13->unk12 = 0xD5;
        temp_v1_13->unk14 = temp_a3_2;
        temp_v1_13->unk16 = 0xD5;
        func_80108A94(arg0, var_s1_2, temp_s0_8, temp_a3_2);
        AddPrim(sp68, temp_s0_8);
    }
    temp_s0_9 = arg0 + arg1;
    if (temp_s0_9->unk3EE != 0) {
        func_80107094(arg0, sp68, temp_s6, arg1, 0);
    }
    if (temp_s0_9->unk3EE != 0) {
        temp_s1_4 = temp_s6 * 0x30;
        temp_s0_10 = arg1 * 0x18;
        temp_s2_3 = arg0 + (temp_s1_4 + 0x4C8C) + temp_s0_10;
        func_80108A94(arg0, ((0x1F4 - (arg0 + (arg1 * 4))->unk3A0->unk26C) * 0x10) / 500, temp_s2_3);
        temp_s0_11 = temp_s0_10 + (temp_s1_4 + arg0) + 0x4C8C;
        temp_s0_11->unk8 = 0x8B;
        temp_s0_11->unkA = 0xD7;
        temp_s0_11->unkC = 0x94;
        temp_s0_11->unkE = 0xD7;
        temp_s0_11->unk10 = 0x8B;
        temp_s0_11->unk12 = 0xDE;
        temp_s0_11->unk14 = 0x94;
        temp_s0_11->unk16 = 0xDE;
        AddPrim(sp68, temp_s2_3);
    }
    temp_s0_12 = arg0 + (arg1 * 4);
    if (temp_s0_12->unk3A0->unk82A != 0) {
        temp_v1_14 = arg1 * 0x14;
        temp_v0_7 = temp_s6 * 0x28;
        temp_v1_15 = temp_v1_14 + (temp_v0_7 + arg0) + 0x5374;
        temp_v1_15->unk8 = 0x30;
        temp_v1_15->unkA = 0xCB;
        AddPrim(sp68, arg0 + (temp_v0_7 + 0x5374) + temp_v1_14);
        var_a1_3 = arg0 + ((temp_s6 * 0x18) + 0x53C4) + (arg1 * 0xC);
        goto block_135;
    }
    if (D_801C34EC->unk127E5 != 0) {
        func_801253C8(&sp28, (D_801C34EC + 0x10A64)->unk38 + 0x1C);
        sp30 += 0x50;
        temp_v0_8 = temp_s0_12->unk3A0;
        temp_v0_9 = func_8015A62C(sp28 - temp_v0_8->unk1E4, sp2C - temp_v0_8->unk1E8, sp28);
        sp58 = temp_v0_9;
        sp58 = temp_v0_9 - temp_s0_12->unk3A0->unk1F8;
        func_801640EC(&sp58);
        var_v0_7 = sp58;
        if (var_v0_7 < 0) {
            var_v0_7 = -var_v0_7;
        }
        if (var_v0_7 < 0x200) {
            func_8012552C(&sp28, &sp18, arg1);
            temp_a2_4 = arg1 * 0x14;
            temp_a1_3 = temp_s6 * 0x28;
            temp_v1_16 = temp_a2_4 + (temp_a1_3 + arg0) + 0x54D4;
            temp_v1_16->unk8 = sp18;
            temp_v1_16->unkA = sp1C;
            temp_v1_16->unkC = (s16) (sp18 - 5);
            temp_v1_16->unkE = (s16) (sp1C - 0xA);
            temp_v1_16->unk10 = (s16) (sp18 + 5);
            temp_v1_16->unk12 = (s16) (sp1C - 0xA);
            if (sp20 >= 0x51) {
                var_a1_3 = arg0 + (temp_a1_3 + 0x54D4) + temp_a2_4;
block_135:
                AddPrim(sp68, var_a1_3);
            }
        }
    }
    var_a3 = (arg0 + (arg1 * 4))->unk3A0->unk7DC;
    if (var_a3 > 0x1869F) {
        var_a3 = 0x1869F;
    }
    func_80154AFC(&sp38, "%c%d", 0x24, var_a3);
    func_801675F4(1, 0xA, 0xD5, &sp38, sp5C);
    var_a0_3 = 0;
    if ((arg0 + arg1)->unk3EE != 0) {
        if (D_801C34EC->unk7D8 == 3) {
            var_a0_3 = D_801C34EC->unk12688 == 4;
        }
        if (var_a0_3 != 0) {
            temp_a2_5 = D_801C34EC->unk12680 / 60;
            if (temp_a2_5 > 0) {
                func_80154AFC(&sp38, "%d", temp_a2_5);
                func_80167088(0, 0xC8, 0xC8, 0x32);
                func_80167620(0, 0x78, 0x1E, &sp38, sp5C);
            }
        }
    }
}
