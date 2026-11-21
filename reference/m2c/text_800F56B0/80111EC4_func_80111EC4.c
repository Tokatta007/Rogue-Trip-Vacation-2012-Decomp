/* m2c reference for func_80111EC4 @ 80111EC4 (247 words). Generated; not compiled or validated. */
? func_801122A0(void *);                            /* extern */
? func_801122D0(void *);                            /* extern */
? func_80112308(void *);                            /* extern */
? func_80112338(void *);                            /* extern */
u8 func_8016B6DC(?, s32);                           /* extern */
s16 func_80178A1C();                                /* extern */

void func_80111EC4(void *arg0) {
    ? var_a0;
    s32 var_v1;
    s32 var_v1_2;
    s32 var_v1_3;

    if (arg0->unk4B != 0) {
        var_v1 = 0;
        if ((arg0->unk31 != 0) || (arg0->unk3A != 0)) {
            var_v1 = 1;
        }
        if (var_v1 != 0) {
            func_80112338(arg0);
        } else {
            if (arg0->unk3E == 0) {
                arg0->unk3E = func_8016B6DC(4, arg0->unk10);
                goto block_52;
            }
            if (arg0->unk3F == 0) {
                if (func_8016B6DC(2, arg0->unk10) & 0xFF) {
                    arg0->unk3F = 1U;
                    goto block_52;
                }
            } else if (arg0->unk40 == 0) {
                if (func_8016B6DC(0x10, arg0->unk10) & 0xFF) {
                    arg0->unk40 = 1U;
                    goto block_52;
                }
            } else if (arg0->unk41 == 0) {
                if (func_8016B6DC(0x40, arg0->unk10) & 0xFF) {
                    arg0->unk41 = 1U;
                    goto block_52;
                }
            } else if (arg0->unk42 == 0) {
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
                    arg0->unk42 = 1U;
                    goto block_52;
                }
            } else if (arg0->unk45 == 0) {
                if (arg0->unk46 != 0) {
                    if (arg0->unk43 == 0) {
                        var_a0 = 0x4000;
                        goto block_43;
                    }
                    if (arg0->unk44 != 0) {
                        if (func_8016B6DC(2, arg0->unk10) & 0xFF) {
                            arg0->unkC = 1;
                        }
                    } else {
                        goto block_46;
                    }
                } else if (arg0->unk48 != 0) {
                    if (arg0->unk43 == 0) {
                        var_a0 = 0x2000;
block_43:
                        if (func_8016B6DC(var_a0, arg0->unk10) & 0xFF) {
                            arg0->unk43 = 1U;
                            arg0->unk20 = 0U;
                        }
                    } else if (arg0->unk44 == 0) {
block_46:
                        if (func_8016B6DC(0x8000, arg0->unk10) & 0xFF) {
                            arg0->unk44 = 1U;
                            arg0->unk20 = 0U;
                        }
                    } else if (func_8016B6DC(0x2000, arg0->unk10) & 0xFF) {
                        arg0->unkC = 0;
                    }
                }
                if (arg0->unkC != -1) {
                    arg0->unk45 = 1U;
block_52:
                    arg0->unk20 = 0U;
                }
            }
        }
        var_v1_3 = 0;
        if (arg0->unk42 != 0) {
            var_v1_3 = (u32) arg0->unk20 > 0U;
        }
        if (var_v1_3 != 0) {
            func_801122A0(arg0);
            func_801122D0(arg0);
            func_80112308(arg0);
        }
        arg0->unk20 = (u32) (arg0->unk20 + func_80178A1C());
        if ((s32) arg0->unk20 >= 0x1F) {
            if (arg0->unk42 != 0) {
                arg0->unk46 = 0U;
                arg0->unk47 = 0U;
                arg0->unk48 = 0U;
                arg0->unk49 = 0U;
            }
            func_80112338(arg0);
        }
    }
}
