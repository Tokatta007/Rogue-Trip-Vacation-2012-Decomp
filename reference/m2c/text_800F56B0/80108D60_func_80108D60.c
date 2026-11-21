/* m2c reference for func_80108D60 @ 80108D60 (383 words). Generated; not compiled or validated. */
s32 func_801594CC(s16);                             /* extern */
s32 func_8015959C(s16);                             /* extern */
static void *D_801C34EC = NULL;

void func_80108D60(void *arg0, s8 arg1, void *arg2, s32 arg3, s32 arg4) {
    s32 sp10;
    s32 sp14;
    s32 sp18;
    s16 temp_a3;
    s16 temp_fp;
    s16 temp_s1;
    s16 temp_v1;
    s16 var_v0_5;
    s32 temp_a0_2;
    s32 temp_a1;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 var_a3;
    s32 var_s1;
    s32 var_s6;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v0_4;
    s8 var_v0_6;
    void *temp_a0;
    void *temp_a1_2;
    void *temp_a2;
    void *temp_s2;
    void *temp_s4;
    void *var_v1;

    temp_fp = arg0->unk3F6 ^ 1;
    var_s6 = 0;
    if (arg3 == 1) {
        var_v0 = arg3 * 4;
        if (arg0->unk3A8 == 2) {
            var_s6 = -0xC;
            goto block_3;
        }
    } else {
block_3:
        var_v0 = arg3 * 4;
    }
    temp_s2 = arg0 + var_v0;
    temp_a0 = temp_s2->unk390;
    var_v0_2 = arg2->unk8 - temp_a0->unk24;
    if (var_v0_2 < 0) {
        var_v0_2 = -var_v0_2;
    }
    temp_s4 = arg0 + arg3;
    if ((var_v0_2 < 0x1F41) && (((s8) temp_s4->unk1460 + 2) < 0x19) && ((D_801C34EC->unk1106D == 0) || ((arg1 != 0x17C) && (arg1 != 0x460)))) {
        sp10 = arg2->unk0 - temp_a0->unk1C;
        sp14 = arg2->unk4 - temp_s2->unk390->unk20;
        sp18 = arg2->unk8 - temp_s2->unk390->unk24;
        temp_s0 = func_8015959C((s16) temp_s2->unk390->unk18);
        var_s1 = (s32) ((sp10 * temp_s0) - (sp14 * func_801594CC((s16) temp_s2->unk390->unk18))) / (s32) arg0->unk145C;
        temp_s0_2 = func_801594CC((s16) temp_s2->unk390->unk18);
        var_a3 = (s32) -((sp10 * temp_s0_2) + (sp14 * func_8015959C((s16) temp_s2->unk390->unk18))) / (s32) arg0->unk145C;
        var_v0_3 = var_s1 < -0x22;
        if (var_s1 >= 0x23) {
            var_s1 = 0x22;
            var_v0_3 = 0x22 < -0x22;
        }
        if (var_v0_3 != 0) {
            var_s1 = -0x22;
        }
        var_v0_4 = var_a3 < -0x15;
        if (var_a3 >= 0x16) {
            var_a3 = 0x15;
            var_v0_4 = 0x15 < -0x15;
        }
        if (var_v0_4 != 0) {
            var_a3 = -0x15;
        }
        temp_s1 = var_s1 + 0x31;
        temp_a3 = var_a3 + 0x2C + var_s6;
        temp_a1 = temp_fp << 5;
        temp_a0_2 = arg3 * 0x10;
        temp_a2 = arg0 + (((s32) (temp_s4->unk1460 << 0x18) >> 0x12) + 0x458) + temp_a1 + temp_a0_2;
        temp_a1_2 = arg0 + (((s32) (temp_s4->unk1460 << 0x18) >> 0x12) + 0x498) + temp_a1 + temp_a0_2;
        if (arg4 != 0) {
            temp_a2->unk8 = (s16) (temp_s1 - 2);
            temp_a2->unkA = temp_a3;
            temp_a2->unkC = (s16) (temp_s1 + 2);
            temp_a2->unkE = temp_a3;
            temp_a1_2->unk8 = temp_s1;
            temp_a1_2->unkA = (s16) (temp_a3 - 2);
            var_v0_5 = temp_a3 + 2;
            temp_a1_2->unkC = temp_s1;
        } else {
            temp_v1 = temp_s1 + 1;
            var_v0_5 = temp_a3 + 1;
            temp_a2->unk8 = temp_s1;
            temp_a2->unkA = temp_a3;
            temp_a2->unkC = temp_v1;
            temp_a2->unkE = temp_a3;
            temp_a1_2->unk8 = temp_s1;
            temp_a1_2->unkA = var_v0_5;
            temp_a1_2->unkC = temp_v1;
        }
        temp_a1_2->unkE = var_v0_5;
        if (arg1 != 0x70) {
            if (arg1 < 0x71) {
                if (arg1 != 0x30) {
                    if (arg1 < 0x31) {
                        if (arg1 != 0x10) {
                            var_v0_6 = -1;
                            if (arg1 != 0x20) {
                                goto block_56;
                            }
                            var_v0_6 = 0x18;
                            temp_a2->unk4 = 0xDE;
                            temp_a2->unk5 = 0x8C;
                            temp_a2->unk6 = 0x18;
                            temp_a1_2->unk4 = 0xDE;
                            temp_a1_2->unk5 = 0x8C;
                        } else {
                            var_v0_6 = 0x62;
                            temp_a2->unk4 = 0xFF;
                            temp_a2->unk5 = 0x90;
                            temp_a2->unk6 = 0x62;
                            temp_a1_2->unk4 = 0xFF;
                            temp_a1_2->unk5 = 0x90;
                        }
                    } else if (arg1 != 0x50) {
                        if (arg1 < 0x51) {
                            var_v0_6 = -1;
                            if (arg1 != 0x40) {
                                goto block_56;
                            }
                            var_v0_6 = 0x54;
                            temp_a2->unk4 = 0x6F;
                            temp_a2->unk5 = -6;
                            temp_a2->unk6 = 0x54;
                            temp_a1_2->unk4 = 0x6F;
                            temp_a1_2->unk5 = -6;
                        } else {
                            var_v0_6 = -1;
                            if (arg1 != 0x60) {
                                goto block_56;
                            }
                            temp_a2->unk4 = 0xFF;
                            temp_a2->unk5 = -1;
                            temp_a2->unk6 = 0xFF;
                            temp_a1_2->unk4 = 0xE3;
                            var_v0_6 = 0xA;
                            goto block_57;
                        }
                    } else {
                        var_v0_6 = -0x10;
                        temp_a2->unk4 = 0xA0;
                        temp_a2->unk5 = 0x20;
                        temp_a2->unk6 = 0xF0;
                        temp_a1_2->unk4 = 0xA0;
                        temp_a1_2->unk5 = 0x20;
                    }
                    goto block_58;
                }
                temp_a2->unk4 = 0xA0;
                temp_a2->unk5 = 0xA0;
                temp_a2->unk6 = 0xC8;
                temp_a1_2->unk4 = 0xA0;
                temp_a1_2->unk5 = 0xA0;
                temp_a1_2->unk6 = -0x38;
                var_v1 = arg0 + arg3;
            } else {
                if (arg1 != 0xA0) {
                    if (arg1 < 0xA1) {
                        if (arg1 != 0x80) {
                            var_v0_6 = -1;
                            if (arg1 != 0x90) {
                                goto block_56;
                            }
                            var_v0_6 = 0x32;
                            temp_a2->unk4 = 0xC8;
                            temp_a2->unk5 = 0xB4;
                            temp_a2->unk6 = 0x32;
                            temp_a1_2->unk4 = 0xC8;
                            temp_a1_2->unk5 = 0xB4;
                        } else {
                            var_v0_6 = 0xA;
                            temp_a2->unk4 = 0xE3;
                            temp_a2->unk5 = 0xA;
                            temp_a2->unk6 = 0xA;
                            temp_a1_2->unk4 = 0xE3;
                            goto block_57;
                        }
                    } else if ((arg1 != 0x17C) && (arg1 < 0x17D)) {
                        var_v0_6 = -1;
                        if (arg1 != 0xB0) {
                            goto block_56;
                        }
                        temp_a2->unk4 = 0x64;
                        temp_a2->unk5 = 0x32;
                        temp_a2->unk6 = 0xFF;
                        temp_a1_2->unk4 = 0x64;
                        temp_a1_2->unk5 = 0x32;
                    } else {
                        var_v0_6 = -1;
block_56:
                        temp_a2->unk4 = 0xFF;
                        temp_a2->unk5 = -1;
                        temp_a2->unk6 = 0xFF;
                        temp_a1_2->unk4 = 0xFF;
block_57:
                        temp_a1_2->unk5 = var_v0_6;
                    }
                } else {
                    var_v0_6 = 0x54;
                    temp_a2->unk4 = 0xD2;
                    temp_a2->unk5 = 0xAC;
                    temp_a2->unk6 = 0x54;
                    temp_a1_2->unk4 = 0xD2;
                    temp_a1_2->unk5 = 0xAC;
                }
                goto block_58;
            }
        } else {
            var_v0_6 = -0x2A;
            temp_a2->unk4 = 0xDA;
            temp_a2->unk5 = arg1;
            temp_a2->unk6 = 0xD6;
            temp_a1_2->unk4 = 0xDA;
            temp_a1_2->unk5 = arg1;
block_58:
            temp_a1_2->unk6 = var_v0_6;
            var_v1 = arg0 + arg3;
        }
        var_v1->unk1460 = (u8) (var_v1->unk1460 + 2);
    }
}
