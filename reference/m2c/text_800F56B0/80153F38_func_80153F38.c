/* m2c reference for func_80153F38 @ 80153F38 (360 words). Generated; not compiled or validated. */
? func_8011BC6C(s32, ?, ?, ?, s32, s32);            /* extern */
void *func_80124CBC(s32);                           /* extern */
s32 func_80125094(s32, s32);                        /* extern */
? func_8012A154(s32, ?, s32, ?, s32, s32);          /* extern */
? func_8013BDCC(void *, ?, ?);                      /* extern */
void *func_80140008(?);                             /* extern */
? func_80148A00(void *, ?);                         /* extern */
? func_80153DC8(s32, void *);                       /* extern */
? func_801544FC(s32, s32, s32);                     /* extern */
? func_801548C8(s32, void *);                       /* extern */
s32 func_80178A1C();                                /* extern */
extern ? D_801C3100;
extern ? D_801C31CC;
static s32 D_801C34EC = 0;
static s32 D_801C34F0 = 0;
static void *D_801C34F4 = NULL;
static s32 D_801C360C[2] = { 0, 0 };

void func_80153F38(s32 arg0) {
    s32 sp18;
    s32 temp_s0_2;
    s32 var_a0;
    s32 var_s7;
    s32 var_v1;
    s32 var_v1_2;
    void **temp_s4;
    void *temp_s0;
    void *temp_s1;
    void *temp_s3;
    void *temp_v0;
    void *temp_v1;
    void *temp_v1_2;
    void *temp_v1_3;
    void *temp_v1_4;
    void *var_s2;

    sp18 = 3;
    var_s2 = func_80140008(0);
    var_s7 = 0;
loop_1:
    if (var_s7 < 5) {
        if (var_s2->unkAF != 0) {
            temp_s1 = var_s2->unk0;
            temp_s0 = var_s2->unk8;
            temp_s3 = var_s2->unk4;
            temp_s4 = var_s2->unkC;
            var_v1 = 0;
            if ((var_s2->unkAF != 0) && (temp_s4 != NULL)) {
                var_v1 = func_80125094(temp_s3 + 0x1C, temp_s4 + 0x1C) >= 0x641;
            }
            if (var_v1 != 0) {
                func_80153DC8(arg0, var_s2);
            }
            if (temp_s1->unk8C != 0) {
                func_80153DC8(arg0, var_s2);
            }
            if (var_s2->unkAF == 9) {
                var_s2->unkAC = (u16) (var_s2->unkAC - func_80178A1C());
                if ((var_s2->unkAC << 0x10) > 0) {
                    if (temp_s0 != NULL) {
                        if (rand() & 1) {
                            func_8011BC6C(temp_s4 + 0x1C, 0, 0xF, 0x16, 0, 0);
                        }
                        var_a0 = 0;
                        if (temp_s0->unk7DC >= 0x1F4) {
                            var_a0 = ((var_s2->unkAC % 20) << 0x10) == 0;
                        }
                        if (var_a0 != 0) {
                            temp_s1->unk7DC = (s32) (temp_s1->unk7DC + 0x1F4);
                            temp_s0->unk7DC = (s32) (temp_s0->unk7DC - 0x1F4);
                            var_s2->unkAE = 1;
                            if (temp_s0->unk7DC < 0x1F4) {
                                func_80153DC8(arg0, var_s2);
                            }
                            func_801544FC(arg0, temp_s4 + 0x1C, temp_s3 + 0x1C);
                        } else if (temp_s0->unk7B8 == 2) {
                            temp_s0->unk954 = 1;
                        }
                    }
                    D_801C31CC.unk8 = 0x1A;
                    D_801C31CC.unkC = var_s7;
                    temp_v1 = temp_s3 + 0x1C;
                    D_801C3100.unk0 = (s32) temp_s3->unk1C;
                    D_801C3100.unk4 = (s32) temp_v1->unk4;
                    D_801C31CC.unk0 = &D_801C3100;
                    D_801C3100.unk8 = (s32) temp_v1->unk8;
                    D_801C34F4->unk2B0 = 1;
                    var_s7 += 1;
                    func_8013BDCC(D_801C34F4, 0, 0);
                    var_s2 += 0xB4;
                } else {
                    goto block_47;
                }
                goto loop_1;
            }
            if (var_s2->unkAF == 0x11) {
                if (temp_s1->unk87 == 0) {
                    var_s2->unkAC = (u16) (var_s2->unkAC - func_80178A1C());
                    if ((var_s2->unkAC << 0x10) > 0) {
                        D_801C31CC.unk8 = 0x3F;
                        D_801C31CC.unkC = 0x3F;
                        temp_v1_2 = temp_s3 + 0x1C;
                        D_801C3100.unk0 = (s32) temp_s3->unk1C;
                        D_801C3100.unk4 = (s32) temp_v1_2->unk4;
                        D_801C31CC.unk0 = &D_801C3100;
                        D_801C3100.unk8 = (s32) temp_v1_2->unk8;
                        D_801C34F4->unk2B4 = 1;
                        func_8013BDCC(D_801C34F4, 0, 0);
                        if (temp_s4 != NULL) {
                            if ((temp_s0 != NULL) && (temp_s0->unk89 != 0)) {
                                func_801548C8(arg0, temp_s0);
                            }
                            if (rand() & 1) {
                                func_8011BC6C(temp_s4 + 0x1C, 0, 0xF, 0x17, 0, 0);
                            }
                            if (temp_s1->unkB8 == 0) {
                                D_801C360C[temp_s1->unk78] = 1;
                            }
                            if ((temp_s1->unk7B8 == 2) && !(rand() & 7)) {
                                temp_s1->unkB8 = 1U;
                                D_801C360C[temp_s1->unk78] = 1;
                            }
                            var_v1_2 = 0;
                            if (temp_s1->unkB8 != 0) {
                                var_v1_2 = D_801C360C[temp_s1->unk78] != 0;
                            }
                            if (var_v1_2 != 0) {
                                var_s2->unkAE = 1;
                                temp_v1_3 = arg0 + temp_s1->unk78;
                                temp_v1_3->unk17FA = (u8) (temp_v1_3->unk17FA + 3);
                                if ((s8) (arg0 + temp_s1->unk78)->unk17FA >= 0x1F) {
                                    sp18 = 0;
                                }
                                D_801C31CC.unk8 = 0x3E;
                                temp_v1_4 = temp_s1 + 0x1E4;
                                D_801C31CC.unkC = (s32) temp_s1->unk78;
                                D_801C3100.unk0 = (s32) temp_s1->unk1E4;
                                D_801C3100.unk4 = (s32) temp_v1_4->unk4;
                                D_801C31CC.unk0 = &D_801C3100;
                                D_801C3100.unk8 = (s32) temp_v1_4->unk8;
                                func_8013BDCC(D_801C34F4, 0, 0);
                                if (temp_s0 != NULL) {
                                    func_80148A00(temp_s0, 3);
                                }
                                temp_s0_2 = temp_s4 + 0x1C;
                                func_8011BC6C(temp_s0_2, 0, 7, 0xE, 0, 0);
                                func_8011BC6C(temp_s0_2, 0, 0xF, 0xE, 0, 0);
                                temp_v0 = func_80124CBC(D_801C34EC);
                                temp_v0->unk14 = 0;
                                temp_v0->unkC = temp_s0_2;
                                temp_v0->unk18 = (s32) temp_s1->unk7C4;
                                temp_v0->unk10 = 0;
                                temp_v0->unk20 = 0;
                                temp_v0->unk21 = 0;
                                func_8012A154(D_801C34F0, 0, sp18, 0x1D, (s32) (*temp_s4)->unk2, 0);
                                D_801C360C[temp_s1->unk78] = 0;
                            }
                        }
                    } else {
block_47:
                        func_80153DC8(arg0, var_s2);
                    }
                    goto block_48;
                }
            } else {
                goto block_48;
            }
        } else {
block_48:
            var_s7 += 1;
            var_s2 += 0xB4;
            goto loop_1;
        }
    }
}
