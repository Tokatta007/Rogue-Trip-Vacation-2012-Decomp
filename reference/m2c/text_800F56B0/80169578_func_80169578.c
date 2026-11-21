/* m2c reference for func_80169578 @ 80169578 (319 words). Generated; not compiled or validated. */
u64 func_8016939C();                                /* extern */
u64 func_801694D8(s32, s32);                        /* extern */
u64 func_80169A74();                                /* extern */

void func_80169578(void) {
    s16 var_a0_2;
    s16 var_v0_4;
    s16 var_v1_5;
    s32 *var_s6_4;
    s32 temp_a3;
    s32 temp_s4;
    s32 temp_s4_2;
    s32 temp_s4_3;
    s32 temp_s4_4;
    s32 temp_s4_5;
    s32 temp_s4_7;
    s32 temp_s5;
    s32 temp_s5_2;
    s32 temp_s5_3;
    s32 temp_s5_4;
    s32 temp_sp;
    s32 var_a0;
    s32 var_a1;
    s32 var_a1_2;
    s32 var_fp;
    s32 var_gp;
    s32 var_gp_2;
    s32 var_s3_3;
    s32 var_s5;
    s32 var_s5_2;
    s32 var_s6_5;
    s32 var_s7;
    s32 var_t9;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v1;
    s32 var_v1_2;
    s32 var_v1_3;
    s32 var_v1_4;
    u16 var_s1;
    u64 temp_ret;
    u64 temp_ret_2;
    u64 temp_ret_3;
    u64 temp_ret_4;
    void **var_a1_3;
    void *temp_s4_6;
    void *temp_s5_5;
    void *temp_v0;
    void *var_s2;
    void *var_s3;
    void *var_s3_2;
    void *var_s6;
    void *var_s6_2;
    void *var_s6_3;
    void *var_sp;

    var_sp = sp;
    var_fp = saved_reg_fp;
    var_gp = saved_reg_gp;
    saved_reg_s0->unkC8 = (s32) saved_reg_ra;
    var_s1 = saved_reg_s0->unk10;
    var_s2 = saved_reg_s0->unk18;
    var_t9 = saved_reg_s0->unk14;
loop_1:
    if ((s32) var_s1 > 0) {
        if (var_s2->unk0 == 0) {
            temp_ret = func_801694D8(saved_reg_s0->unk8 + 0x28, var_t9);
            var_sp += (u32) temp_ret;
            var_fp += M2C_ERROR(/* Read from unset register $a3 */);
            saved_reg_s0->unk30 = (s32) (temp_ret + var_gp);
            saved_reg_s0->unk34 = var_sp;
            saved_reg_s0->unk38 = var_fp;
            temp_ret_2 = func_80169A74();
            saved_reg_s0->unk3C = (s32) (temp_ret_2 + M2C_ERROR(/* Read from unset register $t1 */));
            saved_reg_s0->unk40 = (s32) ((u32) temp_ret_2 + M2C_ERROR(/* Read from unset register $t2 */));
            saved_reg_s0->unk44 = (s32) (M2C_ERROR(/* Read from unset register $a3 */) + M2C_ERROR(/* Read from unset register $t3 */));
            var_s3 = M2C_ERROR(/* Read from unset register $t0 */) + 8;
            var_s5 = ((u32) M2C_ERROR(/* Read from unset register $t5 */) >> 0x18) & 0x7F;
            var_s6 = saved_reg_s0 + 0x60;
loop_4:
            var_gp = var_s3->unk0;
            GTE_RT11RT12 = var_gp;
            GTE_RT13RT21 = var_s3->unk4;
            GTE_RT22RT23 = var_s3->unk8;
            GTE_RT31RT32 = var_s3->unkC;
            GTE_RT33 = var_s3->unk10;
            temp_ret_3 = func_8016939C();
            temp_s4 = temp_ret_3 + var_gp;
            temp_v0 = (u32) temp_ret_3 + var_sp;
            if (temp_s4 > 0) {
                temp_s5 = var_s5 - 1;
                var_s6->unk0 = temp_s4;
                if (temp_s5 > 0) {
                    temp_s4_2 = M2C_ERROR(/* Read from unset register $a3 */) + var_fp;
                    if ((s32) temp_v0 > 0) {
                        temp_s5_2 = temp_s5 - 1;
                        var_s6->unk4 = temp_v0;
                        if (temp_s5_2 > 0) {
                            var_s5 = temp_s5_2 - 1;
                            if (temp_s4_2 > 0) {
                                var_s6->unk8 = temp_s4_2;
                                var_s6 += 0xC;
                                var_s3 += 0x20;
                                if (var_s5 <= 0) {
                                    goto block_10;
                                }
                                goto loop_4;
                            }
                        } else {
                            goto block_10;
                        }
                    }
                } else {
block_10:
                    var_v1 = 8;
                    temp_s4_3 = (s32) saved_reg_s0->unkD4 >> 0x18;
                    if (temp_s4_3 >= 0) {
                        var_v0 = temp_s4_3 - 3;
loop_12:
                        if (var_v0 >= 0) {
                            var_v1 += 0xE;
                            var_v0 -= 3;
                            goto loop_12;
                        }
                        saved_reg_s0->unk90 = (void *) ((temp_s4_3 * 6) + M2C_ERROR(/* Read from unset register $t0 */) + var_v1);
                        saved_reg_s0->unkC4 = (s32 *) ((temp_s4_3 * 4) + (saved_reg_s0 + 0x60));
                    } else {
                        var_sp += (u32) func_801694D8(saved_reg_s0->unkA4, M2C_ERROR(/* Read from unset register $t9 */));
                        var_fp += M2C_ERROR(/* Read from unset register $a3 */);
                        func_80169A74();
                        var_s3_2 = M2C_ERROR(/* Read from unset register $t0 */) + 8;
                        var_s5_2 = ((u32) M2C_ERROR(/* Read from unset register $t5 */) >> 0x18) & 0x7F;
                        var_s6_2 = saved_reg_s0 + 0x30;
                        do {
                            var_gp = var_s3_2->unk0;
                            GTE_RT11RT12 = var_gp;
                            GTE_RT13RT21 = var_s3_2->unk4;
                            GTE_RT22RT23 = var_s3_2->unk8;
                            GTE_RT31RT32 = var_s3_2->unkC;
                            GTE_RT33 = var_s3_2->unk10;
                            temp_ret_4 = func_8016939C();
                            var_s6_2->unk0 = (s32) (temp_ret_4 + var_gp);
                            var_s6_2->unk4 = (void *) ((u32) temp_ret_4 + var_sp);
                            var_s6_2->unk8 = (s32) (M2C_ERROR(/* Read from unset register $a3 */) + var_fp);
                            var_s5_2 -= 3;
                            var_s6_2 += 0xC;
                            var_s3_2 += 0x20;
                        } while (var_s5_2 > 0);
                        var_s7 = ((u32) M2C_ERROR(/* Read from unset register $t5 */) >> 0x18) & 0x7F;
                        var_v1_2 = -1;
                        var_v0_2 = var_s7;
                        var_s6_3 = saved_reg_s0 + 0x30;
                        var_a1 = 0x7FFF0000;
                        var_a0 = -1;
                        temp_a3 = ((u32) saved_reg_s0->unkD4 >> 4) & 0xFFF;
loop_18:
                        var_v1_2 += 1;
                        temp_s4_4 = var_s6_3->unk0;
                        if (var_s7 > 0) {
                            temp_s5_3 = var_s6_3->unk30;
                            var_s6_3 += 4;
                            var_s7 -= 1;
                            if (!(temp_a3 & (1 << var_v1_2)) && (temp_s4_4 <= 0) && (temp_s5_3 < var_a1)) {
                                var_a1 = temp_s5_3;
                                var_a0 = var_v1_2;
                            }
                            goto loop_18;
                        }
                        var_a1_2 = 0x7FFF0000;
                        if (var_a0 < 0) {
                            var_v1_3 = -1;
                            var_s6_4 = saved_reg_s0 + 0x30;
loop_25:
                            var_v1_3 += 1;
                            temp_s4_5 = *var_s6_4;
                            if (var_v0_2 > 0) {
                                var_s6_4 += 4;
                                var_v0_2 -= 1;
                                if (!(temp_a3 & (1 << var_v1_3)) && (temp_s4_5 < var_a1_2)) {
                                    var_a1_2 = temp_s4_5;
                                    var_a0 = var_v1_3;
                                }
                                goto loop_25;
                            }
                        }
                        var_v1_4 = 8;
                        var_v0_3 = var_a0 - 3;
loop_30:
                        if (var_v0_3 >= 0) {
                            var_v1_4 += 0xE;
                            var_v0_3 -= 3;
                            goto loop_30;
                        }
                        saved_reg_s0->unk90 = (void *) ((var_a0 * 6) + M2C_ERROR(/* Read from unset register $t0 */) + var_v1_4);
                        saved_reg_s0->unkC4 = (s32 *) ((var_a0 * 4) + (saved_reg_s0 + 0x60));
                    }
                    temp_s5_4 = (M2C_ERROR(/* Read from unset register $t4 */) & 0xF) - saved_reg_s0->unk12;
                    var_s6_5 = *saved_reg_s0->unkC4;
                    if (temp_s5_4 < 0) {
                        var_s6_5 <<= -temp_s5_4;
                    } else if (temp_s5_4 != 0) {
                        var_s6_5 = var_s6_5 >> temp_s5_4;
                    }
                    if ((var_s2->unk0 != 1) || (var_s6_5 >= var_s2->unk10)) {
                        var_s2->unk0 = 1;
                        var_s2->unk14 = (s32) saved_reg_s0->unkAC;
                        var_s2->unk10 = var_s6_5;
                        temp_s5_5 = saved_reg_s0->unk90;
                        var_s3_3 = ((u32) M2C_ERROR(/* Read from unset register $t4 */) >> 0x18) - 1;
                        var_v0_4 = temp_s5_5->unk0;
                        var_v1_5 = temp_s5_5->unk2;
                        var_a0_2 = temp_s5_5->unk4;
                        var_a1_3 = saved_reg_s0->unk20 + (var_s3_3 * 4);
loop_40:
                        if (var_s3_3 >= 0) {
                            temp_s4_6 = *var_a1_3;
                            var_gp_2 = (temp_s4_6->unk6 * var_v1_5) + (temp_s4_6->unk0 * var_v0_4) + (temp_s4_6->unkC * var_a0_2);
                            if (var_gp_2 < 0) {
                                var_gp_2 += 0xFFF;
                            }
                            var_gp = var_gp_2 >> 0xC;
                            temp_sp = (temp_s4_6->unk8 * var_v1_5) + (temp_s4_6->unk2 * var_v0_4) + (temp_s4_6->unkE * var_a0_2);
                            if (temp_sp < 0) {

                            }
                            var_sp = (void *) (temp_sp >> 0xC);
                            var_fp = (s32) ((temp_s4_6->unkA * var_v1_5) + (temp_s4_6->unk4 * var_v0_4) + (temp_s4_6->unk10 * var_a0_2)) / 4096;
                            var_v0_4 = (s16) var_gp;
                            var_v1_5 = (s16) var_sp;
                            var_a0_2 = (s16) var_fp;
                            var_a1_3 -= 4;
                            var_s3_3 -= 1;
                            goto loop_40;
                        }
                        var_s2->unk4 = (s32) var_v0_4;
                        var_s2->unk8 = (s32) var_v1_5;
                        temp_s4_7 = ((u32) M2C_ERROR(/* Read from unset register $t5 */) >> 4) & 0xFFF;
                        var_s2->unkC = (s32) var_a0_2;
                        if (temp_s4_7 != 0) {
                            var_s2->unk1C = (s32) ((((u32) M2C_ERROR(/* Read from unset register $t5 */) >> 0x10) & 0xFF) | (temp_s4_7 << 0x10));
                        } else {
                            var_s2->unk1C = (s32) (((((u32) M2C_ERROR(/* Read from unset register $t4 */) >> 4) & 0xFFF) << 0x10) | (((u32) M2C_ERROR(/* Read from unset register $t4 */) >> 0x10) & 0xFF));
                        }
                        var_s2->unk18 = (s16) (((u32) saved_reg_s0->unkD4 >> 0x10) & 0xFF);
                    }
                }
            }
        }
        var_t9 = M2C_ERROR(/* Read from unset register $t9 */) + 8;
        var_s1 -= 1;
        var_s2 += 0x20;
        goto loop_1;
    }
}
