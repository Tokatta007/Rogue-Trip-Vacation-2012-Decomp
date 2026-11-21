/* m2c reference for func_800F03B8 @ 800F03B8 (1091 words). Generated; not compiled or validated. */
s16 *func_800F14C4();                               /* extern */
u64 func_801594CC(s32);                             /* extern */
s32 func_8015959C(?);                               /* extern */
s32 func_8015A62C(s32, s32);                        /* extern */

void func_800F03B8(void *arg0, void *arg1, void *arg4) {
    s16 *var_s1;
    s16 *var_v0;
    s16 temp_s1_11;
    s16 temp_s1_4;
    s16 temp_s1_7;
    s16 temp_s2_12;
    s16 temp_s2_20;
    s16 temp_s2_7;
    s16 temp_s3_4;
    s16 temp_s3_8;
    s16 temp_s4_13;
    s16 temp_s4_18;
    s16 temp_s4_3;
    s16 temp_s4_4;
    s16 temp_s4_9;
    s16 temp_s5_2;
    s16 temp_s5_3;
    s16 temp_s5_6;
    s16 temp_s5_8;
    s16 temp_s6;
    s16 temp_s6_2;
    s16 temp_s6_6;
    s16 var_s0;
    s16 var_s3;
    s16 var_s6_3;
    s16 var_s6_4;
    s16 var_t8;
    s16 var_t8_2;
    s16 var_t8_5;
    s16 var_t8_6;
    s16 var_t8_7;
    s16 var_t8_8;
    s32 *temp_s0_13;
    s32 *temp_s3_11;
    s32 *temp_s3_12;
    s32 *temp_s3_3;
    s32 *temp_s3_9;
    s32 *temp_t8_2;
    s32 *temp_t8_3;
    s32 *temp_v0_3;
    s32 *temp_v0_5;
    s32 *temp_v0_6;
    s32 *temp_v1_5;
    s32 *temp_v1_6;
    s32 temp_gp;
    s32 temp_s0_11;
    s32 temp_s0_12;
    s32 temp_s0_2;
    s32 temp_s0_3;
    s32 temp_s0_4;
    s32 temp_s0_5;
    s32 temp_s0_6;
    s32 temp_s0_7;
    s32 temp_s0_8;
    s32 temp_s0_9;
    s32 temp_s1_12;
    s32 temp_s1_3;
    s32 temp_s1_6;
    s32 temp_s1_9;
    s32 temp_s2_10;
    s32 temp_s2_11;
    s32 temp_s2_13;
    s32 temp_s2_19;
    s32 temp_s2_22;
    s32 temp_s2_5;
    s32 temp_s2_6;
    s32 temp_s2_8;
    s32 temp_s3;
    s32 temp_s3_13;
    s32 temp_s3_14;
    s32 temp_s3_2;
    s32 temp_s3_5;
    s32 temp_s3_6;
    s32 temp_s3_7;
    s32 temp_s4_11;
    s32 temp_s4_12;
    s32 temp_s4_14;
    s32 temp_s4_15;
    s32 temp_s4_16;
    s32 temp_s4_17;
    s32 temp_s4_20;
    s32 temp_s4_5;
    s32 temp_s4_7;
    s32 temp_s4_8;
    s32 temp_s5_10;
    s32 temp_s5_4;
    s32 temp_s5_7;
    s32 temp_s5_9;
    s32 temp_s6_3;
    s32 temp_s6_4;
    s32 temp_s6_5;
    s32 temp_s6_7;
    s32 temp_s7;
    s32 temp_t4;
    s32 temp_t8;
    s32 temp_v0;
    s32 temp_v0_10;
    s32 temp_v0_4;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 temp_v1_4;
    s32 var_s0_2;
    s32 var_s1_2;
    s32 var_s1_3;
    s32 var_s2;
    s32 var_s3_2;
    s32 var_s3_3;
    s32 var_s3_4;
    s32 var_s6;
    s32 var_s6_2;
    s32 var_s6_5;
    s32 var_s6_6;
    s32 var_s6_7;
    s32 var_s7;
    s32 var_s7_2;
    s32 var_s7_3;
    s32 var_s7_4;
    s32 var_s7_5;
    s32 var_t7;
    s32 var_t8_10;
    s32 var_t8_11;
    s32 var_t8_12;
    s32 var_t8_3;
    s32 var_t8_4;
    s32 var_t8_9;
    s32 var_v1;
    s32 var_v1_2;
    s32 var_v1_3;
    s32 var_v1_4;
    u32 *temp_s3_10;
    u32 temp_s0_10;
    u32 temp_s1;
    u32 temp_s2;
    u32 temp_s2_3;
    u32 temp_s4_19;
    u32 temp_s4_22;
    u32 temp_s4_23;
    u32 temp_s5_11;
    u32 temp_s5_13;
    u32 temp_s5_15;
    u32 temp_s5_16;
    u32 temp_s5_17;
    u32 temp_t3;
    u64 temp_ret;
    u64 temp_s2_14;
    void *temp_s0;
    void *temp_s1_10;
    void *temp_s1_2;
    void *temp_s1_5;
    void *temp_s1_8;
    void *temp_s2_15;
    void *temp_s2_16;
    void *temp_s2_17;
    void *temp_s2_18;
    void *temp_s2_21;
    void *temp_s2_23;
    void *temp_s2_2;
    void *temp_s2_4;
    void *temp_s2_9;
    void *temp_s4;
    void *temp_s4_10;
    void *temp_s4_21;
    void *temp_s4_2;
    void *temp_s4_6;
    void *temp_s5;
    void *temp_s5_12;
    void *temp_s5_14;
    void *temp_s5_5;
    void *temp_s7_2;
    void *temp_s7_3;
    void *temp_s7_4;
    void *temp_t1;
    void *temp_t2;
    void *temp_t2_2;
    void *temp_t2_3;
    void *temp_t2_4;
    void *temp_t2_5;
    void *temp_t6;
    void *temp_v0_2;
    void *temp_v0_7;
    void *temp_v0_8;
    void *temp_v0_9;
    void *var_a1;
    void *var_s2_2;
    void *var_t1;

    var_a1 = arg1;
    temp_t1 = *(void **)0x1F800028;
    temp_t1->unk0 = (s32) saved_reg_s0;
    temp_t1->unk4 = (s32) saved_reg_s1;
    temp_t1->unk8 = (s32) saved_reg_s2;
    temp_t1->unkC = (s32) saved_reg_s3;
    temp_t1->unk10 = (s32) saved_reg_s4;
    temp_t1->unk14 = (s32) saved_reg_s5;
    temp_t1->unk18 = (s32) saved_reg_s6;
    temp_t1->unk1C = (s32) saved_reg_s7;
    temp_t1->unk20 = (s32) M2C_ERROR(/* Read from unset register $t8 */);
    temp_t1->unk24 = (s32) M2C_ERROR(/* Read from unset register $t9 */);
    temp_t1->unk28 = (s32) saved_reg_ra;
    temp_t1->unk2C = (s32) saved_reg_fp;
    temp_t1->unk30 = (s32) saved_reg_gp;
    *(void **)0x1F800038 = NULL;
    *(void **)0x1F800034 = -1 << 0;
    *(void **)0x1F80003C = arg0->unkC;
    *(void **)0x1F800040 = arg0->unk0;
    *(void **)0x1F8000AC = (void *)0x1F800000;
    *(void **)0x1F800030 = arg4;
    *(void **)0x1F800010 = NULL;
loop_1:
    if (M2C_ERROR(/* Read from unset register $a2 */) > 0) {
        temp_s1 = var_a1->unk4;
        M2C_ERROR(/* Read from unset register $t0 */)->unk80 = (s32) ((temp_s1 >> 0x10) & 0xFF);
        temp_t6 = var_a1->unk0;
        if (temp_s1 & 4) {
            temp_s2 = temp_s1 >> 0x18;
            temp_s3 = temp_s2 << 5;
            if (temp_s2 != M2C_ERROR(/* Read from unset register $t0 */)->unk34) {
                temp_s4 = temp_s3 + M2C_ERROR(/* Read from unset register $a3 */);
                GTE_RT11RT12 = temp_s4->unk0;
                GTE_RT13RT21 = temp_s4->unk4;
                GTE_RT22RT23 = temp_s4->unk8;
                GTE_RT31RT32 = temp_s4->unkC;
                GTE_RT33 = temp_s4->unk10;
                M2C_ERROR(/* Read from unset register $t0 */)->unk34 = temp_s2;
                temp_s4_2 = M2C_ERROR(/* Read from unset register $t0 */)->unk30 + temp_s3;
                GTE_L11L12 = temp_s4_2->unk0;
                GTE_L13L21 = temp_s4_2->unk4;
                GTE_L22L23 = temp_s4_2->unk8;
                GTE_L31L32 = temp_s4_2->unkC;
                GTE_L33 = temp_s4_2->unk10;
            }
            if (temp_s1 & 4) {
                temp_s5 = temp_s3 + M2C_ERROR(/* Read from unset register $a3 */);
                temp_t8 = var_a1->unk8;
                temp_v0 = var_a1->unkC;
                temp_v1 = var_a1->unk10;
                var_s6 = (temp_s5->unk2 * temp_v0) + (temp_s5->unk0 * temp_t8) + (temp_s5->unk4 * temp_v1);
                if (var_s6 < 0) {
                    var_s6 += 0xFFF;
                }
                GTE_TRX = var_s6 >> 0xC;
                var_s6_2 = (temp_s5->unk8 * temp_v0) + (temp_s5->unk6 * temp_t8) + (temp_s5->unkA * temp_v1);
                if (var_s6_2 < 0) {
                    var_s6_2 += 0xFFF;
                }
                GTE_TRY = var_s6_2 >> 0xC;
                GTE_TRZ = (s32) ((temp_s5->unkE * temp_v0) + (temp_s5->unkC * temp_t8) + (temp_s5->unk10 * temp_v1)) / 4096;
            }
            if (temp_s1 & 2) {
                temp_v0_2 = var_a1->unk14;
                temp_s2_2 = temp_v0_2->unk4;
                temp_s0 = temp_s2_2 + 0xC;
                GTE_RBK = temp_s2_2->unk0 * 0x10;
                GTE_GBK = temp_s2_2->unk4 * 0x10;
                GTE_BBK = temp_s2_2->unk8 * 0x10;
                GTE_LR1LR2 = temp_s2_2->unkC;
                GTE_LR3LG1 = temp_s0->unk4;
                GTE_LG2LG3 = temp_s0->unk8;
                GTE_LB1LB2 = temp_s0->unkC;
                GTE_LB3 = temp_s0->unk10;
                temp_s2_3 = temp_v0_2->unk8;
                if (temp_s2_3 != 0x808080) {
                    GTE_VXY0 = (temp_s2_3 & 0xFF) << 5;
                    GTE_VZ0 = 0;
                    gte_mvmva(1, 0, 0, 3, 0);
                    temp_s3_2 = ((temp_s2_3 >> 8) & 0xFF) << 0x15;
                    temp_s4_3 = GTE_IR1;
                    temp_s5_2 = GTE_IR2;
                    temp_s6 = GTE_IR3;
                    GTE_VXY0 = temp_s3_2;
                    GTE_VXY0 = temp_s3_2;
                    gte_mvmva(1, 0, 0, 3, 0);
                    M2C_ERROR(/* Read from unset register $t0 */)->unk8C = temp_s4_3;
                    M2C_ERROR(/* Read from unset register $t0 */)->unk92 = temp_s5_2;
                    M2C_ERROR(/* Read from unset register $t0 */)->unk98 = temp_s6;
                    temp_s4_4 = GTE_IR1;
                    temp_s5_3 = GTE_IR2;
                    temp_s6_2 = GTE_IR3;
                    GTE_VXY0 = 0;
                    GTE_VZ0 = ((temp_s2_3 >> 0x10) & 0xFF) << 5;
                    gte_mvmva(1, 0, 0, 3, 0);
                    M2C_ERROR(/* Read from unset register $t0 */)->unk8E = temp_s4_4;
                    M2C_ERROR(/* Read from unset register $t0 */)->unk94 = temp_s5_3;
                    M2C_ERROR(/* Read from unset register $t0 */)->unk9A = temp_s6_2;
                    M2C_ERROR(/* Read from unset register $t0 */)->unk90 = (s16) GTE_IR1;
                    M2C_ERROR(/* Read from unset register $t0 */)->unk96 = (s16) GTE_IR2;
                    M2C_ERROR(/* Read from unset register $t0 */)->unk9C = (s16) GTE_IR3;
                    GTE_RT11RT12 = M2C_ERROR(/* Read from unset register $t0 */)->unk8C;
                    GTE_RT13RT21 = M2C_ERROR(/* Read from unset register $t0 */)->unk90;
                    GTE_RT22RT23 = M2C_ERROR(/* Read from unset register $t0 */)->unk94;
                    GTE_RT31RT32 = M2C_ERROR(/* Read from unset register $t0 */)->unk98;
                    GTE_RT33 = M2C_ERROR(/* Read from unset register $t0 */)->unk9C;
                }
            }
        }
        temp_s0_2 = temp_t6->unk10;
        M2C_ERROR(/* Read from unset register $t0 */)->unk50 = (s32) (temp_s1 & 0xFFFF);
        M2C_ERROR(/* Read from unset register $t0 */)->unk7C = (s32) (temp_s0_2 & 0xFFFF);
        M2C_ERROR(/* Read from unset register $t0 */)->unk84 = temp_s0_2;
        var_t1 = temp_t6->unkC;
        M2C_ERROR(/* Read from unset register $t0 */)->unk48 = (s32) temp_t6->unk8;
loop_15:
        if (M2C_ERROR(/* Read from unset register $t9 */) > 0) {
            temp_t3 = var_t1->unk0;
            if ((u32) M2C_ERROR(/* Read from unset register $t0 */)->unk3C >= (u32) M2C_ERROR(/* Read from unset register $t2 */)) {
                temp_t4 = ((temp_t3 >> 4) & 3) * 4;
                temp_s4_5 = var_t1->unk4;
                if (!(temp_t3 & 1)) {
                    temp_s4_6 = ((temp_s4_5 & 0xFFFF) * 8) + M2C_ERROR(/* Read from unset register $t5 */);
                    temp_s1_2 = ((temp_s4_5 >> 0x10) * 8) + M2C_ERROR(/* Read from unset register $t5 */);
                    temp_s2_4 = (var_t1->unk8 * 8) + M2C_ERROR(/* Read from unset register $t5 */);
                    GTE_VXY0 = temp_s4_6->unk0;
                    GTE_VZ0 = temp_s4_6->unk4;
                    GTE_VXY1 = temp_s1_2->unk0;
                    GTE_VZ1 = temp_s1_2->unk4;
                    GTE_VXY2 = temp_s2_4->unk0;
                    GTE_VZ2 = temp_s2_4->unk4;
                    gte_rtpt();
                    temp_s0_3 = var_t1->unkC;
                    if (temp_t3 & 0x40) {
                        *M2C_ERROR(/* Read from unset register $t0 */) = temp_s0_3;
                        M2C_ERROR(/* Read from unset register $t0 */)->unk4 = (s32) var_t1->unk10;
                        M2C_ERROR(/* Read from unset register $t0 */)->unk8 = (s32) var_t1->unk14;
                        M2C_ERROR(/* Read from unset register $t0 */)->unkC = (s32) var_t1->unk18;
                    } else {
                        M2C_ERROR(/* Read from unset register $t0 */)->unkC = temp_s0_3;
                    }
                    temp_s1_3 = GTE_SZ1;
                    if ((s32) temp_t3 >= 0) {
                        temp_s2_5 = GTE_SZ2;
                        temp_s4_7 = GTE_SZ3;
                        gte_nclip();
                        var_v1 = temp_s2_5;
                        if (temp_s1_3 >= temp_s2_5) {
                            var_v1 = temp_s1_3;
                        }
                        var_s7 = temp_s4_7;
                        if (var_v1 >= temp_s4_7) {
                            var_s7 = var_v1;
                        }
                        if ((var_s7 > 0) && (GTE_MAC0 >= 0)) {
                            goto block_34;
                        }
                    } else {
                        temp_s2_6 = GTE_SZ2;
                        temp_s4_8 = GTE_SZ3;
                        var_v1_2 = temp_s2_6;
                        if (temp_s1_3 >= temp_s2_6) {
                            var_v1_2 = temp_s1_3;
                        }
                        var_s7_2 = temp_s4_8;
                        if (var_v1_2 >= temp_s4_8) {
                            var_s7_2 = var_v1_2;
                        }
                        if (var_s7_2 > 0) {
block_34:
                            temp_s1_4 = GTE_SXY0;
                            temp_s2_7 = GTE_SXY1;
                            temp_s4_9 = GTE_SXY2;
                            var_t8 = temp_s2_7;
                            if (temp_s1_4 >= temp_s2_7) {
                                var_t8 = temp_s1_4;
                            }
                            var_s6_3 = temp_s4_9;
                            if (var_t8 >= temp_s4_9) {
                                var_s6_3 = var_t8;
                            }
                            if (var_s6_3 >= 0) {
                                var_t8_2 = temp_s1_4;
                                if (temp_s1_4 >= temp_s2_7) {
                                    var_t8_2 = temp_s2_7;
                                }
                                var_s6_4 = var_t8_2;
                                if (var_t8_2 >= temp_s4_9) {
                                    var_s6_4 = temp_s4_9;
                                }
                                temp_s0_4 = temp_s1_4 >> 0x10;
                                if ((s32) ((u32) GTE_OFX >> 0xF) >= var_s6_4) {
                                    temp_v1_2 = temp_s2_7 >> 0x10;
                                    temp_s5_4 = temp_s4_9 >> 0x10;
                                    var_t8_3 = temp_v1_2;
                                    if (temp_s0_4 >= temp_v1_2) {
                                        var_t8_3 = temp_s0_4;
                                    }
                                    var_s6_5 = temp_s5_4;
                                    if (var_t8_3 >= temp_s5_4) {
                                        var_s6_5 = var_t8_3;
                                    }
                                    if (var_s6_5 >= 0) {
                                        var_t8_4 = temp_s0_4;
                                        if (temp_s0_4 >= temp_v1_2) {
                                            var_t8_4 = temp_v1_2;
                                        }
                                        var_s6_6 = var_t8_4;
                                        if (var_t8_4 >= temp_s5_4) {
                                            var_s6_6 = temp_s5_4;
                                        }
                                        if ((s32) ((u32) GTE_OFY >> 0xF) >= var_s6_6) {
                                            M2C_ERROR(/* Read from unset register $t2 */)->unk8 = (s32) temp_s1_4;
                                            temp_v0_3 = M2C_ERROR(/* Read from unset register $t2 */) + 8 + temp_t4;
                                            *temp_v0_3 = (s32) temp_s2_7;
                                            *(temp_v0_3 + temp_t4) = (s32) temp_s4_9;
                                            var_v0 = func_800F14C4();
                                            var_s1 = M2C_ERROR(/* Read from unset register $t1 */) + 0x10;
                                            if (M2C_ERROR(/* Read from unset register $t3 */) & 0x40) {
                                                M2C_ERROR(/* Read from unset register $t2 */)->unkC = (s32) *M2C_ERROR(/* Read from unset register $t0 */);
                                                temp_s3_3 = M2C_ERROR(/* Read from unset register $t2 */) + 0xC + M2C_ERROR(/* Read from unset register $t4 */);
                                                *temp_s3_3 = M2C_ERROR(/* Read from unset register $t0 */)->unk4;
                                                var_s1 += 0xC;
                                                *(temp_s3_3 + M2C_ERROR(/* Read from unset register $t4 */)) = M2C_ERROR(/* Read from unset register $t0 */)->unk8;
                                            }
                                            goto block_135;
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    temp_s2_8 = (s32) var_t1->unk8;
                    if ((temp_t3 & 0xF) == 3) {
                        temp_s4_10 = ((s16) temp_s4_5 * 8) + M2C_ERROR(/* Read from unset register $t5 */);
                        temp_s1_5 = ((temp_s4_5 >> 0x10) * 8) + M2C_ERROR(/* Read from unset register $t5 */);
                        temp_s2_9 = ((s16) temp_s2_8 * 8) + M2C_ERROR(/* Read from unset register $t5 */);
                        GTE_VXY0 = temp_s4_10->unk0;
                        GTE_VZ0 = temp_s4_10->unk4;
                        GTE_VXY1 = temp_s1_5->unk0;
                        GTE_VZ1 = temp_s1_5->unk4;
                        GTE_VXY2 = temp_s2_9->unk0;
                        GTE_VZ2 = temp_s2_9->unk4;
                        gte_rtpt();
                        temp_s0_5 = var_t1->unkC;
                        if (temp_t3 & 0x40) {
                            *M2C_ERROR(/* Read from unset register $t0 */) = temp_s0_5;
                            M2C_ERROR(/* Read from unset register $t0 */)->unk4 = (s32) var_t1->unk10;
                            M2C_ERROR(/* Read from unset register $t0 */)->unk8 = (s32) var_t1->unk14;
                            M2C_ERROR(/* Read from unset register $t0 */)->unkC = (s32) var_t1->unk18;
                        } else {
                            M2C_ERROR(/* Read from unset register $t0 */)->unkC = temp_s0_5;
                        }
                        temp_s5_5 = ((temp_s2_8 >> 0x10) * 8) + M2C_ERROR(/* Read from unset register $t5 */);
                        temp_s1_6 = GTE_SZ1;
                        if ((s32) temp_t3 >= 0) {
                            temp_s2_10 = GTE_SZ2;
                            temp_s4_11 = GTE_SZ3;
                            gte_nclip();
                            var_v1_3 = temp_s2_10;
                            if (temp_s1_6 >= temp_s2_10) {
                                var_v1_3 = temp_s1_6;
                            }
                            var_s7_3 = temp_s4_11;
                            if (var_v1_3 >= temp_s4_11) {
                                var_s7_3 = var_v1_3;
                            }
                            if (GTE_MAC0 >= 0) {
                                goto block_71;
                            }
                        } else {
                            temp_s2_11 = GTE_SZ2;
                            temp_s4_12 = GTE_SZ3;
                            var_v1_4 = temp_s2_11;
                            if (temp_s1_6 >= temp_s2_11) {
                                var_v1_4 = temp_s1_6;
                            }
                            var_s7_3 = temp_s4_12;
                            if (var_v1_4 >= temp_s4_12) {
                                var_s7_3 = var_v1_4;
                            }
block_71:
                            temp_s1_7 = GTE_SXY0;
                            temp_s2_12 = GTE_SXY1;
                            temp_s4_13 = GTE_SXY2;
                            GTE_VXY0 = temp_s5_5->unk0;
                            GTE_VZ0 = temp_s5_5->unk4;
                            gte_rtps();
                            var_t8_5 = temp_s1_7;
                            if (temp_s1_7 >= temp_s2_12) {
                                var_t8_5 = temp_s2_12;
                            }
                            var_s0 = var_t8_5;
                            if (var_t8_5 >= temp_s4_13) {
                                var_s0 = temp_s4_13;
                            }
                            var_t8_6 = temp_s2_12;
                            if (temp_s1_7 >= temp_s2_12) {
                                var_t8_6 = temp_s1_7;
                            }
                            var_s3 = temp_s4_13;
                            if (var_t8_6 >= temp_s4_13) {
                                var_s3 = var_t8_6;
                            }
                            temp_s6_3 = GTE_SZ3;
                            temp_s5_6 = GTE_SXY2;
                            var_t7 = var_s7_3;
                            if (temp_s6_3 >= var_s7_3) {
                                var_t7 = temp_s6_3;
                            }
                            if ((var_t7 - 1) >= 0) {
                                var_t8_7 = temp_s5_6;
                                if (var_s3 >= temp_s5_6) {
                                    var_t8_7 = var_s3;
                                }
                                if (var_t8_7 >= 0) {
                                    var_t8_8 = var_s0;
                                    if (var_s0 >= temp_s5_6) {
                                        var_t8_8 = temp_s5_6;
                                    }
                                    M2C_ERROR(/* Read from unset register $t0 */)->unk90 = (s32) var_s3;
                                    if ((s32) ((u32) GTE_OFX >> 0xF) >= var_t8_8) {
                                        M2C_ERROR(/* Read from unset register $t0 */)->unk94 = (s32) var_s0;
                                        M2C_ERROR(/* Read from unset register $t0 */)->unk98 = (s32) (M2C_ERROR(/* Read from unset register $t9 */) - 1);
                                        temp_v0_4 = temp_s1_7 >> 0x10;
                                        temp_v1_3 = temp_s2_12 >> 0x10;
                                        temp_s6_4 = temp_s4_13 >> 0x10;
                                        temp_gp = temp_s5_6 >> 0x10;
                                        var_t8_9 = temp_v1_3;
                                        if (temp_v0_4 >= temp_v1_3) {
                                            var_t8_9 = temp_v0_4;
                                        }
                                        var_s3_2 = temp_s6_4;
                                        if (var_t8_9 >= temp_s6_4) {
                                            var_s3_2 = var_t8_9;
                                        }
                                        var_t8_10 = temp_gp;
                                        if (var_s3_2 >= temp_gp) {
                                            var_t8_10 = var_s3_2;
                                        }
                                        if (var_t8_10 >= 0) {
                                            var_t8_11 = temp_v0_4;
                                            if (temp_v0_4 >= temp_v1_3) {
                                                var_t8_11 = temp_v1_3;
                                            }
                                            var_s3_3 = var_t8_11;
                                            if (var_t8_11 >= temp_s6_4) {
                                                var_s3_3 = temp_s6_4;
                                            }
                                            var_t8_12 = var_s3_3;
                                            if (var_s3_3 >= temp_gp) {
                                                var_t8_12 = temp_gp;
                                            }
                                            if ((s32) ((u32) GTE_OFY >> 0xF) >= var_t8_12) {
                                                M2C_ERROR(/* Read from unset register $t2 */)->unk8 = (s32) temp_s1_7;
                                                temp_v0_5 = M2C_ERROR(/* Read from unset register $t2 */) + 8 + temp_t4;
                                                *temp_v0_5 = (s32) temp_s2_12;
                                                temp_v0_6 = temp_v0_5 + temp_t4;
                                                *temp_v0_6 = (s32) temp_s4_13;
                                                *(temp_v0_6 + temp_t4) = (s32) temp_s5_6;
                                                var_v0 = func_800F14C4();
                                                goto block_133;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((temp_t3 & 0xF) == 7) {
                        temp_s1_8 = ((temp_s4_5 & 0xFFFF) * 8) + M2C_ERROR(/* Read from unset register $t5 */);
                        temp_s3_4 = var_t1->unk8;
                        temp_s4_14 = temp_s1_8->unk0;
                        temp_s5_7 = temp_s1_8->unk4;
                        temp_s2_13 = GTE_H;
                        temp_s6_5 = temp_s5_7 - temp_s3_4;
                        GTE_VXY0 = temp_s4_14;
                        GTE_VZ0 = temp_s5_7 + temp_s3_4;
                        GTE_VXY1 = temp_s4_14;
                        GTE_VZ1 = temp_s6_5;
                        GTE_VXY2 = temp_s4_14;
                        GTE_VZ2 = temp_s6_5;
                        gte_rtpt();
                        var_s0_2 = var_t1->unkC;
                        if (temp_t3 & 0x40) {
                            *M2C_ERROR(/* Read from unset register $t0 */) = var_s0_2;
                            M2C_ERROR(/* Read from unset register $t0 */)->unk4 = (s32) var_t1->unk10;
                            var_s0_2 = var_t1->unk18;
                            M2C_ERROR(/* Read from unset register $t0 */)->unk8 = (s32) var_t1->unk14;
                            M2C_ERROR(/* Read from unset register $t0 */)->unkC = var_s0_2;
                        } else {
                            M2C_ERROR(/* Read from unset register $t0 */)->unkC = var_s0_2;
                        }
                        temp_s5_8 = GTE_SXY0;
                        temp_s1_9 = GTE_SZ1;
                        temp_s3_5 = GTE_SZ2;
                        var_s7_4 = temp_s3_5;
                        if (temp_s1_9 >= temp_s3_5) {
                            var_s7_4 = temp_s1_9;
                        }
                        if (var_s7_4 >= temp_s3_5) {

                        }
                        func_800F14C4();
                        temp_s4_15 = M2C_ERROR(/* Read from unset register $t7 */) - 1;
                        if ((temp_s4_15 > 0) && (temp_s4_15 < 0xFFF)) {
                            M2C_ERROR(/* Read from unset register $t0 */)->unk8C = (s32) M2C_ERROR(/* Read from unset register $a0 */);
                            M2C_ERROR(/* Read from unset register $t0 */)->unk90 = (s32) M2C_ERROR(/* Read from unset register $a1 */);
                            M2C_ERROR(/* Read from unset register $t0 */)->unk94 = (s32) M2C_ERROR(/* Read from unset register $a2 */);
                            M2C_ERROR(/* Read from unset register $t0 */)->unk98 = (s32) M2C_ERROR(/* Read from unset register $a3 */);
                            M2C_ERROR(/* Read from unset register $t0 */)->unk9C = var_s0_2;
                            temp_s7 = temp_s5_8 >> 0x10;
                            temp_s3_6 = (s32) M2C_ERROR(/* Read from unset register $t8 */) >> 0x10;
                            temp_s6_6 = M2C_ERROR(/* Read from unset register $t8 */);
                            temp_s0_6 = M2C_ERROR(/* Read from unset register $t1 */)->unk6 * temp_s2_13;
                            temp_ret = func_801594CC(func_8015A62C(temp_s7 - temp_s3_6, temp_s5_8 - temp_s6_6));
                            temp_s2_14 = temp_ret;
                            var_s1_2 = (temp_s0_6 / temp_s1_9) - 1;
                            temp_v1_4 = (u32) temp_ret * 2;
                            if (var_s1_2 <= 0) {
                                var_s1_2 = 1;
                            }
                            var_s1_3 = var_s1_2 + 1;
                            if (var_s1_3 >= temp_v1_4) {
                                var_s1_3 = 0 | temp_v1_4;
                            }
                            temp_s5_9 = (s32) (var_s1_3 * temp_s2_14) / 4096;
                            var_v0 = (s16 *) ((s32) (var_s1_3 * func_8015959C(M2C_ERROR(/* Read from unset register $t8 */))) / 4096);
                            temp_s2_15 = M2C_ERROR(/* Read from unset register $t2 */) + 8;
                            M2C_ERROR(/* Read from unset register $t2 */)->unk8 = (s16) (temp_s5_8 + temp_s5_9);
                            temp_s2_15->unk2 = (s16) (temp_s7 - var_v0);
                            temp_s2_16 = temp_s2_15 + M2C_ERROR(/* Read from unset register $t4 */);
                            temp_s2_16->unk0 = (s16) (temp_s5_8 - temp_s5_9);
                            temp_s2_16->unk2 = (s16) (temp_s7 + var_v0);
                            temp_s2_17 = temp_s2_16 + M2C_ERROR(/* Read from unset register $t4 */);
                            temp_s2_17->unk0 = (s16) (temp_s6_6 + temp_s5_9);
                            temp_s2_17->unk2 = (s16) (temp_s3_6 - var_v0);
                            temp_s2_18 = temp_s2_17 + M2C_ERROR(/* Read from unset register $t4 */);
                            temp_s2_18->unk0 = (s16) (temp_s6_6 - temp_s5_9);
                            temp_s2_18->unk2 = (s16) (temp_s3_6 + var_v0);
                            goto block_133;
                        }
                    } else {
                        temp_s2_19 = GTE_H;
                        temp_s1_10 = ((temp_s4_5 & 0xFFFF) * 8) + M2C_ERROR(/* Read from unset register $t5 */);
                        GTE_VXY0 = temp_s1_10->unk0;
                        GTE_VZ0 = temp_s1_10->unk4;
                        gte_rtps();
                        temp_s0_7 = var_t1->unkC;
                        if (temp_t3 & 0x40) {
                            *M2C_ERROR(/* Read from unset register $t0 */) = temp_s0_7;
                            M2C_ERROR(/* Read from unset register $t0 */)->unk4 = (s32) var_t1->unk10;
                            M2C_ERROR(/* Read from unset register $t0 */)->unk8 = (s32) var_t1->unk14;
                            M2C_ERROR(/* Read from unset register $t0 */)->unkC = (s32) var_t1->unk18;
                        } else {
                            M2C_ERROR(/* Read from unset register $t0 */)->unkC = temp_s0_7;
                        }
                        temp_s3_7 = GTE_SZ3;
                        M2C_ERROR(/* Read from unset register $t0 */)->unk54 = (s32) GTE_SXY2;
                        if (temp_s3_7 != 0) {
                            func_800F14C4();
                            temp_s0_8 = M2C_ERROR(/* Read from unset register $t7 */) - 1;
                            if ((temp_s0_8 > 0) && (temp_s0_8 < 0xFFF)) {
                                var_s6_7 = (s32) ((temp_s4_5 >> 0x10) * temp_s2_19) / temp_s3_7;
                                var_s7_5 = (s32) (M2C_ERROR(/* Read from unset register $t1 */)->unk8 * temp_s2_19) / temp_s3_7;
                                temp_s4_16 = var_s6_7 < 0x1F5;
                                if (var_s6_7 <= 0) {
                                    var_s6_7 = 1;
                                }
                                if (temp_s4_16 == 0) {
                                    var_s6_7 = 0x1F4;
                                }
                                temp_s4_17 = var_s7_5 < 0x1F5;
                                if (var_s7_5 <= 0) {
                                    var_s7_5 = 1;
                                }
                                if (temp_s4_17 == 0) {
                                    var_s7_5 = 0x1F4;
                                }
                                temp_v0_7 = M2C_ERROR(/* Read from unset register $t2 */) + 8;
                                temp_s3_8 = M2C_ERROR(/* Read from unset register $t0 */)->unk54 - var_s6_7;
                                M2C_ERROR(/* Read from unset register $t2 */)->unk8 = temp_s3_8;
                                temp_s4_18 = M2C_ERROR(/* Read from unset register $t0 */)->unk56 - var_s7_5;
                                temp_v0_7->unk2 = temp_s4_18;
                                temp_s1_11 = temp_s3_8 + (var_s6_7 * 2);
                                temp_v0_8 = temp_v0_7 + M2C_ERROR(/* Read from unset register $t4 */);
                                temp_v0_8->unk0 = temp_s1_11;
                                temp_v0_8->unk2 = temp_s4_18;
                                temp_v0_9 = temp_v0_8 + M2C_ERROR(/* Read from unset register $t4 */);
                                temp_s2_20 = temp_s4_18 + (var_s7_5 * 2);
                                temp_v0_9->unk0 = temp_s3_8;
                                temp_v0_9->unk2 = temp_s2_20;
                                var_v0 = temp_v0_9 + M2C_ERROR(/* Read from unset register $t4 */);
                                var_v0->unk0 = temp_s1_11;
                                var_v0->unk2 = temp_s2_20;
block_133:
                                var_s1 = M2C_ERROR(/* Read from unset register $t1 */) + 0x10;
                                if (M2C_ERROR(/* Read from unset register $t3 */) & 0x40) {
                                    temp_s4_19 = M2C_ERROR(/* Read from unset register $t0 */)->unk8;
                                    M2C_ERROR(/* Read from unset register $t2 */)->unkC = (s32) *M2C_ERROR(/* Read from unset register $t0 */);
                                    temp_s3_9 = M2C_ERROR(/* Read from unset register $t2 */) + 0xC + M2C_ERROR(/* Read from unset register $t4 */);
                                    *temp_s3_9 = M2C_ERROR(/* Read from unset register $t0 */)->unk4;
                                    temp_s3_10 = temp_s3_9 + M2C_ERROR(/* Read from unset register $t4 */);
                                    *temp_s3_10 = temp_s4_19;
                                    *(temp_s3_10 + M2C_ERROR(/* Read from unset register $t4 */)) = temp_s4_19 >> 0x10;
                                    var_s1 += 0xC;
                                }
block_135:
                                var_s2 = M2C_ERROR(/* Read from unset register $t0 */)->unkC;
                                temp_s0_9 = ((u32) M2C_ERROR(/* Read from unset register $t3 */) >> 0x10) & 3;
                                M2C_ERROR(/* Read from unset register $t2 */)->unk4 = var_s2;
                                if (temp_s0_9 != 0) {
                                    if (temp_s0_9 == 2) {
                                        temp_s3_11 = M2C_ERROR(/* Read from unset register $t2 */) + 4 + M2C_ERROR(/* Read from unset register $t4 */);
                                        *temp_s3_11 = var_s1->unk0;
                                        temp_s3_12 = temp_s3_11 + M2C_ERROR(/* Read from unset register $t4 */);
                                        *temp_s3_12 = var_s1->unk4;
                                        var_s1 += 8;
                                        if (M2C_ERROR(/* Read from unset register $t3 */) & 1) {
                                            temp_s5_10 = *var_s1;
                                            var_s1 += 4;
                                            *(temp_s3_12 + M2C_ERROR(/* Read from unset register $t4 */)) = temp_s5_10;
                                        }
                                    } else {
                                        temp_s0_10 = (u32) M2C_ERROR(/* Read from unset register $t3 */) >> 0x10;
                                        if (temp_s0_9 == 1) {
                                            temp_s3_13 = temp_s0_10 & 4;
                                            temp_s0_11 = M2C_ERROR(/* Read from unset register $t3 */) & 1;
                                            if (temp_s3_13 != 0) {
                                                var_v0 = var_s1;
                                                var_s1 += 8;
                                                if (temp_s0_11 != 0) {
                                                    var_s1 += 4;
                                                }
                                            }
                                            temp_s7_2 = M2C_ERROR(/* Read from unset register $t0 */)->unk48 + (*var_s1 * 8);
                                            GTE_VXY0 = temp_s7_2->unk0;
                                            GTE_VZ0 = temp_s7_2->unk4;
                                            GTE_RGBC = var_s2;
                                            gte_nccs();
                                            var_s1 += 4;
                                            M2C_ERROR(/* Read from unset register $t2 */)->unk4 = (s32) GTE_RGB2;
                                            if (temp_s3_13 != 0) {
                                                GTE_RGBC = var_v0->unk0;
                                                gte_nccs();
                                                temp_v1_5 = M2C_ERROR(/* Read from unset register $t2 */) + 4 + M2C_ERROR(/* Read from unset register $t4 */);
                                                *temp_v1_5 = GTE_RGB2;
                                                GTE_RGBC = var_v0->unk4;
                                                gte_nccs();
                                                temp_v1_6 = temp_v1_5 + M2C_ERROR(/* Read from unset register $t4 */);
                                                *temp_v1_6 = GTE_RGB2;
                                                if (temp_s0_11 != 0) {
                                                    GTE_RGBC = var_v0->unk8;
                                                    gte_nccs();
                                                    *(temp_v1_6 + M2C_ERROR(/* Read from unset register $t4 */)) = GTE_RGB2;
                                                }
                                            }
                                        } else {
                                            temp_s3_14 = temp_s0_10 & 4;
                                            if (temp_s3_14 != 0) {
                                                var_v0 = var_s1;
                                                var_s1 += 8;
                                                if (M2C_ERROR(/* Read from unset register $t3 */) & 1) {
                                                    var_s1 += 4;
                                                }
                                            }
                                            temp_s5_11 = var_s1->unk0;
                                            temp_s6_7 = M2C_ERROR(/* Read from unset register $t0 */)->unk48;
                                            temp_s7_3 = ((temp_s5_11 & 0xFFFF) * 8) + temp_s6_7;
                                            GTE_VXY0 = temp_s7_3->unk0;
                                            GTE_VZ0 = temp_s7_3->unk4;
                                            GTE_RGBC = var_s2;
                                            gte_nccs();
                                            if (temp_s3_14 != 0) {
                                                var_s2 = var_v0->unk0;
                                            }
                                            temp_s5_12 = ((temp_s5_11 >> 0x10) * 8) + temp_s6_7;
                                            GTE_VXY0 = temp_s5_12->unk0;
                                            GTE_VZ0 = temp_s5_12->unk4;
                                            M2C_ERROR(/* Read from unset register $t2 */)->unk4 = (s32) GTE_RGB2;
                                            GTE_RGBC = var_s2;
                                            gte_nccs();
                                            temp_s5_13 = var_s1->unk4;
                                            if (temp_s3_14 != 0) {
                                                var_s2 = var_v0->unk4;
                                            }
                                            temp_t8_2 = M2C_ERROR(/* Read from unset register $t2 */) + 4 + M2C_ERROR(/* Read from unset register $t4 */);
                                            temp_s7_4 = ((temp_s5_13 & 0xFFFF) * 8) + temp_s6_7;
                                            GTE_VXY0 = temp_s7_4->unk0;
                                            GTE_VZ0 = temp_s7_4->unk4;
                                            *temp_t8_2 = GTE_RGB2;
                                            GTE_RGBC = var_s2;
                                            gte_nccs();
                                            temp_t8_3 = temp_t8_2 + M2C_ERROR(/* Read from unset register $t4 */);
                                            if (!(M2C_ERROR(/* Read from unset register $t3 */) & 1)) {
                                                var_s1 += 8;
                                                *temp_t8_3 = GTE_RGB2;
                                            } else {
                                                if (temp_s3_14 != 0) {
                                                    var_s2 = var_v0->unk8;
                                                }
                                                temp_s5_14 = ((temp_s5_13 >> 0x10) * 8) + temp_s6_7;
                                                GTE_VXY0 = temp_s5_14->unk0;
                                                GTE_VZ0 = temp_s5_14->unk4;
                                                *temp_t8_3 = GTE_RGB2;
                                                GTE_RGBC = var_s2;
                                                gte_nccs();
                                                var_s1 += 8;
                                                *(temp_t8_3 + M2C_ERROR(/* Read from unset register $t4 */)) = GTE_RGB2;
                                            }
                                        }
                                    }
                                }
                                if ((M2C_ERROR(/* Read from unset register $t7 */) < 0x46) && (temp_s0_12 = M2C_ERROR(/* Read from unset register $t0 */)->unk38, (M2C_ERROR(/* Read from unset register $t0 */)->unk84 < 0)) && (temp_v0_10 = temp_s0_12 < 0x46, ((temp_s0_12 < 0xC8) != 0))) {
                                    var_s2_2 = M2C_ERROR(/* Read from unset register $t0 */)->unkAC;
                                    if (temp_v0_10 == 0) {
                                        var_s2_2 = M2C_ERROR(/* Read from unset register $t0 */)->unk4C;
                                    }
                                    temp_s4_20 = M2C_ERROR(/* Read from unset register $t0 */)->unk7C;
                                    var_s2_2->unk8 = (s16) M2C_ERROR(/* Read from unset register $t0 */)->unk6;
                                    var_s2_2->unk0 = (s32) M2C_ERROR(/* Read from unset register $t1 */);
                                    var_s2_2->unk4 = (s32) M2C_ERROR(/* Read from unset register $t2 */);
                                    var_s3_4 = M2C_ERROR(/* Read from unset register $t7 */);
                                    if (temp_s4_20 != 0) {
                                        var_s3_4 = temp_s4_20;
                                    }
                                    var_s2_2->unkA = (s16) var_s3_4;
                                    temp_s2_21 = var_s2_2 + 0xC;
                                    M2C_ERROR(/* Read from unset register $t0 */)->unkAC = temp_s2_21;
                                    if (temp_v0_10 == 0) {
                                        M2C_ERROR(/* Read from unset register $t0 */)->unk4C = temp_s2_21;
                                    }
                                    M2C_ERROR(/* Read from unset register $t0 */)->unk38 = (s32) (temp_s0_12 + 1);
                                } else {
                                    if (M2C_ERROR(/* Read from unset register $t0 */)->unk7C != 0) {

                                    }
                                    if (M2C_ERROR(/* Read from unset register $t3 */) & 0x80) {
                                        temp_s0_13 = M2C_ERROR(/* Read from unset register $t2 */);
                                        temp_s2_22 = ((u32) M2C_ERROR(/* Read from unset register $t3 */) >> 8) & 0xF;
                                        temp_t2 = M2C_ERROR(/* Read from unset register $t2 */) + (temp_s2_22 * 4);
                                        temp_t2_2 = temp_t2 + 4;
                                        temp_t2->unk4 = (s32) M2C_ERROR(/* Read from unset register $t0 */)->unk60;
                                        temp_t2_2->unk4 = (s32) M2C_ERROR(/* Read from unset register $t0 */)->unk64;
                                        temp_t2_2->unk8 = (s32) M2C_ERROR(/* Read from unset register $t0 */)->unk68;
                                        temp_s4_21 = M2C_ERROR(/* Read from unset register $t0 */)->unk40 + (M2C_ERROR(/* Read from unset register $t7 */) * 4);
                                        temp_s5_15 = temp_s4_21->unk0;
                                        temp_t2->unk4 = (s32) (((u32) (temp_s5_15 << 8) >> 8) | (2 << 0x18));
                                        temp_s4_21->unk0 = (u32) temp_t2_2;
                                        temp_s4_21->unk3 = (s8) (temp_s5_15 >> 0x18);
                                        temp_t2_3 = temp_t2_2 + 0xC;
                                        temp_s5_16 = temp_s4_21->unk0;
                                        *temp_s0_13 = ((u32) (temp_s5_16 << 8) >> 8) | (temp_s2_22 << 0x18);
                                        temp_s4_21->unk0 = (u32) temp_s0_13;
                                        temp_s4_21->unk3 = (s8) (temp_s5_16 >> 0x18);
                                        temp_t2_2->unkC = (s32) M2C_ERROR(/* Read from unset register $t0 */)->unk60;
                                        temp_t2_3->unk4 = (s32) M2C_ERROR(/* Read from unset register $t0 */)->unk64;
                                        temp_t2_3->unk4 = (s8) M2C_ERROR(/* Read from unset register $t0 */)->unk6;
                                        temp_t2_3->unk8 = (s32) *var_s1;
                                        temp_s5_17 = temp_s4_21->unk0;
                                        temp_t2_2->unkC = (s32) (((u32) (temp_s5_17 << 8) >> 8) | (2 << 0x18));
                                        temp_s4_21->unk0 = (u32) temp_t2_3;
                                        temp_s4_21->unk3 = (s8) (temp_s5_17 >> 0x18);
                                        M2C_ERROR(/* Read from unset register $t0 */)->unk88 = (s32) (M2C_ERROR(/* Read from unset register $t0 */)->unk88 + 1);
                                    } else {
                                        temp_s1_12 = ((u32) M2C_ERROR(/* Read from unset register $t3 */) >> 8) & 0xF;
                                        temp_s2_23 = M2C_ERROR(/* Read from unset register $t0 */)->unk40 + (M2C_ERROR(/* Read from unset register $t7 */) * 4);
                                        temp_s4_22 = temp_s2_23->unk0;
                                        *M2C_ERROR(/* Read from unset register $t2 */) = ((u32) (temp_s4_22 << 8) >> 8) | (temp_s1_12 << 0x18);
                                        temp_s2_23->unk0 = (u32) M2C_ERROR(/* Read from unset register $t2 */);
                                        temp_s2_23->unk3 = (s8) (temp_s4_22 >> 0x18);
                                        M2C_ERROR(/* Read from unset register $t0 */)->unk88 = (s32) (M2C_ERROR(/* Read from unset register $t0 */)->unk88 + 1);
                                        temp_t2_4 = M2C_ERROR(/* Read from unset register $t2 */) + (temp_s1_12 * 4);
                                        temp_t2_5 = temp_t2_4 + 4;
                                        if ((0x02000000 & M2C_ERROR(/* Read from unset register $t2 */)->unk4) && !(M2C_ERROR(/* Read from unset register $t3 */) & 0x40)) {
                                            temp_t2_4->unk4 = (s32) M2C_ERROR(/* Read from unset register $t0 */)->unk6C;
                                            temp_t2_5->unk4 = (s32) M2C_ERROR(/* Read from unset register $t0 */)->unk70;
                                            temp_t2_5->unk4 = (s8) ((u32) M2C_ERROR(/* Read from unset register $t3 */) >> 0xE);
                                            temp_s4_23 = temp_s2_23->unk0;
                                            temp_t2_4->unk4 = (s32) (((u32) (temp_s4_23 << 8) >> 8) | (1 << 0x18));
                                            temp_s2_23->unk0 = (u32) temp_t2_5;
                                            temp_s2_23->unk3 = (s8) (temp_s4_23 >> 0x18);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                var_t1 = M2C_ERROR(/* Read from unset register $t1 */) + ((((u32) M2C_ERROR(/* Read from unset register $t3 */) >> 0xC) & 0xF) * 4);
                goto loop_15;
            }
        } else {
            var_a1 = M2C_ERROR(/* Read from unset register $a1 */) + (M2C_ERROR(/* Read from unset register $t0 */)->unk50 * 4);
            goto loop_1;
        }
    }
    M2C_ERROR(/* Read from unset register $a0 */)->unk8 = (s32) M2C_ERROR(/* Read from unset register $t2 */);
}
