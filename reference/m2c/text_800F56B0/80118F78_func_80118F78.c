/* m2c reference for func_80118F78 @ 80118F78 (480 words). Generated; not compiled or validated. */
? func_8010FCF0(s32, s32);                          /* extern */
? func_801196F8(void *);                            /* extern */
? func_80119A4C(void *);                            /* extern */
s32 func_80122F24(s32, s32, ?, s32 *);              /* extern */
s32 func_801233B4(s32, s16, s32);                   /* extern */
s32 func_801244FC(s32, s32);                        /* extern */
? func_801251C0(? *, void *);                       /* extern */
? func_801253F4(void *, VECTOR *);                  /* extern */
? func_801254DC(VECTOR *, ?, ?, s16);               /* extern */
? func_80125518(void *, ?, ?, s16);                 /* extern */
? func_801256B0(void *, s32, ? *, ? *, void *, s32); /* extern */
? func_8015A05C(void *, void *);                    /* extern */
? func_8016408C(s32 *);                             /* extern */
? func_801640EC(void *);                            /* extern */
? func_801683EC(void *, void *, ?, void *, void *); /* extern */
u16 func_80176C1C(s16, s16, ?);                     /* extern */
s32 func_80178A1C();                                /* extern */
static s32 D_801C34EC = 0;

