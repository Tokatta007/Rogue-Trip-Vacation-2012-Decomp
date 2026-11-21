/* m2c reference for func_8012F320 @ 8012F320 (787 words). Generated; not compiled or validated. */
? func_801033D8(s32, s32);                          /* extern */
? func_801035E4(s32, s32);                          /* extern */
? func_8010B62C(s32, ?, ?);                         /* extern */
? func_8010B71C(s32);                               /* extern */
s8 func_80124DAC(?, s32);                           /* extern */
s32 func_8012BD30(void *);                          /* extern */
? func_8012EEA0(void *);                            /* extern */
? func_8012EEE8(void *, ?, ?, ?);                   /* extern */
? func_8012EFE4(void *);                            /* extern */
? func_8012FF6C(void *);                            /* extern */
u8 func_801302A4(void *);                           /* extern */
? func_80130430(void *);                            /* extern */
? func_80130B54(void *);                            /* extern */
s32 func_80133040(?);                               /* extern */
? func_8013BDCC(s32, ?, ?);                         /* extern */
? func_80148A00(void *, ?);                         /* extern */
u8 func_8016B6DC(?, s32);                           /* extern */
s32 func_8016BDA8(s32);                             /* extern */
s32 func_8016BDC0(s32);                             /* extern */
s32 func_80176CBC(s32, s32, ?);                     /* extern */
extern ? D_801C31CC;
static s32 D_801C34EC = 0;
static s32 D_801C34F4 = 0;

