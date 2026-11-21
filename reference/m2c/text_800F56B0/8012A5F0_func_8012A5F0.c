/* m2c reference for func_8012A5F0 @ 8012A5F0 (619 words). Generated; not compiled or validated. */
? func_8010B62C(void *, ?, ?);                      /* extern */
? func_8012AF9C(void *, ?, ?);                      /* extern */
? func_8012B094(void *, ?);                         /* extern */
s32 func_8012B180(void *);                          /* extern */
s32 func_8012B9AC(void *);                          /* extern */
? func_8012C55C(void *);                            /* extern */
s32 func_8012C64C(void *, s8);                      /* extern */
s32 func_8012CD0C(void *, s32);                     /* extern */
? func_8012CDF4(void *, s8);                        /* extern */
? func_8013BDCC(void *, ?, ?, ? *);                 /* extern */
? func_8013BEA8(void *);                            /* extern */
? func_8014E9F4(void *, void *);                    /* extern */
? func_80153B20(void *, s32, s32, s32);             /* extern */
? func_80153CA0(void *, s32);                       /* extern */
s16 func_80178A1C();                                /* extern */
s32 func_80178A70();                                /* extern */
extern ? D_801C31CC;
static void *D_801C34EC = NULL;
static void *D_801C34F4 = NULL;

