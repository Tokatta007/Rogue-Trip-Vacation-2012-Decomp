/* m2c reference for func_800EFA28 @ 800EFA28 (430 words). Generated; not compiled or validated. */
? func_800F00E0();                                  /* extern */
s32 func_801594CC(s32);                             /* extern */
s32 func_8015959C(s32);                             /* extern */
s32 func_8015A62C(s32, s32);                        /* extern */

void func_800EFA28(void *arg0, void *arg1, s32 arg2, s32 arg3) {
    s16 temp_s1_3;
    s16 temp_s1_4;
    s16 temp_s2_3;
    s16 temp_s2_4;
    s16 temp_s2_5;
    s16 temp_s3_3;
    s16 temp_s3_5;
    s16 temp_s4_2;
    s16 temp_s4_3;
    s16 temp_s5_4;
    s16 var_gp;
    s16 var_gp_2;
    s16 var_gp_3;
    s16 var_s7;
    s16 var_v0;
    s16 var_v1_2;
    s32 *temp_s2_6;
    s32 *temp_s2_7;
    s32 *temp_t8;
    s32 *temp_t8_5;
    s32 *temp_t8_7;
    s32 *temp_t8_8;
    s32 temp_fp;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s1;
    s32 temp_s1_2;
    s32 temp_s1_5;
    s32 temp_s1_6;
    s32 temp_s2;
    s32 temp_s2_2;
    s32 temp_s2_8;
    s32 temp_s2_9;
    s32 temp_s3;
    s32 temp_s3_2;
    s32 temp_s3_4;
    s32 temp_s3_6;
    s32 temp_s3_7;
    s32 temp_s3_8;
    s32 temp_s4;
    s32 temp_s4_4;
    s32 temp_s5;
    s32 temp_s5_2;
    s32 temp_s5_3;
    s32 temp_s5_5;
    s32 temp_s7;
    s32 temp_s7_2;
    s32 temp_s7_3;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 temp_v0_6;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_s1;
    s32 var_s1_2;
    s32 var_s6;
    s32 var_s7_2;
    s32 var_t7;
    s32 var_t7_2;
    s32 var_v1;
    u32 *temp_t8_6;
    u32 temp_s4_5;
    u32 temp_s4_6;
    u32 temp_s4_7;
    u32 temp_t2;
    u32 temp_t3;
    void *temp_s0_3;
    void *temp_s2_10;
    void *temp_t2_2;
    void *temp_t8_2;
    void *temp_t8_3;
    void *temp_t8_4;
    void *var_t2;
    void *var_t9;

    *(s32 *)0x1F8003FC = saved_reg_s0;
    *(s32 *)0x1F8003F8 = saved_reg_s1;
    *(s32 *)0x1F8003F4 = saved_reg_s2;
    *(s32 *)0x1F8003F0 = saved_reg_s3;
    *(s32 *)0x1F8003EC = saved_reg_s4;
    *(s32 *)0x1F8003E8 = saved_reg_s5;
    *(s32 *)0x1F8003E4 = saved_reg_s6;
    *(s32 *)0x1F8003E0 = saved_reg_s7;
    *(s32 *)0x1F8003DC = saved_reg_ra;
    *(s32 *)0x1F8003D8 = saved_reg_fp;
    *(s32 *)0x1F8003D4 = saved_reg_gp;
    *(s32 *)0x1F8003D0 = arg2;
    *(s32 *)0x1F8003CC = arg3;
    temp_t3 = arg1->unk0;
    temp_t2 = arg0->unk8;
    if ((u32) arg0->unkC >= temp_t2) {
        temp_s1 = *(s32 *)0x1F8003B4;
        temp_s2 = *(s32 *)0x1F8003B8;
        temp_s3 = *(s32 *)0x1F8003BC;
        temp_s7 = arg1->unk10 + temp_s1;
        temp_v0 = arg1->unk14 + temp_s2;
        temp_v1 = arg1->unk18 + temp_s3;
        temp_s4 = (arg1->unk4 + temp_s1) & 0xFFFF;
        temp_fp = temp_s4 | ((arg1->unk8 + temp_s2) << 0x10);
        GTE_VXY0 = temp_fp;
        GTE_VZ0 = arg1->unkC + temp_s3;
        if ((temp_t3 & 0xF) == 3) {
            GTE_VXY1 = (temp_v0 << 0x10) | (temp_s7 & 0xFFFF);
            GTE_VZ1 = temp_v1;
            GTE_VXY2 = ((arg1->unk1C + temp_s1) & 0xFFFF) | ((arg1->unk20 + temp_s2) << 0x10);
            GTE_VZ2 = arg1->unk24 + temp_s3;
            gte_rtpt();
            temp_s1_2 = GTE_SZ1;
            temp_s2_2 = GTE_SZ2;
            temp_s3_2 = GTE_SZ3;
            gte_nclip();
            var_v1 = temp_s2_2;
            if (temp_s1_2 >= temp_s2_2) {
                var_v1 = temp_s1_2;
            }
            var_t7 = temp_s3_2;
            if (var_v1 >= temp_s3_2) {
                var_t7 = var_v1;
            }
            if ((var_t7 > 0) && (((s32) temp_t3 < 0) || (GTE_MAC0 >= 0))) {
                temp_s1_3 = GTE_SXY0;
                temp_s2_3 = GTE_SXY1;
                temp_s3_3 = GTE_SXY2;
                GTE_VXY0 = ((arg1->unk28 + temp_s1) & 0xFFFF) | ((arg1->unk2C + temp_s2) << 0x10);
                GTE_VZ0 = arg1->unk30 + temp_s3;
                gte_rtps();
                var_v1_2 = temp_s1_3;
                if (temp_s1_3 >= temp_s2_3) {
                    var_v1_2 = temp_s2_3;
                }
                var_s7 = var_v1_2;
                if (var_v1_2 >= temp_s3_3) {
                    var_s7 = temp_s3_3;
                }
                var_gp = temp_s2_3;
                if (temp_s1_3 >= temp_s2_3) {
                    var_gp = temp_s1_3;
                }
                var_v0 = temp_s3_3;
                if (var_gp >= temp_s3_3) {
                    var_v0 = var_gp;
                }
                temp_s4_2 = GTE_SXY2;
                temp_s5 = GTE_SZ0;
                if (temp_s5 >= var_t7) {
                    var_t7 = temp_s5;
                }
                if ((var_t7 - 1) >= 0) {
                    var_gp_2 = temp_s4_2;
                    if (var_v0 >= temp_s4_2) {
                        var_gp_2 = var_v0;
                    }
                    if (var_gp_2 >= 0) {
                        var_gp_3 = var_s7;
                        if (var_s7 >= temp_s4_2) {
                            var_gp_3 = temp_s4_2;
                        }
                        if ((s32) ((u32) GTE_OFX >> 0xF) >= var_gp_3) {
                            temp_t2->unk8 = (s32) temp_s1_3;
                            func_800F00E0();
                            *M2C_ERROR(/* Read from unset register $t8 */) = (s32) temp_s2_3;
                            temp_t8 = M2C_ERROR(/* Read from unset register $t8 */) + M2C_ERROR(/* Read from unset register $t4 */);
                            *temp_t8 = (s32) temp_s3_3;
                            *(temp_t8 + M2C_ERROR(/* Read from unset register $t4 */)) = (s32) temp_s4_2;
                            goto block_50;
                        }
                    }
                }
            }
        } else if ((temp_t3 & 0xF) == 5) {
            temp_s0 = GTE_H;
            gte_rtps();
            temp_s7_2 = arg1->unk10 * temp_s0;
            temp_s3_4 = GTE_SZ3;
            if (temp_s3_4 > 0) {
                func_800F00E0();
                var_s6 = temp_s7_2 / temp_s3_4;
                M2C_ERROR(/* Read from unset register $t0 */)->unk3B0 = (s32) GTE_SXY2;
                temp_s5_2 = var_s6 < 0x1F5;
                if (var_s6 <= 0) {
                    var_s6 = 1;
                }
                if (temp_s5_2 == 0) {
                    var_s6 = 0x1F4;
                }
                var_s7_2 = (s32) (M2C_ERROR(/* Read from unset register $t5 */) * temp_s0) / temp_s3_4;
                temp_s5_3 = var_s7_2 < 0x1F5;
                if (var_s7_2 <= 0) {
                    var_s7_2 = 1;
                }
                if (temp_s5_3 == 0) {
                    var_s7_2 = 0x1F4;
                }
                temp_s3_5 = M2C_ERROR(/* Read from unset register $t0 */)->unk3B0 - var_s6;
                temp_s4_3 = M2C_ERROR(/* Read from unset register $t0 */)->unk3B2 - var_s7_2;
                *M2C_ERROR(/* Read from unset register $t8 */) = temp_s3_5;
                M2C_ERROR(/* Read from unset register $t8 */)->unk2 = temp_s4_3;
                temp_s5_4 = temp_s3_5 + (var_s6 * 2);
                temp_t8_2 = M2C_ERROR(/* Read from unset register $t8 */) + M2C_ERROR(/* Read from unset register $t4 */);
                temp_t8_2->unk0 = temp_s5_4;
                temp_t8_2->unk2 = temp_s4_3;
                temp_t8_3 = temp_t8_2 + M2C_ERROR(/* Read from unset register $t4 */);
                temp_s2_4 = temp_s4_3 + (var_s7_2 * 2);
                temp_t8_3->unk0 = temp_s3_5;
                temp_t8_3->unk2 = temp_s2_4;
                temp_t8_4 = temp_t8_3 + M2C_ERROR(/* Read from unset register $t4 */);
                temp_t8_4->unk0 = temp_s5_4;
                temp_t8_4->unk2 = temp_s2_4;
                goto block_50;
            }
        } else if ((temp_t3 & 0xF) == 7) {
            temp_v0_2 = arg1->unk14;
            GTE_VXY1 = temp_fp;
            GTE_VZ0 = temp_s4 + temp_v0_2;
            GTE_VZ1 = temp_s4 - temp_v0_2;
            gte_rtpt();
            temp_s7_3 = arg1->unk10;
            temp_s0_2 = temp_s7_3 * GTE_H;
            temp_s3_6 = GTE_SZ1;
            if (temp_s3_6 > 0) {
                func_800F00E0();
                temp_s1_4 = GTE_SXY0;
                temp_s2_5 = GTE_SXY1;
                M2C_ERROR(/* Read from unset register $t0 */)->unk3A8 = (s32) M2C_ERROR(/* Read from unset register $a0 */);
                M2C_ERROR(/* Read from unset register $t0 */)->unk3AC = (s32) M2C_ERROR(/* Read from unset register $a1 */);
                temp_s4_4 = temp_s1_4 >> 0x10;
                temp_v0_3 = func_8015A62C(temp_s4_4 - (temp_s2_5 >> 0x10), temp_s1_4 - temp_s2_5);
                temp_v0_4 = func_801594CC(temp_v0_3);
                var_s1 = (temp_s0_2 / temp_s3_6) - 1;
                temp_v1_2 = temp_s7_3 * 2;
                if (var_s1 <= 0) {
                    var_s1 = 1;
                }
                var_s1_2 = var_s1 + 1;
                if (var_s1_2 >= temp_v1_2) {
                    var_s1_2 = temp_v1_2;
                }
                temp_s5_5 = (s32) (var_s1_2 * temp_v0_4) / 4096;
                temp_v0_5 = (s32) (var_s1_2 * func_8015959C(temp_v0_3)) / 4096;
                M2C_ERROR(/* Read from unset register $t2 */)->unk8 = (s32) ((M2C_ERROR(/* Read from unset register $t8 */) + temp_s5_5) | ((temp_s4_4 - temp_v0_5) << 0x10));
                temp_s2_6 = M2C_ERROR(/* Read from unset register $t2 */) + 8 + M2C_ERROR(/* Read from unset register $t4 */);
                *temp_s2_6 = (M2C_ERROR(/* Read from unset register $t8 */) - temp_s5_5) | ((temp_s4_4 + temp_v0_5) << 0x10);
                temp_s2_7 = temp_s2_6 + M2C_ERROR(/* Read from unset register $t4 */);
                *temp_s2_7 = (M2C_ERROR(/* Read from unset register $t9 */) + temp_s5_5) | ((M2C_ERROR(/* Read from unset register $t5 */) - temp_v0_5) << 0x10);
                *(temp_s2_7 + M2C_ERROR(/* Read from unset register $t4 */)) = (M2C_ERROR(/* Read from unset register $t9 */) - temp_s5_5) | ((M2C_ERROR(/* Read from unset register $t5 */) + temp_v0_5) << 0x10);
                goto block_50;
            }
        } else if ((temp_t3 & 0xF) == 0xD) {
            temp_v0_6 = (temp_v0 << 0x10) | (temp_s7 & 0xFFFF);
            GTE_VXY1 = temp_v0_6;
            GTE_VZ1 = temp_v1;
            GTE_VXY2 = temp_v0_6;
            GTE_VZ2 = temp_v1;
            gte_rtpt();
            temp_s1_5 = GTE_SZ1;
            temp_s2_8 = GTE_SZ2;
            var_t7_2 = temp_s2_8;
            if (temp_s1_5 >= temp_s2_8) {
                var_t7_2 = temp_s1_5;
            }
            if (var_t7_2 > 0) {
                temp_s2_9 = GTE_SXY1;
                temp_t2->unk8 = (s32) GTE_SXY0;
                func_800F00E0();
                *M2C_ERROR(/* Read from unset register $t8 */) = temp_s2_9;
block_50:
                temp_s0_3 = M2C_ERROR(/* Read from unset register $a1 */) + 0x34;
                var_t9 = temp_s0_3 + 4;
                if (M2C_ERROR(/* Read from unset register $t3 */) & 0x40) {
                    temp_s3_7 = var_t9->unk4;
                    temp_s4_5 = var_t9->unk8;
                    var_t9 += 0xC;
                    M2C_ERROR(/* Read from unset register $t2 */)->unkC = (s32) temp_s0_3->unk4;
                    temp_t8_5 = M2C_ERROR(/* Read from unset register $t2 */) + 0xC + M2C_ERROR(/* Read from unset register $t4 */);
                    *temp_t8_5 = temp_s3_7;
                    temp_t8_6 = temp_t8_5 + M2C_ERROR(/* Read from unset register $t4 */);
                    *temp_t8_6 = temp_s4_5 >> 0x10;
                    *(temp_t8_6 + M2C_ERROR(/* Read from unset register $t4 */)) = temp_s4_5;
                }
                temp_s3_8 = ((u32) M2C_ERROR(/* Read from unset register $t3 */) >> 0x10) & 3;
                M2C_ERROR(/* Read from unset register $t2 */)->unk4 = (s32) M2C_ERROR(/* Read from unset register $a1 */)->unk34;
                if (temp_s3_8 != 0) {
                    if (temp_s3_8 == 2) {
                        temp_t8_7 = M2C_ERROR(/* Read from unset register $t2 */) + 4 + M2C_ERROR(/* Read from unset register $t4 */);
                        *temp_t8_7 = var_t9->unk0;
                        temp_t8_8 = temp_t8_7 + M2C_ERROR(/* Read from unset register $t4 */);
                        *temp_t8_8 = var_t9->unk4;
                        *(temp_t8_8 + M2C_ERROR(/* Read from unset register $t4 */)) = var_t9->unk8;
                        goto block_55;
                    }
                } else {
block_55:
                    temp_s1_6 = ((u32) M2C_ERROR(/* Read from unset register $t3 */) >> 8) & 0xF;
                    temp_s2_10 = *M2C_ERROR(/* Read from unset register $a0 */) + (M2C_ERROR(/* Read from unset register $t7 */) * 4);
                    temp_s4_6 = temp_s2_10->unk0;
                    *M2C_ERROR(/* Read from unset register $t2 */) = ((u32) (temp_s4_6 << 8) >> 8) | (temp_s1_6 << 0x18);
                    temp_s2_10->unk0 = (u32) M2C_ERROR(/* Read from unset register $t2 */);
                    temp_s2_10->unk3 = (s8) (temp_s4_6 >> 0x18);
                    temp_t2_2 = M2C_ERROR(/* Read from unset register $t2 */) + (temp_s1_6 * 4);
                    var_t2 = temp_t2_2 + 4;
                    if ((0x02000000 & M2C_ERROR(/* Read from unset register $t2 */)->unk4) && !(M2C_ERROR(/* Read from unset register $t3 */) & 0x40)) {
                        temp_t2_2->unk4 = (s32) M2C_ERROR(/* Read from unset register $t0 */)->unk3C4;
                        var_t2->unk4 = (s32) M2C_ERROR(/* Read from unset register $t0 */)->unk3C8;
                        var_t2->unk4 = (s8) ((u32) M2C_ERROR(/* Read from unset register $t3 */) >> 0xE);
                        temp_s4_7 = temp_s2_10->unk0;
                        temp_t2_2->unk4 = (s32) (((u32) (temp_s4_7 << 8) >> 8) | (1 << 0x18));
                        temp_s2_10->unk0 = (u32) var_t2;
                        temp_s2_10->unk3 = (s8) (temp_s4_7 >> 0x18);
                        var_t2 += 8;
                    }
                    M2C_ERROR(/* Read from unset register $a0 */)->unk8 = var_t2;
                }
            }
        }
    }
}
