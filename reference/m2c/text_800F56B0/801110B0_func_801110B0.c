/* m2c reference for func_801110B0 @ 801110B0 (286 words). Generated; not compiled or validated. */
? func_801122A0(void *);                            /* extern */
? func_801122D0(void *);                            /* extern */
? func_80112308(void *);                            /* extern */
? func_80112338(void *);                            /* extern */
s32 func_80124DAC(?, s32);                          /* extern */
s32 func_8016B6DC(?, s32);                          /* extern */
s32 func_8016BDC0(s32);                             /* extern */
s16 func_80178A1C();                                /* extern */

void func_801110B0(void *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 var_s1_2;
    s32 var_s2;
    s32 var_v0;
    s32 var_v1;
    s32 var_v1_2;
    u8 var_s1;
    u8 var_s3;
    u8 var_s4;

    temp_v0 = func_8016BDC0(arg0->unk10);
    if ((temp_v0 == 5) || (temp_v0 == 7)) {
        var_s2 = 0;
        var_s1 = 0;
        var_s3 = 0;
        var_s4 = 0;
        temp_v0_2 = func_80124DAC(2, arg0->unk10);
        if (temp_v0_2 >= 0x7E) {
            var_s4 = 1;
        } else if (temp_v0_2 < -0x7D) {
            var_s3 = 1;
        }
        temp_v0_3 = func_80124DAC(3, arg0->unk10);
        if (temp_v0_3 >= 0x7E) {
            var_s1 = 1;
        } else if (temp_v0_3 < -0x7D) {
            var_s2 = 1;
        }
    } else {
        var_s2 = 0;
        if (func_8016B6DC(0x10, arg0->unk10) & 0xFF) {
            var_s4 = func_8016B6DC(0x8000, arg0->unk10) & 0xFF;
            var_s3 = func_8016B6DC(0x2000, arg0->unk10) & 0xFF;
            var_s1 = func_8016B6DC(0x1000, arg0->unk10) & 0xFF;
            var_s2 = func_8016B6DC(0x4000, arg0->unk10) & 0xFF;
        } else {
            var_s1 = 0;
            var_s3 = 0;
            var_s4 = 0;
            func_801122A0(arg0);
        }
    }
    var_v1 = 0;
    if ((arg0->unk31 != 0) || (arg0->unk3A != 0) || (arg0->unk42 != 0)) {
        var_v1 = 1;
    }
    if (var_v1 != 0) {
        func_801122A0(arg0);
    } else {
        var_v1_2 = 0;
        if ((arg0->unk24 == 0) && (arg0->unk26 == 0)) {
            var_v1_2 = arg0->unk28 == 0;
        }
        if (var_v1_2 != 0) {
            arg0->unk24 = var_s4;
            arg0->unk26 = var_s3;
            arg0->unk28 = var_s1;
            arg0->unk14 = 0;
        } else if (arg0->unk24 != 0) {
            arg0->unk28 = 0U;
            arg0->unk26 = (u8) arg0->unk28;
            if (arg0->unk25 == 0) {
                if (var_s3 != 0) {
                    arg0->unk25 = 1U;
                    arg0->unk14 = 0;
                } else if (var_s1 != 0) {
                    arg0->unk24 = 0U;
                    arg0->unk28 = 1U;
                }
            } else if (arg0->unk2C == 0) {
                var_v0 = 1;
                if (var_s1 == 0) {
                    var_v0 = 4;
                    if (var_s2 != 0) {
                        goto block_43;
                    }
                } else {
                    goto block_43;
                }
                goto block_44;
            }
        } else if (arg0->unk26 != 0) {
            if (arg0->unk27 == 0) {
                if (var_s4 != 0) {
                    arg0->unk27 = 1U;
                    arg0->unk14 = 0;
                } else if (var_s1 != 0) {
                    arg0->unk26 = 0U;
                    arg0->unk28 = 1U;
                }
            } else if (arg0->unk2C == 0) {
                var_v0 = 2;
                if ((var_s1 != 0) || (var_v0 = 3, (var_s2 != 0))) {
block_43:
                    arg0->unk0 = var_v0;
                }
block_44:
                if (arg0->unk0 != -1) {
                    arg0->unk2C = 1U;
                    arg0->unk14 = 0;
                    func_801122D0(arg0);
                    func_80112308(arg0);
                    func_80112338(arg0);
                }
            }
        } else if (arg0->unk28 != 0) {
            if (arg0->unk29 == 0) {
                if (var_s2 != 0) {
                    arg0->unk29 = 1U;
                    arg0->unk2B = 0U;
                    arg0->unk14 = 0;
                } else if (var_s3 != 0) {
                    arg0->unk29 = 1U;
                    arg0->unk2B = 1U;
                    arg0->unk14 = 0;
                }
            } else if (arg0->unk2A == 0) {
                var_s1_2 = 0;
                if (arg0->unk2B != 0) {
                    if ((arg0->unk2C == 0) && (var_s2 != 0)) {
                        arg0->unk0 = 0;
                        arg0->unk14 = 0;
                    }
                } else {
                    if (!(func_8016B6DC(8, arg0->unk10) & 0xFF) || !(func_8016B6DC(4, arg0->unk10) & 0xFF)) {
                        var_s1_2 = 1;
                    }
                    if (var_s1_2 != 0) {
                        if (var_s4 != 0) {
                            arg0->unk0 = 5;
                        }
                        if (var_s3 != 0) {
                            arg0->unk0 = 6;
                        }
                    }
                }
            }
        }
    }
    if (arg0->unk0 != -1) {
        arg0->unk2C = 1U;
        arg0->unk14 = 0;
        func_801122D0(arg0);
        func_80112308(arg0);
        func_80112338(arg0);
    }
    arg0->unk14 = (s32) (arg0->unk14 + func_80178A1C());
    if (arg0->unk14 >= 0x1F) {
        func_801122A0(arg0);
    }
}