void func_8012A5F0(void *arg0) {
    s16 temp_v0;
    s32 temp_v1_2;
    s32 temp_v1_7;
    s32 temp_v1_8;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a1;
    s32 var_s3;
    s32 var_s4;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v0_4;
    s32 var_v1;
    s32 var_v1_10;
    s32 var_v1_2;
    s32 var_v1_3;
    s32 var_v1_4;
    s32 var_v1_5;
    s32 var_v1_6;
    s32 var_v1_7;
    s32 var_v1_8;
    u8 temp_v1_3;
    u8 var_v1_9;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_s0;
    void *temp_s0_2;
    void *temp_v1;
    void *temp_v1_4;
    void *temp_v1_5;
    void *temp_v1_6;

    temp_v0 = func_80178A1C();
    arg0->unk20 = (s32) (arg0->unk20 + temp_v0);
    var_s3 = 0;
    arg0->unk24 = (s32) (arg0->unk24 + temp_v0);
    var_s4 = 0;
    if (arg0->unk28 < 0x3E8) {
        temp_v1 = arg0->unk0;
        if (temp_v1->unk87 == 0) {
            temp_v1_2 = temp_v1->unk7C0;
            if (temp_v1_2 != 0xA0) {
                if (temp_v1_2 < 0xA1) {
                    if (temp_v1_2 != 0x50) {
                        goto block_8;
                    }
                    goto block_7;
                }
                if (temp_v1_2 == 0xB0) {
                    goto block_7;
                }
block_8:
                arg0->unk28 = (s32) (arg0->unk28 + 2);
            } else {
block_7:
                arg0->unk28 = (s32) (arg0->unk28 + 2 + (func_80178A70() & 1));
            }
        }
    }
    if (((s8) arg0->unk43 < 6) && (((u8) arg0->unk43 >> 7) == 0)) {
        arg0->unk14 = (s32) (arg0->unk14 + temp_v0);
        if (arg0->unk18 < arg0->unk14) {
            arg0->unk14 = 0;
            func_8012AF9C(arg0, 0, 1);
        }
    }
    if (arg0->unk35 != 0) {
        var_v1 = 0;
        if (arg0->unk31 != 0) {
            var_v1 = arg0->unk3A == 0;
        }
        if (var_v1 != 0) {
            arg0->unk31 = 0U;
            func_8012B094(arg0, -1);
        }
    } else {
        arg0->unk31 = 1U;
    }
    if (arg0->unk36 != 0) {
        var_v1_2 = 0;
        if (arg0->unk32 != 0) {
            var_v1_2 = arg0->unk3A == 0;
        }
        var_a1 = 0;
        if (var_v1_2 != 0) {
            arg0->unk32 = 0U;
            func_8012B094(arg0, 1);
            var_a1 = 0;
        }
    } else {
        arg0->unk32 = 1U;
        var_a1 = 0;
    }
    temp_v1_3 = arg0->unk41;
    if ((D_801C34EC->unk123F8 != 0) && (D_801C34EC->unk12408->unk7C4 == arg0->unk0->unk7C4) && ((s8) temp_v1_3 != 0)) {
        var_a1 = (s8) arg0->unk42 == 0x32;
    }
    if (var_a1 != 0) {
        var_v1_3 = 0;
        if (arg0->unk37 != 0) {
            var_v1_3 = arg0->unk33 != 0;
        }
        temp_a0 = arg0 + (s8) temp_v1_3;
        if (var_v1_3 != 0) {
            if ((temp_a0->unk4C << 0x18) < (temp_a0->unk43 << 0x18)) {
                if ((s8) temp_v1_3 == 7) {
                    temp_v1_4 = arg0 + 7;
                    if (arg0->unk0->unk7DC >= 0x7D0) {
                        temp_v1_4->unk4C = (u8) (temp_v1_4->unk4C + 1);
                        var_v0 = arg0->unk0->unk7DC - 0x7D0;
                        goto block_39;
                    }
                } else {
                    temp_v1_5 = arg0->unk0;
                    if (temp_v1_5->unk7DC >= 0x3E8) {
                        temp_a0->unk4C = (u8) (temp_a0->unk4C + 1);
                        var_v0 = arg0->unk0->unk7DC - 0x3E8;
block_39:
                        arg0->unk0->unk7DC = var_v0;
                        arg0->unk33 = 0U;
                        temp_s0 = D_801C34EC + 0x496C;
                        temp_v1_6 = arg0->unk0;
                        func_80153B20(temp_s0, temp_v1_6->unk738 + 0x1C, temp_v1_6->unk738 + 0x14, func_8012CD0C(arg0, var_a1));
                    } else {
                        var_a0 = 0;
                        if (temp_v1_5->unk820 != 0) {
                            var_a0 = (D_801C34F4 + (temp_v1_5->unk750 * 4))->unk278 == 0;
                        }
                        if (var_a0 != 0) {
                            D_801C31CC.unk8 = 0x1D;
                            D_801C31CC.unkC = rand();
                            func_8013BDCC(D_801C34F4, 0, 0);
                        }
                    }
                }
            }
        } else if (arg0->unk37 == 0) {
            arg0->unk33 = 1U;
        }
        temp_s0_2 = D_801C34EC + 0x496C;
        func_80153CA0(temp_s0_2, func_8012CD0C(arg0));
        return;
    }
    if (D_801C34EC->unk12408->unk7C4 == arg0->unk0->unk7C4) {
        D_801C34EC->unk60A8->unkC = 0;
    }
    temp_v1_7 = arg0->unk0->unk7B8;
    if ((temp_v1_7 == 1) && ((s8) temp_v1_3 == 7) && (arg0->unk30 != 0)) {
        arg0->unk33 = (u8) temp_v1_7;
        arg0->unk4 = 0x3C;
    }
    var_v1_4 = 0;
    if (arg0->unk37 != 0) {
        var_v1_4 = arg0->unk4 >= 0x3C;
    }
    if (var_v1_4 != 0) {
        if (arg0->unk0->unk7B8 == 1) {
            var_v1_5 = 0;
            if (((s8) temp_v1_3 == 7) && (arg0->unk33 != 0)) {
                var_v1_5 = arg0->unk30 == 0;
            }
            if (var_v1_5 != 0) {
                arg0->unk1C = (s32) (arg0->unk1C + 1);
                var_v1_6 = arg0->unk1C;
                if (var_v1_6 >= 0x41) {
                    var_v1_6 = 0x40;
                }
                arg0->unk1C = var_v1_6;
                D_801C31CC.unk8 = 0x2B;
                D_801C31CC.unkC = 0x2B;
                var_v0_2 = arg0->unk1C * 0x7F;
                if (var_v0_2 < 0) {
                    var_v0_2 += 0x3F;
                }
                D_801C31CC.unk14 = (s32) (var_v0_2 >> 6);
                D_801C31CC.unk10 = -1;
                D_801C34F4->unk2B8 = 1;
                func_8013BDCC(D_801C34F4, 0, 0, &D_801C31CC);
            }
        }
        var_a0_2 = 0;
        if (((arg0->unk33 != 0) && (arg0->unk3A == 0)) || ((s8) arg0->unk42 != 0x32)) {
            var_a0_2 = 1;
        }
        if (var_a0_2 != 0) {
            arg0->unk20 = 0;
            if ((s8) arg0->unk42 != 0x32) {
                var_s4 = func_8012B9AC(arg0);
                goto block_86;
            }
            if ((arg0->unk43 != 0) && ((s8) temp_v1_3 == 0)) {
                var_v0_3 = 0 & 0xFF;
                if (func_8012B180(arg0) & 0xFF) {
                    var_s3 = 1;
                    goto block_86;
                }
            } else if ((s8) temp_v1_3 == 7) {
                var_v0_3 = 0 & 0xFF;
                if (arg0->unk30 != 0) {
                    var_s3 = 1;
                    func_8014E9F4(D_801C34EC + 0x496C, arg0->unk0);
                    arg0->unk30 = 0U;
                    var_v0_3 = 1 & 0xFF;
                }
            } else {
                var_v1_7 = 0;
                if ((arg0 + (s8) temp_v1_3)->unk43 != 0) {
                    var_v1_7 = (func_8012C64C(arg0, (s8) temp_v1_3) << 0x10) != 0;
                }
                if ((var_v1_7 != 0) && (var_s3 = 1, ((s8) temp_v1_3 == 8))) {
                    temp_v1_8 = arg0->unk0->unk7B8;
                    var_v0_3 = 1 & 0xFF;
                    if (temp_v1_8 == 1) {
                        arg0->unk3A = (u8) temp_v1_8;
                        goto block_86;
                    }
                } else {
block_86:
                    var_v0_3 = var_s3 & 0xFF;
                }
            }
            if ((var_v0_3 != 0) && ((s8) temp_v1_3 != 7)) {
                if ((s8) temp_v1_3 != 0) {
                    func_8012CDF4(arg0, (s8) temp_v1_3);
                } else if (arg0->unk0->unk7C0 != 0x20) {
                    func_8012CDF4(arg0, 0);
                }
            }
        }
    } else {
        var_v1_8 = 0;
        if (arg0->unk33 != 0) {
            var_v1_8 = arg0->unk4 >= 0x3D;
        }
        if ((var_v1_8 != 0) && (arg0->unk1C != 0) && ((arg0 + (s8) temp_v1_3)->unk43 != 0) && ((func_8012C64C(arg0, (s8) temp_v1_3) << 0x10) != 0)) {
            var_s3 = 1;
            if ((s8) temp_v1_3 == 7) {
                arg0->unk30 = 1U;
                D_801C31CC.unk8 = 0x2B;
                D_801C31CC.unkC = 0x2B;
                func_8013BEA8(D_801C34F4);
            }
        }
    }
    arg0->unkC = (s32) (arg0->unkC + temp_v0);
    if (arg0->unk38 != 0) {
        if (arg0->unk3E == 0) {
            arg0->unk8 = (s32) (arg0->unk8 + temp_v0);
            if (arg0->unk8 >= 0x1F5) {
                arg0->unk8 = 0x1F4;
                if ((arg0->unk40 << 0x18) > 0) {
                    func_8010B62C(D_801C34EC + 0x6220, 0x59, 5);
                }
                var_v1_9 = arg0->unk40;
                if (var_v1_9 & 0x80) {
                    var_v1_9 = 0;
                }
                arg0->unk40 = var_v1_9;
            }
        }
        if (arg0->unk34 != 0) {
            arg0->unk34 = 0U;
            if (arg0->unk8 == 0x1F4) {
                arg0->unkC = -0x18;
            } else {
                arg0->unkC = 0;
            }
            arg0->unk39 = (u8) (arg0->unk39 ^ 1);
            func_8012C55C(arg0);
            var_v0_4 = var_s3 & 0xFF;
            if (arg0->unk3E == 0) {
                var_v0_4 = var_s3 & 0xFF;
                if (arg0->unk40 != 0) {
                    arg0->unk10 = (s32) (arg0->unk10 - 1);
                    var_v0_4 = var_s3 & 0xFF;
                    if (arg0->unk10 == 0) {
                        arg0->unk40 = 0U;
                        var_v0_4 = var_s3 & 0xFF;
                    }
                }
            }
        } else {
            goto block_120;
        }
    } else {
        arg0->unk8 = (s32) (arg0->unk8 - temp_v0);
        var_v1_10 = 0;
        if (arg0->unk8 >= 0) {
            var_v1_10 = arg0->unk8;
        }
        arg0->unk8 = var_v1_10;
block_120:
        var_v0_4 = var_s3 & 0xFF;
        if (arg0->unkC >= 7) {
            arg0->unk34 = 1U;
            var_v0_4 = var_s3 & 0xFF;
        }
    }
    if ((var_v0_4 != 0) || (var_s4 & 0xFF)) {
        arg0->unk33 = 0U;
        arg0->unk1C = 0;
        arg0->unk4 = 0;
        return;
    }
    if (arg0->unk37 == 0) {
        temp_a0_2 = arg0->unk0;
        arg0->unk33 = 1U;
        arg0->unk3B = 0;
        if (temp_a0_2->unk7C0 == 0x30) {
            (D_801C34EC + 0x496C + temp_a0_2->unk78)->unk17D8 = 0;
        }
    }
    arg0->unk4 = (s32) (arg0->unk4 + temp_v0);
    if (arg0->unk0->unk7C0 == 0xF0) {
        arg0->unk4 = (s32) (arg0->unk4 + temp_v0);
    }
}
