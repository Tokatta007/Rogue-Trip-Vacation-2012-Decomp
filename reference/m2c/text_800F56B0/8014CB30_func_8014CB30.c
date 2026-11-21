/* m2c reference for func_8014CB30 @ 8014CB30 (434 words). Generated; not compiled or validated. */
? func_800FE250(void *, ?);                         /* extern */
s32 func_80120EB4(void *, s32);                     /* extern */
s32 func_80123940(void *, void *, ?, void *, void *); /* extern */
s32 func_80124DAC(?, s32);                          /* extern */
? func_8012CCFC(void *, ?);                         /* extern */
s32 func_801302A4(void *);                          /* extern */
? func_80130A58(void *);                            /* extern */
? func_8014C81C();                                  /* extern */
? func_8014D1F8(s32, void *);                       /* extern */
? func_8014EAA8(s32, void *);                       /* extern */
? func_8014F1BC(s32, void *);                       /* extern */
s32 func_8016B6DC(?, s32);                          /* extern */
u16 func_80176C1C(s16, ?, ?);                       /* extern */
u16 func_80176CBC(s16, s32, ?);                     /* extern */
s16 func_80178A1C();                                /* extern */
static void *D_801C34EC = NULL;

void func_8014CB30(s32 arg0, void *arg1) {
    ? var_a1;
    s16 temp_s2;
    s16 var_v0_4;
    s16 var_v0_5;
    s16 var_v0_6;
    s16 var_v0_7;
    s16 var_v0_8;
    s32 temp_s4;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 var_a0;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s0_3;
    s32 var_s0_4;
    s32 var_s3;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    u16 var_v0_9;
    void *temp_a0;
    void *temp_v1;
    void *temp_v1_2;

    temp_s4 = arg1->unk1C->unk7B4;
    if (arg1->unk64 != 0) {
        func_8014C81C();
        return;
    }
    var_a0 = func_80120EB4(D_801C34EC, arg1->unk14 + 0x1C);
    if ((D_801C34EC->unk12688 == 3) && (arg1->unk14->unk24 >= 0x1F41)) {
        var_a0 = 0x3840;
    }
    if (var_a0 < arg1->unk14->unk24) {
        arg1->unk14->unk24 = var_a0;
        temp_v1 = arg1->unk14;
        var_a1 = 0x71C;
        if ((s16) temp_v1->unk14 >= -0x3FF) {
            var_a1 = 0xE3;
        }
        arg1->unk14->unk14 = func_80176C1C((s16) temp_v1->unk14, var_a1, 5);
    }
    temp_s2 = func_80178A1C();
    if ((temp_s4 == 5) || (temp_s4 == 7)) {
        var_s0 = temp_s2 * 0xB;
        temp_v0 = func_80124DAC(2, arg1->unk1C->unk750);
        var_v0 = temp_v0;
        if (temp_v0 < 0) {
            var_v0 = -var_v0;
        }
        if (var_v0 >= 0x6F) {
            var_s0 = temp_s2 * 0x16;
        }
        if (temp_v0 > 0) {
            var_s0 = -var_s0;
        } else if (temp_v0 == 0) {
            var_s0 = 0;
        }
        temp_a0 = arg1->unk14;
        temp_a0->unk18 = (u16) (temp_a0->unk18 + var_s0);
        var_s3 = -(var_s0 * 0x2AA) / 120;
        if (var_s3 >= 0x2AB) {
            var_s3 = 0x2AA;
            goto block_24;
        }
        var_v0_2 = temp_s2 * 2;
        if (var_s3 < -0x2AA) {
            var_s3 = -0x2AA;
block_24:
            var_v0_2 = temp_s2 * 2;
        }
        var_s0_2 = ((var_v0_2 + temp_s2) * 4) - temp_s2;
        temp_v0_2 = func_80124DAC(3, arg1->unk1C->unk750);
        var_v0_3 = temp_v0_2;
        if (temp_v0_2 < 0) {
            var_v0_3 = -var_v0_3;
        }
        if (var_v0_3 >= 0x6F) {
            var_s0_2 *= 2;
        }
        if (temp_v0_2 < 0) {
            var_s0_2 = -var_s0_2;
        } else if (temp_v0_2 == 0) {
            var_s0_2 = 0;
        }
        var_v0_4 = arg1->unk14->unk14 + var_s0_2;
        goto block_54;
    }
    var_s0_3 = temp_s2 * 0xB;
    if (func_8016B6DC(0x40, arg1->unk1C->unk750) & 0xFF) {
        var_s0_3 = temp_s2 * 0x16;
    }
    if (func_8016B6DC(0x2000, arg1->unk1C->unk750) & 0xFF) {
        var_v0_5 = (s16) arg1->unk14->unk14;
        if (var_v0_5 < 0) {
            var_v0_5 = -var_v0_5;
        }
        if (var_v0_5 < 0x400) {
            var_v0_6 = arg1->unk14->unk18 + var_s0_3;
        } else {
            var_v0_6 = arg1->unk14->unk18 - var_s0_3;
        }
        arg1->unk14->unk18 = var_v0_6;
        var_s3 = -0x2AA;
    } else {
        var_s3 = 0;
        if (func_8016B6DC(0x8000, arg1->unk1C->unk750) & 0xFF) {
            var_v0_7 = (s16) arg1->unk14->unk14;
            if (var_v0_7 < 0) {
                var_v0_7 = -var_v0_7;
            }
            if (var_v0_7 < 0x400) {
                var_v0_8 = arg1->unk14->unk18 - var_s0_3;
            } else {
                var_v0_8 = arg1->unk14->unk18 + var_s0_3;
            }
            arg1->unk14->unk18 = var_v0_8;
            var_s3 = 0x2AA;
        }
    }
    if (func_8016B6DC(0x1000, arg1->unk1C->unk750) & 0xFF) {
        var_v0_4 = arg1->unk14->unk14 + var_s0_3;
        goto block_54;
    }
    if (func_8016B6DC(0x4000, arg1->unk1C->unk750) & 0xFF) {
        var_v0_4 = arg1->unk14->unk14 - var_s0_3;
block_54:
        arg1->unk14->unk14 = var_v0_4;
    }
    arg1->unk14->unk16 = func_80176CBC((s16) arg1->unk14->unk16, var_s3, 5);
    var_v0_9 = 0x2B;
    if (func_801302A4(arg1->unk1C) == 0) {
        if ((temp_s4 == 5) || (temp_s4 == 7)) {
            temp_v0_3 = func_80124DAC(1, arg1->unk1C->unk750);
            if (temp_v0_3 > 0) {
                var_v0_9 = ((s32) ((temp_v0_3 - 0x20) * 0x14) / 128) + 0x14;
            } else {
                var_v0_9 = 0x14;
                if (temp_v0_3 < 0) {
                    var_v0_9 = func_80176CBC((s16) arg1->unk38, 0xA, 1);
                }
            }
        } else {
            var_v0_9 = 0x1E;
            if (!(func_8016B6DC(0x80, arg1->unk1C->unk750) & 0xFF)) {
                var_v0_9 = 0xA;
                if (!(func_8016B6DC(0x20, arg1->unk1C->unk750) & 0xFF)) {
                    var_v0_9 = 0x14;
                }
            }
        }
    }
    arg1->unk38 = var_v0_9;
    temp_v1_2 = arg1->unk1C;
    var_s0_4 = 0;
    if (temp_v1_2->unk297 != 0) {
        if (((func_8016B6DC(1, temp_v1_2->unk750) & 0xFF) && (arg1->unk1C->unk268 >= 0xF)) || (arg1->unk1C->unk8C != 0)) {
            var_s0_4 = 1;
        }
        if (var_s0_4 != 0) {
            arg1->unk18 = func_80123940(D_801C34EC, arg1->unk1C, 7, arg1->unk14 + 0x1C, arg1->unk14 + 0x14);
            arg1->unk48 = 0x14;
            if (arg1->unk18 == 0) {
                func_8014EAA8(arg0, arg1);
            } else {
                func_8014D1F8(arg0, arg1);
                arg1->unk24 = 1;
                arg1->unk38 = 0x35U;
                arg1->unk44 = 0x64;
                arg1->unk46 = 0xF0;
                arg1->unk4C = 0;
                if (arg1->unk1C->unk7B8 == 1) {
                    func_80130A58(arg1->unk1C);
                }
            }
            arg1->unk1C->unk297 = 0U;
        }
    } else if (!(func_8016B6DC(1, temp_v1_2->unk750) & 0xFF)) {
        func_8012CCFC(arg1->unk1C + 0x264, 1);
    }
    func_8014F1BC(arg0, arg1);
    if (arg1->unk61 != 0) {
        func_800FE250(arg1->unk1C, 1);
        arg1->unk1C->unk8B = 1;
        arg1->unk1C->unk192 = 2;
    }
}
