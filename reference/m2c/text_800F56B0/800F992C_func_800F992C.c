/* m2c reference for func_800F992C @ 800F992C (1113 words). Generated; not compiled or validated. */
? func_800F7EA8(void *);                            /* extern */
? func_800F9108(void *);                            /* extern */
? func_800F9178(s32);                               /* extern */
s32 func_800FAA90(void *);                          /* extern */
s32 func_800FAD9C(void *);                          /* extern */
s32 func_800FAE38(void *, s32, s32 *, s32 *, s32);  /* extern */
s16 func_800FF828(s32, void *);                     /* extern */
s32 func_80123940(void *, void *, ?, void *, s32);  /* extern */
void *func_801244FC(void *, s32);                   /* extern */
s32 func_80124A30(void *, s32, s32 *);              /* extern */
s32 func_8012BD30(void *);                          /* extern */
? func_8012C3BC(void *, ?);                         /* extern */
? func_80147A6C(void *, ?);                         /* extern */
? func_80147DD0(void *);                            /* extern */
? func_80148A00(void *, ?, s32);                    /* extern */
s32 func_80178A70(s32);                             /* extern */
static void *D_801C34EC = NULL;

s32 func_800F992C(void *arg0, s32 *arg1) {
    s32 sp18;
    s32 sp1C;
    s32 sp20;
    ? var_a2;
    s32 temp_a0_2;
    s32 temp_a2;
    s32 temp_s1_4;
    s32 temp_v0_2;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a0_3;
    s32 var_a0_4;
    s32 var_a0_5;
    s32 var_a0_6;
    s32 var_a1;
    s32 var_s1;
    s32 var_s1_2;
    s32 var_s1_3;
    s32 var_s2;
    s32 var_s5;
    s32 var_v0;
    s32 var_v0_10;
    s32 var_v0_11;
    s32 var_v0_12;
    s32 var_v0_13;
    s32 var_v0_14;
    s32 var_v0_15;
    s32 var_v0_16;
    s32 var_v0_17;
    s32 var_v0_19;
    s32 var_v0_20;
    s32 var_v0_21;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v0_4;
    s32 var_v0_5;
    s32 var_v0_6;
    s32 var_v0_7;
    s32 var_v0_8;
    s32 var_v0_9;
    s32 var_v1;
    s32 var_v1_10;
    s32 var_v1_11;
    s32 var_v1_12;
    s32 var_v1_13;
    s32 var_v1_14;
    s32 var_v1_15;
    s32 var_v1_16;
    s32 var_v1_17;
    s32 var_v1_18;
    s32 var_v1_19;
    s32 var_v1_20;
    s32 var_v1_21;
    s32 var_v1_22;
    s32 var_v1_23;
    s32 var_v1_24;
    s32 var_v1_25;
    s32 var_v1_26;
    s32 var_v1_27;
    s32 var_v1_2;
    s32 var_v1_3;
    s32 var_v1_4;
    s32 var_v1_5;
    s32 var_v1_6;
    s32 var_v1_7;
    s32 var_v1_8;
    s32 var_v1_9;
    void *temp_a0;
    void *temp_a0_3;
    void *temp_s1;
    void *temp_s1_2;
    void *temp_s1_3;
    void *temp_s2;
    void *temp_v0;
    void *temp_v0_3;
    void *temp_v0_4;
    void *temp_v0_5;
    void *temp_v0_6;
    void *var_v0_18;

    var_s5 = 0;
    if (arg0->unk93B == 0) {
        func_800F9178(arg0->unk58);
    } else {
        arg0->unk8B8 = (s32) (arg0->unk8B8 + arg0->unk7D4);
        if (arg0->unk8B8 >= 0x12D) {
            arg0->unk93B = 0U;
        }
    }
    temp_s2 = arg0 + 0x264;
    if (arg0->unk934 != 0) {
        arg0->unk8D0 = 0;
        var_s1 = 0;
        if (temp_s2->unk33 != 0) {
            if (arg0->unk854->unk8B == 0) {
                *arg1 = func_800FAA90(arg0);
                if (*arg1 != -1) {
                    func_800FAE38(arg0, arg0->unk854->unk738, &sp18, &sp1C, *arg1);
                    arg0->unk93F = (s8) (temp_s2 + arg0->unk894)->unk4C;
                    var_v0_2 = sp18;
                    var_v1 = sp1C;
                    if (var_v0_2 < 0) {
                        var_v0_2 = -var_v0_2;
                    }
                    if (var_v1 < 0) {
                        var_v1 = -var_v1;
                    }
                    if ((var_v0_2 + var_v1) < 0xE3) {
                        if (arg0->unk10C < 0x19) {
                            var_s1 = 1;
                        }
                        if (arg0->unk8C8 < arg0->unk8C4) {
                            goto block_16;
                        }
                        arg0->unk8C4 = (s32) (arg0->unk8C4 + 1);
                    } else {
                        *arg1 = -1;
                    }
                } else {
block_16:
                    var_s1 = 1;
                }
                var_v1_2 = arg0->unk86C;
                if (var_v1_2 < 0) {
                    var_v1_2 = -var_v1_2;
                }
                if (var_v1_2 < (arg0->unk880 * 2)) {
                    func_800F9108(arg0);
                }
            }
            if (func_8012BD30(arg0 + 0x264) <= 0) {
                var_s1 = 1;
            }
        }
        var_v0 = 0;
        if (var_s1 != 0) {
            var_v1_3 = 0;
            if (arg0->unk87 == 0) {
                temp_a0 = arg0->unk854;
                if ((temp_a0->unk87 == 0) && (arg0->unk93C == 0)) {
                    var_v1_3 = temp_a0->unk814 < temp_a0->unk810;
                }
            }
            if (var_v1_3 != 0) {
                func_800FAE38(arg0, arg0->unk854->unk738, &sp18, &sp1C, 3);
                var_v0_3 = sp18;
                var_v1_4 = sp1C;
                if (var_v0_3 < 0) {
                    var_v0_3 = -var_v0_3;
                }
                if (var_v1_4 < 0) {
                    var_v1_4 = -var_v1_4;
                }
                if (((var_v0_3 + var_v1_4) < 0xE3) && ((rand() & 0xF) < arg0->unk90C)) {
                    (arg0 + 0x264)->unk42 = 0x35;
                    arg0->unkB8 = 1;
                    arg0->unk93C = 1U;
                    arg0->unk854->unk810 = 0;
                    var_v1_5 = 0;
                    if ((arg0->unk948 != 0) && (arg0->unk6F != 0)) {
                        var_v1_5 = arg0->unk78C < (arg0->unk85C * 2);
                    }
                    if (var_v1_5 != 0) {
                        arg0->unk941 = 1U;
                        arg0->unk8EC = 0xB4;
                    }
                }
            }
            arg0->unk89C = 0;
            return 0;
        }
        /* Duplicate return node #268. Try simplifying control flow for better match */
        return var_v0;
    }
    temp_s1 = arg0 + 0x264;
    var_s2 = 0;
    if (func_8012BD30(temp_s1) <= 0) {
        if (D_801C34EC->unk7D8 == 0) {
            var_v0 = 0;
            if (arg0->unk58 >= 0xA) {
                arg0->unk780 = (s32) arg0->unk784;
                return 0;
            }
            /* Duplicate return node #268. Try simplifying control flow for better match */
            return var_v0;
        }
        func_8012C3BC(temp_s1, 2);
        return 0;
    }
    var_a0 = 0;
    if ((arg0->unk78C < (s16) arg0->unk830) || (arg0->unk58 == 0xA)) {
        var_a0 = 1;
    }
    if (var_a0 != 0) {
        var_s5 = 1;
    }
    if ((arg0->unk58 >= 0xD) && (arg0->unk78C < arg0->unk85C)) {
        var_v1_6 = 0;
        if (arg0->unk6F != 0) {
            var_v1_6 = arg0->unk71 == 0;
        }
        if (var_v1_6 != 0) {
            arg0->unk822 = 1U;
        }
    }
    var_v1_7 = 0;
    if ((arg0->unk948 != 0) && (arg0->unk6F != 0)) {
        temp_v0 = arg0->unk850;
        if (temp_v0 != NULL) {
            var_v1_7 = temp_v0->unk87 != 0;
        }
    }
    if (var_v1_7 != 0) {
        arg0->unk941 = 1U;
        arg0->unk8EC = 0x1A4;
    }
    sp18 = arg0->unk86C;
    sp1C = arg0->unk870;
    var_v0_4 = arg0->unk868;
    if (var_v0_4 < 0) {
        var_v0_4 = -var_v0_4;
    }
    if (var_v0_4 < arg0->unk87C) {
        var_s1_2 = func_800FAE38(arg0, arg0->unk40, &sp18, &sp1C, arg0->unk894);
    } else {
        var_s1_2 = 0;
        if (arg0->unk894 == 0) {
            if (arg0->unk937 != 0) {
                var_a2 = 0xE;
            } else {
                var_a2 = 0xD;
            }
        } else {
            var_a2 = 7;
        }
        temp_v0_2 = func_80123940(D_801C34EC, arg0, var_a2, arg0 + 0x1E4, arg0->unk738 + 0x14);
        if ((temp_v0_2 != 0) && (func_80124A30(D_801C34EC, temp_v0_2, &sp20) & 0xFF)) {
            temp_v0_3 = func_801244FC(D_801C34EC, sp20);
            var_v1_8 = 0;
            if (temp_v0_3->unk829 != 0) {
                var_v1_8 = temp_v0_3->unk7B8 == 2;
            }
            if (var_v1_8 != 0) {
                sp18 = 0;
                sp1C = 0;
            }
        }
    }
    var_a0_2 = sp18;
    var_v1_9 = sp1C;
    if (var_a0_2 < 0) {
        var_a0_2 = -var_a0_2;
    }
    if (var_v1_9 < 0) {
        var_v1_9 = -var_v1_9;
    }
    temp_a0_2 = var_a0_2 + var_v1_9;
    if (temp_a0_2 < (s16) arg0->unk834) {
        if (arg0->unk78C < ((s16) arg0->unk830 + 0x320)) {
            arg0->unk8C0 = (s32) (arg0->unk8C0 + arg0->unk7D4);
            if (((s16) arg0->unk17A < arg0->unk8C0) || (var_s1_2 == 0) || (temp_a0_2 < 0x71)) {
                var_s2 = 1;
            } else {
                var_s2 = arg0->unk94F & 0xFF;
            }
        } else {
            arg0->unk8C0 = 0;
        }
    } else {
        temp_s1_2 = arg0 + 0x264;
        if (arg0->unk87 == 0) {
            arg0->unk8C0 = 0;
            var_a0_3 = 0;
            if (arg0->unk8AC < temp_s1_2->unk20) {
                var_a0_3 = temp_s1_2->unk28 >= 0xA7;
            }
            if (var_a0_3 != 0) {
                var_v1_10 = 0;
                if (arg0->unk78C < 0x640) {
                    var_v1_10 = (rand() & 0x7F) < arg0->unk908;
                }
                if (var_v1_10 != 0) {
                    var_v0_5 = arg0->unk86C;
                    if (var_v0_5 < 0) {
                        var_v0_5 = -var_v0_5;
                    }
                    var_v1_11 = 0;
                    if (var_v0_5 >= 0x556) {
                        var_v0_6 = arg0->unk868;
                        if (var_v0_6 < 0) {
                            var_v0_6 = -var_v0_6;
                        }
                        var_v1_11 = var_v0_6 < 0x155;
                    }
                    if (var_v1_11 != 0) {
                        var_v1_12 = 0;
                        if (arg0->unk850 != NULL) {
                            temp_v0_4 = arg0->unk850;
                            var_v1_12 = temp_v0_4->unkC8 < temp_v0_4->unk20C;
                        }
                        if (var_v1_12 != 0) {
                            temp_s1_2->unk42 = 0x36;
                            arg0->unkB8 = 1;
                        }
                    }
                }
            }
        }
    }
    var_v1_13 = 0;
    if (arg0->unk949 != 0) {
        var_v1_13 = arg0->unk87 == 0;
    }
    if (var_v1_13 != 0) {
        if (arg0->unk81 == 0) {
            var_v1_14 = 0;
            if (arg0->unk6F != 0) {
                var_v0_7 = arg0->unk86C;
                if (var_v0_7 < 0) {
                    var_v0_7 = -var_v0_7;
                }
                var_v1_14 = var_v0_7 < 0xE3;
            }
            if ((var_v1_14 != 0) && (arg0->unkCC < arg0->unk20C)) {
                var_a1 = 0;
                if (arg0->unk850 != NULL) {
                    var_v0_8 = arg0->unk868;
                    if (var_v0_8 < 0) {
                        var_v0_8 = -var_v0_8;
                    }
                    if (var_v0_8 < 0x155) {
                        var_v0_9 = arg0->unk850->unk20C * 0x4B0;
                        goto block_129;
                    }
                    var_v0_10 = arg0->unk868;
                    if (var_v0_10 < 0) {
                        var_v0_10 = -var_v0_10;
                    }
                    if (var_v0_10 >= 0x672) {
                        var_v0_9 = -(arg0->unk850->unk20C * 0x4B0);
block_129:
                        var_a1 = var_v0_9 / arg0->unkD0;
                    }
                }
                temp_a2 = ((s32) (arg0->unk20C * 0x4B0) / (s32) arg0->unkD0) + var_a1;
                var_v1_15 = 0;
                if (arg0->unk78C < temp_a2) {
                    var_v1_15 = (temp_a2 - 0x190) < arg0->unk78C;
                }
                if (var_v1_15 != 0) {
                    func_80148A00(arg0, 1, temp_a2);
                    arg0->unk81 = 1U;
                    arg0->unk83 = 1;
                    arg0->unk6F = 0U;
                    arg0->unk85C = 0;
                    func_800F7EA8(arg0);
                    func_80147A6C(arg0, 0xFA0);
                    arg0->unk780 = (s32) (arg0->unk784 - 0x12C);
                    arg0->unk8 = 1;
                    arg0->unk58 = 2;
                    arg0->unk34 = (s32) (arg0->unk40 + 0x1C);
                    arg0->unk64 = -1;
                    arg0->unk8B0 = 0;
                }
            }
        } else if ((arg0->unk81 != 0) && (arg0->unk8A8 < arg0->unk288)) {
            if (arg0->unk28C < 0xA6) {
                arg0->unk28C = 0xA7;
            }
            var_v0_11 = arg0->unk86C;
            if (var_v0_11 < 0) {
                var_v0_11 = -var_v0_11;
            }
            var_v1_16 = 0;
            if (var_v0_11 < 0x6AB) {
                var_v0_12 = arg0->unk868;
                if (var_v0_12 < 0) {
                    var_v0_12 = -var_v0_12;
                }
                if (var_v0_12 < 0x200) {
                    goto block_144;
                }
            } else {
block_144:
                var_v1_16 = 1;
            }
            if ((var_v1_16 != 0) && ((u32) (arg0->unk78C - 0xA1) < 0x27FU)) {
                (arg0 + 0x264)->unk42 = 0x36;
                arg0->unkB8 = 1;
            }
        }
    }
    if (arg0->unk822 != 0) {
        var_v0_13 = sp18;
        var_a0_4 = sp1C;
        if (var_v0_13 < 0) {
            var_v0_13 = -var_v0_13;
        }
        if (var_a0_4 < 0) {
            var_a0_4 = -var_a0_4;
        }
        if (((var_v0_13 + var_a0_4) < (s16) arg0->unk834) && (arg0->unk78C < (s16) arg0->unk830)) {
            var_s2 = 1;
        }
        if ((arg0->unk7C0 == 0x90) && (arg0->unk941 != 0) && ((func_80178A70(var_a0_4) & 7) == 1)) {
            var_s2 = 1;
            arg0->unk894 = 0;
            *arg1 = 0;
        }
        var_a0_5 = 0;
        if (arg0->unk78C < (s16) arg0->unk832) {
            var_v0_14 = arg0->unk868;
            if (var_v0_14 < 0) {
                var_v0_14 = -var_v0_14;
            }
            if (var_v0_14 < 0x2AA) {
                if ((s16) arg0->unk506 < 0x258) {
                    arg0->unk930 = 0U;
                } else {
                    arg0->unk930 = (u8) arg0->unk936;
                }
            }
            var_a0_5 = 0;
            if ((arg0->unk930 == 0) && (arg0->unk941 == 0)) {
                arg0->unk822 = 0U;
                var_a0_5 = 0;
            }
        }
    } else {
        var_a0_5 = 0;
        if (arg0->unk7A4 < arg0->unkC8) {
            var_s2 = 1;
        } else {
            if ((arg0->unk8 == 1) && (arg0->unk78C >= 0x961)) {
                var_a0_5 = arg0->unk78C < 0xC80;
            }
            var_a0_5 = 0;
            if (var_a0_5 != 0) {
                if ((rand() & 0x7F) < arg0->unk904) {
                    var_a0_6 = 0;
                    if (arg0->unk8AC < (arg0 + 0x264)->unk20) {
                        var_v0_15 = arg0->unk86C;
                        if (var_v0_15 < 0) {
                            var_v0_15 = -var_v0_15;
                        }
                        var_a0_6 = var_v0_15 >= 0x601;
                    }
                    var_a0_5 = 0;
                    if (var_a0_6 != 0) {
                        var_s2 = 1;
                        arg0->unkBA = 1;
                        var_a0_5 = 0;
                    }
                } else {
                    var_v1_17 = 0;
                    if ((arg0->unk98 == 0) && (arg0->unk97 == 0)) {
                        var_v1_17 = (rand() & 0x7F) < arg0->unk910;
                    }
                    var_a0_5 = 0;
                    if (var_v1_17 != 0) {
                        var_v0_16 = arg0->unk868;
                        if (var_v0_16 < 0) {
                            var_v0_16 = -var_v0_16;
                        }
                        if ((var_v0_16 < 0x200) && (arg0->unk91 == 0)) {
                            arg0->unk97 = 1U;
                            arg0->unk99 = (s8) (rand() & 1);
                            var_a0_5 = 0;
                        }
                    }
                }
            }
        }
    }
    if ((var_s2 == 0) && (arg0->unk7C0 == 0x10) && (arg0->unk91 != 0)) {
        var_a0_5 = (arg0->unk6C4 << 0x10) > 0x3C0000;
    }
    var_v1_18 = 0;
    if (var_a0_5 != 0) {
        *arg1 = func_800FAA90(arg0);
        var_v1_18 = 0;
        if (*arg1 == -1) {
            if ((rand() & 5) == 1) {
                *arg1 = 1;
                var_v1_18 = 0;
            } else {
                var_v0_17 = 3;
                if ((rand() & 0xF) == 1) {
                    var_v0_17 = 8;
                }
                *arg1 = var_v0_17;
                var_v1_18 = 0;
            }
        }
    }
    if (((var_s2 == 0) && (arg0->unk94D != 0)) || ((temp_v0_5 = arg0->unk850, (temp_v0_5 != NULL)) && (temp_v0_5->unk82E != 0))) {
        var_v1_18 = 1;
    }
    if (var_v1_18 != 0) {
        var_v0_18 = arg0 + 0x264;
        if (arg0->unk8D8 != 0) {
            arg0->unk8D8 = (s32) (arg0->unk8D8 - arg0->unk7D4);
            var_v0_18 = arg0 + 0x264;
            if (arg0->unk8D8 < 0) {
                arg0->unk8D8 = 0;
                var_v0_18 = arg0 + 0x264;
            }
        }
        var_s1_3 = 0;
        if ((var_v0_18->unk33 != 0) && (func_800FAD9C(arg0) != 0)) {
            var_s1_3 = arg0->unk87 == 0;
        }
        if ((var_s1_3 != 0) && (arg0->unk28C >= 0x14E)) {
            var_v1_19 = 0;
            if (arg0->unk788 < 0x640) {
                var_v0_19 = arg0->unk86C;
                if (var_v0_19 < 0) {
                    var_v0_19 = -var_v0_19;
                }
                var_v1_19 = var_v0_19 < 0x155;
            }
            if (var_v1_19 != 0) {
                (arg0 + 0x264)->unk42 = 0x34;
                arg0->unkB8 = 1;
                arg0->unk8D8 = 0x1A4;
                var_v1_20 = 0;
                if (arg0->unk850 != NULL) {
                    var_v1_20 = arg0->unk850->unk7DC >= 0x3E9;
                }
                if (var_v1_20 != 0) {
                    arg0->unk8D8 = (s32) (arg0->unk8D8 * 4);
                }
            }
        }
    }
    var_v1_21 = 0;
    if (var_s2 != 0) {
        temp_v0_6 = arg0->unk850;
        if (temp_v0_6 != NULL) {
            var_v1_21 = temp_v0_6->unk8B == 0;
        }
    }
    temp_s1_3 = arg0 + 0x264;
    if (var_v1_21 != 0) {
        var_v1_22 = 0;
        if (temp_s1_3->unk33 != 0) {
            var_v1_22 = func_800FAD9C(arg0) != 0;
        }
        if (var_v1_22 != 0) {
            *arg1 = arg0->unk894;
            arg0->unk93B = 0U;
        }
        var_v0 = var_s5;
        if (D_801C34EC->unk7D8 == 0) {
            var_v0 = var_s5;
            if (arg0->unk58 != 0x12) {
                var_v1_23 = 0;
                if (temp_s1_3->unk20 < 0xA) {
                    var_v1_23 = arg0->unk8AC >= 0x79;
                }
                var_v0 = var_s5;
                if (var_v1_23 != 0) {
                    var_v1_24 = 0;
                    if ((arg0->unk822 != 0) && (arg0->unk930 == 0)) {
                        var_v1_24 = arg0->unk932 != 0;
                    }
                    if (var_v1_24 != 0) {
                        func_80147A6C(arg0, 0x320);
                        func_80147DD0(arg0);
                        arg0->unk822 = 0U;
                        var_v0 = var_s5;
                        if (D_801C34EC->unk7D4 < 2) {
                            if (D_801C34EC->unk7D4 == 0) {
                                arg0->unk780 = (s32) (arg0->unk784 - 0x1A4);
                                arg0->unk8 = 1;
                                goto block_248;
                            }
                            temp_s1_4 = rand() & 3;
                            var_v0 = var_s5;
                            if (temp_s1_4 == 1) {
                                arg0->unk780 = (s32) ((arg0->unk784 - 0x12C) - (rand() & 0x1FF));
                                arg0->unk8 = temp_s1_4;
block_248:
                                arg0->unk58 = 2;
                                arg0->unk8B0 = 0;
                                arg0->unk64 = func_800FF828(arg0->unk44, arg0 + 0x1E4);
                                arg0->unk34 = (s32) (arg0->unk40 + 0x1C);
                                return var_s5;
                            }
                            /* Duplicate return node #268. Try simplifying control flow for better match */
                            return var_v0;
                        }
                        /* Duplicate return node #268. Try simplifying control flow for better match */
                        return var_v0;
                    }
                    goto block_267;
                }
                /* Duplicate return node #268. Try simplifying control flow for better match */
                return var_v0;
            }
        }
        /* Duplicate return node #268. Try simplifying control flow for better match */
        return var_v0;
    }
    var_v0 = var_s5;
    if (arg0->unk87 == 0) {
        temp_a0_3 = arg0 + 0x264;
        if ((rand() & 0x7F) < arg0->unk90C) {
            var_v0 = var_s5;
            if (arg0->unk8A8 < temp_a0_3->unk20) {
                var_v0_20 = arg0->unk868;
                if (var_v0_20 < 0) {
                    var_v0_20 = -var_v0_20;
                }
                var_v1_25 = 0;
                if (var_v0_20 < 0x600) {
                    var_v0_21 = arg0->unk86C;
                    if (var_v0_21 < 0) {
                        var_v0_21 = -var_v0_21;
                    }
                    var_v1_25 = var_v0_21 < 0xAA;
                }
                var_v0 = var_s5;
                if (var_v1_25 != 0) {
                    var_v1_26 = 0;
                    if (arg0->unk78C >= 0x141) {
                        var_v1_26 = arg0->unk78C < (arg0->unk85C * 2);
                    }
                    var_v0 = var_s5;
                    if (var_v1_26 != 0) {
                        var_v0 = var_s5;
                        if (temp_a0_3->unk28 >= 0x14E) {
                            temp_a0_3->unk42 = 0x35;
                            arg0->unkB8 = 1;
                            var_v1_27 = 0;
                            if (arg0->unk948 != 0) {
                                var_v1_27 = arg0->unk6F != 0;
                            }
                            if (var_v1_27 != 0) {
                                arg0->unk941 = 1U;
                                arg0->unk8EC = 0xB4;
                            }
                            goto block_267;
                        }
                    }
                }
            }
        } else {
block_267:
            var_v0 = var_s5;
        }
    }
    return var_v0;
}
