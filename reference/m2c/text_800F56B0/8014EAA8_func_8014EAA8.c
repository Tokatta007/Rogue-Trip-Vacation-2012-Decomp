/* m2c reference for func_8014EAA8 @ 8014EAA8 (453 words). Generated; not compiled or validated. */
? func_80112368(s32);                               /* extern */
? func_8011B994(s32);                               /* extern */
? func_8011BC6C(? *, ?, ?, ?, s32, s32);            /* extern */
? func_8011D704(? *);                               /* extern */
s32 func_801233B4(void *, s32);                     /* extern */
void *func_801244FC(void *, s32);                   /* extern */
void *func_80124CBC(void *);                        /* extern */
s32 func_801250C8(s32, s32 *);                      /* extern */
? func_801253C8(? *, s32);                          /* extern */
? func_8012A154(void *, ? *, s16, ?, s32, s32);     /* extern */
s32 func_8013C918(s32, s32);                        /* extern */
? func_8013CAE0(s32, s32, s32);                     /* extern */
? func_80148A00(void *, ?);                         /* extern */
? func_8014D250(s32, void *);                       /* extern */
? func_801547DC(s32, void *);                       /* extern */
? func_8016408C(void *);                            /* extern */
? func_801F7728(void *);                            /* extern */
static void *D_801C34EC = NULL;
static void *D_801C34F0 = NULL;
static s32 D_801C34F4 = 0;
static ? D_801C35DC;                                /* unable to generate initializer: unknown type */
static ? D_800F43D4;                                /* unable to generate initializer: unknown type; const */

