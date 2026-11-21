/* m2c reference for func_801168B4 @ 801168B4 (773 words). Generated; not compiled or validated. */
? func_8010FDC4(void *, ? *, s32);                  /* extern */
s32 func_8010FF5C(? *, ? *);                        /* extern */
? func_801174C8(void *, ?);                         /* extern */
? func_8011BC6C(void *, ?, ?, ?, s32, s32);         /* extern */
void *func_801244FC(s32, s32);                      /* extern */
s32 func_80124A94(s32, s32, s32 *);                 /* extern */
? func_80125050(void *, void *, void *);            /* extern */
? func_801251C0(?, void *);                         /* extern */
? func_801253C8(? *, ? *);                          /* extern */
? func_801253F4(void *, ? *);                       /* extern */
? func_80125420(? *, void *);                       /* extern */
? func_8012EEE8(void *, ?, s32, ?);                 /* extern */
? func_8013FD30(void *, ?, ?, ?);                   /* extern */
? func_80148A00(void *, ?);                         /* extern */
? func_8015367C(s32, void *);                       /* extern */
? func_801544FC(s32, void *, void *);               /* extern */
s32 func_801594CC(s32);                             /* extern */
s32 func_8015959C(s32);                             /* extern */
? func_8015A05C(void *, void *);                    /* extern */
? func_8016408C(s32 *);                             /* extern */
? func_801640EC(void *);                            /* extern */
? func_801F54FC(void *);                            /* extern */
static s32 D_801C34EC = 0;