void func_80118F78(void *arg0) {
    ? sp18;
    VECTOR sp28;
    VECTOR sp38;
    ? sp48;
    s32 sp50;
    s32 sp54;
    s32 temp_a2;
    s32 temp_a2_2;
    s32 temp_v0_2;
    s32 var_a0;
    s32 var_a2;
    s32 var_a2_2;
    s32 var_s2;
    s32 var_s3;
    s32 var_v0_2;
    s32 var_v1;
    s32 var_v1_2;
    u16 temp_s2;
    u16 temp_v0;
    u8 var_v0;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a0_3;
    void *temp_a0_4;
    void *temp_a0_5;
    void *temp_a0_6;
    void *temp_a1;
    void *temp_s0;
    void *temp_t0;
    void *temp_v0_3;
    void *var_a1;

    if ((arg0->unk315 != 0) && (func_80122F24(D_801C34EC, arg0->unk38 + 0x1C, 0x2EE0, &sp50) == 0) && (sp50 >= 0x961)) {
        arg0->unk38->unkC = 1;
        arg0->unk315 = 0U;
    }
    if (arg0->unk315 == 0) {
        temp_a0 = arg0->unk38;
        arg0->unk302 = 0;
        arg0->unk308 = 0;
        var_v1 = 0;
        if (temp_a0->unk14 == 0) {
            var_v1 = temp_a0->unk16 == 0;
        }
        if (var_v1 != 0) {
            func_80125518(arg0->unk38 + 0x4C, 0, 0, (s16) arg0->unk2E6);
        } else {
            func_801254DC(&sp28, 0, 0, (s16) arg0->unk2E6);
            mathMulVec(arg0->unk38 + 0x28, &sp28, &sp38);
            func_801253F4(arg0->unk38 + 0x4C, &sp38);
        }
        var_v0 = 1;
        if (arg0->unk300 == 0) {
            var_a0 = 0;
            if ((arg0->unk2C0 == 0x140) || (arg0->unk2C0 == 0x14A) || (arg0->unk2C0 == 0x154) || (arg0->unk2C0 == 0x186)) {
                var_a0 = 1;
            }
            if (var_a0 != 0) {
                arg0->unk301 = 0U;
            } else {
                var_v0 = arg0->unk30F;
                goto block_19;
            }
        } else {
block_19:
            arg0->unk301 = var_v0;
        }
        if (arg0->unk301 != 0) {
            func_801683EC(arg0->unk38, arg0 + 0xB8, 1, arg0 + 0x98, arg0 + 0x23C);
            func_801196F8(arg0);
            if (arg0->unk38->unk48 >= 3) {
                func_80119A4C(arg0);
            }
            var_s2 = 1;
            if (arg0->unk38->unk48 > 1) {
                var_s3 = 0xDC;
                do {
                    temp_a1 = arg0 + var_s3;
                    var_v1_2 = 0;
                    if (temp_a1->unk0 != 0) {
                        var_v1_2 = arg0->unk310 == 0;
                    }
                    if (var_v1_2 != 0) {
                        temp_v0 = temp_a1->unk1E;
                        if ((arg0->unk2C0 != 0x17C) || (((s16) temp_v0 != 0x460) && ((u32) ((s16) temp_v0 - 0x137) >= 0x19U) && ((s16) temp_v0 != 0x154) && ((u32) ((s16) temp_v0 - 0x186) >= 5U) && ((u32) ((s16) temp_v0 - 0x258) >= 5U))) {
                            var_a2 = 0;
                            if ((temp_a1->unkC < -0x960) || ((u32) ((s16) temp_v0 - 0x190) < 0x13U) || ((arg0->unk2C0 != 0x17C) && ((s16) temp_v0 >= 0x1F4) && ((s16) temp_v0 < 0x1F7))) {
                                var_a2 = 1;
                            }
                            if (var_a2 != 0) {
                                goto block_41;
                            }
                            arg0->unk302 = 1;
                            if ((u32) ((s16) temp_v0 - 0x10) < 0x110U) {
                                temp_v0_2 = func_801244FC(D_801C34EC, func_801233B4(D_801C34EC, (s16) temp_a1->unk1C, var_a2));
                                if (temp_v0_2 != 0) {
                                    func_8010FCF0(temp_v0_2, arg0->unk2C4);
                                } else {
                                    if (arg0->unk2C0 != 0x168) {
                                        arg0->unk2FE = (u16) (arg0->unk2FE + 2);
                                    }
                                    goto block_48;
                                }
                            } else {
                                arg0->unk308 = 1;
block_48:
                                var_a1 = arg0 + var_s3;
                                if (arg0->unk2C0 != 0x168) {
                                    arg0->unk2FE = (u16) (arg0->unk2FE + 1);
                                    if ((s16) arg0->unk2FE >= 9) {
                                        arg0->unk306 = 1;
                                        arg0->unk5E = -1;
                                    }
                                    var_a1 = arg0 + var_s3;
                                }
                                temp_a0_2 = arg0->unk38;
                                temp_a2 = var_a1->unk10 + 2;
                                temp_a0_2->unk1C = (s32) (temp_a0_2->unk1C + ((s32) (-var_a1->unk4 * temp_a2) >> 0xC));
                                temp_a0_3 = arg0->unk38;
                                temp_a0_3->unk20 = (s32) (temp_a0_3->unk20 + ((s32) (-var_a1->unk8 * temp_a2) >> 0xC));
                                temp_t0 = arg0->unk38;
                                temp_t0->unk24 = (s32) (temp_t0->unk24 + ((s32) (-var_a1->unkC * temp_a2) >> 0xC));
                                func_801256B0(arg0 + 0xB8, var_s2, &sp48, &sp18, arg0 + 0x248, 0x6E);
                                temp_s0 = arg0 + 0x260;
                                arg0->unk2A8 = 0;
                                func_801251C0(&sp48, temp_s0);
                                func_8015A05C(temp_s0, arg0 + 0x78);
                                arg0->unk305 = 1;
                                arg0->unk304 = 1;
                                arg0->unk300 = 1U;
                                arg0->unk2F4 = 0;
                                arg0->unk2F2 = 0;
                            }
                        } else {
block_41:
                            temp_a1->unk0 = 0;
                        }
                    }
                    var_s3 += 0x20;
                    var_s2 += 1;
                } while (var_s2 < arg0->unk38->unk48);
            }
            if (arg0->unk30D != 0) {
                sp54 = (s16) arg0->unk2FC - (s16) arg0->unk38->unk18;
                func_8016408C(&sp54);
                var_v0_2 = sp54;
                if (var_v0_2 < 0) {
                    var_v0_2 = -var_v0_2;
                }
                if (var_v0_2 < 0x16) {
                    temp_v0_3 = arg0->unk38;
                    temp_v0_3->unk18 = (u16) (temp_v0_3->unk18 + (u16) sp54);
                    arg0->unk30D = 0U;
                } else {
                    temp_s2 = func_80176C1C((s16) arg0->unk38->unk18, (s16) arg0->unk2FC, 0x14);
                    if (arg0->unk2FA != 0) {
                        sp54 = temp_s2 - (s16) arg0->unk38->unk18;
                        func_8016408C(&sp54);
                        if (arg0->unk2CC < 0x28) {
                            arg0->unk2FC = (u16) (arg0->unk2FC + ((sp54 * 0x46) / 100));
                        } else {
                            arg0->unk2FC = (u16) arg0->unk38->unk18;
                        }
                        func_801640EC(arg0 + 0x2FC);
                        arg0->unk2FA = (u16) (arg0->unk2FA - func_80178A1C());
                        if (arg0->unk2FA & 0x8000) {
                            arg0->unk2FA = 0U;
                        }
                    }
                    arg0->unk38->unk18 = temp_s2;
                }
            }
            if (arg0->unk2A8 != 0) {
                var_a2_2 = arg0->unk2A8;
                if (var_a2_2 >= 0x51) {
                    var_a2_2 = 0x50;
                }
                temp_a0_4 = arg0->unk38;
                temp_a0_4->unk1C = (s32) (temp_a0_4->unk1C + ((s32) (arg0->unk254 * var_a2_2) >> 0xC));
                temp_a0_5 = arg0->unk38;
                temp_a0_5->unk20 = (s32) (temp_a0_5->unk20 + ((s32) (arg0->unk258 * var_a2_2) >> 0xC));
                temp_a0_6 = arg0->unk38;
                temp_a0_6->unk24 = (s32) (temp_a0_6->unk24 + ((s32) (arg0->unk25C * var_a2_2) >> 0xC));
                temp_a2_2 = (s32) arg0->unk2A8 >> 2;
                if (temp_a2_2 != 0) {
                    arg0->unk2A8 = (s32) (s16) (arg0->unk2A8 - temp_a2_2);
                } else {
                    arg0->unk2A8 = 0;
                }
            }
            arg0->unk38->unk16 = func_80176C1C((s16) arg0->unk38->unk16, (s16) arg0->unk2F6, 0xD);
            arg0->unk38->unk14 = func_80176C1C((s16) arg0->unk38->unk14, (s16) arg0->unk2F8, 0xD);
        }
    }
}
