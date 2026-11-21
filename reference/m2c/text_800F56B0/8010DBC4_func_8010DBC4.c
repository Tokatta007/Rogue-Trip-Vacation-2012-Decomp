/* m2c reference for func_8010DBC4 @ 8010DBC4 (1002 words). Generated; not compiled or validated. */
? func_8010B62C(void *, s32, ?);                    /* extern */
? func_8010F5B8(void *, s32, ?);                    /* extern */
? func_8011BC6C(s32 *, ?, ?, ?, s32, s32);          /* extern */
void *func_80124CBC(void *);                        /* extern */
? func_80124F78(? *, void *, void *);               /* extern */
? func_80124FC8(? *, VECTOR *, s32 *);              /* extern */
? func_801253F4(? *, void *);                       /* extern */
? func_801254DC(VECTOR *, ?, ?, ?);                 /* extern */
? func_801256B0(void *, s32, ? *, ? *, void *, s32); /* extern */
? func_80125DA4(void *);                            /* extern */
? func_8012A154(s32, ? *, s32, ?, s32, void *);     /* extern */
? func_8012AF9C(void *, s32, s32);                  /* extern */
s32 func_8012BD30(void *, ?);                       /* extern */
s32 func_8012C3BC(void *, s32);                     /* extern */
s32 func_8013A06C();                                /* extern */
? func_8013BDCC(s32, ?, ?, s32);                    /* extern */
? func_8013FD30(void *, ?, ?, ?);                   /* extern */
? func_80152434(void *, void *, s32, s32);          /* extern */
? func_801544FC(void *, s32 *, void *);             /* extern */
? func_8016408C(s32 *);                             /* extern */
? func_8016D6BC(s32, ?);                            /* extern */
? func_8016FD98(void *, void *, ?);                 /* extern */
s16 func_80178A1C(s32);                             /* extern */
extern ? D_801C3100;
extern ? D_801C31CC;
static void *D_801C34EC = NULL;
static s32 D_801C34F0 = 0;
static s32 D_801C34F4 = 0;
static ? D_800F314C;                                /* unable to generate initializer: unknown type; const */