void func_801168B4(void *arg0, ? arg1, s32 arg2, s32 arg3) {
    ? sp18;
    ? sp24;
    void *sp30;
    void *sp34;
    void *sp38;
    void *sp3C;
    s32 sp40;
    s32 sp44;
    s32 sp58;
    s32 sp5C;
    s8 sp60;
    u8 sp62;
    ? sp68;
    ? sp74;
    void *sp80;
    void *sp84;
    void *sp88;
    void *sp8C;
    s32 sp90;
    s32 sp94;
    s32 spA8;
    s32 spAC;
    s8 spB0;
    u8 spB2;
    s32 spB8;
    s32 spBC;
    s16 var_v0_2;
    s16 var_v0_4;
    s16 var_v0_5;
    s16 var_v0_6;
    s16 var_v1_5;
    s16 var_v1_6;
    s32 temp_s4;
    s32 temp_v1;
    s32 var_a0_2;
    s32 var_a0_3;
    s32 var_a0_4;
    s32 var_a0_5;
    s32 var_s5;
    s32 var_v0_3;
    s32 var_v1;
    s32 var_v1_2;
    s32 var_v1_3;
    s32 var_v1_4;
    s32 var_v1_7;
    s32 var_v1_8;
    u16 var_v0;
    void *temp_s2;
    void *temp_s3;
    void *temp_v0;
    void *var_a0;
    void *var_s1;

    var_s5 = arg2;
    var_v1 = 0;
    if ((arg0->unk38 == NULL) || ((temp_v0 = arg0->unk38, (temp_v0 != NULL)) && (temp_v0->unkC == 0))) {
        var_v1 = 1;
    }
    if (var_v1 == 0) {
        temp_s2 = D_801C34EC + 0xB744;
        var_s1 = NULL;
        if (func_80124A94(D_801C34EC, temp_s2->unk18, &spB8) != 0) {
            var_s1 = func_801244FC(D_801C34EC, spB8);
            if ((var_s1->unk7B8 != 1) && (temp_s2->unk14 == 1)) {
                var_v1_2 = 0;
                if ((var_s1->unk949 != 0) || (var_s1->unk74 != 0) || (var_s1->unk952 != 0)) {
                    var_v1_2 = 1;
                }
                if (var_v1_2 != 0) {
                    if (var_s5 < (s16) arg0->unk2E0) {
                        func_80148A00(var_s1, 1);
                    }
                }
            }
        }
        if (arg3 == 1) {
            temp_s4 = temp_s2->unk14;
            if (temp_s4 == arg3) {
                arg0->unk301 = (s8) temp_s4;
                arg0->unk2FE = (u16) (arg0->unk2FE + 1);
                if (arg0->unk308 != 0) {
                    temp_s2->unk22 = (u8) temp_s4;
                    func_80125050(var_s1 + 0x220, arg0->unk38 + 0x1C, temp_s2);
                } else {
                    temp_s3 = arg0 + 0x260;
                    func_801251C0(arg1, temp_s3);
                    func_8015A05C(temp_s3, arg0 + 0x78);
                    spBC = (s16) arg0->unk38->unk18 - (s16) arg0->unk264;
                    func_8016408C(&spBC);
                    if (temp_s2->unk22 == 0) {
                        func_801253C8(&sp18, var_s1 + 0x1FC);
                        sp30 = var_s1 + 0x220;
                        sp34 = var_s1 + 0x244;
                        sp38 = var_s1->unk738;
                        sp3C = var_s1->unk4FC;
                        sp40 = var_s1->unk23C;
                        sp44 = var_s1->unkD0;
                        sp58 = (s32) (s16) var_s1->unk160;
                        sp60 = 0;
                        sp5C = (s32) (s16) var_s1->unk508;
                        sp62 = var_s1->unkA4;
                        func_80125420(&sp68, temp_s3);
                        sp80 = arg0 + 0x23C;
                        sp84 = arg0 + 0x248;
                        sp88 = arg0->unk38;
                        sp8C = arg0->unk268;
                        if (arg0->unk280 != 0) {
                            sp90 = arg0->unk278;
                            sp94 = arg0->unk280;
                        } else {
                            sp90 = temp_s4;
                            sp94 = temp_s4;
                        }
                        spA8 = arg0->unk2CC;
                        spB0 = 0;
                        spAC = arg0->unk2D4;
                        spB2 = arg0->unk310;
                        if (func_8010FF5C(&sp18, &sp68) != 0) {
                            func_801253C8(var_s1 + 0x1FC, &sp18);
                            var_s1->unk20C = sp4C;
                            var_s1->unk508 = 0U;
                            var_s1->unk50A = (s16) arg0->unk2C0;
                            var_s1->unk4FC = (void *) arg0->unk38;
                            var_s1->unk86 = 1;
                            var_s1->unkA4 = sp62;
                            var_a0 = arg0 + 0x260;
                            if (sp50 != 0) {
                                var_s1->unk450 = (s32) ((s16) var_s1->unk738->unk18 + sp50);
                                func_8016408C(var_s1 + 0x450);
                                var_s1->unk537 = 1;
                                if (arg0->unk280 != 0) {
                                    var_v1_3 = arg0->unk278;
                                    if (var_v1_3 < 0) {
                                        var_v1_3 = -var_v1_3;
                                    }
                                    var_s1->unk50C = (u16) ((s32) (var_v1_3 * 0x78) / (s32) arg0->unk280);
                                    var_v0 = var_s1->unk50C - 0x1E;
                                } else {
                                    var_v0 = 0x1E;
                                }
                                var_s1->unk50C = var_v0;
                                var_a0 = arg0 + 0x260;
                                if (var_s1->unk50C & 0x8000) {
                                    var_s1->unk50C = 0U;
                                    var_a0 = arg0 + 0x260;
                                }
                            }
                            func_801253F4(var_a0, &sp68);
                            arg0->unk278 = sp9C;
                            arg0->unk2D4 = 0;
                            arg0->unk268 = (void *) var_s1->unk738;
                            if ((arg0->unk310 == 0) && (spB2 != 0)) {
                                func_8013FD30(var_s1, 5, 2, 3);
                                arg0->unk38->unkD = 0;
                                if (var_s1->unk7B8 == 1) {
                                    func_8012EEE8(var_s1, 0, ((s32) (var_s1->unk7A4 * 0xFF) / (s32) var_s1->unk25C) & 0xFF, 0x3C);
                                }
                            }
                            arg0->unk310 = spB2;
                            if (spA0 != 0) {
                                arg0->unk30D = 1;
                                arg0->unk2FC = (s16) (arg0->unk38->unk18 + (u16) spA0);
                                func_801640EC(arg0 + 0x2FC);
                                arg0->unk2FA = (u16) ((s32) (var_s1->unk7A4 * 0x78) / (s32) var_s1->unkD0);
                                arg0->unk2FA = (u16) (arg0->unk2FA - 0x1E);
                                if (arg0->unk2FA & 0x8000) {
                                    arg0->unk2FA = 0U;
                                } else if ((s16) arg0->unk2FA >= 0xB5) {
                                    arg0->unk2FA = 0xB4U;
                                }
                            }
                        }
                        func_8010FDC4(var_s1, &sp24, sp48);
                        arg0->unk2A8 = sp98;
                        func_801253C8(arg0 + 0x254, &sp74);
                        arg0->unk2D4 = 0;
                    }
                    arg0->unk305 = 1U;
                    arg0->unk304 = 1;
                    arg0->unk300 = 1;
                    spBC = (s16) arg0->unk38->unk18 - (s16) arg0->unk264;
                    func_8016408C(&spBC);
                    var_a0_2 = 0;
                    if ((arg0->unk2C0 == 0x15E) || (arg0->unk2C0 == 0x169)) {
                        var_a0_2 = 1;
                    }
                    if (var_a0_2 != 0) {
                        arg0->unk306 = 1;
                        arg0->unk5E = -1;
                    } else {
                        var_a0_3 = 0;
                        if (arg0->unk30B != 0) {
                            if ((arg0->unk2C0 == 0x17C) || (var_s1->unkCC < arg0->unk278)) {
                                var_a0_3 = 1;
                            }
                            if (var_a0_3 != 0) {
                                arg0->unk303 = 1U;
                                arg0->unk306 = 1;
                                arg0->unk5E = -1;
                                arg0->unk305 = 0U;
                            }
                        }
                    }
                    var_v1_4 = 0;
                    if ((arg0->unk305 != 0) || (arg0->unk303 != 0)) {
                        var_v1_4 = 1;
                    }
                    if (var_v1_4 != 0) {
                        arg0->unk2F4 = (u16) ((s32) (func_801594CC(spBC) * 0x31C) >> 0xC);
                        arg0->unk2F2 = (u16) ((s32) (func_8015959C(spBC) * 0x1C7) >> 0xC);
                        arg0->unk2F4 = (u16) ((s32) ((s16) arg0->unk2F4 * var_s1->unk7A4) / (s32) var_s1->unkCC);
                        arg0->unk2F2 = (u16) ((s32) ((s16) arg0->unk2F2 * var_s1->unk7A4) / (s32) var_s1->unkCC);
                        if (arg0->unk30C == 0) {
                            arg0->unk2F4 = (u16) ((s32) (arg0->unk2F4 << 0x10) >> 0x12);
                            arg0->unk2F2 = (u16) ((s32) (arg0->unk2F2 << 0x10) >> 0x12);
                        }
                        var_a0_4 = 0;
                        if (arg0->unk303 != 0) {
                            if (arg0->unk30C == 0) {
                                arg0->unk307 = 1;
                                var_v1_5 = (s16) arg0->unk2F4;
                                if (var_v1_5 < 0) {
                                    var_v1_5 = -var_v1_5;
                                }
                                var_v0_2 = (s16) arg0->unk2F2;
                                if (var_v0_2 < 0) {
                                    var_v0_2 = -var_v0_2;
                                }
                                if (var_v1_5 < var_v0_2) {
                                    arg0->unk303 = 0U;
                                    arg0->unk2F4 = (u16) ((s32) (arg0->unk2F4 << 0x10) >> 0x12);
                                    var_v0_3 = (s32) (arg0->unk2F2 << 0x10) >> 0x12;
                                    goto block_85;
                                }
                            } else {
                                var_v1_6 = (s16) arg0->unk2F4;
                                if (var_v1_6 < 0) {
                                    var_v1_6 = -var_v1_6;
                                }
                                var_v0_4 = (s16) arg0->unk2F2;
                                if (var_v0_4 < 0) {
                                    var_v0_4 = -var_v0_4;
                                }
                                if (var_v0_4 < var_v1_6) {
                                    arg0->unk307 = 1;
                                    var_v0_5 = (s16) arg0->unk2F4;
                                    if (var_v0_5 < 0) {
                                        var_v0_5 = -var_v0_5;
                                    }
                                    if (var_v0_5 < 0xE3) {
                                        if ((arg0->unk2F4 << 0x10) > 0) {
                                            arg0->unk2F4 = 0xE3U;
                                        } else {
                                            arg0->unk2F4 = -0xE3U;
                                        }
                                    }
                                } else {
                                    arg0->unk307 = 0;
                                    var_v0_6 = (s16) arg0->unk2F2;
                                    if (var_v0_6 < 0) {
                                        var_v0_6 = -var_v0_6;
                                    }
                                    if (var_v0_6 < 0xAA) {
                                        var_v0_3 = 0xAA;
                                        if ((arg0->unk2F2 << 0x10) <= 0) {
                                            var_v0_3 = -0xAA;
                                        }
block_85:
                                        arg0->unk2F2 = (u16) var_v0_3;
                                    }
                                }
                            }
                            if (arg0->unk2C0 == 0x17C) {
                                arg0->unk2F4 = (u16) (arg0->unk2F4 * 2);
                                arg0->unk2F2 = (u16) (arg0->unk2F2 * 2);
                            }
                            var_a0_4 = 0;
                            if (arg0->unk303 != 0) {
                                arg0->unk30D = 0;
                                var_a0_4 = 0;
                            }
                        }
                        if ((arg0->unk2C0 == 0x140) || (arg0->unk2C0 == 0x154) || (arg0->unk2C0 == 0x14A) || (arg0->unk2C0 == 0x186)) {
                            var_a0_4 = 1;
                        }
                        if (var_a0_4 != 0) {
                            var_s5 = 0x13;
                        } else {
                            var_s5 = (s32) ((var_s5 >> 2) * var_s1->unk7A4) / (s32) var_s1->unkD0;
                        }
                    }
                }
            }
        }
        arg0->unk2E0 = (u16) (arg0->unk2E0 - var_s5);
        if (arg0->unk2C0 == 0x186) {
            func_801F54FC(arg0);
        }
        var_v1_7 = 0;
        if (arg0->unk2E0 & 0x8000) {
            var_v1_7 = arg0->unk30A == 0;
        }
        var_a0_5 = 0;
        if (var_v1_7 != 0) {
            arg0->unk30A = 1U;
            if ((arg0->unk2C0 == 0x140) || (arg0->unk2C0 == 0x154) || (arg0->unk2C0 == 0x14A) || (arg0->unk2C0 == 0x186)) {
                var_a0_5 = 1;
            }
            if ((var_a0_5 != 0) && (var_s5 < 0x14)) {
                func_8011BC6C(arg0->unk38 + 0x1C, 0, 4, 0x49, 0, 0);
            } else {
                func_801174C8(arg0, arg1);
            }
            if (arg0->unk2C0 == 0x12F) {
                func_8015367C(D_801C34EC + 0x496C, arg0->unk38 + 0x1C);
            }
            if (var_s1 != NULL) {
                temp_v1 = arg0->unk2C0;
                if (temp_v1 != 0x14A) {
                    if (temp_v1 < 0x14B) {
                        var_v1_8 = 0x12C;
                        if (temp_v1 != 0x140) {

                        } else {
                            goto block_121;
                        }
                    } else if ((temp_v1 == 0x154) || (var_v1_8 = 0x12C, (temp_v1 == 0x186))) {
                        goto block_121;
                    }
                } else {
block_121:
                    var_v1_8 = 0x1F4;
                }
                if (var_v1_8 != 0) {
                    if (var_s1->unk82A != 0) {
                        var_v1_8 *= 2;
                    }
                    var_s1->unk7DC = (s32) (var_s1->unk7DC + var_v1_8);
                    func_801544FC(D_801C34EC + 0x496C, arg0->unk38 + 0x1C, var_s1 + 0x1E4);
                }
            }
        }
    }
}
