/* m2c reference for func_800F9178 @ 800F9178 (349 words). Generated; not compiled or validated. */
void *func_801244FC(s32, s32);                      /* extern */
? func_8012AF9C(void *, ?, ?);                      /* extern */
s32 func_8012BD30(void *);                          /* extern */
? func_8012BD80(void *, s32, void *);               /* extern */
s32 func_8012CEA8(void *);                          /* extern */
static s32 D_801C34EC = 0;

void func_800F9178(void *arg0, s32 arg1) {
    s32 temp_v0;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a0_3;
    s32 var_a0_4;
    s32 var_a0_5;
    s32 var_a1;
    s32 var_a1_2;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v1;
    s32 var_v1_2;
    s32 var_v1_3;
    s32 var_v1_4;
    s32 var_v1_5;
    u8 var_v0;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a0_3;
    void *temp_s0;
    void *temp_s2;
    void *temp_v0_2;

    if (arg0->unk827 != 0) {
        if (arg0->unk894 != -1) {
            var_a1 = 0;
            if (arg0->unk894 != 0) {
                temp_a0 = arg0 + 0x264 + arg0->unk894;
                if (temp_a0->unk43 != 0) {
                    var_a1 = (temp_a0->unk4C << 0x18) < (temp_a0->unk43 << 0x18);
                }
            }
            if (var_a1 == 0) {
                arg0->unk894 = -1;
            }
        }
        if (arg0->unk894 == -1) {
            arg0->unk894 = (s32) (rand() & 7);
            var_a1_2 = 1;
            if (arg0->unk894 == 0) {
                arg0->unk894 = 1;
                var_a1_2 = 1;
            }
loop_11:
            if (var_a1_2 < 9) {
                temp_a0_2 = arg0 + 0x264 + arg0->unk894;
                var_v1 = 0;
                if (temp_a0_2->unk43 != 0) {
                    var_v1 = (temp_a0_2->unk4C << 0x18) < (temp_a0_2->unk43 << 0x18);
                }
                if (var_v1 == 0) {
                    arg0->unk894 = (s32) (arg0->unk894 + 1);
                    if (arg0->unk894 >= 9) {
                        arg0->unk894 = 1;
                    }
                    var_a1_2 += 1;
                    goto loop_11;
                }
            }
        }
    } else {
        temp_s2 = arg0 + 0x264;
        arg0->unk894 = -1;
        arg0->unk894 = func_8012CEA8(temp_s2);
        temp_v0 = arg0->unk894;
        if (temp_v0 != -1) {
            arg0->unk93F = (s8) (temp_s2 + temp_v0)->unk4C;
        }
        var_v1_2 = 0;
        if ((u8) arg0->unk93F == 0) {
            temp_s0 = arg0 + 0x2A7;
            if ((s8) arg0->unk2A7 >= 3) {
                var_v1_2 = (u32) (arg0->unk8 ^ 1) > 0U;
            }
            if (var_v1_2 == 0) {
                if (func_8012BD30(temp_s2) > 0) {
                    if (arg0->unk58 == 0x12) {
                        temp_v0_2 = func_801244FC(D_801C34EC, arg0->unk884);
                        var_a0 = 0;
                        if (temp_v0_2->unk82A != 0) {
                            var_a0 = temp_v0_2->unk80C >= arg0->unk92C;
                        }
                        var_a0_2 = 0;
                        if (var_a0 != 0) {
                            if (rand() & 1) {
                                arg0->unk894 = 6;
                                var_a0_2 = 0;
                                if ((temp_s0->unk6 << 0x18) <= 0) {
                                    func_8012AF9C(temp_s2, 6, 2);
                                    goto block_32;
                                }
                            } else {
                                goto block_32;
                            }
                        }
                    } else {
block_32:
                        var_a0_2 = 0;
                    }
                    if (((arg0->unk894 == -1) && (arg0->unk78C >= 0xC81)) || (arg0->unk8 == 1)) {
                        var_a0_2 = 1;
                    }
                    if (var_a0_2 != 0) {
                        var_v1_3 = 0;
                        if (((temp_s0->unk3 << 0x18) > 0) || ((temp_s0->unk1 << 0x18) > 0)) {
                            var_v1_3 = 1;
                        }
                        if (var_v1_3 != 0) {
                            arg0->unk894 = 3;
                            if ((temp_s0->unk3 << 0x18) < (temp_s0->unk1 << 0x18)) {
                                arg0->unk894 = 1;
                            }
                            var_v1_4 = 0;
                            if (arg0->unk937 == 0) {
                                var_v1_4 = arg0->unk827 == 0;
                            }
                            var_a0_3 = 0;
                            if ((var_v1_4 != 0) && ((*(temp_s0 + arg0->unk894) << 0x18) < (arg0->unk2A7 << 0x18))) {
                                arg0->unk894 = 0;
                                goto block_49;
                            }
                        } else {
                            goto block_49;
                        }
                    } else {
block_49:
                        var_a0_3 = 0;
                    }
                    if (arg0->unk894 == -1) {
                        var_a0_3 = arg0->unk78C >= 0x641;
                    }
                    if (var_a0_3 != 0) {
                        if ((temp_s0->unk8 << 0x18) < (temp_s0->unk5 << 0x18)) {
                            arg0->unk894 = 5;
                            var_v0 = temp_s0->unk5;
                            var_v1_5 = temp_s0->unk7 << 0x18;
                            goto block_57;
                        }
                        if (temp_s0->unk8 != 0) {
                            arg0->unk894 = 8;
                            var_v0 = temp_s0->unk8;
                            var_v1_5 = temp_s0->unk7 << 0x18;
block_57:
                            if ((var_v0 << 0x18) < var_v1_5) {
                                arg0->unk894 = 7;
                            }
                        }
                    }
                    if (arg0->unk894 == -1) {
                        var_v0_2 = 2;
                        if (((temp_s0->unk4 << 0x18) < (temp_s0->unk2 << 0x18)) || (var_v0_2 = 4, (temp_s0->unk4 != 0))) {
                            arg0->unk894 = var_v0_2;
                        }
                        if (((temp_s0->unk6 << 0x18) > 0) && (func_801244FC(D_801C34EC, arg0->unk884)->unk82A != 0)) {
                            arg0->unk894 = 6;
                        }
                        var_a0_4 = 0;
                        if ((arg0->unk937 != 0) && (arg0->unk894 != 6)) {
                            var_a0_4 = arg0->unk827 == 0;
                        }
                        var_a0_5 = 0;
                        if (var_a0_4 != 0) {
                            if ((arg0->unk894 == -1) || ((s8) arg0->unk2A7 >= 3)) {
                                var_a0_5 = 1;
                            }
                            if (var_a0_5 != 0) {
                                goto block_74;
                            }
                        }
                    }
                }
            } else {
block_74:
                arg0->unk894 = 0;
            }
        }
        if (arg0->unk894 != -1) {
            arg0->unk93B = 1;
            arg0->unk8B8 = 0;
            temp_a0_3 = arg0 + 0x264;
            temp_a0_3->unk41 = (s8) arg0->unk894;
            func_8012BD80(temp_a0_3, arg0->unk894, arg0 + 0x830);
            arg0->unk2C = (s32) ((s32) ((s16) arg0->unk830 + (s16) arg0->unk832) >> 1);
            if (rand() & 1) {
                var_v0_3 = -arg0->unk2C;
            } else {
                var_v0_3 = arg0->unk2C;
            }
            arg0->unk28 = (s32) (var_v0_3 >> 2);
            arg0->unk30 = 0;
        }
        arg0->unk8B4 = arg1;
    }
}
