/* m2c reference for func_8014662C @ 8014662C (520 words). Generated; not compiled or validated. */
? func_800FE458(void *, ?);                         /* extern */
? func_8010B62C(void *, s32, ?);                    /* extern */
? func_8010FDC4(void *, ? *, s32);                  /* extern */
? func_8011BC6C(void *, void *, ?, ?, s32, s32);    /* extern */
? func_801214D8(void *, s32);                       /* extern */
void *func_801244FC(void *, s32);                   /* extern */
s32 func_80124A94(void *, s32, s32 *);              /* extern */
? func_80124FC8(void *, VECTOR *, s32 *);           /* extern */
? func_80125130(? *, void *);                       /* extern */
? func_80125420(? *, s32);                          /* extern */
? func_8012EEE8(void *, ?, s32, ?);                 /* extern */
s32 func_80133AE0(s32, s32);                        /* extern */
? func_8013978C(s32, ?);                            /* extern */
s32 func_8013A06C();                                /* extern */
? func_80144BC8(void *, ?);                         /* extern */
? func_80147724(void *);                            /* extern */
? func_80147778(void *);                            /* extern */
? func_80149444(void *, s32);                       /* extern */
? func_801544FC(void *, s32 *, void *);             /* extern */
? func_80163E3C(void *);                            /* extern */
s32 func_8016BDA8(s32);                             /* extern */
static void *D_801C34EC = NULL;
static ? D_800F4308;                                /* unable to generate initializer: unknown type; const */

