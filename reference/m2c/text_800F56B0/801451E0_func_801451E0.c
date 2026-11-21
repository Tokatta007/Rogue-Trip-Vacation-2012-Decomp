/* m2c reference for func_801451E0 @ 801451E0 (895 words). Generated; not compiled or validated. */
? func_8013BEA8(s32);                               /* extern */
s32 func_80145FDC(void *);                          /* extern */
s32 func_80176C1C(s32, s32, ?, s32);                /* extern */
s32 func_80176CBC(s32, s32, s32, s32);              /* extern */
s32 func_8017D580(?);                               /* extern */
extern ? D_801C31CC;
static s32 D_801C34F4 = 0;

void func_801451E0(void *arg0) {
    s32 temp_a2;
    s32 temp_lo;
    s32 temp_s1;
    s32 temp_s1_2;
    s32 temp_v1;
    s32 temp_v1_3;
    s32 temp_v1_4;
    s32 var_a0;
    s32 var_a1;
    s32 var_a1_2;
    s32 var_a1_4;
    s32 var_a1_5;
    s32 var_a1_6;
    s32 var_a2;
    s32 var_a3;
    s32 var_a3_2;
    s32 var_s1;
    s32 var_s1_2;
    s32 var_s2;
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
    s32 var_v1_2;
    s32 var_v1_3;
    s32 var_v1_4;
    s32 var_v1_5;
    s32 var_v1_6;
    s32 var_v1_7;
    s32 var_v1_8;
    s8 var_a1_3;
    s8 var_v1_9;
    u8 temp_v0;
    u8 temp_v1_2;

    var_v0 = arg0->unk20C;
    if (var_v0 < 0) {
        var_v0 = -var_v0;
    }
    arg0->unk7A4 = var_v0;
    temp_s1 = arg0->unkD0;
    if (arg0->unkAC != 0) {
        var_v1 = 0;
        if ((arg0->unk28C >= 6) || (arg0->unk199 != 0)) {
            var_v1 = 1;
        }
        if (var_v1 != 0) {
            arg0->unk25C = (s32) (arg0->unkD0 + ((s32) arg0->unkD0 >> 2));
            arg0->unk28C = (s32) (arg0->unk28C - 5);
            if (arg0->unk28C < 0) {
                arg0->unk28C = 0;
            }
        } else {
            arg0->unk25C = (s32) arg0->unkD0;
            arg0->unkAC = 0U;
        }
    } else {
        arg0->unk25C = (s32) arg0->unkD0;
    }
    var_s2 = arg0->unkC4;
    arg0->unk114 = (s32) ((arg0->unk25C * 2) / 3);
    arg0->unk118 = (s32) (arg0->unk25C - ((s32) arg0->unk25C >> 3));
    arg0->unk11C = (s32) (arg0->unk25C - arg0->unkC0);
    if (arg0->unk20C < 0) {
        arg0->unk7FC = 0;
        arg0->unk804 = 0;
    } else {
        var_v0_2 = 1;
        if (arg0->unk20C >= arg0->unk114) {
            if (arg0->unk20C < arg0->unk118) {
                temp_v1 = arg0->unk7FC;
                var_v0_2 = 2;
                if (temp_v1 == 1) {
                    arg0->unk804 = temp_v1;
                    var_v0_2 = 2;
                }
            } else if (arg0->unk20C < arg0->unk11C) {
                if (arg0->unk7FC == 2) {
                    arg0->unk804 = 1;
                }
                var_v0_2 = 3;
            } else {
                var_v0_2 = 4;
                if (arg0->unk7FC == 3) {
                    arg0->unk804 = 1;
                    var_v0_2 = 4;
                }
            }
        }
        arg0->unk7FC = var_v0_2;
    }
    arg0->unk96 = 0U;
    if (arg0->unk7B8 == 1) {
        var_v1_2 = 0;
        if ((arg0->unkAC != 0) && (arg0->unkAB == 0)) {
            var_v1_2 = arg0->unk91 == 0;
        }
        if ((var_v1_2 != 0) && (arg0->unk20C < ((s32) arg0->unkD0 >> 1))) {
            arg0->unk96 = 1U;
        }
    }
    var_v1_3 = 0;
    if (arg0->unk96 == 0) {
        var_v1_3 = func_8017D580(4) > 0;
    }
    if (var_v1_3 != 0) {
        D_801C31CC.unk8 = 4;
        D_801C31CC.unkC = (s32) arg0->unk7C4;
        func_8013BEA8(D_801C34F4);
    }
    var_v1_4 = 0;
    if (arg0->unkAD != 0) {
        var_v1_4 = arg0->unk86 == 0;
    }
    if (var_v1_4 != 0) {
        if (arg0->unk20C != 0) {
            var_v1_5 = arg0->unkEC;
            if (arg0->unk7F != 0) {
                var_v1_5 += (s32) arg0->unkEC >> 2;
            }
            if (arg0->unk20C > 0) {
                arg0->unk20C = (s32) (arg0->unk20C - var_v1_5);
                if (arg0->unk20C >= 0) {

                } else {
                    goto block_45;
                }
            } else {
                arg0->unk20C = (s32) (arg0->unk20C + var_v1_5);
                if (arg0->unk20C > 0) {
block_45:
                    arg0->unk20C = 0;
                }
            }
        }
        if (arg0->unk260 != 0) {
            if (arg0->unk260 > 0) {
                arg0->unk260 = (s32) (arg0->unk260 - arg0->unkEC);
                if (arg0->unk260 < 0) {
                    arg0->unk260 = 0;
                }
            } else {
                arg0->unk260 = (s32) (arg0->unk260 + arg0->unkEC);
                if (arg0->unk260 > 0) {
                    arg0->unk260 = 0;
                }
            }
        }
    } else if (arg0->unkAB != 0) {
        if (arg0->unk20C > 0) {
            arg0->unk20C = (s32) (arg0->unk20C - arg0->unkC4);
        } else {
            if (arg0->unkAC != 0) {
                var_s1 = -arg0->unkD0;
            } else {
                var_s1 = (temp_s1 >> 2) - arg0->unkD0;
            }
            var_a1 = var_s1;
            if ((u32) ((arg0->unkAB + 1) & 0xFF) >= 3U) {
                var_a1 = ((s8) arg0->unkAB * var_s1) / 127;
            }
            var_a2 = 1;
            goto block_90;
        }
    } else if (arg0->unkAA != 0) {
        if (arg0->unkAC != 0) {
            var_v1_6 = 0;
            if (arg0->unk96 != 0) {
                var_v1_6 = (s16) arg0->unk712 < 0x3C;
            }
            if (var_v1_6 != 0) {
                var_s2 = ((s16) arg0->unk712 * arg0->unkC4) / 60;
            } else {
                var_s2 = arg0->unkC4 * 2;
            }
            temp_s1_2 = arg0->unkD0 + ((s32) arg0->unkD0 >> 2);
            var_s1_2 = temp_s1_2 + ((arg0->unk1A2 * temp_s1_2) / 100);
            var_v1_7 = var_s1_2;
            if (arg0->unk25C >= var_s1_2) {
                var_v1_7 = arg0->unk25C;
            }
            arg0->unk25C = var_v1_7;
        } else {
            var_s1_2 = arg0->unkD0;
            if ((u32) ((arg0->unkAA + 1) & 0xFF) >= 3U) {
                var_s1_2 = ((s8) arg0->unkAA * var_s1_2) / 127;
            }
        }
        if (arg0->unk508 == 0) {
            if (arg0->unk20C != 0) {
                if (arg0->unk20C > 0) {
                    arg0->unk20C = (s32) (arg0->unk20C - arg0->unkC0);
                    if (arg0->unk20C >= 0) {

                    } else {
                        goto block_97;
                    }
                } else {
                    var_v0_3 = arg0->unk20C + arg0->unkC0;
                    goto block_96;
                }
            }
        } else {
            var_a1 = var_s1_2;
            if (arg0->unk20C < var_s1_2) {
                if (arg0->unk20C < 0) {
                    var_a1_2 = arg0->unkEC;
                } else if (arg0->unk20C < arg0->unk114) {
                    var_a1_2 = var_s2 - ((s32) ((var_s2 - arg0->unkC0) * arg0->unk7A4) / (s32) arg0->unk114);
                } else if (arg0->unkAC != 0) {
                    var_a1_2 = arg0->unkC0;
                } else {
                    var_a1_2 = (s32) arg0->unkC0 >> 1;
                }
                arg0->unk20C = (s32) (arg0->unk20C + var_a1_2);
                if (arg0->unk20C >= var_s1_2) {
                    arg0->unk20C = (s32) (var_s1_2 - 1);
                }
            } else {
                var_a2 = 3;
block_90:
                arg0->unk20C = func_80176CBC(arg0->unk20C, var_a1, var_a2);
            }
        }
    } else if (arg0->unk20C != 0) {
        if (arg0->unk20C > 0) {
            arg0->unk20C = (s32) (arg0->unk20C - arg0->unkBC);
            if (arg0->unk20C >= 0) {

            } else {
                goto block_97;
            }
        } else {
            var_v0_3 = arg0->unk20C + arg0->unkBC;
block_96:
            arg0->unk20C = var_v0_3;
            if (arg0->unk20C > 0) {
block_97:
                arg0->unk20C = 0;
            }
        }
    }
    var_a3 = arg0->unkE0;
    if (arg0->unkA9 != 0) {
        var_a3 *= 2;
    } else if (arg0->unk7B8 == 1) {
        var_v1_8 = 0;
        if (((u32) ((arg0->unkAE + 1) & 0xFF) >= 3U) || ((u32) ((arg0->unkAF + 1) & 0xFF) >= 3U)) {
            var_v1_8 = 1;
        }
        if (var_v1_8 != 0) {
            temp_v0 = arg0->unkAF;
            temp_v1_2 = arg0->unkAE;
            var_a1_3 = (s8) temp_v1_2;
            if ((s8) temp_v1_2 < 0) {
                var_a1_3 = -var_a1_3;
            }
            var_v1_9 = (s8) temp_v0;
            if ((s8) temp_v0 < 0) {
                var_v1_9 = -var_v1_9;
            }
            if (var_a1_3 < var_v1_9) {
                var_a1_3 = var_v1_9;
            }
            var_a3 = (arg0->unkE0 * var_a1_3) / 127;
            if (var_a1_3 >= 0x6F) {
                var_a3 *= 2;
            }
            var_v1_10 = 0;
            if (arg0->unk20C > 0) {
                var_v1_10 = arg0->unkAB != 0;
            }
            if (var_v1_10 != 0) {
                arg0->unk84 = 1;
            }
        }
    }
    if (arg0->unkA5 != 0) {
        if (arg0->unk81 != 0) {
            if (arg0->unk7A4 < arg0->unkCC) {
                arg0->unk20C = (s32) (arg0->unk20C + arg0->unkC4);
            }
            arg0->unk21C = (s32) (arg0->unkE0 * 8);
            arg0->unk84 = 1;
        } else {
            arg0->unkA5 = 0U;
        }
    } else {
        if (arg0->unkAF != 0) {
            if ((u32) ((arg0->unkAF + 1) & 0xFF) >= 3U) {
                var_a3 = ((s8) arg0->unkAF * var_a3) / 127;
            }
            var_a1_4 = var_a3;
            goto block_131;
        }
        if (arg0->unkAE != 0) {
            if ((u32) ((arg0->unkAE + 1) & 0xFF) >= 3U) {
                var_a3 = ((s8) arg0->unkAE * var_a3) / 127;
            }
            var_a1_4 = -var_a3;
block_131:
            arg0->unk21C = func_80176CBC(arg0->unk21C, var_a1_4, arg0->unkE8, var_a3);
        } else {
            if (arg0->unk21C > 0) {
                arg0->unk21C = (s32) ((s32) arg0->unk21C >> 1);
                var_v0_4 = arg0->unk21C < arg0->unkDC;
                goto block_136;
            }
            if (arg0->unk21C < 0) {
                arg0->unk21C = (s32) ((s32) arg0->unk21C >> 1);
                var_v0_4 = -arg0->unkDC < arg0->unk21C;
block_136:
                if (var_v0_4 != 0) {
                    arg0->unk21C = 0;
                }
            }
        }
    }
    var_a3_2 = arg0->unkE0;
    if (arg0->unkA9 != 0) {
        var_a3_2 *= 2;
    }
    if (arg0->unkB0 != 0) {
        var_a1_5 = -var_a3_2;
        if ((u32) ((arg0->unkB0 + 1) & 0xFF) >= 3U) {
            var_a3_2 = ((s8) arg0->unkB0 * var_a3_2) / 127;
            var_a1_5 = -var_a3_2;
        }
        goto block_146;
    }
    if (arg0->unkB1 != 0) {
        var_a1_5 = var_a3_2;
        if ((u32) ((arg0->unkB1 + 1) & 0xFF) >= 3U) {
            var_a3_2 = ((s8) arg0->unkB1 * var_a3_2) / 127;
            var_a1_5 = var_a3_2;
        }
block_146:
        arg0->unk214 = func_80176CBC(arg0->unk214, var_a1_5, (s32) arg0->unkE8 >> 1, var_a3_2);
    } else if (arg0->unk214 != 0) {
        temp_v1_3 = (s32) arg0->unk214 >> 3;
        if (temp_v1_3 != 0) {
            arg0->unk214 = (s32) (arg0->unk214 - temp_v1_3);
        } else {
            arg0->unk214 = 0;
        }
    }
    var_v1_11 = 0;
    if ((arg0->unk218 != 0) && (arg0->unk9B == 0)) {
        var_v1_11 = arg0->unk9A == 0;
    }
    if (var_v1_11 != 0) {
        temp_v1_4 = (s32) arg0->unk218 >> 3;
        if (temp_v1_4 != 0) {
            arg0->unk218 = (s32) (arg0->unk218 - temp_v1_4);
        } else {
            arg0->unk218 = 0;
        }
    }
    var_a0 = 0x2AA;
    if (arg0->unkF4 == 0) {
        arg0->unk86 = 0U;
        if (arg0->unk7C0 == 0x100) {
            var_a0 = 0xE3;
        }
        temp_a2 = -var_a0;
        temp_lo = temp_a2 * arg0->unk21C;
        var_v0_5 = arg0->unk1F4;
        if (var_v0_5 < 0) {
            var_v0_5 = -var_v0_5;
        }
        var_a1_6 = temp_lo / (s32) arg0->unkE0;
        if (var_a0 < var_v0_5) {
            var_a1_6 = var_a0;
            if (arg0->unk1F4 <= 0) {
                var_a1_6 = temp_a2;
            }
        }
        arg0->unk1F4 = func_80176C1C(arg0->unk1F4, var_a1_6, 5, temp_lo);
    } else {
        var_v1_12 = 0;
        if ((arg0->unk90 != 0) || (arg0->unk9A != 0) || (arg0->unk9B != 0)) {
            var_v1_12 = 1;
        }
        if ((var_v1_12 != 0) || ((arg0->unk80 != 0) && (arg0->unk86 == 0) && (func_80145FDC(arg0) != 0))) {
            arg0->unk86 = 1U;
        }
    }
    if (arg0->unk208 != 0) {
        arg0->unk208 = func_80176CBC(arg0->unk208, 0, 9);
    }
    if (arg0->unk210 != 0) {
        arg0->unk210 = func_80176CBC(arg0->unk210, 0, 9);
    }
    var_v0_6 = arg0->unk20C;
    if (var_v0_6 < 0) {
        var_v0_6 = -var_v0_6;
    }
    arg0->unk7A4 = var_v0_6;
}
