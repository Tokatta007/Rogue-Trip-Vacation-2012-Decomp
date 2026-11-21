/* m2c reference for func_801274CC @ 801274CC (186 words). Generated; not compiled or validated. */
? func_80159C9C(s32, s32 *, u32, s32);              /* extern */
extern ? D_8018403C;
extern ? D_8018404C;
static u16 D_801C32D8 = 0;

void func_801274CC(void *arg0, MATRIX *arg1) {
    s32 sp10;
    s32 sp18;
    u32 sp20;
    s32 sp24;
    ? *sp28;
    ? *var_t0;
    s32 temp_a0_2;
    s32 temp_a1;
    s32 temp_fp;
    s32 var_a1;
    s32 var_a3;
    s32 var_s7;
    s32 var_v1_2;
    s32 var_v1_3;
    u16 temp_a0_3;
    u16 var_s0;
    u16 var_s3;
    u32 var_a2;
    u32 var_s1;
    u32 var_v1;
    void *temp_a0;
    void *temp_s2;
    void *temp_s6;
    void *temp_v0;
    void *var_s4;
    void *var_s5;

    var_s0 = saved_reg_s0;
    SetRotMatrix(arg1);
    var_s4 = arg0->unkC;
    var_a3 = arg0->unk12 & 0xFF;
    temp_s6 = (((u16) arg0->unk0 >> 1) & 8) + &D_8018403C;
    if (var_a3 != 0) {
        var_t0 = &D_8018404C;
        do {
            temp_s2 = var_s4 + 0xC;
            temp_fp = var_s4->unk2 & 2;
            var_s5 = var_s4 + 0x1C;
            if (var_s4->unk0 & 0x40000) {
                var_s5 = var_s4 + 0x28;
                if (!(var_s4->unk0 & 1)) {
                    var_s5 = var_s4 + 0x24;
                }
            }
            var_a2 = 3;
            if (var_s4->unk0 & 1) {
                var_a2 = 4;
            }
            var_s3 = var_s5->unk0;
            var_s7 = 0;
            if (var_a2 != 0) {
                var_v1 = var_s3 & 0xFFFF;
                do {
                    if (var_v1 < 0x100U) {
                        temp_a0 = (var_v1 * 4) + var_t0;
                        var_s1 = var_s3 & 0xFFFF;
                        if (D_801C32D8 == temp_a0->unk2) {
                            var_s0 = temp_a0->unk0;
                            var_v1_2 = var_s7 & 0xFFFF;
                        } else {
                            goto block_13;
                        }
                    } else {
                        var_s1 = var_s3 & 0xFFFF;
block_13:
                        sp20 = var_a2;
                        sp24 = var_a3;
                        sp28 = var_t0;
                        func_80159C9C(arg0->unk8 + (var_s1 * 8), &sp10, var_a2, var_a3);
                        var_a2 = sp20;
                        temp_a1 = temp_s6->unk6 + (sp10 >> temp_s6->unk7);
                        sp10 = temp_a1;
                        var_a3 = sp24;
                        temp_a0_2 = temp_s6->unk6 - (sp18 >> temp_s6->unk7);
                        sp18 = temp_a0_2;
                        var_t0 = sp28;
                        var_v1_3 = temp_s6->unk0 & 0xFF;
                        if (temp_a1 >= 0) {
                            var_v1_3 += temp_a1;
                        }
                        var_a1 = temp_s6->unk1 & 0xFF;
                        if (temp_a0_2 >= 0) {
                            var_a1 += temp_a0_2;
                        }
                        temp_a0_3 = (((var_s0 & 0xFF00) | (var_v1_3 & 0xFF)) & 0xFF) | ((var_a1 & 0xFF) << 8);
                        var_s0 = temp_a0_3;
                        if (var_s1 < 0x100U) {
                            temp_v0 = (var_s1 * 4) + var_t0;
                            temp_v0->unk0 = temp_a0_3;
                            temp_v0->unk2 = (u16) D_801C32D8;
                        }
                        var_v1_2 = var_s7 & 0xFFFF;
                    }
                    if (var_v1_2 != 1) {
                        if (var_v1_2 < 2) {
                            if (var_v1_2 != 0) {
                                var_s7 += 1;
                            } else {
                                var_s4->unkC = (s8) var_s0;
                                temp_s2->unk1 = (s8) ((u32) (var_s0 & 0xFFFF) >> 8);
                                if (temp_fp != 0) {
                                    var_s3 = var_s5->unk2;
                                    var_s7 += 1;
                                } else {
                                    goto block_34;
                                }
                            }
                        } else if (var_v1_2 != 2) {
                            if (var_v1_2 != 3) {
                                var_s7 += 1;
                            } else {
                                temp_s2->unkA = (s8) var_s0;
                                temp_s2->unkB = (s8) ((u32) (var_s0 & 0xFFFF) >> 8);
                                goto block_34;
                            }
                        } else {
                            temp_s2->unk8 = (s8) var_s0;
                            temp_s2->unk9 = (s8) ((u32) (var_s0 & 0xFFFF) >> 8);
                            if (temp_fp != 0) {
                                var_s3 = var_s5->unk6;
                                var_s7 += 1;
                            } else {
                                goto block_34;
                            }
                        }
                    } else {
                        temp_s2->unk4 = (s8) var_s0;
                        temp_s2->unk5 = (s8) ((u32) (var_s0 & 0xFFFF) >> 8);
                        if (temp_fp != 0) {
                            var_s3 = var_s5->unk4;
                            var_s7 += 1;
                        } else {
block_34:
                            var_s7 += 1;
                        }
                    }
                    var_v1 = var_s3 & 0xFFFF;
                } while ((u32) (var_s7 & 0xFFFF) < var_a2);
            }
            var_a3 -= 1;
            var_s4 += ((u8) var_s4->unk1 >> 4) * 4;
        } while (var_a3 & 0xFFFF);
    }
    D_801C32D8 += 1;
}
