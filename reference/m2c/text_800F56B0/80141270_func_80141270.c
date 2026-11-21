/* m2c reference for func_80141270 @ 80141270 (1147 words). Generated; not compiled or validated. */
? func_800FECB4(s32 *, void *, s16, void *);        /* extern */
? func_800FF164(s32 *, s16, s16, void *);           /* extern */
u16 func_800FF20C(s32 *, void *);                   /* extern */
? func_80100630(void *);                            /* extern */
? func_80108D60(void *, s32, void *, s32, s32);     /* extern */
? func_8010B62C(void *, s32, ?);                    /* extern */
? func_80117AEC(void *);                            /* extern */
? func_80118484(void *);                            /* extern */
? func_80118F78(void *);                            /* extern */
? func_80119BBC(void *);                            /* extern */
? func_8011BC6C(? *, ?, ?, ?, s32, s32);            /* extern */
u16 func_80120FE0(void *);                          /* extern */
s32 func_80122F24(void *, s32, ?, ? *);             /* extern */
? func_80124CF4(? *, void *, ?, ?, s32);            /* extern */
? func_801253C8(void *, void *);                    /* extern */
s32 func_8013B690();                                /* extern */
? func_8013BDCC(s32, ?, ?, ? *);                    /* extern */
? func_8013CAE0(s32, ?, void *);                    /* extern */
? func_8013CDD4(s32, ? *);                          /* extern */
? func_8014245C(void *, void *);                    /* extern */
? func_801425C8(void *, s32);                       /* extern */
s32 func_801426A0(void *);                          /* extern */
s32 func_801426D0(void *, s32);                     /* extern */
s32 func_80142700(void *);                          /* extern */
? func_80142730(void *, ?);                         /* extern */
s32 func_80142754(void *);                          /* extern */
? func_8014936C(void *);                            /* extern */
u16 func_80176C1C(s16, s32, ?);                     /* extern */
u16 func_80176CBC(s16, s16, ?);                     /* extern */
? func_801787D8(void *, s32 *);                     /* extern */
s16 func_80178A1C();                                /* extern */
s32 func_80178A70();                                /* extern */
? func_801799C0(void *, ?);                         /* extern */
? func_80179B68(void *, ?, s32, ?);                 /* extern */
? func_80179BC0(void *, ?, s32);                    /* extern */
? func_80179F30(void *, s32);                       /* extern */
? func_80179F50(void *);                            /* extern */
extern ? D_801C3100;
extern ? D_801C31CC;
static void *D_801C34EC = NULL;
static s32 D_801C34F4 = 0;
static s32 D_801C35C4 = 0;
static s32 D_801C35C8 = 0;
static s32 D_801C35CC = 0;
static s32 D_801C35D0 = 0;
static s32 D_801C35D4 = 0;