void func_8010DBC4(void *arg0, VECTOR *arg1) {
    s32 sp18;
    s32 sp1C;
    s32 sp20;
    VECTOR sp28;
    ? sp38;
    ? sp48;
    ? sp50;
    s32 sp58;
    s32 sp5C;
    s32 sp60;
    s32 sp64;
    s32 sp68;
    void *sp6C;
    s32 *sp70;
    s16 temp_s7;
    s32 temp_lo;
    s32 temp_v0;
    s32 temp_v0_4;
    s32 temp_v1;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a0_3;
    s32 var_a1;
    s32 var_a2;
    s32 var_fp;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s1;
    s32 var_s4;
    s32 var_s5;
    s32 var_s5_2;
    s32 var_s5_3;
    s32 var_s6;
    s32 var_t0;
    s32 var_t1;
    s32 var_v0;
    s32 var_v0_3;
    s32 var_v0_4;
    s32 var_v0_5;
    s32 var_v1;
    s32 var_v1_2;
    s32 var_v1_3;
    s32 var_v1_4;
    u16 temp_v0_2;
    u32 var_v0_2;
    void *temp_a1;
    void *temp_a1_2;
    void *temp_s3;
    void *temp_v0_3;
    void *var_a3;
    void *var_s3;
    void *var_s3_2;

    var_fp = 0;
    sp5C = 0;
    sp60 = 0;
    sp64 = 0;
    sp18 = D_800F314C.unk0;
    sp1C = D_800F314C.unk4;
    sp20 = D_800F314C.unk8;
    arg0->unk85 = 0U;
    var_s6 = 0;
    if (arg0->unk829 != 0) {
        var_s0 = 4;
        sp68 = arg0->unk738->unk48;
    } else {
        var_s0 = 1;
        sp68 = 2;
    }
    var_s5 = var_s0;
    if (var_s5 < sp68) {
        var_t1 = (var_s5 << 5) + 0x2C8;
        do {
            var_s3 = arg0 + var_t1;
            if (var_s3->unk0 != 0) {
                if (var_s3->unkC < -0x960) {
                    var_s3->unk0 = 0;
                    var_t1 += 0x20;
                } else {
                    arg0->unk85 = 1U;
                    var_a2 = var_s0;
                    if (var_s0 < sp68) {
                        temp_v0 = var_s0 << 5;
                        var_t0 = temp_v0 + 0x2C8;
                        var_a3 = temp_v0 + arg0;
                        do {
                            if ((var_s5 != var_a2) && (temp_a1 = arg0 + var_t0, (var_a3->unk2C8 != 0))) {
                                var_a0 = 0;
                                if ((var_s3->unk4 == temp_a1->unk4) && (var_s3->unk8 == temp_a1->unk8)) {
                                    var_a0 = var_s3->unkC == temp_a1->unkC;
                                }
                                if (var_a0 != 0) {
                                    var_v1 = var_s3->unk10;
                                    var_v0 = temp_a1->unk10;
                                    if (var_v1 < 0) {
                                        var_v1 = -var_v1;
                                    }
                                    if (var_v0 < 0) {
                                        var_v0 = -var_v0;
                                    }
                                    if (var_v0 < var_v1) {
                                        temp_a1->unk0 = 0;
                                        var_t0 += 0x20;
                                    } else {
                                        var_s3->unk0 = 0;
                                        var_s3 = temp_a1;
                                        goto block_23;
                                    }
                                } else {
                                    goto block_23;
                                }
                            } else {
block_23:
                                var_t0 += 0x20;
                            }
                            var_a2 += 1;
                            var_a3 += 0x20;
                        } while (var_a2 < sp68);
                    }
                    goto block_25;
                }
            } else {
block_25:
                var_t1 += 0x20;
            }
            var_s5 += 1;
        } while (var_s5 < sp68);
    }
    if (arg0->unk19C != 0) {
        var_s5_2 = 0;
        if (var_s0 > 0) {
            var_s3_2 = arg0;
            var_s1 = (var_s0 << 5) + 0x2C8;
            do {
                var_v1_2 = 0;
                if (arg0->unk6BC != 0) {
                    var_v1_2 = var_s3_2->unk596 != 0;
                }
                if (var_v1_2 != 0) {
                    var_s1 -= 0x20;
                    var_s0 -= 1;
                    func_8016FD98(arg0 + var_s1, arg0 + 0x694, 8);
                    arg0->unk85 = 1U;
                    func_8013FD30(arg0, 3, 2, 2);
                }
                var_s5_2 += 1;
                var_s3_2 += 0x54;
            } while (var_s5_2 < var_s0);
        }
    }
    arg0->unk53A = 0;
    arg0->unk53B = 0;
    if (arg0->unk85 != 0) {
        func_801254DC(arg0 + 0x460, 0, 0, 0);
        func_801254DC(arg1, 0, 0, 0);
        var_s5_3 = var_s0;
        sp6C = arg0 + 0x1E4;
        sp70 = &sp18;
loop_37:
        temp_v1 = var_s5_3 << 5;
        if (var_s5_3 < sp68) {
            if ((arg0 + temp_v1)->unk2C8 != 0) {
                temp_s3 = arg0 + (temp_v1 + 0x2C8);
                temp_v0_2 = temp_s3->unk1E;
                temp_s7 = (s16) temp_s3->unk1C;
                if ((u32) ((s16) temp_v0_2 - 0x10) < 0x110U) {
                    arg0->unk53B = 1;
                    var_s5_3 += 1;
                } else {
                    arg0->unk53A = 1;
                    temp_v0_3 = func_80124CBC(D_801C34EC);
                    temp_v0_3->unkC = sp6C;
                    var_v0_2 = (s16) temp_v0_2 - 0x190;
                    if ((s16) temp_v0_2 >= 0x12C) {
                        var_v0_3 = var_v0_2 < 0x13U;
                        if (temp_s7 != 0) {
                            temp_v0_3->unk18 = (s32) arg0->unk7C4;
                            temp_v0_3->unk14 = 1;
                            var_v0_4 = arg0->unk23C;
                            if (var_v0_4 < 0) {
                                var_v0_4 = -var_v0_4;
                            }
                            temp_lo = (s32) (var_v0_4 * 0xA) / (s32) arg0->unkD0;
                            sp64 = temp_lo;
                            if (arg0->unk197 != 0) {
                                sp64 = temp_lo * 2;
                            }
                            if ((u32) ((s16) temp_v0_2 - 0x190) >= 0x13U) {
                                var_v0_2 = (s16) temp_v0_2 - 0x190;
                                if (sp60 == 0) {
                                    func_801253F4(&sp50, arg0 + 0x244);
                                    func_8012A154(D_801C34F0, &sp50, sp64, 1, (s32) temp_s7, arg0->unk738 + 0x1C);
                                    sp60 = 1;
                                    if (temp_s7 == arg0->unk500) {
                                        arg0->unk500 = 0;
                                    }
                                    if (arg0->unk7C0 < 0xD0) {
                                        var_v0_2 = (s16) temp_v0_2 - 0x190;
                                        if ((s16) temp_v0_2 == 0x212) {
                                            var_a0_2 = 0;
                                            if ((D_801C34EC->unk1106F == 0) && (arg0->unk90 == 0)) {
                                                arg0->unk738->unkA = 0;
                                                var_a0_2 = 0;
                                            }
                                            if (arg0->unk7C0 == 0x90) {
                                                var_a0_2 = (((func_80178A1C(0) * 0xF3C) / 1000) << 6) < arg0->unk20C;
                                            }
                                            if (var_a0_2 != 0) {
                                                func_80152434(D_801C34EC + 0x496C, arg0->unk738, (D_801C34EC + 0x10FF4)->unk13C, arg0->unk78);
                                            }
                                            goto block_60;
                                        }
                                    } else {
block_60:
                                        var_v0_2 = (s16) temp_v0_2 - 0x190;
                                    }
                                }
                                goto block_61;
                            }
                            goto block_63;
                        }
                        goto block_62;
                    }
block_61:
                    var_v0_3 = var_v0_2 < 0x13U;
block_62:
                    if (var_v0_3 != 0) {
block_63:
                        arg0->unk85 = 0U;
                        var_s4 = 2;
                        if (arg0->unk198 != 0) {
                            var_s4 = 4;
                        }
                        if ((s16) temp_v0_2 < 0x194) {
                            D_801C31CC.unk8 = 0x1E;
                            D_801C31CC.unkC = (s32) arg0->unk7C4;
                            D_801C3100.unk0 = (s32) arg0->unk1E4;
                            D_801C3100.unk4 = (s32) sp6C->unk4;
                            var_v1_3 = sp6C->unk8;
                            D_801C31CC.unk0 = &D_801C3100;
                            goto block_70;
                        }
                        if (((s16) temp_v0_2 >= 0x19A) && ((func_8012BD30(arg0 + 0x264) + var_s4) < 0x19)) {
                            D_801C31CC.unk8 = 0x1F;
                            D_801C31CC.unkC = (s32) arg0->unk7C4;
                            D_801C3100.unk0 = (s32) arg0->unk1E4;
                            D_801C3100.unk4 = (s32) sp6C->unk4;
                            var_v1_3 = sp6C->unk8;
                            D_801C31CC.unk0 = &D_801C3100;
block_70:
                            D_801C3100.unk8 = var_v1_3;
                            func_8013BDCC(D_801C34F4, 0, 0);
                        }
                        arg0->unk53A = 0;
                        if (sp5C == 0) {
                            switch ((s16) temp_v0_2) {
                            case 0x190:
                                arg0->unk7DC = (s32) (arg0->unk7DC + 0xFA);
                                var_a1 = 0xD;
                                if (arg0->unk820 != 0) {
block_101:
                                    func_8010B62C(D_801C34EC + 0x6220, var_a1, 0xA);
                                }
                                break;
                            case 0x191:
                                arg0->unk7DC = (s32) (arg0->unk7DC + 0x1F4);
                                var_a1 = 0xE;
                                if (arg0->unk820 != 0) {
                                    goto block_101;
                                }
                                break;
                            case 0x192:
                                arg0->unk7DC = (s32) (arg0->unk7DC + 0x4E2);
                                var_a1 = 0xF;
                                if (arg0->unk820 != 0) {
                                    goto block_101;
                                }
                                break;
                            case 0x193:
                                arg0->unk7DC = (s32) (arg0->unk7DC + 0x9C4);
                                var_a1 = 0x10;
                                if (arg0->unk820 != 0) {
                                    goto block_101;
                                }
                                break;
                            case 0x19A:
                                var_s6 = 1;
                                if (arg0->unk820 != 0) {
                                    var_a1 = 0x11;
                                    goto block_101;
                                }
                                break;
                            case 0x19B:
                                var_s6 = 2;
                                if (arg0->unk820 != 0) {
                                    var_a1 = 0x12;
                                    goto block_101;
                                }
                                break;
                            case 0x19C:
                                var_s6 = 3;
                                if (arg0->unk820 != 0) {
                                    var_a1 = 0x13;
                                    goto block_101;
                                }
                                break;
                            case 0x19D:
                                var_s6 = 4;
                                if (arg0->unk820 != 0) {
                                    var_a1 = 0x14;
                                    goto block_101;
                                }
                                break;
                            case 0x19E:
                                var_s6 = 5;
                                if (arg0->unk820 != 0) {
                                    var_a1 = 0x15;
                                    goto block_101;
                                }
                                break;
                            case 0x19F:
                                var_s6 = 6;
                                if (arg0->unk820 != 0) {
                                    var_a1 = 0x16;
                                    goto block_101;
                                }
                                break;
                            case 0x1A0:
                                var_s6 = 7;
                                if (arg0->unk820 != 0) {
                                    var_a1 = 0x17;
                                    goto block_101;
                                }
                                break;
                            case 0x1A1:
                                var_s6 = 8;
                                if (arg0->unk820 != 0) {
                                    var_a1 = 0x18;
                                    goto block_101;
                                }
                                break;
                            case 0x1A2:
                                arg0->unk2A4 = (u8) (arg0->unk2A4 + 1);
                                arg0->unk274 = 0x14;
                                if ((s8) arg0->unk2A4 >= 3) {
                                    arg0->unk2A4 = 2U;
                                }
                                var_a1 = 0x19;
                                if (arg0->unk820 != 0) {
                                    goto block_101;
                                }
                                break;
                            }
                            if (var_s6 != 0) {
                                if ((func_8012BD30(arg0 + 0x264, 0) + var_s4) < 0x19) {
                                    var_s0_2 = 0;
                                    if ((arg0->unk829 != 0) || (func_8013A06C() != 0)) {
                                        var_s0_2 = 1;
                                    }
                                    if (var_s0_2 != 0) {
                                        func_8012A154(D_801C34F0, NULL, sp64, 1, (s32) temp_s7, arg0->unk738 + 0x1C);
                                        func_8012AF9C(arg0 + 0x264, var_s6, var_s4);
                                    } else {
                                        var_s6 = func_8012C3BC(arg0 + 0x264, var_s4);
                                    }
                                    if (arg0->unk7B8 == 2) {
                                        arg0->unk821 = 0;
                                    }
                                } else if (arg0->unk820 != 0) {
                                    func_8010B62C(D_801C34EC + 0x6220, 0x1A, 0);
                                    func_8010B62C(D_801C34EC + 0x6220, 0x1A, 0);
                                    D_801C31CC.unk8 = 0x1D;
                                    D_801C31CC.unk14 = 0x34;
                                    D_801C31CC.unk10 = -1;
                                    func_8013BDCC(D_801C34F4, 0, 0);
                                }
                            } else {
                                func_8012A154(D_801C34F0, NULL, sp64, 1, (s32) temp_s7, arg0->unk738 + 0x1C);
                            }
                        }
                        sp5C = 1;
                        temp_s3->unk0 = 0;
                        var_s5_3 += 1;
                    } else if ((s16) temp_v0_2 == 0x460) {
                        arg0->unk85 = 0U;
                        arg0->unk542 = 1;
                        if (arg0->unk82A != 0) {
                            D_801C34EC->unk12356 = 1;
                            D_801C34EC->unk127E0 = 1;
                            sp58 = arg0->unk1F8 - (s16) D_801C34EC->unk122C8->unk18;
                            func_8016408C(&sp58);
                            var_v0_5 = sp58;
                            if (var_v0_5 < 0) {
                                var_v0_5 = -var_v0_5;
                            }
                            if (var_v0_5 < 0x200) {
                                D_801C34EC->unk122D0 = (s32) (D_801C34EC->unk122D0 + func_80178A1C());
                                func_8016D6BC(D_801C34EC->unk122CC, 1);
                                if (D_801C34EC->unk122D0 >= 0x47) {
                                    D_801C34EC->unk122D0 = 0;
                                    arg0->unk7DC = (s32) (arg0->unk7DC + D_801C34EC->unk12318);
                                    arg0->unk80C = (s32) (arg0->unk80C + 1);
                                    if (D_801C34EC->unk12357 != 0) {
                                        arg0->unk7DC = (s32) (arg0->unk7DC + 0x9C4);
                                    }
                                    mathMulTransVec(arg0->unk738 + 0x28, (VECTOR *) &sp18, &sp28);
                                    func_80124FC8(D_801C34EC->unk122C8 + 0x1C, &sp28, &sp18);
                                    func_801544FC(D_801C34EC + 0x496C, sp70, arg0 + 0x1E4);
                                    func_8010B62C(D_801C34EC + 0x6220, 0x68 - D_801C34EC->unk12320, 0);
                                    sp18 = D_801C34EC->unk122C8->unk1C;
                                    sp1C = D_801C34EC->unk122C8->unk20;
                                    sp20 = D_801C34EC->unk122C8->unk24 + 0x50;
                                    func_8011BC6C(sp70, 0, 6, 0xE, 0, 0);
                                    func_8011BC6C(sp70, 0, 0xC, 0xE, 0, 0);
                                    (D_801C34EC + (s8) D_801C34EC->unk12355)->unk12344 = 1;
                                    func_80125DA4(D_801C34EC);
                                    if (arg0->unk820 != 0) {
                                        if (rand() & 1) {
                                            D_801C31CC.unk8 = 0x32;
                                        } else {
                                            D_801C31CC.unk8 = 0x33;
                                        }
                                        temp_v0_4 = D_801C34EC->unk12794;
                                        D_801C34EC->unk12794 = (s32) (temp_v0_4 + 1);
                                        D_801C31CC.unkC = temp_v0_4;
                                        func_8013BDCC(D_801C34F4, 0, 0, temp_v0_4);
                                        (D_801C34EC + 0x6220 + (arg0->unk7CC * 4))->unk3E0 = 0x14;
                                    }
                                }
                            } else {
                                D_801C34EC->unk122D0 = 0;
                                func_8016D6BC(D_801C34EC->unk122CC, 2);
                            }
                        }
                        temp_s3->unk0 = 0;
                        arg0->unk53A = 0;
                        var_s5_3 += 1;
                    } else {
                        func_8010F5B8(arg0, var_s5_3, 3);
                        if (((u32) ((s16) temp_v0_2 - 0x12C) < 0x64U) && (temp_v0_3->unk22 == 0)) {
                            temp_s3->unk0 = 0;
                            arg0->unk20C = (s32) ((s32) arg0->unk20C >> 1);
                            var_s5_3 += 1;
                        } else {
                            var_a0_3 = 0;
                            if (((s16) temp_s3->unk1E == 0x1F5) || ((s16) temp_s3->unk1E == 0x1FB)) {
                                var_a0_3 = 1;
                            }
                            var_v1_4 = 0;
                            if (var_a0_3 == 0) {
                                if (arg0->unkF4 == 0x64) {
                                    var_v1_4 = 0x6E;
                                } else {
                                    var_v1_4 = 0xC8 - ((arg0->unkF4 * 0x5A) / 100);
                                }
                            }
                            func_801256B0(arg0 + 0x2C4, var_s5_3, &sp48, &sp38, arg0 + 0x244, var_v1_4);
                            temp_a1_2 = arg0 + 0x460;
                            arg0->unk539 = 1;
                            var_fp += 1;
                            func_80124F78(&sp48, temp_a1_2, temp_a1_2);
                            func_80124FC8(&sp38, arg1, &arg1->vx);
                            arg0->unk506 = 0;
                            goto block_143;
                        }
                    }
                }
            } else {
block_143:
                var_s5_3 += 1;
            }
            goto loop_37;
        }
        if (var_fp >= 2) {
            arg0->unk460 = (s32) ((s32) arg0->unk460 / var_fp);
            arg0->unk464 = (s32) ((s32) arg0->unk464 / var_fp);
            arg0->unk468 = (s32) ((s32) arg0->unk468 / var_fp);
            arg1->vx = (s32) arg1->vx / var_fp;
            arg1->vy = (s32) arg1->vy / var_fp;
            arg1->vz = (s32) arg1->vz / var_fp;
        }
    }
}
