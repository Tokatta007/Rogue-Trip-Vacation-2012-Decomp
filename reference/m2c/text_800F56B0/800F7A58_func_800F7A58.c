/* m2c reference for func_800F7A58 @ 800F7A58 (267 words). Generated; not compiled or validated. */
? func_800F5E1C(void *, s32);                       /* extern */
s16 func_800FF828(s32, void *);                     /* extern */
void *func_80122E88(void *);                        /* extern */
void *func_801297D4(void *, void *, ?, void *);     /* extern */
s32 func_8012BD30(void *);                          /* extern */
s32 func_8012CE70(void *);                          /* extern */
s32 func_8012E544(void *, void *, ?, ?);            /* extern */
u32 func_80178A70(s32);                             /* extern */
static void *D_801C34EC = NULL;

void func_800F7A58(void *arg0) {
    s32 temp_a0;
    s32 var_s1;
    s32 var_s2;
    s32 var_v1;
    void *temp_s2;
    void *temp_s2_2;
    void *temp_s2_3;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;
    void *var_v1_2;
    void *var_v1_3;

    var_s1 = 0;
    if (arg0->unk58 != 5) {
        var_v1 = 0;
        if ((arg0->unk827 != 0) || (arg0->unk821 != 0)) {
            var_v1 = 1;
        }
        if (var_v1 != 0) {
            goto block_5;
        }
        if (func_8012CE70(arg0 + 0x264) != 0) {
            temp_v0 = func_80122E88(D_801C34EC);
            if (temp_v0 != NULL) {
                if (arg0->unk58 == 0x12) {
                    var_s1 = 1;
                    if (arg0->unk40 != temp_v0->unk738) {
                        goto block_13;
                    }
                } else if (temp_v0->unk7C8 != arg0->unk7C8) {
                    arg0->unk8 = 3;
                    arg0->unk58 = 0x12;
                    var_s1 = 1;
                    arg0->unk34 = (void *) (temp_v0->unk738 + 0x1C);
block_13:
                    func_800F5E1C(arg0, temp_v0->unk738);
                }
            }
        }
    } else {
block_5:
        var_s1 = 1;
    }
    if (var_s1 == 0) {
        temp_a0 = arg0->unk10C;
        if ((arg0->unk110 - ((s32) arg0->unk110 >> 2)) < temp_a0) {
            var_s2 = 0;
            if ((arg0->unk7DC >= 0x7D1) && ((D_801C34EC->unk7D8 == 0) || (func_80178A70(temp_a0) >= 0x3E9U))) {
                var_s2 = 1;
            }
            if (var_s2 != 0) {
                if (func_8012BD30(arg0 + 0x264) >= 3) {
                    temp_v0_2 = D_801C34EC + 0x123FC;
                    if (temp_v0_2 != NULL) {
                        var_s1 = 1;
                        arg0->unk34 = temp_v0_2;
                        arg0->unk8 = 3;
                        arg0->unk58 = 0xA;
                    }
                }
                if (var_s1 == 0) {
                    temp_s2 = arg0 + 0x72C;
                    if (func_8012E544(arg0 + 0x1E4, temp_s2, 1, 0) != 0) {
                        var_s1 = 1;
                        arg0->unk8 = 3;
                        arg0->unk58 = 7;
                        arg0->unk34 = temp_s2;
                    }
                    goto block_27;
                }
            } else {
block_27:
                if (var_s1 == 0) {
                    temp_s2_2 = arg0 + 0x72C;
                    if ((s8) D_801C34EC->unk12355 != -1) {
                        arg0->unk34 = (void *) (D_801C34EC->unk122C8 + 0x1C);
                        var_s1 = 1;
                        var_v1_2 = NULL;
                        arg0->unk81C = (u16) D_801C34EC->unk122C8->unk18;
                        arg0->unk8 = 3;
                        arg0->unk58 = 0xC;
                        if (arg0 != NULL) {
                            var_v1_2 = arg0 + 4;
                        }
                        var_v1_2->unk6C = 0;
                        arg0->unk824 = 0;
                    } else if (func_8012E544(arg0 + 0x1E4, temp_s2_2, 1, 1) != 0) {
                        var_s1 = 1;
                        arg0->unk8 = 3;
                        arg0->unk58 = 9;
                        arg0->unk34 = temp_s2_2;
                    }
                    goto block_34;
                }
            }
        } else {
block_34:
            if (var_s1 == 0) {
                if (arg0->unk7DC >= 0xBB9) {
                    if (arg0->unk58 == 8) {
                        var_s1 = 1;
                    } else {
                        temp_v0_3 = func_801297D4(D_801C34EC, arg0 + 0x1E4, 0xBB8, arg0 + 0x8E0);
                        if (temp_v0_3 != NULL) {
                            var_s1 = 1;
                            arg0->unk34 = temp_v0_3;
                            arg0->unk8 = 3;
                            arg0->unk58 = 8;
                        }
                    }
                }
                if (var_s1 == 0) {
                    if (arg0->unk58 == 0xC) {
                        var_s1 = 1;
                    } else {
                        temp_s2_3 = arg0 + 0x72C;
                        if ((s8) D_801C34EC->unk12355 != -1) {
                            arg0->unk34 = (void *) (D_801C34EC->unk122C8 + 0x1C);
                            var_s1 = 1;
                            var_v1_3 = NULL;
                            arg0->unk81C = (u16) D_801C34EC->unk122C8->unk18;
                            arg0->unk8 = 3;
                            arg0->unk58 = 0xC;
                            if (arg0 != NULL) {
                                var_v1_3 = arg0 + 4;
                            }
                            var_v1_3->unk6C = 0;
                            arg0->unk824 = 0;
                        } else if (func_8012E544(arg0 + 0x1E4, temp_s2_3, 1, 1) != 0) {
                            var_s1 = 1;
                            arg0->unk8 = 3;
                            arg0->unk58 = 9;
                            arg0->unk34 = temp_s2_3;
                        }
                    }
                    if ((var_s1 == 0) && (arg0->unk8 != 1)) {
                        arg0->unk8 = 1;
                        arg0->unk58 = 2;
                        arg0->unk34 = (void *) (arg0->unk40 + 0x1C);
                        arg0->unk64 = func_800FF828(arg0->unk44, arg0 + 0x1E4);
                        arg0->unk780 = (s32) (arg0->unk784 - 0x258);
                        arg0->unk8B0 = 0;
                        arg0->unk918 = 0;
                    }
                }
            }
        }
    }
}
