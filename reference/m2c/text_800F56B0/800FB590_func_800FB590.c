/* m2c reference for func_800FB590 @ 800FB590 (1166 words). Generated; not compiled or validated. */
? func_800F7E84(void *);                            /* extern */
? func_800F7EA8(void *);                            /* extern */
? func_800F810C(void *);                            /* extern */
? func_800F81F8(void *);                            /* extern */
? func_800F82AC(void *);                            /* extern */
s32 func_800FB0A0(void *);                          /* extern */
s32 func_800FC7C8(void *);                          /* extern */
? func_800FC8A4(void *);                            /* extern */
? func_800FF164(s32 *, s16, s16, void *);           /* extern */
s32 func_800FF594(s32 *, s32 *);                    /* extern */
? func_800FF9C8(void *);                            /* extern */
? func_800FFB58(void *, s16);                       /* extern */
s32 func_80100228(void *, s32, s16, s32);           /* extern */
? func_80124FC8(s32 *, s32, s32 *);                 /* extern */
? func_80125050(void *, s32 *, s32 *);              /* extern */
s32 func_801250C8(s32 *, void *);                   /* extern */
? func_801250FC(s32 *, s32 *, u16 *);               /* extern */
s32 func_8012E738(s32 *);                           /* extern */
? func_80144FF8(void *, s32);                       /* extern */
? func_80147A6C(void *, ?);                         /* extern */
? func_80147DD0(void *);                            /* extern */
? func_80148A00(void *, ?, s32);                    /* extern */
s32 func_8015A62C(s32, s32);                        /* extern */
? func_8016408C(s32 *);                             /* extern */
static void *D_801C34EC = NULL;

