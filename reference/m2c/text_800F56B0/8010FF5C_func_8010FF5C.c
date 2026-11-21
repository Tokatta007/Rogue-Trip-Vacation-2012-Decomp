/* m2c reference for func_8010FF5C @ 8010FF5C (1051 words). Generated; not compiled or validated. */
void *func_801244FC(s32, s32);                      /* extern */
s32 func_80124A94(s32, u8, s32 *);                  /* extern */
? func_80125050(s32, s32, void *);                  /* extern */
s32 func_80125094(s32 *, ?);                        /* extern */
? func_80125130(s32 *, void *, s32, s32);           /* extern */
? func_801253C8(void *, void *);                    /* extern */
s32 func_801254B0(s32, s32);                        /* extern */
? func_8013BDCC(s32, ?, ?, ? **);                   /* extern */
? func_80152434(s32, void *, void *, s32);          /* extern */
s32 func_8015A62C(s32, s32);                        /* extern */
? func_8016408C(s32 *);                             /* extern */
s16 func_80178A1C();                                /* extern */
extern ? D_801C3100;
extern ? *D_801C31CC;
static s32 D_801C34EC = 0;
static s32 D_801C34F4 = 0;

s32 func_8010FF5C(void *arg0, void *arg1) {
    s32 sp10;
    s32 sp14;
    s32 sp18;
    s32 sp20;
    s32 sp24;
    s32 sp28;
    s32 sp30;
    s32 sp34;
    s32 sp38;
    s32 sp40;
    s32 sp44;
    s32 sp48;
    s32 sp4C;
    s32 *temp_a0_6;
    s32 *temp_a0_7;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a0_5;
    s32 temp_hi;
    s32 temp_hi_2;
    s32 temp_hi_3;
    s32 temp_lo;
    s32 temp_lo_2;
    s32 temp_lo_3;
    s32 temp_lo_4;
    s32 temp_lo_5;
    s32 temp_lo_6;
    s32 temp_lo_7;
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_s5;
    s32 temp_v0;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a0_3;
    s32 var_a0_4;
    s32 var_a0_5;
    s32 var_s0;
    s32 var_s1;
    s32 var_s1_2;
    s32 var_s4;
    s32 var_s4_2;
    s32 var_s5;
    s32 var_s6;
    s32 var_s7;
    s32 var_v0;
    s32 var_v0_10;
    s32 var_v0_11;
    s32 var_v0_12;
    s32 var_v0_13;
    s32 var_v0_14;
    s32 var_v0_15;
    s32 var_v0_16;
    s32 var_v0_17;
    s32 var_v0_18;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v0_4;
    s32 var_v0_5;
    s32 var_v0_6;
    s32 var_v0_7;
    s32 var_v0_9;
    s32 var_v1;
    s32 var_v1_10;
    s32 var_v1_11;
    s32 var_v1_2;
    s32 var_v1_3;
    s32 var_v1_4;
    s32 var_v1_5;
    s32 var_v1_6;
    s32 var_v1_8;
    s32 var_v1_9;
    void *temp_v1_3;
    void *temp_v1_4;
    void *temp_v1_5;
    void *temp_v1_6;
    void *var_v0_8;
    void *var_v1_7;

    var_v1 = 0;
    if ((arg0->unk4A != 0) || (arg1->unk4A != 0)) {
        var_v1 = 1;
    }
    var_s7 = 0;
    if (var_v1 == 0) {
        func_80125050(arg1->unk18, arg0->unk18, arg0 + 0xC);
        func_80125050(arg0->unk18, arg1->unk18, arg1 + 0xC);
        var_s7 = 1;
        temp_v1 = func_80178A1C() * 0x186;
        temp_hi = MULT_HI(temp_v1, 0x10624DD3);
        var_v0 = arg0->unk28;
        temp_v1_2 = temp_v1 >> 0x1F;
        if (var_v0 < 0) {
            var_v0 = -var_v0;
        }
        temp_a0 = ((temp_hi >> 6) - temp_v1_2) << 6;
        if (temp_a0 < var_v0) {
            var_s4 = arg0->unk8;
        } else {
            var_s4 = (s32) (s16) arg0->unk20->unk18;
        }
        var_v0_2 = arg1->unk28;
        if (var_v0_2 < 0) {
            var_v0_2 = -var_v0_2;
        }
        if (temp_a0 < var_v0_2) {
            var_s1 = arg1->unk8;
        } else {
            var_s1 = (s32) (s16) arg1->unk20->unk18;
        }
        temp_s0 = func_8015A62C(arg1->unkC, arg1->unk10);
        temp_v0 = func_8015A62C(arg0->unkC, arg0->unk10);
        sp40 = temp_s0 - var_s4;
        func_8016408C(&sp40);
        sp44 = temp_v0 - var_s1;
        func_8016408C(&sp44);
        var_v1_2 = arg0->unk28;
        var_v0_3 = arg1->unk28;
        if (var_v1_2 < 0) {
            var_v1_2 = -var_v1_2;
        }
        if (var_v0_3 < 0) {
            var_v0_3 = -var_v0_3;
        }
        var_s6 = 1;
        if ((var_v0_3 * 2) >= var_v1_2) {
            var_v1_3 = arg1->unk28;
            var_v0_4 = arg0->unk28;
            if (var_v1_3 < 0) {
                var_v1_3 = -var_v1_3;
            }
            if (var_v0_4 < 0) {
                var_v0_4 = -var_v0_4;
            }
            var_s6 = 0;
            if ((var_v0_4 * 2) >= var_v1_3) {
                var_v1_4 = sp40;
                var_v0_5 = sp44;
                if (var_v1_4 < 0) {
                    var_v1_4 = -var_v1_4;
                }
                if (var_v0_5 < 0) {
                    var_v0_5 = -var_v0_5;
                }
                var_s6 = var_v1_4 < var_v0_5;
            }
        }
        if (var_s6 & 0xFF) {
            if ((*arg0->unk20->unk0 & 0xFFF0) == 0xD00) {
                var_v0_6 = sp40;
                if (var_v0_6 < 0) {
                    var_v0_6 = -var_v0_6;
                }
                if (var_v0_6 < 0x155) {
                    temp_a0_2 = func_80178A1C() * 0xB6D;
                    temp_hi_2 = MULT_HI(temp_a0_2, 0x10624DD3);
                    var_v1_5 = arg0->unk28;
                    temp_a0_3 = temp_a0_2 >> 0x1F;
                    if (var_v1_5 < 0) {
                        var_v1_5 = -var_v1_5;
                    }
                    if ((((temp_hi_2 >> 6) - temp_a0_3) << 6) < var_v1_5) {
                        arg1->unk4A = 1U;
                        arg1->unk38 = 0;
                        arg1->unk30 = 1;
                        goto block_46;
                    }
                }
            }
        } else if ((*arg1->unk20->unk0 & 0xFFF0) == 0xD00) {
            var_v0_7 = sp44;
            if (var_v0_7 < 0) {
                var_v0_7 = -var_v0_7;
            }
            if (var_v0_7 < 0x155) {
                temp_a0_4 = func_80178A1C() * 0xB6D;
                temp_hi_3 = MULT_HI(temp_a0_4, 0x10624DD3);
                var_v1_6 = arg1->unk28;
                temp_a0_5 = temp_a0_4 >> 0x1F;
                if (var_v1_6 < 0) {
                    var_v1_6 = -var_v1_6;
                }
                if ((((temp_hi_3 >> 6) - temp_a0_5) << 6) < var_v1_6) {
                    arg0->unk4A = 1U;
                    arg0->unk38 = 0;
                    arg0->unk30 = 1;
block_46:
                    D_801C31CC.unk8 = 0x48;
                    D_801C31CC.unkC = 0x48;
                    temp_v1_3 = arg1->unk20;
                    temp_v1_4 = temp_v1_3 + 0x1C;
                    D_801C3100.unk0 = (s32) temp_v1_3->unk1C;
                    D_801C3100.unk4 = (s32) temp_v1_4->unk4;
                    D_801C31CC.unk0 = &D_801C3100;
                    D_801C3100.unk8 = (s32) temp_v1_4->unk8;
                    func_8013BDCC(D_801C34F4, 0, 0, &D_801C31CC);
                }
            }
        }
        temp_lo = (s32) (arg0->unk40 * 0x64) / (s32) (arg0->unk40 + arg1->unk40);
        temp_s5 = 0x64 - temp_lo;
        if (temp_s5 < temp_lo) {
            var_s5 = (s32) (temp_s5 * 0x64) / temp_lo;
            var_s4_2 = 0x64;
        } else {
            var_s4_2 = (s32) (temp_lo * 0x64) / temp_s5;
            var_s5 = 0x64;
        }
        temp_lo_2 = arg0->unk1C->unk0 * var_s4_2;
        sp20 = temp_lo_2;
        temp_lo_3 = arg0->unk1C->unk4 * var_s4_2;
        sp24 = temp_lo_3;
        temp_lo_4 = arg0->unk1C->unk8 * var_s4_2;
        sp28 = temp_lo_4;
        temp_lo_5 = arg1->unk1C->unk0 * var_s5;
        sp30 = temp_lo_5;
        temp_lo_6 = arg1->unk1C->unk4 * var_s5;
        sp34 = temp_lo_6;
        temp_lo_7 = arg1->unk1C->unk8 * var_s5;
        sp38 = temp_lo_7;
        sp10 = (temp_lo_2 + temp_lo_5) / 200;
        sp14 = (temp_lo_3 + temp_lo_6) / 200;
        sp18 = (temp_lo_4 + temp_lo_7) / 200;
        func_80125130(&sp10, arg0, (s32) (temp_lo_2 + temp_lo_5) >> 0x1F, (s32) (temp_lo_3 + temp_lo_6) >> 0x1F);
        func_801253C8(arg1, arg0);
        temp_s1 = func_80125094(&sp10, 0);
        var_s1_2 = temp_s1 << 6;
        if (temp_s1 < ((func_80178A1C() * 0x79E) / 1000)) {
            var_s1_2 = ((func_80178A1C() * 0x79E) / 1000) << 6;
        }
        arg0->unk34 = var_s1_2;
        arg1->unk34 = var_s1_2;
        if (arg0->unk2C >= arg1->unk2C) {
            var_s0 = arg0->unk2C;
        } else {
            var_s0 = arg1->unk2C;
        }
        arg0->unk34 = func_801254B0(arg0->unk34, var_s0);
        arg1->unk34 = func_801254B0(arg1->unk34, var_s0);
        arg0->unk30 = (s32) ((s32) (var_s1_2 * 0x78) / var_s0);
        if (var_s6 & 0xFF) {
            var_v0_8 = arg1->unk20;
            var_v1_7 = arg0->unk20;
        } else {
            var_v0_8 = arg0->unk20;
            var_v1_7 = arg1->unk20;
        }
        sp48 = (s16) var_v0_8->unk18 - (s16) var_v1_7->unk18;
        func_8016408C(&sp48);
        var_v1_8 = sp48;
        if (sp48 < 0) {
            var_v1_8 = -var_v1_8;
        }
        if (var_v1_8 < 0x400) {
            arg0->unk30 = (s32) ((s32) (arg0->unk30 * var_v1_8) / 1024);
        }
        arg1->unk30 = (s32) arg0->unk30;
        arg0->unk38 = 0;
        arg1->unk38 = 0;
        if (var_s6 & 0xFF) {
            temp_a0_6 = arg0->unk20->unk0;
            if (((temp_a0_6->unk0 & 0xFFF0) == 0x900) && (func_80124A94(D_801C34EC, temp_a0_6->unk2, &sp4C) != 0)) {
                func_80152434(D_801C34EC + 0x496C, arg0->unk20, arg1->unk20, func_801244FC(D_801C34EC, sp4C)->unk78);
            }
            if (arg0->unk28 < arg0->unk34) {
                arg0->unk34 = (s32) arg0->unk28;
            }
            arg1->unk38 = (s32) (arg1->unk8 - (s16) arg1->unk20->unk18);
            func_8016408C(arg1 + 0x38);
            if ((sp40 * arg1->unk38) < 0) {
                var_v0_9 = arg1->unk38;
                if (var_v0_9 < 0) {
                    var_v0_9 = -var_v0_9;
                }
                if (var_v0_9 < 0x200) {
                    if (arg1->unk38 < 0) {
                        var_v0_10 = arg1->unk38 + 0x400;
                    } else {
                        var_v0_10 = arg1->unk38 - 0x400;
                    }
                } else {
                    var_v0_10 = arg1->unk38 + 0x800;
                }
                arg1->unk38 = var_v0_10;
                func_8016408C(arg1 + 0x38);
            }
            var_a0 = 0x64;
            if (arg0->unk2C != 0) {
                var_v0_11 = arg0->unk28;
                if (var_v0_11 < 0) {
                    var_v0_11 = -var_v0_11;
                }
                var_a0 = (s32) (var_v0_11 * (var_s4_2 * 2)) / (s32) arg0->unk2C;
                if (var_a0 >= 0x65) {
                    var_a0 = 0x64;
                    arg1->unk30 = (s32) (arg1->unk30 * 2);
                }
            }
            var_a0_2 = sp40;
            if (var_a0_2 < 0) {
                var_a0_2 = -var_a0_2;
            }
            arg1->unk38 = (s32) ((arg1->unk38 * var_a0) / 100);
            if (var_a0_2 < 0xE3) {
                arg1->unk38 = (s32) ((arg1->unk38 * var_a0_2) / 227);
                arg1->unk34 = (s32) (arg1->unk34 + ((s32) arg1->unk34 >> 1));
                var_v0_12 = var_s5 < 0x32;
                if (arg0->unk2C != 0) {
                    var_v0_13 = sp48;
                    if (var_v0_13 < 0) {
                        var_v0_13 = -var_v0_13;
                    }
                    var_v0_12 = var_s5 < 0x32;
                    if ((u32) (var_v0_13 - 0x2AB) < 0x2AAU) {
                        if (var_s4_2 != 0) {
                            var_v1_9 = (s32) (((s32) (arg0->unk2C * 3) >> 2) * var_s5) / var_s4_2;
                        } else {
                            var_v1_9 = arg0->unk2C * 8;
                        }
                        if (var_v1_9 < arg0->unk28) {
                            arg1->unk48 = 1;
                            arg1->unk3C = (s32) arg0->unk8;
                            if (sp48 < 0) {
                                arg1->unk49 = 1;
                                var_v0_12 = var_s5 < 0x32;
                            } else {
                                arg1->unk49 = 0;
                                var_v0_12 = var_s5 < 0x32;
                            }
                        } else {
                            goto block_97;
                        }
                    }
                }
            } else {
                arg1->unk34 = (s32) (arg1->unk34 - ((s32) arg1->unk34 >> 2));
                arg0->unk34 = (s32) (arg0->unk34 + ((s32) arg0->unk34 >> 2));
block_97:
                var_v0_12 = var_s5 < 0x32;
            }
            if (var_v0_12 != 0) {
                arg1->unk34 = (s32) (arg1->unk34 + ((s32) arg1->unk34 >> 1));
            }
            var_a0_3 = (s32) (arg0->unk34 * 0x7F) / (s32) arg0->unk2C;
            if (var_a0_3 >= 0x80) {
                var_a0_3 = 0x7F;
            }
        } else {
            temp_a0_7 = arg1->unk20->unk0;
            if (((temp_a0_7->unk0 & 0xFFF0) == 0x900) && (func_80124A94(D_801C34EC, temp_a0_7->unk2, &sp4C) != 0)) {
                func_80152434(D_801C34EC + 0x496C, arg1->unk20, arg0->unk20, func_801244FC(D_801C34EC, sp4C)->unk78);
            }
            if (arg1->unk28 < arg1->unk34) {
                arg1->unk34 = (s32) arg1->unk28;
            }
            arg0->unk38 = (s32) (arg0->unk8 - (s16) arg0->unk20->unk18);
            func_8016408C(arg0 + 0x38);
            if ((sp44 * arg0->unk38) < 0) {
                var_v0_14 = arg0->unk38;
                if (var_v0_14 < 0) {
                    var_v0_14 = -var_v0_14;
                }
                if (var_v0_14 < 0x200) {
                    if (arg0->unk38 < 0) {
                        var_v0_15 = arg0->unk38 + 0x400;
                    } else {
                        var_v0_15 = arg0->unk38 - 0x400;
                    }
                } else {
                    var_v0_15 = arg0->unk38 + 0x800;
                }
                arg0->unk38 = var_v0_15;
                func_8016408C(arg0 + 0x38);
            }
            var_a0_4 = 0x64;
            if (arg1->unk2C != 0) {
                var_v0_16 = arg1->unk28;
                if (var_v0_16 < 0) {
                    var_v0_16 = -var_v0_16;
                }
                var_a0_4 = (s32) (var_v0_16 * (var_s5 * 2)) / (s32) arg1->unk2C;
                if (var_a0_4 >= 0x65) {
                    var_a0_4 = 0x64;
                    arg0->unk30 = (s32) (arg0->unk30 * 2);
                }
            }
            var_a0_5 = sp44;
            if (var_a0_5 < 0) {
                var_a0_5 = -var_a0_5;
            }
            arg0->unk38 = (s32) ((arg0->unk38 * var_a0_4) / 100);
            if (var_a0_5 < 0xE3) {
                arg0->unk38 = (s32) ((arg0->unk38 * var_a0_5) / 227);
                arg0->unk34 = (s32) (arg0->unk34 + ((s32) arg0->unk34 >> 1));
                var_v0_17 = var_s4_2 < 0x32;
                if (arg1->unk2C != 0) {
                    var_v0_18 = sp48;
                    if (var_v0_18 < 0) {
                        var_v0_18 = -var_v0_18;
                    }
                    var_v0_17 = var_s4_2 < 0x32;
                    if ((u32) (var_v0_18 - 0x2AB) < 0x2AAU) {
                        if (var_s5 != 0) {
                            var_v1_10 = (s32) (((s32) (arg1->unk2C * 3) >> 2) * var_s4_2) / var_s5;
                        } else {
                            var_v1_10 = arg1->unk2C * 8;
                        }
                        if (var_v1_10 < arg1->unk28) {
                            arg0->unk48 = 1;
                            arg0->unk3C = (s32) arg1->unk8;
                            if (sp48 < 0) {
                                arg0->unk49 = 1;
                                var_v0_17 = var_s4_2 < 0x32;
                            } else {
                                arg0->unk49 = 0;
                                var_v0_17 = var_s4_2 < 0x32;
                            }
                        } else {
                            goto block_136;
                        }
                    }
                }
            } else {
                arg0->unk34 = (s32) (arg0->unk34 - ((s32) arg0->unk34 >> 2));
                arg1->unk34 = (s32) (arg1->unk34 + ((s32) arg1->unk34 >> 2));
block_136:
                var_v0_17 = var_s4_2 < 0x32;
            }
            if (var_v0_17 != 0) {
                arg0->unk34 = (s32) (arg0->unk34 + ((s32) arg0->unk34 >> 1));
            }
            var_a0_3 = (s32) (arg1->unk34 * 0x64) / (s32) arg1->unk2C;
            if (var_a0_3 >= 0x65) {
                var_a0_3 = 0x64;
            }
        }
        var_v1_11 = 0;
        if ((arg0->unk4A != 0) || (arg1->unk4A != 0)) {
            var_v1_11 = 1;
        }
        if (var_v1_11 != 0) {
            arg0->unk34 = (s32) ((s32) arg0->unk34 >> 2);
            var_a0_3 = 0x64;
            arg1->unk34 = (s32) ((s32) arg1->unk34 >> 2);
            arg0->unk30 = 1;
            arg1->unk30 = 1;
        }
        D_801C31CC.unk8 = 8;
        D_801C31CC.unk18 = var_a0_3;
        D_801C31CC.unkC = (s32) arg0->unk20->unk0->unk2;
        temp_v1_5 = arg0->unk20;
        temp_v1_6 = temp_v1_5 + 0x1C;
        D_801C3100.unk0 = (s32) temp_v1_5->unk1C;
        D_801C3100.unk4 = (s32) temp_v1_6->unk4;
        D_801C31CC.unk0 = &D_801C3100;
        D_801C3100.unk8 = (s32) temp_v1_6->unk8;
        func_8013BDCC(D_801C34F4, 0, 0, &D_801C31CC);
    }
    return var_s7;
}