void func_80141270(void *arg0) {
    ? sp18;
    s32 sp28;
    ? sp80;
    ? var_a1_2;
    ? var_a1_3;
    s32 *var_a1_4;
    s32 temp_hi;
    s32 temp_ret;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 var_a0;
    s32 var_a0_3;
    s32 var_a1;
    s32 var_a1_5;
    s32 var_a2;
    s32 var_a2_2;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s0_4;
    s32 var_s0_5;
    s32 var_s2;
    s32 var_s3;
    s32 var_v0;
    s32 var_v1;
    s32 var_v1_2;
    s32 var_v1_4;
    s32 var_v1_5;
    s32 var_v1_6;
    s32 var_v1_7;
    u16 temp_v1_6;
    u16 var_v1_3;
    u32 temp_v1;
    void *temp_a0;
    void *temp_a1;
    void *temp_a1_2;
    void *temp_s0;
    void *temp_s0_2;
    void *temp_s0_3;
    void *temp_s0_4;
    void *temp_s2;
    void *temp_v1_2;
    void *temp_v1_3;
    void *temp_v1_4;
    void *temp_v1_5;
    void *temp_v1_7;
    void *var_a0_2;
    void *var_a2_3;
    void *var_s0_3;

    var_s2 = 1;
    var_v1 = 0;
    if (arg0->unk320 != NULL) {
        var_v1 = D_801C34EC->unk127E5 != 0;
    }
    if (var_v1 != 0) {
        if (arg0->unk334 != 3) {
            arg0->unk344 = -1;
        }
        arg0->unk306 = 0;
        temp_v1 = arg0->unk334;
        switch (temp_v1) {                          /* switch 1 */
        case 0:                                     /* switch 1 */
            func_80142730(arg0, 0);
            D_801C34EC->unk127DE = 1;
            D_801C34EC->unk12790 = 0;
            arg0->unk334 = 2U;
            arg0->unk348 = (s32) (arg0->unk348 + 1);
            temp_ret = rand();
            arg0->unk340 = (s32) ((temp_ret % 600) + 0x12C);
            func_80179BC0(arg0 + 0x380, 0xFF, (temp_ret / 600) * 5);
            break;
        case 1:                                     /* switch 1 */
            func_80142730(arg0, 0);
            func_801253C8(arg0->unk320 + 0x1C, arg0->unk330 + 0x1E4);
            temp_v1_2 = arg0->unk330;
            var_a0 = 0;
            if ((temp_v1_2->unk10C <= 0) || (temp_v1_2->unkA0 != 0)) {
                var_a0 = 1;
            }
            if (var_a0 != 0) {
                temp_a1 = arg0->unk320;
                temp_a1->unk24 = (s32) ((temp_a1->unk24 + 0x50) - arg0->unk330->unk24C);
                func_8014245C(arg0, temp_a1);
            }
            var_s2 = 0;
            arg0->unk301 = 0;
            arg0->unk303 = 0U;
            arg0->unk309 = 0U;
            arg0->unk308 = 0U;
            if (!(func_80178A70() & 0xFF)) {
                temp_a1_2 = arg0->unk330;
                var_v1_2 = 0;
                if (temp_a1_2->unk820 != 0) {
                    var_v1_2 = (u32) ~(s8) D_801C34EC->unk12355 > 0U;
                }
                if (var_v1_2 != 0) {
                    func_8010B62C(D_801C34EC + 0x6220, 0x26, 5);
                } else {
                    func_8010B62C(D_801C34EC + 0x6220, ((s32) temp_a1_2->unk7C0 >> 4) + 0x26, 5);
                }
            }
            break;
        case 7:                                     /* switch 1 */
            var_a1 = 0;
            arg0->unk320->unk18 = func_80176CBC((s16) arg0->unk320->unk18, (s16) arg0->unk31C, 0xB);
            temp_a0 = arg0->unk320;
            if (((s16) arg0->unk31C - (s16) temp_a0->unk18) >= 0) {
                var_v1_3 = temp_a0->unk18;
                var_v0 = arg0->unk31C << 0x10;
            } else {
                var_v1_3 = arg0->unk31C;
                var_v0 = temp_a0->unk18 << 0x10;
            }
            if ((((var_v0 >> 0x10) - (s16) var_v1_3) < 0xC8) || (D_801C35D4 == (s16) arg0->unk320->unk18)) {
                var_a1 = 1;
            }
            if (var_a1 != 0) {
                func_801425C8(arg0, var_a1);
            } else {
                temp_s0 = arg0 + 0x380;
                func_80179F30(temp_s0, func_801426D0(arg0, var_a1));
                func_801799C0(temp_s0, 0);
            }
            D_801C35D4 = (s32) (s16) arg0->unk320->unk18;
            break;
        case 2:                                     /* switch 1 */
            func_80142730(arg0, 1);
            if (arg0->unk303 != 0) {
                arg0->unk334 = 4U;
            } else {
                if (arg0->unk27C != 0) {
                    arg0->unk27C = 0;
                    arg0->unk284 = 0;
                    func_80118484(arg0);
                }
                arg0->unk340 = (s32) (arg0->unk340 - func_80178A1C());
                if (arg0->unk340 < 0) {
                    arg0->unk340 = 0;
                    arg0->unk2D8 = 0;
block_96:
                    func_801425C8(arg0);
                } else {
                    arg0->unk31C = func_80176C1C((s16) arg0->unk31C, func_80142754(arg0), 5);
                    arg0->unk320->unk18 = (u16) arg0->unk31C;
                    temp_s0_2 = arg0 + 0x380;
                    func_80179F30(temp_s0_2, func_80142700(arg0));
                    func_801799C0(temp_s0_2, 1);
                }
            }
            break;
        case 3:                                     /* switch 1 */
            if (arg0->unk303 != 0) {
                arg0->unk334 = 4U;
            }
            arg0->unk338 = (s32) (arg0->unk338 - func_80178A1C());
            arg0->unk344 = (s32) (arg0->unk344 - func_80178A1C());
            if (((arg0->unk33C - arg0->unk338) >= 0x3D) && (((arg0->unk248 * arg0->unk248) + (arg0->unk24C * arg0->unk24C)) == 0)) {
                temp_v0 = D_801C35C8 + 1;
                arg0->unk14 = (s32) (arg0->unk2BC * 2);
                D_801C35C8 = temp_v0;
                if (temp_v0 == 5) {
                    arg0->unk338 = -1;
                }
            } else {
                D_801C35C8 = 0;
            }
            D_801C35CC = arg0->unk320->unk20;
            var_v1_4 = 0;
            if (arg0->unk303 == 0) {
                var_v1_4 = arg0->unk309 == 0;
            }
            if (var_v1_4 != 0) {
                var_a1_2 = 1;
            } else {
                var_a1_2 = 0;
            }
            func_80142730(arg0, var_a1_2);
            var_v1_5 = 0;
            if (arg0->unk338 < 0) {
                var_v1_5 = arg0->unk278 < 0x2EE;
            }
            if (var_v1_5 != 0) {
                arg0->unk338 = 0;
                arg0->unk334 = 2U;
                D_801C35C4 = 0;
                arg0->unk348 = (s32) (arg0->unk348 + 1);
                arg0->unk340 = (s32) ((rand() % 600) + 0x12C);
                arg0->unk301 = 0;
            } else if (arg0->unk338 < 0) {
                if (arg0->unk27C != 0) {
                    arg0->unk27C = 0;
                    arg0->unk284 = 0;
                    func_80118484(arg0);
                } else {
                    if (D_801C35C4 == 0) {
                        D_801C35C4 = arg0->unk278;
                    }
                    func_80179F30(arg0 + 0x380, (s32) (func_801426D0(arg0) * arg0->unk278) / (s32) D_801C35C4);
                }
            } else {
                if (arg0->unk308 != 0) {
                    arg0->unk300 = 0;
                    arg0->unk320->unk18 = (u16) arg0->unk264;
                    arg0->unk31C = (u16) arg0->unk320->unk18;
                    arg0->unk1C = (u16) arg0->unk31C;
                    arg0->unk27C = func_801426A0(arg0);
                    arg0->unk284 = (s32) arg0->unk27C;
                    func_80118484(arg0);
                }
                if (arg0->unk27C != func_801426A0(arg0)) {
                    arg0->unk27C = func_801426A0(arg0);
                    arg0->unk284 = (s32) arg0->unk27C;
                    func_80118484(arg0);
                }
                var_a0_2 = arg0 + 0x380;
                var_a1_3 = 0;
                var_a2 = func_801426D0(arg0);
block_94:
                func_80179B68(var_a0_2, var_a1_3, var_a2, 0);
            }
            break;
        case 4:                                     /* switch 1 */
            func_80142730(arg0, 0);
            var_v1_6 = 0;
            if (((arg0->unk303 == 0) && (arg0->unk309 == 0)) || (arg0->unk308 != 0)) {
                var_v1_6 = 1;
            }
            if (var_v1_6 != 0) {
                arg0->unk300 = 0;
                func_801425C8(arg0);
                arg0->unk320->unk18 = (u16) arg0->unk264;
                arg0->unk31C = (u16) arg0->unk320->unk18;
                arg0->unk1C = (u16) arg0->unk31C;
                arg0->unk288 = 0;
                arg0->unk303 = 0U;
                arg0->unk334 = 3U;
            }
            temp_s0_3 = arg0 + 0x380;
            func_80179F30(temp_s0_3, func_801426D0(arg0));
            if (func_8013B690() == 3) {
                func_801799C0(temp_s0_3, 3);
            } else {
                func_801799C0(temp_s0_3, 0);
            }
            break;
        case 5:                                     /* switch 1 */
            func_80142730(arg0, 0);
            if (arg0->unk330 != NULL) {
                func_8014936C(arg0->unk330);
                func_80119BBC(arg0);
                arg0->unk320->unkC = 1;
                if (arg0->unk330->unk7B8 == 1) {
                    D_801C34EC->unk12790 = 0;
                } else {
                    temp_v0_2 = D_801C34EC->unk7D4;
                    var_a0_3 = 0x1A4;
                    switch (temp_v0_2) {            /* switch 2; irregular */
                    case 0:                         /* switch 2 */
                        var_a0_3 = 0x690;
                        break;
                    case 1:                         /* switch 2 */
                        var_a0_3 = 0x348;
                        break;
                    }
                    D_801C34EC->unk12790 = var_a0_3;
                }
                D_801C31CC.unk8 = 0x34;
                temp_v0_3 = D_801C34EC->unk12794;
                D_801C34EC->unk12794 = (s32) (temp_v0_3 + 1);
                D_801C31CC.unkC = temp_v0_3;
                temp_v1_3 = arg0->unk320;
                temp_v1_4 = temp_v1_3 + 0x1C;
                D_801C3100.unk0 = (s32) temp_v1_3->unk1C;
                D_801C3100.unk4 = (s32) temp_v1_4->unk4;
                D_801C31CC.unk0 = &D_801C3100;
                D_801C3100.unk8 = (s32) temp_v1_4->unk8;
                func_8013BDCC(D_801C34F4, 0, 0, &D_801C31CC);
                D_801C34EC->unk127DE = 1;
                temp_v1_5 = arg0->unk330;
                arg0->unk320->unk24 = (s32) (temp_v1_5->unk1EC + ((s16) temp_v1_5->unk16A + 0x78));
                arg0->unk2F0 = 0;
                arg0->unk2F4 = 0x155;
                arg0->unk303 = 0U;
                arg0->unk300 = 0;
                arg0->unk320->unk18 = (u16) (rand() & 0x3FF);
                arg0->unk31C = (u16) arg0->unk320->unk18;
                D_801C35D0 = 0;
                arg0->unk1C = (u16) arg0->unk31C;
                arg0->unk14 = 0x320;
                arg0->unk2B8 = 0x32;
                arg0->unk2B0 = (s32) (arg0->unk320->unk24 + (s16) arg0->unk2E6);
                arg0->unk288 = 0;
                arg0->unk330 = NULL;
                arg0->unk58 = func_800FF20C(arg0->unk40, arg0->unk320 + 0x1C);
                arg0->unk5C = (u16) (*arg0->unk40 + ((s32) (arg0->unk58 << 0x10) >> 0xB))->unkC;
                arg0->unk5A = (u16) arg0->unk5C;
                arg0->unk30F = 0;
                arg0->unk301 = 0;
                arg0->unk334 = 6U;
            }
            break;
        case 6:                                     /* switch 1 */
            func_80142730(arg0, 0);
            var_v1_7 = 0;
            if (arg0->unk309 != 0) {
                var_v1_7 = (arg0->unk2B0 + (arg0->unk2B8 * 0x10)) >= arg0->unk320->unk24;
            }
            if (var_v1_7 != 0) {
                arg0->unk320->unk14 = 0;
                arg0->unk320->unk16 = 0;
                arg0->unk301 = 1;
                if (arg0->unk2B4 > 0) {
                    func_8013CAE0(D_801C34F4, 0xE, arg0->unk320 + 0x1C);
                    func_80124CF4(&sp18, arg0->unk320 + 0x1C, 0x7F, 0x7F, 0x7F);
                    func_8013CDD4(D_801C34F4, &sp18);
                    func_8011BC6C(&sp18, 0, 0x1E, 0x14, 0, 0);
                    func_80124CF4(&sp18, arg0->unk320 + 0x1C, 0x7F, 0x7F, 0x7F);
                    func_8013CDD4(D_801C34F4, &sp18);
                    func_8011BC6C(&sp18, 0, 0x1E, 0x15, 0, 0);
                    func_80124CF4(&sp18, arg0->unk320 + 0x1C, 0x7F, 0x7F, 0x7F);
                    func_8013CDD4(D_801C34F4, &sp18);
                    func_8011BC6C(&sp18, 0, 0x1E, 0x16, 0, 0);
                    func_80124CF4(&sp18, arg0->unk320 + 0x1C, 0x7F, 0x7F, 0x7F);
                    func_8013CDD4(D_801C34F4, &sp18);
                    func_8011BC6C(&sp18, 0, 0x1E, 0x17, 0, 0);
                } else if ((arg0->unk2B4 < -4) && (D_801C35D0 == 0)) {
                    arg0->unk328->unk4 = 1;
                    arg0->unk2AC = (s32) (arg0->unk2AC - func_80178A1C());
                    if (arg0->unk27C != 0x1E) {
                        arg0->unk27C = func_80176CBC((s16) arg0->unk27C, 0x1E, 1);
                        arg0->unk284 = 0x3C;
                        func_80118484(arg0);
                    }
                }
                var_a0_2 = arg0 + 0x380;
                if (func_8013B690() == 1) {
                    arg0->unk328->unk4 = 0;
                    func_80179B68(var_a0_2, 1, 0x3C, 0);
                } else {
                    var_a1_3 = 2;
                    var_a2 = 1;
                    goto block_94;
                }
            } else {
                arg0->unk328->unk4 = 0;
                arg0->unk300 = 0;
                goto block_96;
            }
            break;
        }
        if (var_s2 != 0) {
            arg0->unk30F = 1;
            if (arg0->unk334 == 3) {
                func_80117AEC(arg0);
            } else {
                func_80100630(arg0);
            }
            func_80118F78(arg0);
            var_s3 = 0;
            func_801787D8(arg0->unk320 + 0x1C, &sp28);
            var_s0 = 0;
            if (sp28 > 0) {
                var_a1_4 = &sp28;
                do {
                    if (var_a1_4->unk4 == 0x7D2) {
                        var_s3 = 1;
                    }
                    var_s0 += 1;
                    var_a1_4 += 8;
                } while (var_s0 < sp28);
            }
            if (arg0->unk334 == 3) {
                if (var_s3 == 0) {
                    if (arg0->unk344 < 0) {
                        func_800FECB4(arg0->unk40, arg0->unk320 + 0x1C, (s16) arg0->unk58, arg0 + 8);
                        var_s0_2 = 0;
                        if (arg0->unk14 < arg0->unk2BC) {
                            arg0->unk34C = (s32) (arg0->unk34C + 1);
                            arg0->unk348 = 0;
                            temp_s2 = *arg0->unk40 + ((s32) (arg0->unk5C << 0x10) >> 0xB);
loop_111:
                            if (var_s0_2 < (s8) temp_s2->unk1E) {
                                temp_hi = rand() % (s8) temp_s2->unk1E;
                                var_a2_2 = 0;
                                if ((temp_hi != (s16) arg0->unk58) && (temp_hi != (s16) arg0->unk5A)) {
                                    var_a2_2 = (*arg0->unk40 + ((s32) ((temp_s2 + (temp_hi * 2))->unkC << 0x10) >> 0xB))->unk1F == 0;
                                }
                                if (var_a2_2 == 0) {
                                    var_s0_2 += 1;
                                    goto loop_111;
                                }
                                arg0->unk5A = (u16) arg0->unk58;
                                arg0->unk58 = (u16) arg0->unk5C;
                                arg0->unk5C = (u16) (temp_s2 + (temp_hi * 2))->unkC;
                            }
                            var_s0_3 = arg0 + 8;
                            if (var_s0_2 == (s8) temp_s2->unk1E) {
                                var_s0_4 = 0;
                                var_a2_3 = temp_s2;
loop_120:
                                var_a1_5 = 0;
                                if (var_s0_4 < (s8) temp_s2->unk1E) {
                                    temp_v1_6 = var_a2_3->unkC;
                                    if ((temp_v1_6 << 0x10) != (arg0->unk5A << 0x10)) {
                                        var_a1_5 = (u32) ((s16) temp_v1_6 ^ (s16) arg0->unk58) > 0U;
                                    }
                                    if (var_a1_5 != 0) {
                                        arg0->unk5A = (u16) arg0->unk58;
                                        arg0->unk58 = (u16) arg0->unk5C;
                                        arg0->unk5C = (u16) (s16) temp_v1_6;
                                    }
                                    var_a2_3 += 2;
                                    var_s0_4 += 1;
                                    goto loop_120;
                                }
                                var_s0_3 = arg0 + 8;
                                if (var_s0_4 == (s8) temp_s2->unk1E) {
                                    arg0->unk5A = (u16) arg0->unk58;
                                    arg0->unk58 = (u16) arg0->unk5C;
                                    arg0->unk5C = (u16) temp_s2->unkC;
                                    var_s0_3 = arg0 + 8;
                                }
                            }
                            func_800FECB4(arg0->unk40, arg0->unk320 + 0x1C, (s16) arg0->unk58, var_s0_3);
                            func_800FF164(arg0->unk40, (s16) arg0->unk58, (s16) arg0->unk5C, var_s0_3);
                        }
                    }
                    goto block_129;
                }
                goto block_130;
            }
block_129:
            if (var_s3 != 0) {
block_130:
                arg0->unk58 = func_80120FE0(D_801C34EC);
                temp_s0_4 = *arg0->unk40 + ((s32) (arg0->unk58 << 0x10) >> 0xB);
                func_801253C8(arg0->unk320 + 0x1C, temp_s0_4);
                temp_v1_7 = arg0->unk320;
                temp_v1_7->unk24 = (s32) (temp_v1_7->unk24 + 0x320);
                arg0->unk5C = (u16) temp_s0_4->unkC;
                arg0->unk5A = (u16) arg0->unk5C;
            }
            var_s0_5 = 0;
            if (arg0->unk330->unk820 != 0) {
                if (!(func_80178A70() & 0xFF)) {
                    func_8010B62C(D_801C34EC + 0x6220, (rand() & 1) | 0x24, 5);
                }
            }
loop_136:
            if (var_s0_5 < (D_801C34EC + 0x6220)->unk3CC) {
                if (!(func_80178A70() & 3) && (D_801C34EC->unk11D2C == 0)) {
                    func_80108D60(D_801C34EC + 0x6220, arg0->unk2C0, arg0->unk320 + 0x1C, var_s0_5, 1);
                }
                var_s0_5 += 1;
                goto loop_136;
            }
            if (func_80122F24(D_801C34EC, arg0->unk38 + 0x1C, 0xFA0, &sp80) != 0) {
                arg0->unk30F = 1;
                func_80179F50(arg0 + 0x380);
                return;
            }
            arg0->unk30F = 0;
        }
    }
}