s32 func_800FB590(void *arg0) {
    u16 sp10;
    s32 sp20;
    s32 sp30;
    s32 sp34;
    s32 sp38;
    s32 sp40;
    s32 *temp_a1;
    s32 *temp_s1;
    s32 temp_a0_2;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s3;
    s32 temp_v0;
    s32 temp_v1;
    s32 var_a0;
    s32 var_a0_12;
    s32 var_a0_3;
    s32 var_a0_4;
    s32 var_a0_5;
    s32 var_a0_7;
    s32 var_a1;
    s32 var_a1_2;
    s32 var_a2;
    s32 var_a2_2;
    s32 var_a3;
    s32 var_s1;
    s32 var_s1_2;
    s32 var_s3;
    s32 var_s4;
    s32 var_s5;
    s32 var_s6;
    s32 var_t0;
    s32 var_t1;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v0_4;
    s32 var_v0_5;
    s32 var_v0_6;
    s32 var_v1;
    s32 var_v1_10;
    s32 var_v1_11;
    s32 var_v1_12;
    s32 var_v1_13;
    s32 var_v1_2;
    s32 var_v1_3;
    s32 var_v1_4;
    s32 var_v1_5;
    s32 var_v1_6;
    s32 var_v1_7;
    s32 var_v1_8;
    void *temp_a0;
    void *var_a0_10;
    void *var_a0_11;
    void *var_a0_2;
    void *var_a0_6;
    void *var_a0_8;
    void *var_a0_9;
    void *var_v1_9;

    var_s6 = 0;
    var_s5 = 1;
    if ((arg0->unk58 == 0x10) && (arg0->unk788 < 0x640)) {
        arg0->unk8 = 1;
        arg0->unk58 = 2;
        arg0->unk780 = 0;
        arg0->unk8B0 = 0;
        arg0->unk34 = (s32 *) (arg0->unk40 + 0x1C);
        arg0->unk64 = -1;
    }
    var_s4 = (s32) (arg0->unk75C * arg0->unk7A4) / (s32) arg0->unkD0;
    var_v0_2 = var_s4 < 0xA0;
    if (arg0->unk7A4 < arg0->unkD0) {
        var_s4 = (s32) (var_s4 * arg0->unk7A4) / (s32) arg0->unkD0;
        var_v0_2 = var_s4 < 0xA0;
    }
    if (var_v0_2 != 0) {
        var_s4 = 0xA0;
    }
    if (arg0->unk941 != 0) {
        if ((arg0->unk71 == 0) && (arg0->unk6F != 0)) {
            arg0->unk822 = 1U;
            arg0->unk930 = 1U;
        }
        arg0->unk8EC = (s32) (arg0->unk8EC - arg0->unk7D4);
        var_v1 = 0;
        if ((arg0->unk8EC < 0) || (arg0->unk822 != 0)) {
            var_v1 = 1;
        }
        if (var_v1 != 0) {
            arg0->unk8EC = 0;
            arg0->unk941 = 0U;
        }
    }
    var_a0 = 0;
    temp_s3 = func_801250C8(arg0->unk34, arg0 + 0x1E4);
    if ((arg0->unk821 != 0) || (arg0->unk822 != 0) || (arg0->unk824 != 0) || (arg0->unk825 != 0) || (arg0->unk827 != 0) || (arg0->unk826 != 0) || (arg0->unk82C != 0) || (arg0->unk828 != 0)) {
        var_a0 = 1;
    }
    if (var_a0 != 0) {
        arg0->unk6D = 0U;
        var_s4 = arg0->unk18;
        arg0->unk38 = (s32 *) arg0->unk34;
    } else if ((u32) (arg0->unk58 - 7) < 3U) {
        temp_s1 = arg0 + 0x1E4;
        temp_s0 = func_800FF594(arg0->unk44, arg0 + 0x72C);
        if (temp_s0 == func_800FF594(arg0->unk44, temp_s1)) {
            var_v1_2 = 0;
            if (temp_s3 < arg0->unk18) {
                var_v1_2 = arg0->unk6F != 0;
            }
            if (var_v1_2 != 0) {
                func_801250FC(temp_s1, arg0->unk34, &sp10);
                arg0->unk20 = sp18;
                arg0->unk22 = sp10;
                arg0->unk18 = temp_s3;
                arg0->unk6D = 0U;
                var_s4 = arg0->unk18;
                arg0->unk38 = (s32 *) arg0->unk34;
                var_s6 = 1;
                if (arg0->unk829 != 0) {
                    if (arg0->unk69 == 0) {
                        func_800FC8A4(arg0);
                    }
                } else {
                    switch (arg0->unk58) {          /* irregular */
                    case 7:
                        if (func_8012E738(arg0->unk34) == 0) {
                            func_800F810C(arg0);
                        }
                        break;
                    case 9:
                        if (func_8012E738(arg0->unk34) == 0) {
                            func_800F81F8(arg0);
                            arg0->unk58 = 0;
                        }
                        break;
                    case 8:
                        if (arg0->unk829 == 0) {
                            func_800F82AC(arg0);
                        }
                        break;
                    }
                    arg0->unk58 = 0;
                }
            }
        }
    }
    var_s3 = arg0->unk18 * 2;
    if (arg0->unk18 < var_s4) {
        if (arg0->unk68 == 0) {
            var_a0_2 = NULL;
            if (arg0 != NULL) {
                var_a0_2 = arg0 + 4;
            }
            func_800FFB58(var_a0_2, -1);
            func_80147DD0(arg0);
            arg0->unkAA = 1U;
        } else {
            var_v1_3 = 0;
            if (arg0->unk71 != 0) {
                var_v1_3 = arg0->unk87 == 0;
            }
            if (var_v1_3 != 0) {
                var_a0_3 = 0;
                if ((arg0->unk6D != 0) || (arg0->unk18 < 0xA0) || (arg0->unk1EC < arg0->unk4C)) {
                    var_a0_3 = 1;
                }
                var_a2 = 0;
                if (var_a0_3 != 0) {
                    temp_a1 = arg0->unk44;
                    if ((arg0->unk71 == 2) || ((*temp_a1 + ((s32) (arg0->unk5E << 0x10) >> 0xB))->unk1D != (*temp_a1 + ((s32) (arg0->unk60 << 0x10) >> 0xB))->unk1D)) {
                        var_a2 = 1;
                    }
                    if (var_a2 != 0) {
                        func_80148A00(arg0, 1, var_a2);
                        var_s5 = 0;
                        arg0->unk81 = 1U;
                    } else {
                        goto block_63;
                    }
                    goto block_64;
                }
            } else {
block_63:
                var_s5 = 0;
block_64:
                arg0->unk77C = 0x12C;
            }
        }
    } else if (arg0->unk6D == 0) {
        if (var_s6 != 0) {
            var_s1 = arg0->unkD0;
            var_s3 = arg0->unk18 * 2;
            goto block_138;
        }
        if (arg0->unk824 != 0) {
            if (arg0->unk58 != 0xB) {
                func_800F7E84(arg0);
            }
            var_s3 = arg0->unk790;
            var_s1 = arg0->unkD0 - ((s32) arg0->unkD0 >> 2);
            goto block_138;
        }
        if (arg0->unk825 != 0) {
            if (arg0->unk58 != 0xC) {
                func_800F7E84(arg0);
            }
            var_s3 = arg0->unk794;
            var_s1 = 0;
            goto block_138;
        }
        if (arg0->unk826 != 0) {
            if (arg0->unk58 != 8) {
                func_800F7E84(arg0);
            }
            var_s3 = arg0->unk798;
            var_s1 = 0;
            goto block_138;
        }
        if (arg0->unk827 != 0) {
            if (arg0->unk58 != 0xA) {
                func_800F7E84(arg0);
            }
            var_s3 = arg0->unk79C;
            var_s1 = 0;
            goto block_138;
        }
        if (arg0->unk828 != 0) {
            if (arg0->unk58 != 1) {
                func_800F7E84(arg0);
            }
            var_s3 = arg0->unk7A0;
            var_s1 = 0;
            goto block_138;
        }
        if (arg0->unk82C != 0) {
            if (arg0->unk8D != 0) {
                func_80147A6C(arg0, 0x960);
                func_80147DD0(arg0);
                arg0->unk82C = 0U;
            } else if (arg0->unk788 < 0x640) {
                arg0->unk86 = 0;
            }
            var_s3 = arg0->unk18;
            var_s1 = 0;
            goto block_138;
        }
        var_v1_4 = 0;
        if ((arg0->unk948 != 0) && (arg0->unk6F != 0) && (arg0->unk78C < 0x7D0)) {
            var_v1_4 = arg0->unk58 >= 0x11;
        }
        var_s1 = 0;
        if (var_v1_4 != 0) {
            var_s3 = (s32) arg0->unk78C >> 1;
            if (arg0->unk78C < 0x4B0) {
                var_s3 = 0xF0;
            }
            var_v1_5 = 0;
            if (arg0->unk81 == 0) {
                var_v1_5 = arg0->unk87 == 0;
            }
            var_t1 = 0;
            if (var_v1_5 != 0) {
                var_v0_3 = arg0->unk86C;
                if (var_v0_3 < 0) {
                    var_v0_3 = -var_v0_3;
                }
                if (var_v0_3 < 0x4F) {
                    if (arg0->unk78C < 0x230) {
                        func_80148A00(arg0, 1);
                        var_s5 = 0;
                        arg0->unk81 = 1U;
                        arg0->unk77C = 0x12C;
                    }
                    var_v1_6 = 0;
                    if (arg0->unk850 != NULL) {
                        var_v1_6 = arg0->unk850->unk87 == 0;
                    }
                    temp_a0 = arg0 + 0x264;
                    if (var_v1_6 != 0) {
                        var_t1 = 0;
                        if ((arg0->unk8A8 < temp_a0->unk20) && (temp_a0->unk28 >= 0x14E)) {
                            temp_a0->unk42 = 0x35;
                            arg0->unkB8 = 1;
                            var_t1 = 0;
                        }
                    } else {
                        goto block_138;
                    }
                }
            }
        } else if (arg0->unk822 != 0) {
            if (arg0->unk58 < 0xD) {
                arg0->unk822 = 0U;
            }
            if (arg0->unk930 != 0) {
                var_s3 = arg0->unk78C;
                var_s1 = arg0->unkD0;
            } else if (arg0->unk941 != 0) {
                var_s1 = 0;
                var_s3 = arg0->unk78C - arg0->unk860;
            } else {
                var_s3 = arg0->unk78C - arg0->unk860;
                var_s1 = arg0->unkD0 * 2;
            }
            var_a0_4 = 0;
            if ((arg0->unk85C < arg0->unk78C) || (arg0->unk6F == 0)) {
                var_a0_4 = 1;
            }
            var_t1 = 0;
            if (var_a0_4 != 0) {
                temp_s0_2 = func_800FF594(arg0->unk44, arg0 + 0x1E4);
                var_a1 = 0;
                temp_a0_2 = func_800FF594(arg0->unk44, arg0->unk34);
                if (((arg0->unk85C * 2) < arg0->unk78C) || ((temp_s0_2 != temp_a0_2) && ((s16) (arg0->unk44[temp_s0_2].unk8 + (temp_a0_2 * 2))->unk14 != -1))) {
                    var_a1 = 1;
                }
                if (var_a1 != 0) {
                    func_80147A6C(arg0, 0x960);
                    func_80147DD0(arg0);
                    func_800F7EA8(arg0);
                    var_t1 = 0;
                } else {
                    goto block_138;
                }
            }
        } else {
            if (arg0->unk69 == 0) {
                func_800FC8A4(arg0);
            }
            var_s3 = 0x1F40;
            if (arg0->unk821 != 0) {
                var_s1 = arg0->unkD0;
                var_t1 = 0;
            } else {
                var_s1 = arg0->unk760;
                var_s3 = arg0->unk18 - var_s4;
block_138:
                var_t1 = 0;
            }
        }
        var_t0 = 0;
        if ((var_s1 != 0) || (var_s3 >= 0x28)) {
            var_a0_5 = var_s1;
            if (arg0->unk20C < var_s1) {
                goto block_142;
            }
            var_a2_2 = 0;
            var_a3 = 0;
            var_a1_2 = 0;
loop_144:
            var_a0_5 += arg0->unkEC;
            var_a2_2 += var_a0_5 >> 6;
            if ((arg0->unk20C * 2) < var_a0_5) {
                var_a3 = 1;
            }
            if (((arg0->unk20C + ((s32) arg0->unkD0 >> 1)) >= var_a0_5) && ((arg0->unk20C * 2) >= var_a0_5)) {
                if (var_s3 < var_a2_2) {
                    if (var_a3 == 0) {
                        goto block_150;
                    }
                } else {
                    var_a1_2 += 1;
                    if (var_a1_2 < 0x63) {
                        if (var_a1_2 < 0x64) {
                            goto loop_144;
                        }
                    } else {
                        goto block_142;
                    }
                }
            } else {
block_142:
                var_t0 = 1;
            }
        } else {
block_150:
            var_t1 = 1;
        }
        var_v1_7 = 0;
        if (arg0->unk81 != 0) {
            var_v1_7 = arg0->unk83 != 0;
        }
        if (var_v1_7 != 0) {
            arg0->unkAC = 1U;
        } else if (var_t0 != 0) {
            if (func_800FC7C8(arg0) == 0) {
                arg0->unkAA = 1U;
            }
            if (arg0->unk938 != 0) {
                arg0->unkAC = 1U;
            }
            if (arg0->unkAC != 0) {
                var_v1_8 = arg0->unk21C;
                if (var_v1_8 < 0) {
                    var_v1_8 = -var_v1_8;
                }
                if (((s32) arg0->unkE0 >> 1) < var_v1_8) {
                    arg0->unkAC = 0U;
                }
            }
        } else if (var_t1 != 0) {
            if (arg0->unk68 == 0) {
                var_a0_6 = NULL;
                if (arg0 != NULL) {
                    var_a0_6 = arg0 + 4;
                }
                func_800FFB58(var_a0_6, -1);
                func_80147DD0(arg0);
            } else {
                goto block_172;
            }
        }
    } else {
block_172:
        if (arg0->unk822 == 0) {
            arg0->unkAD = 1;
        }
    }
    temp_v1 = arg0->unk8;
    if ((temp_v1 == 1) && (arg0->unkAA != 0) && (arg0->unk78C < 0xFA0) && (arg0->unk938 != 0)) {
        arg0->unkAC = (u8) temp_v1;
    }
    if (arg0->unk82C != 0) {
        var_a0_7 = 0;
        if ((s16) arg0->unk5C != 0x77) {
            var_a0_7 = (u32) ((s16) arg0->unk5C ^ 0x7D) > 0U;
        }
        if (var_a0_7 != 0) {
            arg0->unk82C = 0U;
        }
    }
    if (arg0->unk821 != 0) {
        var_a0_8 = arg0 + 0x1E4;
        if ((s16) arg0->unk506 < 0xB4) {
            arg0->unk821 = 0U;
            var_a0_8 = arg0 + 0x1E4;
        }
        func_80125050(var_a0_8, arg0 + 0x72C, &sp20);
        sp40 = func_8015A62C(sp20, sp24);
    } else if (arg0->unk825 != 0) {
        if (var_s3 < 0x28) {
            var_v0_4 = arg0->unk81C << 0x10;
            goto block_258;
        }
        func_80125050(arg0 + 0x1E4, arg0->unk34, &sp20);
        sp40 = func_8015A62C(sp20, sp24);
    } else if (arg0->unk826 != 0) {
        if (var_s3 < 0x28) {
            sp40 = arg0->unk1F8;
        } else {
            func_80125050(arg0 + 0x1E4, arg0->unk34, &sp20);
            sp40 = func_8015A62C(sp20, sp24);
        }
    } else if (arg0->unk828 != 0) {
        if (var_s3 < 0x28) {
            arg0->unk77C = 0x1A4;
            arg0->unk874 = 0;
            arg0->unk780 = (s32) (arg0->unk784 - 0x12C);
            sp40 = arg0->unk86C + arg0->unk1F8;
            if (arg0->unk78C < 0x960) {
                arg0->unk8 = 3;
                arg0->unk58 = 0x12;
                var_v1_9 = NULL;
                arg0->unk34 = (s32 *) (arg0->unk40 + 0x1C);
                if (arg0 != NULL) {
                    var_v1_9 = arg0 + 4;
                }
                var_v1_9->unk6C = 1;
                func_800F7EA8(arg0);
                var_a0_9 = NULL;
                sp40 = (s32) (s16) arg0->unk24;
                if (arg0 != NULL) {
                    var_a0_9 = arg0 + 4;
                }
                func_800FF9C8(var_a0_9);
            } else if (arg0->unk78C < 0xFA0) {
                temp_v0 = func_800FF594(arg0->unk44, arg0 + 0x1E4);
                var_a0_10 = NULL;
                if (arg0 != NULL) {
                    var_a0_10 = arg0 + 4;
                }
                if (func_80100228(var_a0_10, arg0->unk40 + 0x1C, (s16) arg0->unk5C, temp_v0) != (s16) arg0->unk60) {
                    var_a0_11 = NULL;
                    if (arg0 != NULL) {
                        var_a0_11 = arg0 + 4;
                    }
                    func_800FFB58(var_a0_11, (s16) arg0->unk60);
                    func_800FF164(arg0->unk44, (s16) arg0->unk5C, (s16) arg0->unk60, arg0 + 0xC);
                }
                var_v0_4 = arg0->unk24 << 0x10;
                goto block_258;
            }
        } else {
            func_80125050(arg0 + 0x1E4, arg0->unk34, &sp20);
            sp40 = func_8015A62C(sp20, sp24);
        }
    } else if (arg0->unk82C != 0) {
        if (var_s3 < 0x28) {
            sp40 = arg0->unk1F8;
        } else {
            goto block_257;
        }
    } else if (arg0->unk827 != 0) {
        var_v1_10 = 0;
        if (D_801C34EC->unk123F8 != 0) {
            var_v1_10 = D_801C34EC->unk12408 == (s32) arg0;
        }
        if (var_v1_10 != 0) {
            arg0->unk21C = 0;
            sp40 = arg0->unk1F8;
            arg0->unkAA = 0U;
            arg0->unkAD = 1;
        } else {
            func_80125050(arg0 + 0x1E4, arg0->unk34, &sp20);
            sp40 = func_8015A62C(sp20, sp24);
            if ((arg0->unkAA == 0) && (((s32) arg0->unk7A4 >> 6) < 2)) {
                arg0->unkAA = 1U;
                arg0->unkAD = 0;
            }
        }
    } else if (arg0->unk824 != 0) {
        func_80125050(arg0 + 0x1E4, arg0->unk34, &sp20);
        sp40 = func_8015A62C(sp20, sp24);
    } else if (arg0->unk822 != 0) {
        var_a0_12 = 0;
        if ((arg0->unk930 != 0) && ((arg0->unk7C0 == 0x50) || ((s16) arg0->unk508 >= 0x12D))) {
            var_a0_12 = 1;
        }
        if (var_a0_12 != 0) {
            var_v0_5 = arg0->unk86C + arg0->unk1F8;
            goto block_259;
        }
        if (arg0->unk823 != 0) {
            if (func_800FB0A0(arg0) != 0) {
                var_s5 = 0;
            } else {
                var_v0_6 = 0x320;
                if (arg0->unk868 <= 0) {
                    var_v0_6 = -0x320;
                }
                sp30 = var_v0_6;
                sp34 = 0x640;
                sp38 = 0;
                mathMulTransVec(arg0->unk40 + 0x28, (VECTOR *) &sp30, (VECTOR *) &sp20);
                func_80124FC8(&sp20, arg0->unk40 + 0x1C, &sp30);
                func_80125050(arg0 + 0x1E4, &sp30, &sp20);
                var_s1_2 = 0;
                sp40 = func_8015A62C(sp20, sp24);
                if ((func_801250C8(&sp20, NULL) < 0xA0) || (arg0->unk78C >= 0x3C1) || ((s16) arg0->unk508 >= 0x1A5)) {
                    var_s1_2 = 1;
                }
                if (var_s1_2 != 0) {
                    arg0->unk823 = 0U;
                }
            }
        } else {
            var_v1_11 = arg0->unk86C;
            if (var_v1_11 < 0) {
                var_v1_11 = -var_v1_11;
            }
            sp40 = arg0->unk86C + arg0->unk1F8;
            if (var_v1_11 >= 0x2AB) {
                arg0->unk84 = 1;
            }
            var_v1_12 = 0;
            if ((arg0->unk950 == 0) && ((s16) arg0->unk508 < 0x3C)) {
                var_v1_12 = arg0->unk78C < 0x190;
            }
            if (var_v1_12 != 0) {
                arg0->unk823 = 1U;
            }
            if (arg0->unk78C < 0x4B0) {
                var_v1_13 = 0x238 - ((arg0->unk78C * 0x238) / 1200);
                if (arg0->unk868 < 0) {
                    var_v1_13 = -var_v1_13;
                }
                var_v0_5 = sp40 + var_v1_13;
                goto block_259;
            }
        }
    } else {
block_257:
        var_v0_4 = arg0->unk20 << 0x10;
block_258:
        var_v0_5 = var_v0_4 >> 0x10;
block_259:
        sp40 = var_v0_5;
    }
    func_8016408C(&sp40);
    func_80144FF8(arg0, sp40);
    if (!(var_s5 & 0xFF) || (var_v0 = var_s5, (arg0->unk934 != 0))) {
        arg0->unk874 = 0;
        arg0->unk933 = 1;
        var_v0 = 0;
    }
    return var_v0;
}
