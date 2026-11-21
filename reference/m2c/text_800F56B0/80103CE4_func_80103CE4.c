/* m2c reference for func_80103CE4 @ 80103CE4 (1717 words). Generated; not compiled or validated. */
? func_80106E38(void *, void *, s32, s16, s32);     /* extern */
? func_80108650(void *, void *, s32, s16, void *, s32); /* extern */
? func_80108A94(void *, s32, void *, s16);          /* extern */
? func_8010B684(void *);                            /* extern */
? func_801253C8(void **, s32);                      /* extern */
? func_8012552C(void **, u16 *, s32, ?);            /* extern */
void *func_80132F10();                              /* extern */
void *func_80132F28();                              /* extern */
s32 func_8013A06C();                                /* extern */
s32 func_8013A9F0(s32);                             /* extern */
? func_80154AFC(s8 *, ? *, s32, s32);               /* extern */
s16 func_8015A62C(s32, s32, void *, s32);           /* extern */
s16 func_8015B5AC(?, ?, ?, ?);                      /* extern */
? func_801640EC(s16 *);                             /* extern */
? func_80167088(?, ?, ?, ?);                        /* extern */
? func_80167154(?);                                 /* extern */
? func_801675F4(?, ?, ?, s8 *, void *);             /* extern */
? func_80167620(?, s32, s32, s8 *, void *);         /* extern */
? func_80167F30(s32, void *, void *, void *);       /* extern */
s16 func_80178A1C();                                /* extern */
u32 func_80178A70();                                /* extern */
extern ? D_8018098C;
extern s32 D_801C3FA8;
static ? D_801C328C;                                /* unable to generate initializer: unknown type */
static s8 D_801C3290[8] = "Tourist";
static ? D_801C3298;                                /* unable to generate initializer: unknown type */
static void *D_801C34EC = NULL;
static s8 D_800F310C[0xC] = { 0x50, 0x68, 0x6F, 0x74, 0x6F, 0x20, 0x4F, 0x70, 0, 0, 0, 0 }; /* const */
static ? D_800F3118;                                /* unable to generate initializer: unknown type; const */

