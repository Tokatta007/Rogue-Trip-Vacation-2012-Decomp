/* m2c reference for func_80111AC4 @ 80111AC4 (256 words). Generated; not compiled or validated. */
? func_801122A0(void *);                            /* extern */
? func_801122D0(void *);                            /* extern */
? func_80112308(void *);                            /* extern */
? func_80112338(void *);                            /* extern */
u8 func_8016B6DC(?, s32);                           /* extern */
s16 func_80178A1C();                                /* extern */

void func_80111AC4(void *arg0) {
    ? var_a0;
    ? var_a0_2;
    s32 var_v1;
    s32 var_v1_2;
    s32 var_v1_3;

    if (arg0->unk4B != 0) {
        var_v1 = 0;
        if ((arg0->unk31 != 0) || (arg0->unk42 != 0)) {
            var_v1 = 1;
        }
        if (var_v1 != 0) {
            func_80112308(arg0);
        } else {
            if (arg0->unk36 == 0) {
                arg0->unk36 = func_8016B6DC(4, arg0->unk10);
                goto block_54;
            }
            if (arg0->unk37 == 0) {
                if (func_8016B6DC(2, arg0->unk10) & 0xFF) {
                    arg0->unk37 = 1U;
                    goto block_54;
                }
            } else if (arg0->unk38 == 0) {
                if (func_8016B6DC(8, arg0->unk10) & 0xFF) {
                    arg0->unk38 = 1U;
                    goto block_54;
                }
            } else if (arg0->unk39 == 0) {
                if (func_8016B6DC(2, arg0->unk10) & 0xFF) {
                    arg0->unk39 = 1U;
                    arg0->unk1C = 0U;
                    arg0->unk46 = 0U;
                    arg0->unk47 = 0U;
                    arg0->unk48 = 0U;
                    arg0->unk49 = 0U;
                }
            } else if (arg0->unk3A == 0) {
                if (func_8016B6DC(0x1000, arg0->unk10) & 0xFF) {
                    arg0->unk46 = 1U;
                } else if (func_8016B6DC(0x4000, arg0->unk10) & 0xFF) {
                    arg0->unk47 = 1U;
                } else if (func_8016B6DC(0x8000, arg0->unk10) & 0xFF) {
                    arg0->unk48 = 1U;
                } else if (func_8016B6DC(0x2000, arg0->unk10) & 0xFF) {
                    arg0->unk49 = 1U;
                }
                var_v1_2 = 0;
                if ((arg0->unk46 != 0) || (arg0->unk47 != 0) || (arg0->unk48 != 0) || (arg0->unk49 != 0)) {
                    var_v1_2 = 1;
                }
                if (var_v1_2 != 0) {
                    arg0->unk3A = 1U;
                    goto block_54;
                }
            } else if (arg0->unk3D == 0) {
                if (arg0->unk48 != 0) {
                    if (arg0->unk3B == 0) {
                        var_a0 = 0x2000;
                        goto block_44;
                    }
                    if (arg0->unk3C == 0) {
                        var_a0_2 = 0x4000;
                        goto block_48;
                    }
                    if (func_8016B6DC(0x1000, arg0->unk10) & 0xFF) {
                        arg0->unk8 = 0;
                    }
                } else if (arg0->unk46 != 0) {
                    if (arg0->unk3B == 0) {
                        var_a0 = 0x4000;
block_44:
                        if (func_8016B6DC(var_a0, arg0->unk10) & 0xFF) {
                            arg0->unk3B = 1U;
                            arg0->unk1C = 0U;
                        }
                    } else if (arg0->unk3C == 0) {
                        var_a0_2 = 0x1000;
block_48:
                        if (func_8016B6DC(var_a0_2, arg0->unk10) & 0xFF) {
                            arg0->unk3C = 1U;
                            arg0->unk1C = 0U;
                        }
                    } else if (func_8016B6DC(0x4000, arg0->unk10) & 0xFF) {
                        arg0->unk8 = 1;
                    }
                }
                if (arg0->unk8 != -1) {
                    arg0->unk3D = 1U;
block_54:
                    arg0->unk1C = 0U;
                }
            }
        }
        var_v1_3 = 0;
        if (arg0->unk3A != 0) {
            var_v1_3 = (u32) arg0->unk1C > 0U;
        }
        if (var_v1_3 != 0) {
            func_801122A0(arg0);
            func_801122D0(arg0);
            func_80112338(arg0);
        }
        arg0->unk1C = (u32) (arg0->unk1C + func_80178A1C());
        if ((s32) arg0->unk1C >= 0x1F) {
            if (arg0->unk3A != 0) {
                arg0->unk46 = 0U;
                arg0->unk47 = 0U;
                arg0->unk48 = 0U;
                arg0->unk49 = 0U;
            }
            func_80112308(arg0);
        }
    }
}