void func_8012F320(void *arg0) {
    ? var_a2;
    s32 temp_s2;
    s32 temp_v0;
    s32 temp_v0_5;
    s32 temp_v0_6;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a0_3;
    s32 var_a1;
    s32 var_s1;
    s32 var_s1_2;
    s32 var_s1_3;
    s32 var_s1_4;
    s32 var_v0;
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
    s32 var_v1_9;
    s8 temp_v0_2;
    s8 temp_v0_3;
    s8 temp_v0_4;
    s8 var_s1_5;
    void *temp_a0;
    void *var_v0_2;

    temp_s2 = arg0->unk750;
    temp_v0 = func_8016BDC0(temp_s2);
    if (temp_v0 != arg0->unk7B4) {
        func_8012EEA0(arg0);
        arg0->unk7B4 = temp_v0;
    }
    arg0->unkB6 = func_8016B6DC(8, temp_s2);
    arg0->unkB7 = func_8016B6DC(4, temp_s2);
    arg0->unkB8 = func_8016B6DC(1, temp_s2);
    var_v1 = 0;
    if (arg0->unkB8 != 0) {
        var_v1 = (arg0 + 0x264)->unk33 != 0;
    }
    if (var_v1 != 0) {
        arg0->unkBA = func_8016B6DC(0x10, temp_s2);
    } else {
        arg0->unkBA = 0U;
    }
    var_v1_2 = 0;
    if (arg0->unkB8 != 0) {
        var_v1_2 = (arg0 + 0x264)->unk33 != 0;
    }
    temp_a0 = arg0 + 0x264;
    if (var_v1_2 != 0) {
        temp_a0->unk42 = 0x32;
        var_s1 = 0;
        if (func_8012BD30(temp_a0) == 0) {
            var_s1 = (D_801C34F4 + (temp_s2 * 4))->unk278 == 0;
        }
        if (var_s1 != 0) {
            D_801C31CC.unk8 = 0x1D;
            D_801C31CC.unkC = 0x22;
            func_8013BDCC(D_801C34F4, 0, 0);
        }
    }
    arg0->unkB9 = func_8016B6DC(2, temp_s2);
    if (arg0->unk95 != 0) {
        var_s1_2 = 0;
        if (arg0->unk81 == 0) {
            if (func_8016B6DC(4, temp_s2) & 0xFF) {
                var_s1_2 = (u32) (func_8016B6DC(8, temp_s2) & 0xFF) > 0U;
            }
            if (var_s1_2 != 0) {
                var_v1_3 = 0;
                if ((arg0->unk28C >= 0xA7) || (arg0->unk19A != 0)) {
                    var_v1_3 = 1;
                }
                if (var_v1_3 != 0) {
                    func_80148A00(arg0, 1);
                    func_8012EEE8(arg0, 1, 0, 0xF);
                    arg0->unk28C = (s32) (arg0->unk28C - 0xA6);
                    if (arg0->unk28C < 0) {
                        arg0->unk28C = 0;
                    }
                }
            }
        }
    } else {
        var_s1_3 = 0;
        if (arg0->unk81 == 0) {
            if (!(func_8016B6DC(4, temp_s2) & 0xFF) || !(func_8016B6DC(8, temp_s2) & 0xFF)) {
                var_s1_3 = 1;
            }
            if (var_s1_3 != 0) {
                arg0->unk95 = 1U;
            }
        }
    }
    func_8012EFE4(arg0);
    func_80130430(arg0);
    arg0->unkA7 = func_8016B6DC(0x800, temp_s2);
    arg0->unkA8 = func_8016B6DC(0x100, temp_s2);
    if (arg0->unkA8 == 0) {
        var_a0 = 0;
        arg0->unkA9 = func_8016B6DC(0x40, temp_s2);
        if ((arg0->unk7B4 == 5) || (arg0->unk7B4 == 7)) {
            var_a0 = 1;
        }
        if (var_a0 != 0) {
            temp_v0_2 = func_80124DAC(2, temp_s2);
            if (temp_v0_2 > 0) {
                arg0->unkAE = temp_v0_2;
                goto block_54;
            }
            if (temp_v0_2 < 0) {
                arg0->unkAF = (s8) -temp_v0_2;
                arg0->unkAE = 0;
                var_a0_2 = 0;
            } else {
                goto block_53;
            }
        } else {
            arg0->unkAF = func_8016B6DC(0x2000, temp_s2);
            arg0->unkAE = func_8016B6DC(0x8000, temp_s2);
            var_a0_2 = 0;
        }
    } else {
        var_s1_4 = 0;
        if (func_80133040(0x40) != 0) {
            if ((func_8016B6DC(0x8000, temp_s2) & 0xFF) || (func_8016B6DC(0x2000, temp_s2) & 0xFF)) {
                var_s1_4 = 1;
            }
            if (arg0->unk94 != 0) {
                var_v1_4 = 0;
                if ((var_s1_4 != 0) && (arg0->unkA8 != 0)) {
                    var_v1_4 = func_8016BDA8(arg0->unk7D0) != 0;
                }
                if (var_v1_4 != 0) {
                    func_8010B71C(D_801C34EC + 0x6220);
                    arg0->unk94 = 0U;
                }
            } else if (var_s1_4 == 0) {
                arg0->unk94 = 1U;
            }
        }
block_53:
        arg0->unkAE = 0;
block_54:
        arg0->unkAF = 0;
        var_a0_2 = 0;
    }
    if ((arg0->unk7B4 == 5) || (arg0->unk7B4 == 7)) {
        var_a0_2 = 1;
    }
    if (var_a0_2 != 0) {
        if (arg0->unkF4 == 0) {
            temp_v0_3 = func_80124DAC(3, temp_s2);
            if (temp_v0_3 > 0) {
                arg0->unkB1 = temp_v0_3;
                arg0->unkB0 = 0;
            } else if (temp_v0_3 < 0) {
                arg0->unkB0 = (s8) -temp_v0_3;
                arg0->unkB1 = 0;
            } else {
                arg0->unkB1 = 0;
                arg0->unkB0 = 0;
            }
        }
    } else {
        arg0->unkB0 = 0;
        arg0->unkB1 = 0;
        if (arg0->unkF4 == 0) {
            arg0->unkB0 = func_8016B6DC(0x4000, temp_s2);
            arg0->unkB1 = func_8016B6DC(0x1000, temp_s2);
        }
    }
    if (arg0->unk8E != 0) {
        func_80130B54(arg0);
    }
    arg0->unkAD = func_8016B6DC(0x20, temp_s2);
    func_8012FF6C(arg0);
    if (arg0->unkAD != 0) {
        arg0->unkAC = 0U;
        arg0->unkAA = 0;
        arg0->unkAB = 0;
        if (arg0->unkA9 != 0) {
            arg0->unk84 = 1;
        }
        var_a1 = 0;
        if (arg0->unk260 != 0) {
            var_a2 = 9;
            goto block_127;
        }
    } else {
        arg0->unkAC = func_801302A4(arg0);
        var_v1_5 = 0;
        if (arg0->unkAC != 0) {
            var_v1_5 = arg0->unk7D == 0;
        }
        if ((var_v1_5 != 0) && (arg0->unk199 == 0)) {
            arg0->unk28C = (s32) (arg0->unk28C - 0x14);
            if (arg0->unk28C < 5) {
                arg0->unk28C = 0;
                arg0->unkAC = 0U;
            }
        }
        if (arg0->unkAC != 0) {
            func_8012EEE8(arg0, 1, 0, 7);
        }
        var_a0_3 = 0;
        if ((arg0->unk7B4 == 5) || (arg0->unk7B4 == 7)) {
            var_a0_3 = 1;
        }
        if (var_a0_3 != 0) {
            temp_v0_4 = func_80124DAC(1, temp_s2);
            if (temp_v0_4 > 0) {
                arg0->unkAA = temp_v0_4;
                arg0->unkAB = 0;
            } else if (temp_v0_4 < 0) {
                arg0->unkAA = 0;
                arg0->unkAB = (s8) -temp_v0_4;
            } else {
                arg0->unkAA = 0;
                arg0->unkAB = 0;
            }
        } else {
            arg0->unkAA = func_8016B6DC(0x80, temp_s2);
            var_v1_6 = 0;
            if (((u8) arg0->unkAA == 0) && (arg0->unkA8 == 0)) {
                var_v1_6 = (u32) arg0->unkF4 > 0U;
            }
            if (var_v1_6 != 0) {
                arg0->unkAA = func_8016B6DC(0x1000, temp_s2);
            }
            var_s1_5 = 0;
            if (arg0->unkF4 != 0) {
                if ((func_8016B6DC(0x4000, temp_s2) & 0xFF) && (arg0->unkA7 == 0)) {
                    var_s1_5 = arg0->unkA8 == 0;
                }
                arg0->unkAB = var_s1_5;
            }
        }
        if (arg0->unk6BC != 0) {
            arg0->unkAA = 0;
            arg0->unkAC = 0U;
        }
        if (arg0->unkAC != 0) {
            arg0->unkAA = 1;
        }
        arg0->unk84 = 0;
        if ((u8) arg0->unkAB != 0) {
            var_v1_7 = 0;
            if ((u8) arg0->unkAA != 0) {
                var_v1_7 = arg0->unkAC == 0;
            }
            if (var_v1_7 != 0) {
                arg0->unkAA = 0;
                arg0->unkAD = 1U;
            }
            if (arg0->unkAC != 0) {
                arg0->unkAC = 2U;
            }
        }
        if (arg0->unkF4 != 0) {
            var_v0 = arg0->unk1F0;
            if (var_v0 < 0) {
                var_v0 = -var_v0;
            }
            var_a1 = 0;
            if (var_v0 >= 0x66) {
                if (arg0->unk1F0 >= 0x2AB) {
                    var_a1 = arg0->unkD0;
                } else if (arg0->unk1F0 < -0x2AA) {
                    var_a1 = -arg0->unkD0;
                } else {
                    var_a1 = (arg0->unk1F0 * arg0->unkD0) / 682;
                }
            }
            var_v1_8 = 0;
            if (((u8) arg0->unkAA != 0) || ((u8) arg0->unkAB != 0)) {
                var_v1_8 = 1;
            }
            if (var_v1_8 != 0) {
                var_a1 = var_a1 >> 1;
            }
            var_a2 = 1;
block_127:
            arg0->unk260 = func_80176CBC(arg0->unk260, var_a1, var_a2);
        } else {
            arg0->unk260 = 0;
        }
    }
    if (func_80133040() == 0) {
        temp_v0_5 = func_8016B6DC(0x4000, temp_s2) & 0xFF;
        if (arg0->unk92 != 0) {
            var_v1_9 = 0;
            if ((temp_v0_5 != 0) && (arg0->unkA8 != 0)) {
                var_v1_9 = func_8016BDA8(arg0->unk7D0) != 0;
            }
            if (var_v1_9 != 0) {
                func_801033D8(D_801C34EC + 0x6220, arg0->unk7CC);
                (D_801C34EC + 0x6220 + (temp_s2 * 2))->unk3E8 = 0;
                arg0->unk92 = 0U;
            }
        } else if (temp_v0_5 == 0) {
            arg0->unk92 = 1U;
        }
    }
    temp_v0_6 = func_8016B6DC(0x1000, temp_s2) & 0xFF;
    if (arg0->unk93 != 0) {
        var_v1_10 = 0;
        if ((temp_v0_6 != 0) && (arg0->unkA8 != 0)) {
            var_v1_10 = func_8016BDA8(arg0->unk7D0) != 0;
        }
        var_v0_2 = arg0 + 0x830;
        if (var_v1_10 != 0) {
            func_801035E4(D_801C34EC + 0x6220, arg0->unk7CC);
            arg0->unk93 = 0U;
            var_v0_2 = arg0 + 0x830;
        }
    } else {
        var_v0_2 = arg0 + 0x830;
        if (temp_v0_6 == 0) {
            arg0->unk93 = 1U;
            var_v0_2 = arg0 + 0x830;
        }
    }
    if (var_v0_2->unk4B != 0) {
        var_v1_11 = 0;
        if ((arg0->unkA9 != 0) && (arg0->unkB8 == 0) && (arg0->unkB9 != 0) && (arg0->unkB6 != 0) && (arg0->unkB7 != 0) && ((u8) arg0->unkAA == 0)) {
            var_v1_11 = arg0->unkAD == 0;
        }
        if ((var_v1_11 != 0) && ((u8) arg0->unkAB != 0) && (arg0->unk2A2 == 0)) {
            arg0->unk2A2 = 1U;
            arg0->unk2A4 = 2;
            func_8010B62C(D_801C34EC + 0x6220, 0x69, 0);
        }
        var_v1_12 = 0;
        if ((arg0->unkBA != 0) && (arg0->unkB8 != 0) && (arg0->unkB9 == 0) && (arg0->unkB6 != 0) && (arg0->unkB7 != 0) && ((u8) arg0->unkAA == 0) && (arg0->unkAD == 0) && (arg0->unkA9 == 0)) {
            var_v1_12 = (s8) arg0->unk2A5 == 1;
        }
        if ((var_v1_12 != 0) && ((u8) arg0->unkAE != 0) && (arg0->unk2A3 == 0)) {
            arg0->unk2A3 = 1U;
            if ((arg0->unk2A8 << 0x18) > 0) {
                arg0->unk2A8 = (u8) (arg0->unk2A8 + 0xA);
            }
            func_8010B62C(D_801C34EC + 0x6220, 0x6A, 0);
        }
        var_v1_13 = 0;
        if ((arg0->unkBA != 0) && (arg0->unkB8 != 0) && (arg0->unkB9 == 0) && (arg0->unkB6 != 0) && (arg0->unkB7 != 0) && ((u8) arg0->unkAA == 0) && (arg0->unkAD == 0) && (arg0->unkA9 == 0)) {
            var_v1_13 = (s8) arg0->unk2A5 == 5;
        }
        if ((var_v1_13 != 0) && ((u8) arg0->unkAF != 0) && (arg0->unk2A1 == 0)) {
            arg0->unk2A1 = 1U;
            if ((arg0->unk2AC << 0x18) > 0) {
                arg0->unk2AC = (u8) (arg0->unk2AC + 0xA);
            }
            func_8010B62C(D_801C34EC + 0x6220, 0x6B, 0);
        }
    }
}