void func_80103CE4(void *arg0, s32 arg1) {
    u16 sp18;
    void *sp28;
    s32 sp30;
    s8 sp38;
    s8 sp39;
    s16 sp58;
    void *sp5C;
    u16 sp60;
    s32 sp68;
    s32 sp6C;
    void *sp70;
    void *sp74;
    s32 sp78;
    s32 sp7C;
    void *sp80;
    s32 sp84;
    s32 sp88;
    s32 sp8C;
    ? var_a2;
    s16 temp_a3_2;
    s16 temp_s6;
    s16 temp_t1;
    s16 temp_v0_7;
    s16 temp_v0_9;
    s16 var_s4;
    s16 var_v0_4;
    s16 var_v0_7;
    s16 var_v0_8;
    s32 temp_a0_3;
    s32 temp_a1_3;
    s32 temp_a2_3;
    s32 temp_a2_4;
    s32 temp_a3;
    s32 temp_a3_3;
    s32 temp_s0_12;
    s32 temp_s0_13;
    s32 temp_s0_3;
    s32 temp_s0_7;
    s32 temp_s0_9;
    s32 temp_s1;
    s32 temp_s1_3;
    s32 temp_s1_4;
    s32 temp_s2;
    s32 temp_s2_2;
    s32 temp_s2_3;
    s32 temp_s2_4;
    s32 temp_s2_5;
    s32 temp_s3;
    s32 temp_s3_2;
    s32 temp_s3_3;
    s32 temp_s3_4;
    s32 temp_s5;
    s32 temp_t0_2;
    s32 temp_t0_3;
    s32 temp_t2;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 temp_v0_6;
    s32 temp_v1_11;
    s32 temp_v1_13;
    s32 temp_v1_7;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a0_3;
    s32 var_a1_3;
    s32 var_a2_3;
    s32 var_a2_4;
    s32 var_a3_2;
    s32 var_s1_3;
    s32 var_s1_4;
    s32 var_s2;
    s32 var_s3;
    s32 var_s3_2;
    s32 var_v0_3;
    s32 var_v0_5;
    s32 var_v1;
    s32 var_v1_2;
    s32 var_v1_3;
    s32 var_v1_4;
    s32 var_v1_5;
    s32 var_v1_6;
    s32 var_v1_7;
    s32 var_v1_9;
    s8 *var_a3;
    s8 var_s1;
    s8 var_s1_2;
    s8 var_v0_2;
    u32 var_v1_8;
    u8 temp_v0_3;
    u8 temp_v1_2;
    u8 var_v0;
    u8 var_v0_6;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a0_4;
    void *temp_a0_5;
    void *temp_a0_6;
    void *temp_a0_7;
    void *temp_a0_8;
    void *temp_a0_9;
    void *temp_a1;
    void *temp_a1_2;
    void *temp_a2;
    void *temp_a2_2;
    void *temp_fp;
    void *temp_s0;
    void *temp_s0_10;
    void *temp_s0_11;
    void *temp_s0_2;
    void *temp_s0_4;
    void *temp_s0_5;
    void *temp_s0_6;
    void *temp_s0_8;
    void *temp_s1_2;
    void *temp_s4;
    void *temp_s4_2;
    void *temp_t0;
    void *temp_t0_4;
    void *temp_t0_5;
    void *temp_t2_2;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_8;
    void *temp_v1;
    void *temp_v1_10;
    void *temp_v1_12;
    void *temp_v1_14;
    void *temp_v1_15;
    void *temp_v1_3;
    void *temp_v1_4;
    void *temp_v1_5;
    void *temp_v1_6;
    void *temp_v1_8;
    void *temp_v1_9;
    void *var_a0_4;
    void *var_a1;
    void *var_a1_2;
    void *var_a2_2;

    temp_s6 = (s16) arg0->unk3F6;
    if (arg1 == 0) {
        sp5C = func_80132F10();
    } else {
        sp5C = func_80132F28();
    }
    temp_fp = sp5C->unk0;
    if ((arg0 + arg1)->unk3EE != 0) {
        func_80106E38(arg0, temp_fp, arg1, temp_s6, 0);
    }
    if ((arg0 + (arg1 * 4))->unk3E0 > 0) {
        temp_s0 = sp5C->unk8;
        temp_s0->unk3 = 9;
        temp_s0->unk7 = 0x2C;
        temp_s0->unk4 = 0xFF;
        temp_s0->unk5 = 0xFF;
        temp_s0->unk6 = 0xFF;
        temp_s0->unkC = 0x40;
        temp_s0->unkD = 0x61;
        temp_s0->unk14 = 0xFF;
        temp_s0->unk15 = 0x61;
        temp_s0->unk1C = 0x40;
        temp_s0->unk1D = 0xF0;
        temp_s0->unk24 = 0xFF;
        temp_s0->unk25 = 0xF0;
        temp_s0->unk8 = 0xC;
        temp_s0->unkA = 0x15;
        temp_s0->unk10 = 0x55;
        temp_s0->unk12 = 0x15;
        temp_s0->unk18 = 0xC;
        temp_s0->unk1A = 0x43;
        temp_s0->unk20 = 0x55;
        temp_s0->unk22 = 0x43;
        if (temp_s6 != 0) {
            var_a2 = 0x140;
        } else {
            var_a2 = 0;
        }
        temp_s0->unk16 = func_8015B5AC(2, 0, var_a2, 0);
        AddPrim(temp_fp, temp_s0);
        sp5C->unk8 = (void *) (sp5C->unk8 + 0xA0);
        temp_v1 = arg0 + (arg1 * 4);
        temp_v1->unk3E0 = (s32) (temp_v1->unk3E0 - 1);
    }
    temp_s0_2 = arg0 + arg1;
    var_v1 = 0;
    if (temp_s0_2->unk3EE != 0) {
        var_v1 = func_8013A06C() == 0;
    }
    if (var_v1 != 0) {
        func_80108650(arg0, temp_fp, arg1, temp_s6, sp5C, 0);
    }
    var_v1_2 = 0;
    if (arg0->unk1AE4 != NULL) {
        var_v1_2 = arg0->unk1AE4->unk7C0 < 0xB1;
    }
    if (var_v1_2 != 0) {
        var_v1_3 = 0;
        if (temp_s0_2->unk3EE != 0) {
            var_v1_3 = func_8013A06C() == 0;
        }
        if (var_v1_3 != 0) {
            AddPrim(temp_fp, arg0 + ((((s32) arg0->unk1AE4->unk7C0 >> 4) * 0x28) + 0x1AC0) + (temp_s6 * 0x14));
            AddPrim(temp_fp, arg0 + ((((s32) arg0->unk1AE4->unk7C0 >> 4) * 0x18) + 0x1CB0) + (temp_s6 * 0xC));
        }
    }
    temp_s4 = arg0 + arg1;
    var_v1_4 = 0;
    if (temp_s4->unk3EE != 0) {
        var_v1_4 = func_8013A06C() == 0;
    }
    if (var_v1_4 != 0) {
        func_8010B684(arg0);
        func_80167620(1, 0xCA, 0x11, *((D_801C3FA8 * 4) + &D_8018098C), sp5C);
        temp_s1 = temp_s6 * 0x28;
        temp_s3 = arg1 * 0x14;
        AddPrim(temp_fp, arg0 + (temp_s1 + 0x1DEC) + temp_s3);
        temp_s0_3 = temp_s6 * 0x18;
        temp_s2 = arg1 * 0xC;
        AddPrim(temp_fp, arg0 + (temp_s0_3 + 0x1E3C) + temp_s2);
        AddPrim(temp_fp, arg0 + (temp_s1 + 0x1E6C) + temp_s3);
        AddPrim(temp_fp, arg0 + (temp_s0_3 + 0x1EBC) + temp_s2);
        AddPrim(temp_fp, arg0 + (temp_s1 + 0x1EEC) + temp_s3);
        AddPrim(temp_fp, arg0 + (temp_s0_3 + 0x1F3C) + temp_s2);
        AddPrim(temp_fp, arg0 + (temp_s1 + 0x1F6C) + temp_s3);
        AddPrim(temp_fp, arg0 + (temp_s0_3 + 0x1FBC) + temp_s2);
    }
    temp_a0 = arg0 + (arg1 * 4);
    sp60 = (u16) (s8) temp_a0->unk3A0->unk2A5;
    if (temp_s4->unk3EE != 0) {
        var_v0 = 1;
        if (temp_a0->unk3A0->unk294 != 0) {
            temp_s4->unk4D6E = (u8) (temp_s4->unk4D6E + 1);
            var_s3 = 0;
            if ((s8) temp_s4->unk4D6E >= 0xB) {
                var_v0 = temp_s4->unk4D6C ^ 1;
                goto block_29;
            }
        } else {
block_29:
            temp_s4->unk4D6C = var_v0;
            temp_s4->unk4D6E = 0U;
            var_s3 = 0;
        }
        var_s4 = 0x97;
        sp84 = 0;
        sp88 = 0;
        sp8C = 0;
        sp6C = arg1 * 0x14;
        sp70 = arg0 + (arg1 * 4);
        sp7C = arg1 * 0x28;
        temp_t2 = temp_s6 * 0x28;
        sp68 = temp_t2;
        sp74 = arg0 + (temp_t2 + 0x4CEC);
        sp78 = temp_s6 * 0x50;
        do {
            temp_v1_2 = (sp70->unk3A0 + var_s3)->unk2A7;
            temp_s0_4 = arg0 + ((sp8C * 0x10) + 0x214C) + sp68 + sp6C;
            var_s1 = (s8) temp_v1_2;
            if (temp_v1_2 & 0x80) {
                var_s1 = 0x63;
            }
            if ((var_s1 << 0x10) > 0) {
                temp_a0_2 = sp70->unk3A0;
                var_v1_5 = 0;
                if (((temp_a0_2 + var_s3)->unk2B0 != 0) || (temp_a0_2->unk1A1 != 0)) {
                    var_v1_5 = 1;
                }
                if (var_v1_5 != 0) {
                    if ((s16) sp60 == var_s3) {
                        temp_s0_4->unk4 = 0xFF;
                        temp_s0_4->unk5 = 0;
                        temp_s0_4->unk6 = 0;
                    } else {
                        temp_s0_4->unk4 = 0x64;
                        temp_s0_4->unk5 = 7;
                        temp_s0_4->unk6 = 7;
                    }
                } else if ((s16) sp60 == var_s3) {
                    temp_s0_4->unk4 = 0x23;
                    temp_s0_4->unk5 = 0xFF;
                    temp_s0_4->unk6 = 0x23;
                } else {
                    temp_s0_4->unk4 = 7;
                    temp_s0_4->unk5 = 0x64;
                    temp_s0_4->unk6 = 7;
                }
                temp_s0_4->unk8 = 0x118;
                temp_s0_4->unkA = var_s4;
                if ((s16) sp60 == var_s3) {
                    temp_v1_3 = sp6C + (sp68 + arg0) + 0x4CEC;
                    temp_v1_3->unk8 = 0x114;
                    temp_v1_3->unkA = (s16) (sp88 + 0x95);
                    AddPrim(temp_fp, sp74 + sp6C);
                    AddPrim(temp_fp, arg0 + ((temp_s6 * 0x18) + 0x4D3C) + (arg1 * 0xC));
                }
                if (var_s3 == 7) {
                    temp_v1_4 = sp70->unk3A0;
                    if (temp_v1_4->unk294 != 0) {
                        if ((arg0 + arg1)->unk4D6C != 0) {
                            var_a0 = 0;
                            if (((temp_v1_4 + 7)->unk2B0 != 0) || (temp_v1_4->unk1A1 != 0)) {
                                var_a0 = 1;
                            }
                            if (var_a0 != 0) {
                                temp_s0_4->unk4 = 0xFF;
                                goto block_56;
                            }
                            temp_s0_4->unk4 = 0x23;
                            temp_s0_4->unk5 = 0xFF;
                            temp_s0_4->unk6 = 0x23;
                        } else {
                            temp_s0_4->unk4 = 0;
block_56:
                            temp_s0_4->unk5 = 0;
                            temp_s0_4->unk6 = 0;
                        }
                    }
                }
                AddPrim(temp_fp, temp_s0_4);
                AddPrim(temp_fp, arg0 + (sp84 + 0x278C) + (temp_s6 * 0x18) + (arg1 * 0xC));
                var_a0_2 = 0;
                temp_v1_5 = sp70->unk3A0;
                temp_s0_5 = arg0 + ((sp8C << 5) + 0x35CC) + sp78 + sp7C;
                temp_t0 = temp_s0_5 + 0x14;
                if (((temp_v1_5 + var_s3)->unk2B0 != 0) || (temp_v1_5->unk1A1 != 0)) {
                    var_a0_2 = 1;
                }
                if (var_a0_2 != 0) {
                    if ((s16) sp60 == var_s3) {
                        temp_s0_5->unk4 = 0xFF;
                        temp_s0_5->unk5 = 0;
                        temp_s0_5->unk6 = 0;
                        temp_t0->unk4 = 0xFF;
                        temp_t0->unk5 = 0;
                        temp_t0->unk6 = 0;
                    } else {
                        var_v0_2 = 7;
                        temp_s0_5->unk4 = 0x64;
                        temp_s0_5->unk5 = 7;
                        temp_s0_5->unk6 = 7;
                        temp_t0->unk4 = 0x64;
                        temp_t0->unk5 = 7;
                        goto block_67;
                    }
                } else {
                    var_v0_2 = 7;
                    if ((s16) sp60 == var_s3) {
                        var_v0_2 = 0x23;
                        temp_s0_5->unk4 = 0x23;
                        temp_s0_5->unk5 = 0xFF;
                        temp_s0_5->unk6 = 0x23;
                        temp_t0->unk4 = 0x23;
                        temp_t0->unk5 = 0xFF;
                    } else {
                        temp_s0_5->unk4 = 7;
                        temp_s0_5->unk5 = 0x64;
                        temp_s0_5->unk6 = 7;
                        temp_t0->unk4 = 7;
                        temp_t0->unk5 = 0x64;
                    }
block_67:
                    temp_t0->unk6 = var_v0_2;
                }
                var_v0_3 = var_s1 << 0x10;
                if (var_s3 == 7) {
                    temp_v1_6 = sp70->unk3A0;
                    var_v0_3 = var_s1 << 0x10;
                    if (temp_v1_6->unk294 != 0) {
                        if ((arg0 + arg1)->unk4D6C != 0) {
                            var_a0_3 = 0;
                            if (((temp_v1_6 + 7)->unk2B0 != 0) || (temp_v1_6->unk1A1 != 0)) {
                                var_a0_3 = 1;
                            }
                            if (var_a0_3 != 0) {
                                temp_s0_5->unk4 = 0xFF;
                                temp_s0_5->unk5 = 0;
                                temp_s0_5->unk6 = 0;
                                temp_t0->unk4 = 0xFF;
                                goto block_78;
                            }
                            temp_s0_5->unk4 = 0x23;
                            temp_s0_5->unk5 = 0xFF;
                            temp_s0_5->unk6 = 0x23;
                            temp_t0->unk4 = 0x23;
                            temp_t0->unk5 = 0xFF;
                            temp_t0->unk6 = 0x23;
                            var_v0_3 = var_s1 << 0x10;
                        } else {
                            temp_s0_5->unk4 = 0;
                            temp_s0_5->unk5 = 0;
                            temp_s0_5->unk6 = 0;
                            temp_t0->unk4 = 0;
block_78:
                            temp_t0->unk5 = 0;
                            temp_t0->unk6 = 0;
                            var_v0_3 = var_s1 << 0x10;
                        }
                    }
                }
                temp_a0_3 = var_v0_3 >> 0x10;
                if (temp_a0_3 != 0x63) {
                    if (temp_a0_3 < 0xA) {
                        var_a1 = temp_t0;
                        var_a1->unk8 = 0x126;
                        var_a1->unkA = var_s4;
                    } else {
                        var_a1 = temp_s0_5;
                        var_a1->unk8 = 0x122;
                        var_a1->unkA = var_s4;
                        temp_t0->unk8 = 0x126;
                        temp_t0->unkA = var_s4;
                    }
                    func_80167F30(temp_a0_3, var_a1, arg0 + 0x3D1C, temp_fp);
                    AddPrim(temp_fp, arg0 + (sp84 + 0x3B6C) + (temp_s6 * 0x18) + (arg1 * 0xC));
                }
            }
            var_s4 += 7;
            var_s3 += 1;
            sp84 += 0x30;
            sp88 += 7;
            sp8C += 5;
        } while (var_s3 < 9);
    }
    if ((arg0 + arg1)->unk3EE != 0) {
        temp_a0_4 = (arg1 * 0x14) + ((temp_s6 * 0x28) + (((s16) sp60 * 0x50) + arg0)) + 0x2BCC;
        temp_a0_4->unk8 = 0xF6;
        temp_a0_4->unkA = 0xD7;
        temp_a0_5 = (arg0 + (arg1 * 4))->unk3A0;
        var_v1_6 = 0;
        if (((temp_a0_5 + (s16) sp60)->unk2B0 != 0) || (temp_a0_5->unk1A1 != 0)) {
            var_v1_6 = 1;
        }
        if (var_v1_6 != 0) {
            temp_a0_6 = (arg1 * 0x14) + ((temp_s6 * 0x28) + (((s16) sp60 * 0x50) + arg0)) + 0x2BCC;
            temp_a2 = (arg1 * 0x28) + ((temp_s6 * 0x50) + (((s16) sp60 * 0xA0) + arg0));
            temp_v0 = temp_a2 + 0x3D94;
            temp_a2_2 = temp_a2 + 0x3DA8;
            temp_a0_6->unk4 = 0xFF;
            temp_a0_6->unk5 = 0;
            temp_a0_6->unk6 = 0;
            temp_v0->unk4 = 0xFF;
            temp_v0->unk5 = 0;
            temp_v0->unk6 = 0;
            temp_a2_2->unk4 = 0xFF;
            temp_a2_2->unk5 = 0;
            temp_a2_2->unk6 = 0;
        } else {
            temp_a0_7 = (arg1 * 0x14) + ((temp_s6 * 0x28) + (((s16) sp60 * 0x50) + arg0)) + 0x2BCC;
            temp_a1 = (arg1 * 0x28) + ((temp_s6 * 0x50) + (((s16) sp60 * 0xA0) + arg0));
            temp_v0_2 = temp_a1 + 0x3D94;
            temp_a1_2 = temp_a1 + 0x3DA8;
            temp_a0_7->unk4 = 0x23;
            temp_a0_7->unk5 = 0xFF;
            temp_a0_7->unk6 = 0x23;
            temp_v0_2->unk4 = 0x23;
            temp_v0_2->unk5 = 0xFF;
            temp_v0_2->unk6 = 0x23;
            temp_a1_2->unk4 = 0x23;
            temp_a1_2->unk5 = 0xFF;
            temp_a1_2->unk6 = 0x23;
        }
        AddPrim(temp_fp, arg0 + (((s16) sp60 * 0x50) + 0x2BCC) + (temp_s6 * 0x28) + (arg1 * 0x14));
        AddPrim(temp_fp, arg0 + (((s16) sp60 * 0x30) + 0x320C) + (temp_s6 * 0x18) + (arg1 * 0xC));
        temp_v0_3 = ((arg0 + (arg1 * 4))->unk3A0 + (s16) sp60)->unk2A7;
        var_s1_2 = (s8) temp_v0_3;
        if (temp_v0_3 & 0x80) {
            var_s1_2 = 1;
        }
        temp_v1_7 = arg1 * 0x28;
        if ((s16) var_s1_2 < 0xA) {
            temp_t0_2 = temp_s6 * 0x50;
            temp_v0_4 = (s16) sp60 * 0xA0;
            var_a1_2 = arg0 + (temp_v0_4 + 0x3D94) + temp_t0_2 + temp_v1_7 + 0x14;
            var_a2_2 = arg0 + 0x44E4;
            temp_v1_8 = temp_v1_7 + (temp_t0_2 + (temp_v0_4 + arg0)) + 0x3DA8;
            temp_v1_8->unk8 = 0x124;
            temp_v1_8->unkA = 0xD7;
        } else {
            temp_t0_3 = temp_s6 * 0x50;
            temp_v0_5 = (s16) sp60 * 0xA0;
            var_a1_2 = arg0 + (temp_v0_5 + 0x3D94) + temp_t0_3 + temp_v1_7;
            var_a2_2 = arg0 + 0x44E4;
            temp_v1_9 = temp_v1_7 + (temp_t0_3 + (temp_v0_5 + arg0));
            temp_t0_4 = temp_v1_9 + 0x3D94;
            temp_v1_10 = temp_v1_9 + 0x3DA8;
            temp_t0_4->unk8 = 0x11E;
            temp_t0_4->unkA = 0xD7;
            temp_v1_10->unk8 = 0x126;
            temp_v1_10->unkA = 0xD7;
        }
        func_80167F30((s32) (s16) var_s1_2, var_a1_2, var_a2_2, temp_fp);
        AddPrim(temp_fp, arg0 + (((s16) sp60 * 0x30) + 0x4334) + (temp_s6 * 0x18) + (arg1 * 0xC));
    }
    temp_a0_8 = (arg0 + (arg1 * 4))->unk3A0;
    if ((temp_a0_8 + (s16) sp60)->unk2A7 != 0) {
        if ((s16) sp60 == 7) {
            var_v1_7 = 0;
            if (((temp_a0_8 + 7)->unk2B0 != 0) || (temp_a0_8->unk1A1 != 0)) {
                var_v1_7 = 1;
            }
            if (var_v1_7 != 0) {
                sp60 = 9;
            }
        }
        if ((arg0 + arg1)->unk3EE != 0) {
            var_a0_4 = (arg1 * 0x14) + ((temp_s6 * 0x28) + (((s16) sp60 * 0x50) + arg0)) + 0x4D74;
            var_a0_4->unk8 = 0xF3;
            var_v0_4 = 0xAC;
        } else {
            var_a0_4 = (arg1 * 0x14) + ((temp_s6 * 0x28) + (((s16) sp60 * 0x50) + arg0)) + 0x4D74;
            var_a0_4->unk8 = 0x118;
            var_v0_4 = 0xC2;
        }
        var_a0_4->unkA = var_v0_4;
        AddPrim(temp_fp, arg0 + (((s16) sp60 * 0x50) + 0x4D74) + (temp_s6 * 0x28) + (arg1 * 0x14));
        AddPrim(temp_fp, arg0 + (((s16) sp60 * 0x30) + 0x5094) + (temp_s6 * 0x18) + (arg1 * 0xC));
    }
    if ((arg0 + arg1)->unk3EE != 0) {
        temp_v1_11 = func_8013A9F0((arg0 + (arg1 * 4))->unk3A0->unk7D0) & 0xFF;
        temp_a2_3 = temp_v1_11 - 1;
        if (temp_a2_3 >= 0xA) {
            func_80154AFC(&sp38, "%d", temp_a2_3);
        } else {
            sp38 = temp_v1_11 + 0x2F;
            sp39 = 0;
        }
        func_801675F4(1, 0x12D, 0x98, &sp38, sp5C);
    }
    temp_a0_9 = arg0 + arg1;
    if (temp_a0_9->unk3EE != 0) {
        temp_v1_12 = (arg0 + (arg1 * 4))->unk3A0;
        var_s1_3 = (s32) (temp_v1_12->unk10C * 0x10) / (s32) temp_v1_12->unk110;
        if (var_s1_3 >= 0x11) {
            var_s1_3 = 0x10;
        }
        var_v0_5 = var_s1_3 < 5;
        if (var_s1_3 == 0) {
            var_s1_3 = 1;
            var_v0_5 = 1 < 5;
        }
        var_v0_6 = 1;
        if (var_v0_5 != 0) {
            temp_a0_9->unk4D72 = (u8) (temp_a0_9->unk4D72 + 1);
            if ((s8) temp_a0_9->unk4D72 >= 6) {
                var_v0_6 = temp_a0_9->unk4D70 ^ 1;
                goto block_122;
            }
        } else {
block_122:
            temp_a0_9->unk4D70 = var_v0_6;
            temp_a0_9->unk4D72 = 0U;
        }
        var_s3_2 = 0;
        if (var_s1_3 > 0) {
            var_s2 = 0x455C;
            do {
                temp_s0_6 = arg0 + var_s2 + (temp_s6 * 0x30) + (arg1 * 0x18);
                func_80108A94(arg0, var_s1_3, temp_s0_6);
                if ((arg0 + arg1)->unk4D70 != 0) {
                    AddPrim(temp_fp, temp_s0_6);
                }
                var_s3_2 += 1;
                var_s2 += 0x60;
            } while (var_s3_2 < var_s1_3);
        }
    }
    if ((arg0 + arg1)->unk3EE != 0) {
        temp_s1_2 = arg0 + (arg1 * 4);
        if (temp_s1_2->unk3A0->unk2A4 != 0) {
            temp_s2_2 = temp_s6 * 0x28;
            temp_s0_7 = arg1 * 0x14;
            AddPrim(temp_fp, arg0 + (temp_s2_2 + 0x4BBC) + temp_s0_7);
            if ((s8) temp_s1_2->unk3A0->unk2A4 >= 2) {
                AddPrim(temp_fp, arg0 + (temp_s2_2 + 0x4C0C) + temp_s0_7);
            }
            AddPrim(temp_fp, arg0 + ((temp_s6 * 0x18) + 0x4C5C) + (arg1 * 0xC));
        }
    }
    if ((arg0 + arg1)->unk3EE != 0) {
        var_s1_4 = ((arg0 + (arg1 * 4))->unk3A0->unk28C * 0x10) / 1000;
        if (var_s1_4 >= 0x11) {
            var_s1_4 = 0x10;
        }
        temp_v0_6 = temp_s6 * 0x30;
        temp_a3 = (0x10 - var_s1_4) * 2;
        temp_t1 = temp_a3 + 0xF4;
        temp_v1_13 = arg1 * 0x18;
        temp_s0_8 = arg0 + (temp_v0_6 + 0x4B5C) + temp_v1_13;
        temp_v1_14 = temp_v1_13 + (temp_v0_6 + arg0) + 0x4B5C;
        temp_a3_2 = temp_a3 + ((var_s1_4 * 2) + 0xF4);
        temp_v1_14->unk8 = temp_t1;
        temp_v1_14->unkA = 0xD1;
        temp_v1_14->unkC = temp_a3_2;
        temp_v1_14->unkE = 0xD1;
        temp_v1_14->unk10 = temp_t1;
        temp_v1_14->unk12 = 0xD5;
        temp_v1_14->unk14 = temp_a3_2;
        temp_v1_14->unk16 = 0xD5;
        func_80108A94(arg0, var_s1_4, temp_s0_8, temp_a3_2);
        AddPrim(temp_fp, temp_s0_8);
    }
    temp_t2_2 = arg0 + arg1;
    sp80 = temp_t2_2;
    if (temp_t2_2->unk3EE != 0) {
        temp_s0_9 = temp_s6 * 0x28;
        temp_s3_2 = arg1 * 0x14;
        AddPrim(temp_fp, arg0 + (temp_s0_9 + 0x204C) + temp_s3_2);
        temp_s2_3 = temp_s6 * 0x18;
        temp_s5 = arg1 * 0xC;
        AddPrim(temp_fp, arg0 + (temp_s2_3 + 0x209C) + temp_s5);
        AddPrim(temp_fp, arg0 + (temp_s0_9 + 0x20CC) + temp_s3_2);
        AddPrim(temp_fp, arg0 + (temp_s2_3 + 0x211C) + temp_s5);
        AddPrim(temp_fp, arg0 + (temp_s0_9 + 0x2B4C) + temp_s3_2);
        AddPrim(temp_fp, arg0 + (temp_s2_3 + 0x2B9C) + temp_s5);
        AddPrim(temp_fp, arg0 + ((temp_s6 * 0x30) + 0x1FEC) + (arg1 * 0x18));
    }
    if (sp80->unk3EE != 0) {
        temp_s0_10 = arg0 + ((temp_s6 * 0x30) + 0x4C8C) + (arg1 * 0x18);
        func_80108A94(arg0, ((0x1F4 - (arg0 + (arg1 * 4))->unk3A0->unk26C) * 0x10) / 500, temp_s0_10);
        AddPrim(temp_fp, temp_s0_10);
    }
    if (sp80->unk3EE != 0) {
        temp_s0_11 = (arg0 + (arg1 * 4))->unk3A0;
        var_a2_3 = (s32) (((s32) temp_s0_11->unk20C >> 6) * 0x3E8) / (s32) (func_80178A1C() * 0xC3);
        if (var_a2_3 < 0) {
            var_a2_3 = -var_a2_3;
        }
        func_80154AFC(&sp38, "%d", var_a2_3);
        func_80167088(0, 0x1E, 0xC8, 0x1E);
        func_801675F4(0, 0xCC, 0xD3, &sp38, sp5C);
        func_80167154(0);
    }
    temp_s4_2 = arg0 + (arg1 * 4);
    if (temp_s4_2->unk3A0->unk82A != 0) {
        temp_s3_3 = temp_s6 * 0x28;
        temp_s2_4 = arg1 * 0x14;
        AddPrim(temp_fp, arg0 + (temp_s3_3 + 0x5374) + temp_s2_4);
        temp_s1_3 = temp_s6 * 0x18;
        temp_s0_12 = arg1 * 0xC;
        AddPrim(temp_fp, arg0 + (temp_s1_3 + 0x53C4) + temp_s0_12);
        if ((arg0 + arg1)->unk3EE != 0) {
            AddPrim(temp_fp, arg0 + (temp_s3_3 + 0x53F4) + temp_s2_4);
            AddPrim(temp_fp, arg0 + (temp_s1_3 + 0x5444) + temp_s0_12);
        }
        if ((D_801C34EC->unk12688 == 0) && (func_80178A70() < 0xBB8U)) {
            temp_t0_5 = temp_s4_2->unk3A0;
            var_v1_8 = 0;
            if (temp_t0_5->unk82A != 0) {
                var_v1_8 = (u32) ~(s8) D_801C34EC->unk12355 >> 0x1F;
            }
            if (var_v1_8 != 0) {
                temp_a3_3 = (D_801C34EC + ((s8) D_801C34EC->unk12355 * 0xC))->unk12208;
                temp_v0_7 = func_8015A62C(temp_a3_3 - temp_t0_5->unk1E4, (D_801C34EC + ((s8) D_801C34EC->unk12355 * 0xC))->unk1220C - temp_t0_5->unk1E8, D_801C34EC + 0x10000, temp_a3_3);
                sp58 = temp_v0_7;
                sp58 = temp_v0_7 - temp_s4_2->unk3A0->unk1F8;
                func_801640EC(&sp58);
                var_v0_7 = sp58;
                if (var_v0_7 < 0) {
                    var_v0_7 = -var_v0_7;
                }
                if (var_v0_7 < 0x200) {
                    func_8012552C(D_801C34EC + (((s8) D_801C34EC->unk12355 * 0xC) + 0x12208), &sp18, arg1, 0x12208);
                    if (sp20 >= 0x321) {
                        var_a3 = D_800F310C;
                        goto block_170;
                    }
                }
            }
        }
    } else {
        var_v1_9 = 0;
        if (D_801C34EC->unk127E5 != 0) {
            var_v1_9 = D_801C34EC->unk11D2C == 0;
        }
        if (var_v1_9 != 0) {
            func_801253C8(&sp28, (D_801C34EC + 0x10A64)->unk38 + 0x1C);
            sp30 += 0x50;
            temp_v0_8 = temp_s4_2->unk3A0;
            temp_v0_9 = func_8015A62C(sp28 - temp_v0_8->unk1E4, sp2C - temp_v0_8->unk1E8, sp28);
            sp58 = temp_v0_9;
            sp58 = temp_v0_9 - temp_s4_2->unk3A0->unk1F8;
            func_801640EC(&sp58);
            var_v0_8 = sp58;
            if (var_v0_8 < 0) {
                var_v0_8 = -var_v0_8;
            }
            if (var_v0_8 < 0x200) {
                func_8012552C(&sp28, &sp18, arg1);
                temp_a2_4 = arg1 * 0x14;
                temp_a1_3 = temp_s6 * 0x28;
                temp_v1_15 = temp_a2_4 + (temp_a1_3 + arg0) + 0x54D4;
                temp_v1_15->unk8 = sp18;
                temp_v1_15->unkA = (u16) sp1C;
                temp_v1_15->unkC = (s16) (sp18 - 5);
                temp_v1_15->unkE = (s16) ((u16) sp1C - 0xA);
                temp_v1_15->unk10 = (s16) (sp18 + 5);
                temp_v1_15->unk12 = (s16) ((u16) sp1C - 0xA);
                if (sp20 >= 0x51) {
                    AddPrim(temp_fp, arg0 + (temp_a1_3 + 0x54D4) + temp_a2_4);
                }
                if ((D_801C34EC->unk12688 == 0) && (func_80178A70() < 0xBB8U) && (sp20 >= 0x321)) {
                    var_a3 = "Tourist";
block_170:
                    func_80167620(1, (s32) sp18, sp1C - 0x15, var_a3, sp5C);
                }
            }
        }
    }
    var_a3_2 = (arg0 + (arg1 * 4))->unk3A0->unk7DC;
    var_a2_4 = 0x20;
    if (var_a3_2 > 0x1869F) {
        var_a3_2 = 0x1869F;
    }
    if (var_a3_2 > 0) {
        var_a2_4 = 0x24;
    }
    func_80154AFC(&sp38, "%c%5d", var_a2_4, var_a3_2);
    func_801675F4(1, 0x10, 0xCF, &sp38, sp5C);
    if ((arg0 + arg1)->unk3EE != 0) {
        temp_s1_4 = temp_s6 * 0x28;
        temp_s3_4 = arg1 * 0x14;
        AddPrim(temp_fp, arg0 + (temp_s1_4 + 0x5274) + temp_s3_4);
        temp_s0_13 = temp_s6 * 0x18;
        temp_s2_5 = arg1 * 0xC;
        AddPrim(temp_fp, arg0 + (temp_s0_13 + 0x52C4) + temp_s2_5);
        AddPrim(temp_fp, arg0 + (temp_s1_4 + 0x52F4) + temp_s3_4);
        AddPrim(temp_fp, arg0 + (temp_s0_13 + 0x5344) + temp_s2_5);
        var_a1_3 = 0;
        if (D_801C34EC->unk7D8 == 1) {
            var_a1_3 = D_801C34EC->unk12688 == 4;
        }
        if ((var_a1_3 != 0) && ((D_801C34EC->unk12680 / 60) > 0)) {
            func_80154AFC(&sp38, &D_800F3118, D_801C34EC->unk12680 / 60);
            func_80167088(0, 0xC8, 0xC8, 0x32);
            func_80167620(0, 0xC8, 0x1E, &sp38, sp5C);
        }
    }
}
