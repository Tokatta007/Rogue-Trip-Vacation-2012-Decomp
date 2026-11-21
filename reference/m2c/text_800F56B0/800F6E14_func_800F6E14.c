/* m2c reference for func_800F6E14 @ 800F6E14 (785 words). Generated; not compiled or validated. */
s32 func_800FF594(s32, s32);                        /* extern */
? func_801253C8(void *, s32);                       /* extern */
static void *D_801C34EC = NULL;

s32 func_800F6E14(void *arg0, s32 arg1, void *arg2) {
    s32 temp_a0;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s0_3;
    s32 var_s0_4;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v1;
    s32 var_v1_2;
    s32 var_v1_3;
    s32 var_v1_4;
    s32 var_v1_5;
    u32 temp_v1;
    void *temp_a0_10;
    void *temp_a0_11;
    void *temp_a0_12;
    void *temp_a0_13;
    void *temp_a0_14;
    void *temp_a0_15;
    void *temp_a0_2;
    void *temp_a0_3;
    void *temp_a0_4;
    void *temp_a0_5;
    void *temp_a0_6;
    void *temp_a0_7;
    void *temp_a0_8;
    void *temp_a0_9;

    var_s0_3 = 0;
    func_801253C8(arg2, arg0 + 0x1E4);
    temp_v1 = D_801C34EC->unk12688;
    temp_a0 = func_800FF594(arg0->unk44, arg0->unk40 + 0x1C);
    switch (temp_v1) {                              /* switch 1 */
    case 0:                                         /* switch 1 */
        switch (arg1) {                             /* switch 2; irregular */
        case 0:                                     /* switch 2 */
            if (arg0->unk40->unk20 >= 0xFA1) {
                arg2->unk0 = -0x2260;
                return 0xE;
            }
            if (temp_a0 < 5) {
                var_s0_3 = (temp_a0 != 4) * 4;
            } else {
block_129:
                var_s0_3 = 7;
            }
        default:                                    /* switch 1 */
block_216:
            var_v0 = var_s0_3;
            return var_v0;
        case 1:                                     /* switch 2 */
            if (arg0->unk40->unk20 >= 0xFA1) {
                arg2->unk0 = 0x2260;
                return 0xE;
            }
            if (temp_a0 < 5) {
                var_v0 = 3;
                if (temp_a0 == 3) {
                    var_s0_3 = 0;
                    goto block_216;
                }
            } else {
block_165:
                var_s0_3 = 9;
                goto block_216;
            }
            /* Duplicate return node #217. Try simplifying control flow for better match */
            return var_v0;
        default:                                    /* switch 2 */
            var_s0 = 0xF;
            if (temp_a0 >= 5) {
                var_s0 = 0xE;
                if (arg0->unk40->unk20 < -0x640) {
                    var_s0 = 0x10;
                }
            }
            if (arg1 == 2) {
                arg2->unk0 = 0x2580;
                return var_s0;
            }
            arg2->unk0 = -0x2580;
            return var_s0;
        }
        break;
    case 1:                                         /* switch 1 */
        if (((u32) (temp_a0 - 5) >= 2U) && (temp_a0 != 0xB)) {
            if (arg1 < 3) {
                if (arg1 <= 0) {
                    if (arg1 != 0) {
                        goto block_29;
                    }
                    goto block_27;
                }
                goto block_29;
            }
            if (arg1 == 3) {
block_27:
                var_s0_3 = 2;
                if ((u32) (arg0->unk40->unk20 + 0x1400) < 0x1A01U) {
                    arg2->unk0 = -0x3840;
                    return 4;
                }
                goto block_216;
            }
block_29:
            var_s0_3 = 3;
            if ((u32) (arg0->unk40->unk20 + 0x1400) < 0x1A01U) {
                arg2->unk0 = 0x1770;
                return 4;
            }
            goto block_216;
        }
block_98:
        var_s0_3 = rand() & 1;
        goto block_216;
    case 2:                                         /* switch 1 */
        if (temp_a0 < 5) {
            var_v1 = 0;
            if ((arg0->unk74 != 0) || (arg0->unk952 != 0)) {
                var_v1 = 1;
            }
            var_s0_3 = 8;
            if ((var_v1 == 0) && (var_s0_3 = 9, (arg0->unk75 == 0))) {
                var_v0 = 0x19;
                if (rand() & 1) {
                    var_s0_3 = 0x17;
                    goto block_216;
                }
            } else {
                goto block_216;
            }
            /* Duplicate return node #217. Try simplifying control flow for better match */
            return var_v0;
        }
        if (arg1 != 1) {
            if (arg1 < 2) {
                if (arg1 != 0) {
                    return 0;
                }
                temp_a0_2 = arg0->unk40;
                var_s0_3 = 0x11;
                if (temp_a0_2->unk20 < 0x1401) {
                    var_s0_3 = 8;
                    if (temp_a0_2->unk20 < -0x95F) {
                        if (temp_a0_2->unk20 < -0x1F3F) {
                            goto block_61;
                        }
                        goto block_63;
                    }
                }
                goto block_216;
            }
            switch (arg1) {                         /* switch 3; irregular */
            case 2:                                 /* switch 3 */
                temp_a0_3 = arg0->unk40;
                if (temp_a0_3->unk20 < 0x1401) {
                    if (temp_a0_3->unk20 >= -0x31F) {
                        goto block_56;
                    }
                    var_s0_3 = 0x19;
                    if (temp_a0_3->unk20 < -0x1F3F) {
                        goto block_58;
                    }
                } else {
                    goto block_58;
                }
                goto block_216;
            case 3:                                 /* switch 3 */
                temp_a0_4 = arg0->unk40;
                if (temp_a0_4->unk20 < 0x1401) {
                    if (temp_a0_4->unk20 >= -0x31F) {
block_61:
                        var_s0_3 = (rand() & 1) + 0x11;
                    } else {
                        var_s0_3 = 0x17;
                        if (temp_a0_4->unk20 < -0x1F3F) {
                            goto block_63;
                        }
                    }
                } else {
block_63:
                    var_s0_3 = (rand() & 1) + 0xB;
                }
                goto block_216;
            default:                                /* switch 3 */
                return 0;
            }
        } else {
            temp_a0_5 = arg0->unk40;
            var_s0_3 = 0x15;
            if (temp_a0_5->unk20 < 0x1401) {
                var_s0_3 = 9;
                if (temp_a0_5->unk20 < -0x95F) {
                    if (temp_a0_5->unk20 < -0x1F3F) {
block_56:
                        var_s0_3 = (rand() & 1) + 0x14;
                    } else {
block_58:
                        var_s0_3 = (rand() & 1) + 0xE;
                    }
                }
            }
            goto block_216;
        }
        break;
    case 3:                                         /* switch 1 */
        if (arg1 != 1) {
            if (arg1 < 2) {
                if (arg1 != 0) {
                    return 0;
                }
                temp_a0_6 = arg0->unk40;
                var_s0_3 = 1;
                if (temp_a0_6->unk24 < 0x1F41) {
                    if (temp_a0_6->unk1C >= 0xFF1) {
                        var_s0_3 = 0xB;
                        goto block_216;
                    }
                    var_s0_3 = 8;
                    if (temp_a0_6->unk1C <= 0) {
                        var_s0_2 = 2;
                        if (temp_a0_6->unk20 <= 0) {
                            goto block_82;
                        }
                        goto block_80;
                    }
                    goto block_216;
                }
                goto block_216;
            }
            switch (arg1) {                         /* switch 4; irregular */
            case 2:                                 /* switch 4 */
                temp_a0_7 = arg0->unk40;
                var_s0_3 = 6;
                if (temp_a0_7->unk24 < 0x1F41) {
                    var_s0_3 = 0x10;
                    if (temp_a0_7->unk1C >= -0xFF0) {
                        var_s0_3 = 3;
                        if (temp_a0_7->unk1C >= 0xFF1) {
                            var_s0_3 = 0x12;
                        }
                    }
                }
                goto block_216;
            case 3:                                 /* switch 4 */
                var_s0_3 = 2;
                if (arg0->unk40->unk1C < -0xFF0) {
                    var_s0_3 = 3;
                }
                goto block_216;
            default:                                /* switch 4 */
                return 0;
            }
        } else {
            temp_a0_8 = arg0->unk40;
            if (temp_a0_8->unk24 < 0x1F41) {
                var_s0_3 = 0xD;
                if (temp_a0_8->unk1C >= -0xFF0) {
                    var_s0_2 = 3;
                    if (temp_a0_8->unk20 > 0) {
block_80:
                        arg2->unk4 = -0x1F40;
                        return var_s0_2;
                    }
block_82:
                    arg2->unk4 = 0x1F40;
                    return var_s0_2;
                }
                goto block_216;
            }
block_180:
            var_s0_3 = 4;
            goto block_216;
        }
        break;
    case 5:                                         /* switch 1 */
        if (arg1 != 1) {
            if (arg1 < 2) {
                if (arg1 != 0) {
                    return 0;
                }
                if (temp_a0 == 5) {
                    if (arg0->unk40->unk1C > 0) {
                        goto block_98;
                    }
                    var_s0_3 = 8;
                    if (arg0->unk1E4 > 0) {
                        var_s0_3 = 0xA;
                    }
                    goto block_216;
                }
                if (temp_a0 != 8) {
                    arg2->unk0 = -0x12C0;
                    return 5;
                }
                goto block_116;
            }
            switch (arg1) {                         /* switch 5; irregular */
            case 2:                                 /* switch 5 */
                if (temp_a0 == 5) {
                    var_s0_3 = 5;
                    if (arg0->unk40->unk1C >= 0) {
                        var_v0 = 9;
                        if ((rand() & 3) == 1) {
                            var_s0_3 = 2;
                            goto block_216;
                        }
                    } else {
                        goto block_216;
                    }
                    /* Duplicate return node #217. Try simplifying control flow for better match */
                    return var_v0;
                }
                var_s0_3 = 9;
                if (temp_a0 == 9) {
                    goto block_112;
                }
                goto block_216;
            case 3:                                 /* switch 5 */
                var_s0_3 = 8;
                if (temp_a0 == 8) {
                    if (rand() & 1) {
                        var_s0_3 = (rand() & 1) + 3;
                        goto block_216;
                    }
block_116:
                    arg2->unk0 = -0x640;
                    return 5;
                }
                goto block_216;
            default:                                /* switch 5 */
                return 0;
            }
        } else {
            var_s0_3 = 9;
            if (temp_a0 == 9) {
                var_v0 = 7;
                if ((rand() & 7) != arg1) {
block_112:
                    arg2->unk0 = 0xC80;
                    return 5;
                }
                /* Duplicate return node #217. Try simplifying control flow for better match */
                return var_v0;
            }
            goto block_216;
        }
        break;
    case 6:                                         /* switch 1 */
        if (arg1 != 1) {
            if (arg1 < 2) {
                if (arg1 != 0) {
                    return 0;
                }
                var_s0_3 = 2;
                if (temp_a0 != 6) {
                    var_s0_3 = 4;
                    if (arg0->unk40->unk20 > 0) {
                        var_s0_3 = 6;
                    }
                }
                goto block_216;
            }
            switch (arg1) {                         /* switch 6; irregular */
            case 2:                                 /* switch 6 */
                var_s0_3 = 5;
                if (temp_a0 != 1) {
                    var_s0_3 = 3;
                    if (arg0->unk40->unk20 < 0) {
                        var_s0_3 = 1;
                    }
                }
                goto block_216;
            case 3:                                 /* switch 6 */
                var_s0_3 = 4;
                if (temp_a0 != 0) {
                    var_s0_3 = ((s32) ~arg0->unk40->unk20 >> 0x1F) & 2;
                }
                goto block_216;
            default:                                /* switch 6 */
                return 0;
            }
        } else {
            var_s0_3 = 3;
            if (temp_a0 != 7) {
                var_s0_3 = 5;
                if (arg0->unk40->unk20 > 0) {
                    goto block_129;
                }
            }
            goto block_216;
        }
        break;
    case 7:                                         /* switch 1 */
        if (arg1 != 1) {
            if (arg1 < 2) {
                if (arg1 != 0) {
                    return 0;
                }
                var_s0_3 = 8;
                if (arg0->unk40->unk24 < 0x190) {
                    var_s0_3 = 2;
                }
                goto block_216;
            }
            switch (arg1) {                         /* switch 7; irregular */
            case 2:                                 /* switch 7 */
                if (arg0->unk40->unk1C >= 0x321) {
                    arg2->unk0 = 0;
                    return 7;
                }
                arg2->unk0 = 0x2EE0;
                return 7;
            case 3:                                 /* switch 7 */
                var_s0_3 = 3;
                if (arg0->unk40->unk20 < -0x960) {
                    var_s0_3 = 0xA;
                }
                goto block_216;
            default:                                /* switch 7 */
                return 0;
            }
        } else {
            var_s0_3 = 9;
            if (arg0->unk40->unk24 < 0x190) {
                var_s0_3 = 7;
            }
            goto block_216;
        }
        break;
    case 8:                                         /* switch 1 */
        if (arg1 != 1) {
            if (arg1 < 2) {
                if (arg1 != 0) {
                    return 0;
                }
                var_v0_2 = arg0->unk40->unk20;
                var_s0_4 = 5;
                goto block_162;
            }
            switch (arg1) {                         /* switch 8; irregular */
            case 2:                                 /* switch 8 */
                var_v0_2 = arg0->unk40->unk20;
                var_s0_4 = 4;
block_162:
                var_v0 = var_s0_4;
                if (var_v0_2 > 0) {
                    var_s0_3 = 8;
                    goto block_216;
                }
                /* Duplicate return node #217. Try simplifying control flow for better match */
                return var_v0;
            case 3:                                 /* switch 8 */
                var_s0_3 = 6;
                if (arg0->unk40->unk20 >= -0x31F) {
                    goto block_165;
                }
                goto block_216;
            default:                                /* switch 8 */
                return 0;
            }
        } else {
            var_s0_3 = 3;
            if (arg0->unk40->unk20 > 0) {
                var_s0_3 = 2;
            }
            goto block_216;
        }
        break;
    case 9:                                         /* switch 1 */
        if (arg1 != 1) {
            if (arg1 < 2) {
                if (arg1 != 0) {
                    return 0;
                }
                temp_a0_9 = arg0->unk40;
                var_s0_3 = 0;
                if (temp_a0_9->unk20 >= 0x320) {
                    var_s0_3 = 2;
                    if (temp_a0_9->unk20 >= 0x2581) {
                        var_s0_3 = 5;
                    }
                }
                goto block_216;
            }
            switch (arg1) {                         /* switch 9; irregular */
            case 2:                                 /* switch 9 */
                temp_a0_10 = arg0->unk40;
                var_s0_3 = 7;
                if (temp_a0_10->unk20 < 0x2EE1) {
                    var_s0_3 = 1;
                    if (temp_a0_10->unk20 >= 0x12C1) {
                        goto block_180;
                    }
                }
                goto block_216;
            case 3:                                 /* switch 9 */
                temp_a0_11 = arg0->unk40;
                var_s0_3 = 5;
                if (temp_a0_11->unk20 < 0x2EE1) {
                    var_s0_3 = (temp_a0_11->unk20 >= 0x12C1) * 4;
                }
                goto block_216;
            default:                                /* switch 9 */
                return 0;
            }
        } else {
            var_s0_3 = 1;
            if (arg0->unk40->unk20 >= 0x2581) {
                var_s0_3 = 7;
            }
            goto block_216;
        }
        break;
    case 10:                                        /* switch 1 */
        if (arg1 != 1) {
            if (arg1 < 2) {
                var_v0_3 = -0xC80;
                if (arg1 != 0) {
                    goto block_192;
                }
                arg2->unk0 = -0xC80;
                arg2->unk4 = 0xC80;
                return 0;
            }
            var_v0_3 = -0xC80;
            if (arg1 != 2) {
                goto block_192;
            }
            arg2->unk0 = 0xC80;
            arg2->unk4 = -0xC80;
            return 0;
        }
        var_v0_3 = 0xC80;
block_192:
        arg2->unk0 = var_v0_3;
        arg2->unk4 = var_v0_3;
        return 0;
    case 11:                                        /* switch 1 */
        if (arg1 != 1) {
            if (arg1 < 2) {
                if (arg1 != 0) {
                    return 0;
                }
                temp_a0_12 = arg0->unk40;
                var_v1_2 = 0;
                if (temp_a0_12->unk20 >= -0x63F) {
                    var_v1_2 = temp_a0_12->unk1C < -0x28A0;
                }
                var_s0_3 = 3;
                if (var_v1_2 != 0) {
                    var_s0_3 = 2;
                }
                goto block_216;
            }
            switch (arg1) {                         /* switch 10; irregular */
            case 2:                                 /* switch 10 */
                temp_a0_13 = arg0->unk40;
                var_v1_3 = 0;
                if (temp_a0_13->unk20 < -0x640) {
                    var_v1_3 = temp_a0_13->unk1C >= -0x15DF;
                }
                var_s0_3 = 5;
                if (var_v1_3 != 0) {
                    var_s0_3 = 4;
                }
                goto block_216;
            case 3:                                 /* switch 10 */
                temp_a0_14 = arg0->unk40;
                var_v1_4 = 0;
                if (temp_a0_14->unk20 < -0x640) {
                    var_v1_4 = temp_a0_14->unk1C < -0x15E0;
                }
                var_s0_3 = 2;
                if (var_v1_4 != 0) {
                    var_s0_3 = 3;
                }
                goto block_216;
            default:                                /* switch 10 */
                return 0;
            }
        } else {
            temp_a0_15 = arg0->unk40;
            var_v1_5 = 0;
            if (temp_a0_15->unk20 >= -0x63F) {
                var_v1_5 = temp_a0_15->unk1C >= -0x95F;
            }
            var_s0_3 = 4;
            if (var_v1_5 != 0) {
                var_s0_3 = 5;
            }
            goto block_216;
        }
        break;
    }
}