void func_8014EAA8(s32 arg0, void *arg1) {
    ? sp18;
    s32 sp20;
    s32 sp28;
    s32 sp2C;
    s32 sp30;
    ? var_s7;
    s32 temp_v0;
    s32 var_a0;
    s32 var_s1;
    s32 var_s3;
    s32 var_v1;
    s32 var_v1_2;
    s32 var_v1_3;
    u16 var_v0;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_4;
    void *temp_v1;
    void *var_s0;

    func_80112368(arg1->unkC);
    func_80112368(arg1->unk10);
    arg1->unk10 = 0;
    var_s7 = 3;
    arg1->unkC = (s32) arg1->unk10;
    var_s0 = NULL;
    func_8013CAE0(D_801C34F4, func_8013C918(D_801C34F4, arg1->unk20), arg1->unk14 + 0x1C);
    func_801253C8(&sp18, arg1->unk14 + 0x1C);
    if (arg1->unk20 == 6) {
        arg1->unk4A = (u16) (0x3E8 << arg1->unk61);
        if (arg1->unk61 != 0) {
            var_s7 = 4;
            func_8013CAE0(D_801C34F4, 0x11, 0);
            sp20 += 0x20;
            func_8011D704(&sp18);
            if (D_801C34EC->unk12688 == 3) {
                sp28 = D_800F43D4.unk0;
                sp2C = D_800F43D4.unk4;
                sp30 = D_800F43D4.unk8;
                if ((func_801250C8(arg1->unk14 + 0x1C, &sp28) < 0x320) && (arg1->unk1C->unk1EC >= 0x3E9)) {
                    func_801F7728(D_801C34EC + 0x11D28);
                }
            }
        } else {
            sp20 += 0x50;
            func_8011BC6C(&sp18, 0, 5, 7, 0, 0);
            func_8011BC6C(&sp18, 0, 0x1E, 0xE, 0, 0);
            func_8011BC6C(&sp18, 0, 0x32, 0x49, 0, 0);
        }
    }
    if (arg1->unk20 == 0xE) {
        sp20 += 0x28;
        func_8011BC6C(&sp18, 0, 5, 7, 0, 0);
        func_8011BC6C(&sp18, 0, 0xF, 0xE, 0, 0);
        func_8011BC6C(&sp18, 0, 0x1E, 0x49, 0, 0);
    }
    if (arg1->unk20 == 7) {
        arg1->unk4A = (u16) (arg1->unk4A * 2);
        arg1->unk48 = (u16) ((s32) (arg1->unk48 << 0x10) >> 0x11);
    }
    temp_v1 = D_801C34F0;
    var_s3 = 2;
    if (temp_v1->unk7D0 > 2) {
        var_s1 = 2 * 4;
        do {
            temp_v0 = func_801250C8(arg1->unk14 + 0x1C, **(temp_v1 + var_s1));
            if (temp_v0 < (s16) arg1->unk4A) {
                if ((D_801C34F0 + var_s1)->unk3E8 == 1) {
                    var_s0 = func_801244FC(D_801C34EC, func_801233B4(D_801C34EC, var_s3));
                    var_v1 = 0;
                    if (arg1->unk20 == 0xE) {
                        temp_v0_2 = arg1->unk1C;
                        if (temp_v0_2 != NULL) {
                            var_v1 = var_s0->unk7C4 == temp_v0_2->unk7C4;
                        }
                    }
                    var_a0 = 0;
                    if (var_v1 == 0) {
                        if (arg1->unk20 == 0xD) {
                            temp_v0_3 = arg1->unk1C;
                            if (temp_v0_3 != NULL) {
                                var_a0 = var_s0->unk7C4 == temp_v0_3->unk7C4;
                            }
                        }
                        if (var_a0 == 0) {
                            if (var_s0->unk8C == 0) {
                                var_v1_2 = 0;
                                if ((var_s0->unk88 == 0) && (var_s0->unk8B == 0)) {
                                    var_v1_2 = var_s0->unk7D == 0;
                                }
                                if (var_v1_2 != 0) {
                                    if (var_s0->unk89 != 0) {
                                        func_8011B994(var_s0->unk740);
                                        var_s0->unk74C = 0;
                                        var_s0->unk89 = 0U;
                                        func_8011BC6C(var_s0->unk738 + 0x1C, 0, 5, 7, 0, 0);
                                        func_8011BC6C(var_s0->unk738 + 0x1C, 0, 0xF, 0xE, 0, 0);
                                        func_8011BC6C(var_s0->unk738 + 0x1C, 0, 0x1E, 0x49, 0, 0);
                                    }
                                    if (arg1->unk20 != 0xE) {
                                        func_801547DC(arg0, var_s0);
                                    }
                                } else {
                                    func_8011B994(var_s0->unk740);
                                    var_s0->unk74C = 0;
                                    var_s0->unk89 = 0U;
                                }
                                var_s0->unk1FC = -0x2AA;
                                var_s0->unk20C = (s32) var_s0->unkCC;
                                var_s0->unk508 = 0;
                                var_s0->unk50A = (s16) arg1->unk1C->unk7C0;
                                var_s0->unk4FC = (s32) arg1->unk14;
                                var_s0->unk86 = 1;
                                var_s0->unk450 = (s32) ((var_s0->unk1F8 + 0xFF) - (rand() & 0x1FF));
                                func_8016408C(var_s0 + 0x450);
                                var_s0->unk537 = 1;
                                var_s0->unk50C = 0x3C;
                                func_80148A00(var_s0, var_s7);
                            }
                            goto block_35;
                        }
                    }
                } else {
block_35:
                    temp_v0_4 = func_80124CBC(D_801C34EC);
                    temp_v0_4->unk14 = 0;
                    temp_v0_4->unkC = (s32) (arg1->unk14 + 0x1C);
                    if (arg1->unk1C != NULL) {
                        temp_v0_4->unk18 = (s32) arg1->unk1C->unk7C4;
                    } else {
                        temp_v0_4->unk18 = 0;
                    }
                    if (arg1->unk20 != 0xD) {
                        arg1->unk48 = (u16) ((s32) (((s32) (((s16) arg1->unk4A - temp_v0) << 6) / (s16) arg1->unk4A) * (s16) arg1->unk48) >> 6);
                        if (arg1->unk61 != 0) {
                            var_v0 = 0xF;
                            if ((s16) arg1->unk48 < 0xF) {
                                goto block_43;
                            }
                        } else {
                            var_v0 = 0xA;
                            if ((s16) arg1->unk48 < 0xA) {
block_43:
                                arg1->unk48 = var_v0;
                            }
                        }
                    }
                    var_v1_3 = 0;
                    if (arg1->unk20 != 0xE) {
                        var_v1_3 = var_s0->unk89 != 0;
                    }
                    if (var_v1_3 != 0) {
                        arg1->unk48 = (u16) (arg1->unk48 + 0xF);
                        var_s0->unk89 = 0U;
                    }
                    temp_v0_4->unk10 = arg1;
                    temp_v0_4->unk20 = 0;
                    temp_v0_4->unk21 = 0;
                    func_8012A154(D_801C34F0, &D_801C35DC, (s16) arg1->unk48, 0x1D, var_s3, 0);
                }
            }
            var_s3 += 1;
            var_s1 = var_s3 * 4;
        } while (var_s3 < D_801C34F0->unk7D0);
    }
    arg1->unk4C = (u16) arg1->unk46;
    func_8014D250(arg0, arg1);
}
