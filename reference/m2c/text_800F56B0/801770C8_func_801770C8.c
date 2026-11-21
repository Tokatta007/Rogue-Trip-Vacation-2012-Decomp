/* m2c reference for func_801770C8 @ 801770C8 (474 words). Generated; not compiled or validated. */
? func_80177830(s32, s32, s32, s32);                /* extern */
? func_80177884();                                  /* extern */
? func_80177A98(u32, s32, u32, s32);                /* extern */

void func_801770C8(void *arg0, void *arg1, s32 arg2) {
    s16 temp_s5_8;
    s16 temp_s6_5;
    s32 *var_t4;
    s32 temp_a0_4;
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_a1_3;
    s32 temp_a1_4;
    s32 temp_a1_5;
    s32 temp_a2_4;
    s32 temp_a3;
    s32 temp_fp;
    s32 temp_gp;
    s32 temp_gp_2;
    s32 temp_s1_4;
    s32 temp_s1_7;
    s32 temp_s2_3;
    s32 temp_s3_2;
    s32 temp_s4_2;
    s32 temp_s5_10;
    s32 temp_s5_12;
    s32 temp_s5_3;
    s32 temp_s5_5;
    s32 temp_s5_7;
    s32 temp_s5_9;
    s32 temp_s6;
    s32 temp_s6_6;
    s32 temp_s6_7;
    s32 temp_s7;
    s32 temp_s7_2;
    s32 temp_s7_3;
    s32 temp_sp;
    s32 temp_t3;
    s32 temp_v0_3;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 var_a2;
    u32 *temp_s1;
    u32 *temp_t5;
    u32 *temp_t5_2;
    u32 *temp_t5_3;
    u32 *temp_t6;
    u32 *temp_t6_2;
    u32 temp_a0;
    u32 temp_a0_2;
    u32 temp_a0_3;
    u32 temp_a0_5;
    u32 temp_a2;
    u32 temp_a2_2;
    u32 temp_a2_3;
    u32 temp_a2_5;
    u32 temp_s0;
    u32 temp_s1_3;
    u32 temp_s1_6;
    u32 temp_s2;
    u32 temp_s2_2;
    u32 temp_s2_4;
    u32 temp_s2_5;
    u32 temp_s3;
    u32 temp_s3_3;
    u32 temp_s4;
    u32 temp_s4_3;
    u32 temp_s5_11;
    u32 temp_s5_2;
    u32 temp_s5_4;
    u32 temp_s5_6;
    u32 temp_s6_2;
    u32 temp_s6_3;
    u32 temp_s6_4;
    u32 temp_s6_8;
    u32 temp_v0;
    u32 temp_v0_2;
    void *temp_s1_2;
    void *temp_s1_5;
    void *temp_s5;
    void *var_t1;

    var_a2 = arg2;
    *(void **)0x1F800000 = saved_reg_s0;
    *(void **)0x1F800004 = saved_reg_s1;
    *(void **)0x1F800008 = saved_reg_s2;
    *(void **)0x1F80000C = saved_reg_s3;
    *(void **)0x1F800010 = saved_reg_s4;
    *(void **)0x1F800014 = saved_reg_s5;
    *(void **)0x1F800018 = saved_reg_s6;
    *(void **)0x1F80001C = saved_reg_s7;
    *(void **)0x1F800020 = M2C_ERROR(/* Read from unset register $t8 */);
    *(void **)0x1F800024 = M2C_ERROR(/* Read from unset register $t9 */);
    *(void **)0x1F800028 = saved_reg_ra;
    *(void **)0x1F80002C = saved_reg_fp;
    *(void **)0x1F800030 = saved_reg_gp;
    *(void **)0x1F800034 = sp;
    *(void **)0x1F800040 = arg0;
    *(void **)0x1F80004C = arg1;
    *(void **)0x1F80003C = arg0->unkC;
    var_t1 = (void *)0x1F8000B0;
    *(void **)0x1F800048 = NULL;
loop_1:
    M2C_ERROR(/* Read from unset register $t0 */)->unk50 = var_a2;
    if (var_a2 > 0) {
        temp_s1 = var_t1->unk0;
        temp_s5 = var_t1->unk4;
        temp_s0 = *temp_s1;
        M2C_ERROR(/* Read from unset register $t0 */)->unk44 = temp_s1;
        temp_t3 = ((temp_s0 >> 4) & 3) * 4;
        temp_t5 = temp_s5 + 8 + temp_t3;
        temp_t6 = temp_t5 + temp_t3;
        temp_s6 = (((temp_s0 >> 8) & 0xF) + 1) * 4;
        temp_a3 = M2C_ERROR(/* Read from unset register $t0 */)->unk40->unk8 + temp_s6 + temp_s6;
        if ((u32) M2C_ERROR(/* Read from unset register $t0 */)->unk3C >= (u32) (temp_a3 + 0xA0)) {
            if (!(temp_s0 & 1)) {
                M2C_ERROR(/* Read from unset register $t0 */)->unk58 = 0xC;
                temp_s5_2 = temp_s5->unk8;
                func_80177830(((s32) (((u32) *temp_t6 >> 0x10) + (temp_s5_2 >> 0x10)) >> 1) << 0x10, (s32) ((temp_s5_2 & 0xFFFF) + (*temp_t5 & 0xFFFF)) >> 1, var_a2, temp_a3);
                if (temp_s0 & 0x40) {
                    temp_s5_3 = M2C_ERROR(/* Read from unset register $t4 */)->unk4;
                    M2C_ERROR(/* Read from unset register $t0 */)->unk54 = (s32) (M2C_ERROR(/* Read from unset register $t5 */) + 4)->unk2;
                    func_80177830(((s32) (((u32) (M2C_ERROR(/* Read from unset register $t6 */)->unk4 & 0xFFFF) >> 8) + ((u32) (temp_s5_3 & 0xFFFF) >> 8)) >> 1) << 8, (s32) ((temp_s5_3 & 0xFF) + (M2C_ERROR(/* Read from unset register $t5 */)->unk4 & 0xFF)) >> 1);
                }
                temp_s1_2 = M2C_ERROR(/* Read from unset register $t1 */)->unk4;
                temp_s2 = temp_s0 >> 0x10;
                var_t4 = temp_s1_2 + 4;
                temp_t5_2 = var_t4 + M2C_ERROR(/* Read from unset register $t3 */);
                if (((temp_s2 & 4) | (temp_s2 & 2)) != 0) {
                    temp_s5_4 = temp_s1_2->unk4;
                    func_80177830(temp_s5_4 & 0xFF, ((s32) ((((u32) *(temp_t5_2 + M2C_ERROR(/* Read from unset register $t3 */)) >> 0x10) & 0xFF) + ((temp_s5_4 >> 0x10) & 0xFF)) >> 1) << 0x10, ((u32) *temp_t5_2 >> 0x10) & 0xFF);
                } else {
                    goto block_12;
                }
            } else {
                M2C_ERROR(/* Read from unset register $t0 */)->unk58 = 0x10;
                temp_s1_3 = temp_s5->unk8;
                temp_s2_2 = *temp_t5;
                temp_s3 = *temp_t6;
                temp_s4 = *(temp_t6 + temp_t3);
                temp_s6_2 = temp_s1_3 >> 0x10;
                temp_s5_5 = temp_s1_3 & 0xFFFF;
                temp_v0 = temp_s2_2 >> 0x10;
                temp_s7 = temp_s2_2 & 0xFFFF;
                temp_a0 = temp_s3 >> 0x10;
                temp_v1 = temp_s3 & 0xFFFF;
                temp_a2 = temp_s4 >> 0x10;
                temp_a1 = temp_s4 & 0xFFFF;
                M2C_ERROR(/* Read from unset register $t0 */)->unk78 = (s32) (((s32) (temp_s5_5 + temp_v1) >> 1) | (((s32) (temp_s6_2 + temp_a0) >> 1) << 0x10));
                M2C_ERROR(/* Read from unset register $t0 */)->unk7C = (s32) (((s32) (temp_s7 + temp_s5_5) >> 1) | (((s32) (temp_v0 + temp_s6_2) >> 1) << 0x10));
                M2C_ERROR(/* Read from unset register $t0 */)->unk80 = (s32) (((s32) (temp_s7 + temp_a1) >> 1) | (((s32) (temp_v0 + temp_a2) >> 1) << 0x10));
                M2C_ERROR(/* Read from unset register $t0 */)->unk84 = (s32) (((s32) (temp_a1 + temp_v1) >> 1) | (((s32) (temp_a2 + temp_a0) >> 1) << 0x10));
                temp_s5_6 = M2C_ERROR(/* Read from unset register $t0 */)->unk78;
                temp_s6_3 = M2C_ERROR(/* Read from unset register $t0 */)->unk80;
                temp_a0_2 = temp_s6_3 & 0xFFFF;
                temp_a1_2 = (s32) ((temp_s5_6 & 0xFFFF) + temp_a0_2) >> 1;
                temp_a2_2 = temp_a1_2 | (((s32) ((temp_s5_6 >> 0x10) + (temp_s6_3 >> 0x10)) >> 1) << 0x10);
                M2C_ERROR(/* Read from unset register $t0 */)->unk88 = temp_a2_2;
                func_80177A98(temp_a0_2, temp_a1_2, temp_a2_2, temp_a3);
                if (temp_s0 & 0x40) {
                    temp_s1_4 = M2C_ERROR(/* Read from unset register $t4 */)->unk4;
                    temp_s2_3 = M2C_ERROR(/* Read from unset register $t5 */)->unk4;
                    temp_s3_2 = M2C_ERROR(/* Read from unset register $t6 */)->unk4;
                    temp_s4_2 = M2C_ERROR(/* Read from unset register $t7 */)->unk4;
                    temp_s5_7 = temp_s1_4 & 0xFF;
                    temp_s7_2 = temp_s2_3 & 0xFF;
                    temp_v1_2 = temp_s3_2 & 0xFF;
                    temp_a1_3 = temp_s4_2 & 0xFF;
                    temp_s6_4 = (u32) (temp_s1_4 & 0xFFFF) >> 8;
                    temp_v0_2 = (u32) (temp_s2_3 & 0xFFFF) >> 8;
                    temp_a0_3 = (u32) (temp_s3_2 & 0xFFFF) >> 8;
                    temp_a2_3 = (u32) (temp_s4_2 & 0xFFFF) >> 8;
                    M2C_ERROR(/* Read from unset register $t0 */)->unk78 = (s32) (((s32) (temp_s5_7 + temp_v1_2) >> 1) | (((s32) (temp_s6_4 + temp_a0_3) >> 1) << 8));
                    M2C_ERROR(/* Read from unset register $t0 */)->unk7C = (s32) (((s32) (temp_s7_2 + temp_s5_7) >> 1) | (((s32) (temp_v0_2 + temp_s6_4) >> 1) << 8));
                    M2C_ERROR(/* Read from unset register $t0 */)->unk80 = (s32) (((s32) (temp_s7_2 + temp_a1_3) >> 1) | (((s32) (temp_v0_2 + temp_a2_3) >> 1) << 8));
                    M2C_ERROR(/* Read from unset register $t0 */)->unk84 = (s32) (((s32) (temp_a1_3 + temp_v1_2) >> 1) | (((s32) (temp_a2_3 + temp_a0_3) >> 1) << 8));
                    temp_sp = M2C_ERROR(/* Read from unset register $t0 */)->unk78;
                    temp_fp = M2C_ERROR(/* Read from unset register $t0 */)->unk80;
                    M2C_ERROR(/* Read from unset register $t0 */)->unk88 = (s32) (((s32) ((temp_sp & 0xFF) + (temp_fp & 0xFF)) >> 1) | (((s32) (((u32) (temp_sp & 0xFFFF) >> 8) + ((u32) (temp_fp & 0xFFFF) >> 8)) >> 1) << 8));
                    temp_s6_5 = (M2C_ERROR(/* Read from unset register $t5 */) + 4)->unk2;
                    M2C_ERROR(/* Read from unset register $t0 */)->unk54 = (s32) temp_s6_5;
                    M2C_ERROR(/* Read from unset register $t0 */)->unk7A = (s16) (M2C_ERROR(/* Read from unset register $t4 */) + 4)->unk2;
                    M2C_ERROR(/* Read from unset register $t0 */)->unk8A = temp_s6_5;
                    M2C_ERROR(/* Read from unset register $t0 */)->unk7E = temp_s6_5;
                    M2C_ERROR(/* Read from unset register $t0 */)->unk82 = temp_s6_5;
                    func_80177A98(temp_a0_3, temp_a1_3, temp_a2_3);
                    temp_s5_8 = M2C_ERROR(/* Read from unset register $t4 */)->unk2;
                    (M2C_ERROR(/* Read from unset register $t9 */) + 0xC)->unk2 = temp_s5_8;
                    (M2C_ERROR(/* Read from unset register $a3 */) + 0xC)->unk2 = temp_s5_8;
                }
                temp_s1_5 = M2C_ERROR(/* Read from unset register $t1 */)->unk4;
                temp_s2_4 = temp_s0 >> 0x10;
                var_t4 = temp_s1_5 + 4;
                temp_t5_3 = var_t4 + M2C_ERROR(/* Read from unset register $t3 */);
                if (((temp_s2_4 & 4) | (temp_s2_4 & 2)) != 0) {
                    temp_t6_2 = temp_t5_3 + M2C_ERROR(/* Read from unset register $t3 */);
                    temp_s1_6 = temp_s1_5->unk4;
                    temp_s2_5 = *temp_t5_3;
                    temp_s3_3 = *temp_t6_2;
                    temp_s5_9 = temp_s1_6 & 0xFF;
                    temp_s6_6 = (temp_s1_6 >> 8) & 0xFF;
                    temp_gp = (temp_s1_6 >> 0x10) & 0xFF;
                    temp_v0_3 = temp_s2_5 & 0xFF;
                    temp_v1_3 = (temp_s2_5 >> 8) & 0xFF;
                    temp_a0_4 = (temp_s2_5 >> 0x10) & 0xFF;
                    temp_a1_4 = temp_s3_3 & 0xFF;
                    temp_a2_4 = (temp_s3_3 >> 8) & 0xFF;
                    temp_s7_3 = (temp_s3_3 >> 0x10) & 0xFF;
                    M2C_ERROR(/* Read from unset register $t0 */)->unk78 = (s32) (((temp_s1_6 >> 0x18) << 0x18) | (((s32) (temp_s5_9 + temp_a1_4) >> 1) | (((s32) (temp_s6_6 + temp_a2_4) >> 1) << 8) | (((s32) (temp_gp + temp_s7_3) >> 1) << 0x10)));
                    M2C_ERROR(/* Read from unset register $t0 */)->unk7C = (s32) (((temp_s1_6 >> 0x18) << 0x18) | (((s32) (temp_v0_3 + temp_s5_9) >> 1) | (((s32) (temp_v1_3 + temp_s6_6) >> 1) << 8) | (((s32) (temp_a0_4 + temp_gp) >> 1) << 0x10)));
                    temp_s4_3 = *(temp_t6_2 + M2C_ERROR(/* Read from unset register $t3 */));
                    temp_s5_10 = temp_s4_3 & 0xFF;
                    temp_s6_7 = (temp_s4_3 >> 8) & 0xFF;
                    temp_gp_2 = (temp_s4_3 >> 0x10) & 0xFF;
                    M2C_ERROR(/* Read from unset register $t0 */)->unk80 = (s32) (((s32) (temp_v0_3 + temp_s5_10) >> 1) | (((s32) (temp_v1_3 + temp_s6_7) >> 1) << 8) | (((s32) (temp_a0_4 + temp_gp_2) >> 1) << 0x10));
                    M2C_ERROR(/* Read from unset register $t0 */)->unk84 = (s32) (((s32) (temp_s5_10 + temp_a1_4) >> 1) | (((s32) (temp_s6_7 + temp_a2_4) >> 1) << 8) | (((s32) (temp_gp_2 + temp_s7_3) >> 1) << 0x10));
                    temp_s5_11 = M2C_ERROR(/* Read from unset register $t0 */)->unk78;
                    temp_s6_8 = M2C_ERROR(/* Read from unset register $t0 */)->unk80;
                    temp_a0_5 = temp_s6_8 & 0xFF;
                    temp_a1_5 = (temp_s6_8 >> 8) & 0xFF;
                    temp_a2_5 = (temp_s6_8 >> 0x10) & 0xFF;
                    M2C_ERROR(/* Read from unset register $t0 */)->unk88 = (s32) (((temp_s1_6 >> 0x18) << 0x18) | (((s32) ((temp_s5_11 & 0xFF) + temp_a0_5) >> 1) | (((s32) (((temp_s5_11 >> 8) & 0xFF) + temp_a1_5) >> 1) << 8) | (((s32) (((temp_s5_11 >> 0x10) & 0xFF) + temp_a2_5) >> 1) << 0x10)));
                    func_80177A98(temp_a0_5, temp_a1_5, temp_a2_5);
                } else {
block_12:
                    temp_s5_12 = *var_t4;
                    M2C_ERROR(/* Read from unset register $t8 */)->unk4 = temp_s5_12;
                    M2C_ERROR(/* Read from unset register $t9 */)->unk4 = temp_s5_12;
                    M2C_ERROR(/* Read from unset register $a3 */)->unk4 = temp_s5_12;
                }
            }
            func_80177884();
            temp_s1_7 = M2C_ERROR(/* Read from unset register $t0 */)->unk48;
            var_t1 = M2C_ERROR(/* Read from unset register $t1 */) + 0xC;
            if (temp_s1_7 == 0x45) {
                var_t1 = M2C_ERROR(/* Read from unset register $t0 */)->unk4C;
            }
            M2C_ERROR(/* Read from unset register $t0 */)->unk48 = (s32) (temp_s1_7 + 1);
            var_a2 = M2C_ERROR(/* Read from unset register $t0 */)->unk50 - 1;
            goto loop_1;
        }
    }
}