void func_8014662C(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    ? sp18;
    s32 sp28;
    s32 sp2C;
    s32 sp30;
    VECTOR sp38;
    s32 sp48;
    ? var_a2;
    ? var_a3;
    s16 var_a0_5;
    s32 temp_s0;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a0_4;
    s32 var_a1_2;
    s32 var_a1_3;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s3;
    s32 var_v1;
    s32 var_v1_2;
    s32 var_v1_3;
    s32 var_v1_4;
    s32 var_v1_5;
    s32 var_v1_6;
    s32 var_v1_7;
    u32 temp_v1;
    void *temp_s1;
    void *temp_s2;
    void *temp_v1_2;
    void *var_a0_3;
    void *var_a1;
    void *var_s4;

    var_s3 = arg2;
    var_s0 = 0;
    if ((arg3 == 0x1E) || (arg0->unk7B8 != 1) || (arg0->unk2A0 == 0)) {
        temp_s1 = D_801C34EC + 0xB744;
        var_s4 = NULL;
        if (func_80124A94(D_801C34EC, temp_s1->unk18, &sp48) != 0) {
            var_s4 = func_801244FC(D_801C34EC, sp48);
        }
        var_v1 = 0;
        if (temp_s1->unk10 != NULL) {
            var_v1 = temp_s1->unk10->unk20 == 0xA;
        }
        var_a0 = 0;
        if (var_v1 != 0) {
            if (arg0->unk7C0 >= 0xD0) {
                var_s0 = 1;
            } else {
                var_a0 = 0;
                if (arg0->unk8B == 0) {
                    func_80147724(arg0);
                    func_800FE458(arg0, 1);
                    var_a0 = 0;
                }
            }
        }
        if (arg0->unk7B8 == 1) {
            var_a0 = (u32) (temp_s1->unk14 ^ 1) > 0U;
        }
        if (var_a0 != 0) {
            var_a0_2 = 0x14;
            if (var_s3 < 0x15) {
                var_a0_2 = var_s3;
            }
            func_8012EEE8(arg0, 0, ((var_a0_2 * 0xFF) / 20) & 0xFF, 0x3C);
        }
        var_v1_2 = 0;
        if ((arg0->unk8B != 0) || (arg0->unkA3 != 0)) {
            var_v1_2 = 1;
        }
        if ((var_v1_2 != 0) || (var_s0 != 0)) {
            if (temp_s1->unk10->unk20 != 3) {
                temp_s1->unk20 = 1;
                var_v1_3 = 0;
                if ((var_s4 != NULL) && (arg0->unk180 != 0)) {
                    var_v1_3 = (u32) temp_s1->unk10->unk18 > 0U;
                }
                if (var_v1_3 != 0) {
                    temp_s1->unk21 = 1U;
                }
                if (arg1 != 0) {
                    func_80125420(&sp18, arg1);
                    func_80125130(&sp18, temp_s1);
                    temp_s1->unk8 = (s32) (temp_s1->unk8 + 0x800);
                    if (temp_s1->unk21 != 0) {
                        D_801C34EC->unkB744 = (s32) (D_801C34EC->unkB744 - 0x1C7);
                    }
                } else {
                    temp_s1->unk20 = 0;
                    temp_s1->unk21 = 0U;
                }
                D_801C34EC->unkB744 = (s32) ((D_801C34EC->unkB744 - 0x80) - (rand() & 0xFF));
                temp_s1->unk8 = (s32) ((temp_s1->unk8 + 0x80) - (rand() & 0xFF));
                func_80163E3C(temp_s1);
            }
            var_s3 = 0;
        }
        if (arg1 != 0) {
            var_v1_4 = 0;
            if (temp_s1->unk10 != NULL) {
                var_v1_4 = (u32) (temp_s1->unk10->unk20 ^ 8) > 0U;
            }
            if (var_v1_4 != 0) {
                var_s0_2 = (s32) (var_s3 * 8) >> 1;
                if (var_s0_2 >= 0xA1) {
                    var_s0_2 = 0xA0;
                }
                func_80125420(&sp18, arg1);
                func_8010FDC4(arg0, &sp18, var_s0_2);
            }
        }
        if (temp_s1->unk14 == 1) {
            var_v1_5 = 0;
            if (arg0->unk829 != 0) {
                var_v1_5 = arg0->unk7AC < 0x640;
            }
            if (var_v1_5 != 0) {
                if (var_s3 != 0) {
                    var_s3 = var_s3 >> 2;
                    if ((var_s3 == 0) && (var_s4 != NULL) && (var_s4->unk7C0 >= 0xD0)) {
                        var_s3 = 1;
                    }
                }
            } else {
                var_s3 = 0;
            }
        }
        if (arg0->unk19E != 0) {
            if (arg0->unk196 != 0) {
                var_s3 = var_s3 >> 1;
            }
            arg0->unk10C = (s32) (arg0->unk10C - var_s3);
            var_v1_6 = 0;
            if (arg0->unk87 != 0) {
                var_v1_6 = arg0->unk82F == 0;
            }
            if (var_v1_6 != 0) {
                arg0->unk818 = (s32) (arg0->unk818 + var_s3);
                if (arg0->unk818 >= 0x10) {
                    func_80147778(arg0);
                }
            }
            if (func_8013A06C() != 0) {
                if ((func_8016BDA8(arg0->unk7D0) == 0) && (arg3 != 0x1E) && (arg0->unk10C <= 0)) {
                    arg0->unk10C = 1;
                }
                if ((var_s4 != NULL) && (var_s4 != arg0)) {
                    func_80149444(var_s4, var_s3);
                }
            }
            if (arg0->unk829 != 0) {
                temp_s0 = func_80133AE0(arg0->unk7C0, arg0->unk78);
                temp_v1 = rand() & 7;
                switch (temp_v1) {
                case 0:
                    var_a0_3 = arg0 + 0x1E4;
                    var_a1 = arg0 + 0x244;
                    var_a2 = 3;
                    var_a3 = 0x10;
                    break;
                case 1:
                    var_a0_3 = arg0 + 0x1E4;
                    var_a1 = arg0 + 0x244;
                    var_a2 = 3;
                    var_a3 = 0x11;
                    break;
                case 2:
                    var_a0_3 = arg0 + 0x1E4;
                    var_a1 = arg0 + 0x244;
                    var_a2 = 2;
                    var_a3 = 0x12;
                    break;
                case 3:
                    var_a0_3 = arg0 + 0x1E4;
                    var_a1 = arg0 + 0x244;
                    var_a2 = 3;
                    var_a3 = 0x13;
                    break;
                case 4:
                    var_a0_3 = arg0 + 0x1E4;
                    var_a1 = arg0 + 0x244;
                    var_a2 = 3;
                    var_a3 = 0x1B;
                    break;
                case 5:
                    var_a0_3 = arg0 + 0x1E4;
                    var_a1 = arg0 + 0x244;
                    var_a2 = 1;
                    var_a3 = 0x1C;
                    break;
                case 6:
                    var_a0_3 = arg0 + 0x1E4;
                    var_a1 = arg0 + 0x244;
                    var_a2 = 2;
                    var_a3 = 0x1D;
                    break;
                default:
                    var_a0_3 = arg0 + 0x1E4;
                    var_a1 = arg0 + 0x244;
                    var_a2 = 3;
                    var_a3 = 0x1E;
                    break;
                }
                func_8011BC6C(var_a0_3, var_a1, var_a2, var_a3, temp_s0, 0);
            }
            var_v1_7 = 0;
            if (arg0->unk10C <= 0) {
                var_v1_7 = arg0->unk8C == 0;
            }
            if (var_v1_7 != 0) {
                arg0->unk8C = 1U;
                arg0->unk542 = 0;
                var_a0_4 = 0;
                if (D_801C34EC->unk123F8 != 0) {
                    D_801C34EC->unk12408 = arg0;
                    var_a0_4 = (u32) D_801C34EC->unk12408 > 0U;
                }
                if (var_a0_4 != 0) {
                    D_801C34EC->unk123F8 = 0U;
                    D_801C34EC->unk12408 = NULL;
                }
                if (arg0->unkA3 == 1) {
                    var_a0_5 = 0;
loop_89:
                    if (var_a0_5 < 2) {
                        temp_v1_2 = D_801C34EC + ((var_a0_5 * 0x1C) + 0x12380);
                        if (temp_v1_2->unk18 == arg0) {
                            temp_v1_2->unk18 = 0;
                            temp_v1_2->unk16 = 0;
                        }
                        var_a0_5 += 1;
                        goto loop_89;
                    }
                }
                arg0->unk1A2 = 0;
                D_801C34EC->unk1275C = 0xB4;
                func_80144BC8(arg0, 0);
                if (arg0->unk7B8 == 1) {
                    func_8012EEE8(arg0, 0, 0, 0);
                    var_a1_2 = (rand() & 7) | 0x40;
                    goto block_104;
                }
                func_8010B62C(D_801C34EC + 0x6220, ((s32) arg0->unk7C0 >> 4) + 0x47, 0);
                func_801214D8(D_801C34EC, arg0->unk7D0);
                func_8010B62C(D_801C34EC + 0x6220, D_801C34EC->unk12754 - 1, 1);
                var_a1_3 = 0;
                if ((D_801C34EC->unk12688 == 0xA) && ((D_801C34EC->unk7D8 == 1) || (D_801C34EC->unk7D8 == 3))) {
                    var_a1_3 = 1;
                }
                if ((var_a1_3 != 0) && (var_s4 != NULL) && (var_s4->unk7B8 == 1)) {
                    sp28 = D_800F4308.unk0;
                    sp2C = D_800F4308.unk4;
                    sp30 = D_800F4308.unk8;
                    mathMulTransVec(var_s4->unk738 + 0x28, (VECTOR *) &sp28, &sp38);
                    temp_s2 = var_s4 + 0x1E4;
                    func_80124FC8(temp_s2, &sp38, &sp28);
                    func_801544FC(D_801C34EC + 0x496C, &sp28, temp_s2);
                    var_s4->unk7DC = (s32) (var_s4->unk7DC + 0x9C4);
                    func_8013978C(var_s4->unk7D0, 0x9C4);
                    var_a1_2 = 0x5B;
block_104:
                    func_8010B62C(D_801C34EC + 0x6220, var_a1_2, 0);
                }
            }
        }
    }
}
