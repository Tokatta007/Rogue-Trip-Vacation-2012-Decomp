/* m2c reference for func_800F6974 @ 800F6974 (242 words). Generated; not compiled or validated. */
s32 func_800FF380(s32 *, void *, s32);              /* extern */
s32 func_800FF594(s32 *, void *, void *);           /* extern */
s16 func_800FF828(s32 *, void *, void *);           /* extern */
s32 func_80124AF8(void *, s32);                     /* extern */
static void *D_801C34EC = NULL;

void func_800F6974(void *arg0) {
    s32 temp_v0;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_v1_2;
    s32 var_v1_3;
    s32 var_v1_4;
    void *temp_a0;
    void *temp_s0;
    void *temp_v1;
    void *var_v1;

    temp_a0 = D_801C34EC->unk124D8;
    if ((temp_a0 != NULL) && (temp_a0->unk7D0 != arg0->unk7D0)) {
        temp_v1 = D_801C34EC->unk124DC;
        if ((temp_v1 != NULL) && (temp_v1->unk7D0 == arg0->unk7D0)) {
            if (arg0->unk58 != 0x12) {
                var_a0 = 0;
                if ((temp_a0->unk8F8 <= 0) || ((temp_a0->unk8F8 == 1) && (arg0->unk945 == 0) && (temp_a0->unk8F0 >= 0x259))) {
                    var_a0 = 1;
                }
                if ((var_a0 != 0) && (arg0->unk58 != 8)) {
                    arg0->unk8 = 3;
                    arg0->unk58 = 0x12;
                    var_v1 = NULL;
                    arg0->unk34 = (s32) (arg0->unk40 + 0x1C);
                    if (arg0 != NULL) {
                        var_v1 = arg0 + 4;
                    }
                    var_v1->unk6C = 1;
                }
            }
        } else if (arg0->unk82A == 0) {
            var_a0_2 = 0;
            if ((arg0->unk58 == 0) || (arg0->unk58 >= 0x11) || (arg0->unk784 < arg0->unk780)) {
                var_a0_2 = 1;
            }
            if (var_a0_2 != 0) {
                arg0->unk947 = 1;
            } else {
                var_v1_2 = 0;
                if (arg0->unk788 < 0xFA0) {
                    var_v1_2 = (u32) (arg0->unk58 ^ 1) > 0U;
                }
                if (var_v1_2 != 0) {
                    var_v1_3 = 0;
                    if (arg0->unk58 >= 7) {
                        var_v1_3 = (u32) (arg0->unk58 ^ 8) > 0U;
                    }
                    if (var_v1_3 != 0) {
                        arg0->unk8 = 1;
                        arg0->unk58 = 2;
                        arg0->unk34 = (s32) (arg0->unk40 + 0x1C);
                        arg0->unk64 = func_800FF828(arg0->unk44, arg0 + 0x1E4, temp_a0);
                        arg0->unk780 = (s32) (arg0->unk784 - 0x1A4);
                    }
                } else if ((arg0->unk94C != 0) && (arg0->unk58 != 1)) {
                    if (arg0->unk924 != 0) {
                        arg0->unk924 = (s32) (arg0->unk924 - arg0->unk7D4);
                        if (arg0->unk924 < 0) {
                            arg0->unk924 = 0;
                        }
                    } else {
                        temp_s0 = arg0 + 0x1E4;
                        if (arg0->unk943 == 0) {
                            temp_v0 = func_800FF380(arg0->unk44, temp_s0, func_800FF594(arg0->unk44, temp_s0, temp_a0));
                            if ((temp_v0 != -1) && (func_80124AF8(D_801C34EC, temp_v0) == 0)) {
                                arg0->unk34 = (s32) (*arg0->unk44 + (temp_v0 << 5));
                                arg0->unk58 = 1;
                                arg0->unk8 = 2;
                                arg0->unk943 = 1U;
                                arg0->unk780 = (s32) (arg0->unk784 - 0x258);
                            } else {
                                arg0->unk924 = (s32) ((rand() & 0xFF) + 0xB4);
                                arg0->unk943 = 0U;
                            }
                        }
                    }
                }
            }
        }
    }
    if (D_801C34EC->unk12754 < 2) {
        arg0->unk947 = 1;
        arg0->unk942 = 1;
        return;
    }
    var_v1_4 = 0;
    if (D_801C34EC->unk12754 < 3) {
        if (arg0->unk58 != 0x12) {
            var_v1_4 = arg0->unk780 >= 0x1A5;
        }
        if (var_v1_4 != 0) {
            arg0->unk8 = 3;
            arg0->unk58 = 0x12;
            arg0->unk34 = (s32) (arg0->unk40 + 0x1C);
            arg0->unk780 = 0;
            arg0->unk918 = 0;
        }
    }
}
