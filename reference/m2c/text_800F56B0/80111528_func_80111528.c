/* m2c reference for func_80111528 @ 80111528 (359 words). Generated; not compiled or validated. */
? func_8010B62C(s32, ?, ?);                         /* extern */
? func_801122A0(void *);                            /* extern */
? func_801122D0(void *);                            /* extern */
? func_80112308(void *);                            /* extern */
? func_80112338(void *);                            /* extern */
? func_80120064(s32, s32, ?);                       /* extern */
s32 func_8016B6DC(?, s32);                          /* extern */
s16 func_80178A1C();                                /* extern */
static s32 D_801C34EC = 0;

void func_80111528(void *arg0) {
    ? var_a0;
    s32 var_s1;
    s32 var_s1_2;
    s32 var_v0;
    s32 var_v1;
    s32 var_v1_2;

    var_s1 = 0;
    if (arg0->unk4B != 0) {
        if (func_8016B6DC(4, arg0->unk10) & 0xFF) {
            var_s1 = (u32) (func_8016B6DC(8, arg0->unk10) & 0xFF) > 0U;
        }
        if (var_s1 != 0) {
            if (arg0->unk31 == 0) {
                if (func_8016B6DC(0x1000, arg0->unk10) & 0xFF) {
                    arg0->unk46 = 1U;
                } else if (func_8016B6DC(0x4000, arg0->unk10) & 0xFF) {
                    arg0->unk47 = 1U;
                } else if (func_8016B6DC(0x8000, arg0->unk10) & 0xFF) {
                    arg0->unk48 = 1U;
                } else if (func_8016B6DC(0x2000, arg0->unk10) & 0xFF) {
                    arg0->unk49 = 1U;
                }
                var_v1 = 0;
                if ((arg0->unk46 != 0) || (arg0->unk47 != 0) || (arg0->unk48 != 0) || (arg0->unk49 != 0)) {
                    var_v1 = 1;
                }
                if ((var_v1 != 0) && (arg0->unk31 = 1U, arg0->unk18 = 0U, ((func_8016B6DC(2, arg0->unk10) & 0xFF) != 0))) {
                    arg0->unk4A = 1U;
                    var_s1_2 = 0;
                } else {
                    goto block_51;
                }
            } else {
                var_s1_2 = 0;
                if (arg0->unk35 == 0) {
                    if (arg0->unk46 != 0) {
                        if (arg0->unk32 == 0) {
                            var_a0 = 0x4000;
                            goto block_38;
                        }
                        if (arg0->unk33 == 0) {
                            if (func_8016B6DC(0x8000, arg0->unk10) & 0xFF) {
                                arg0->unk33 = 1U;
                                arg0->unk18 = 0U;
                                arg0->unk34 = 1U;
                            } else if (func_8016B6DC(0x1000, arg0->unk10) & 0xFF) {
                                arg0->unk33 = 1U;
                                arg0->unk18 = 0U;
                                arg0->unk34 = 0U;
                            }
                        } else if (arg0->unk34 != 0) {
                            if (func_8016B6DC(0x2000, arg0->unk10) & 0xFF) {
                                arg0->unk4 = 0;
                            }
                        } else {
                            var_v0 = 1;
                            if (func_8016B6DC(2, arg0->unk10) & 0xFF) {
                                goto block_44;
                            }
                        }
                    } else if (arg0->unk48 != 0) {
                        if (arg0->unk32 == 0) {
                            var_a0 = 0x2000;
block_38:
                            if (func_8016B6DC(var_a0, arg0->unk10) & 0xFF) {
                                arg0->unk32 = 1U;
                                arg0->unk18 = 0U;
                            }
                        } else if (arg0->unk33 == 0) {
                            if (func_8016B6DC(0x8000, arg0->unk10) & 0xFF) {
                                arg0->unk33 = 1U;
                                arg0->unk18 = 0U;
                            }
                        } else {
                            var_v0 = 2;
                            if (func_8016B6DC(0x2000, arg0->unk10) & 0xFF) {
block_44:
                                arg0->unk4 = var_v0;
                            }
                        }
                    }
                    var_s1_2 = 0;
                    if (arg0->unk4 != -1) {
                        if (arg0->unk4A != 0) {
                            if (func_8016B6DC(2, arg0->unk10) & 0xFF) {
                                arg0->unk4 = 3;
                            }
                        }
                        arg0->unk35 = 1U;
                        arg0->unk18 = 0U;
                        goto block_51;
                    }
                }
            }
        } else {
block_51:
            var_s1_2 = 0;
        }
        if ((func_8016B6DC(4, arg0->unk10) & 0xFF) && (func_8016B6DC(8, arg0->unk10) & 0xFF) && (func_8016B6DC(1, arg0->unk10) & 0xFF) && (func_8016B6DC(0x100, arg0->unk10) & 0xFF) && !(func_8016B6DC(2, arg0->unk10) & 0xFF) && !(func_8016B6DC(0x10, arg0->unk10) & 0xFF)) {
            var_s1_2 = (func_8016B6DC(0x40, arg0->unk10) & 0xFF) == 0;
        }
        if (var_s1_2 != 0) {
            arg0->unk4B = 0U;
            func_8010B62C(D_801C34EC + 0x6220, 0x5F, 1);
            func_80120064(D_801C34EC, arg0->unk10, 0x40);
        }
    } else {
        if ((func_8016B6DC(4, arg0->unk10) & 0xFF) && (func_8016B6DC(8, arg0->unk10) & 0xFF) && (func_8016B6DC(2, arg0->unk10) & 0xFF) && (func_8016B6DC(0x100, arg0->unk10) & 0xFF) && !(func_8016B6DC(1, arg0->unk10) & 0xFF) && !(func_8016B6DC(0x10, arg0->unk10) & 0xFF)) {
            var_s1 = (func_8016B6DC(0x40, arg0->unk10) & 0xFF) == 0;
        }
        if (var_s1 != 0) {
            arg0->unk4B = 1U;
            func_8010B62C(D_801C34EC + 0x6220, 0x5E, 0);
        }
    }
    var_v1_2 = 0;
    if (arg0->unk31 != 0) {
        var_v1_2 = (u32) arg0->unk18 > 0U;
    }
    if (var_v1_2 != 0) {
        func_801122A0(arg0);
        func_80112308(arg0);
        func_80112338(arg0);
    }
    arg0->unk18 = (u32) (arg0->unk18 + func_80178A1C());
    if ((s32) arg0->unk18 >= 0x1F) {
        if (arg0->unk31 != 0) {
            arg0->unk46 = 0U;
            arg0->unk47 = 0U;
            arg0->unk48 = 0U;
            arg0->unk49 = 0U;
        }
        func_801122D0(arg0);
    }
}
