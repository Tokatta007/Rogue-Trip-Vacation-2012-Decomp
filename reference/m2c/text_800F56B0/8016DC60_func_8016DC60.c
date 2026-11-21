/* m2c reference for func_8016DC60 @ 8016DC60 (125 words). Generated; not compiled or validated. */
? func_8016DE54(void *);                            /* extern */
u64 func_8016E894();                                /* extern */

void func_8016DC60(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 *temp_s3;
    s32 *temp_s6_2;
    s32 *var_s7;
    s32 *var_v0;
    s32 *var_v0_2;
    s32 *var_v1;
    s32 temp_s6;
    s32 temp_s7;
    s32 var_s5;
    s32 var_s5_2;
    s32 var_sp;
    void *temp_a2;
    void *temp_s2;
    void *temp_s4;
    void *temp_t1;

    temp_t1 = *(void **)0x1F800054;
    temp_t1->unk0 = (s32) saved_reg_s0;
    temp_t1->unk4 = (s32) saved_reg_s1;
    temp_t1->unk8 = (s32) saved_reg_s2;
    temp_t1->unkC = (s32) saved_reg_s3;
    temp_t1->unk10 = (s32) saved_reg_s4;
    temp_t1->unk14 = (s32) saved_reg_s5;
    temp_t1->unk18 = (s32) saved_reg_s6;
    temp_t1->unk1C = (s32) saved_reg_s7;
    temp_t1->unk20 = arg0;
    temp_t1->unk24 = arg1;
    temp_t1->unk28 = arg2;
    temp_t1->unk2C = arg3;
    *(void **)0x1F80007C = saved_reg_fp;
    *(void **)0x1F800080 = saved_reg_gp;
    *(void **)0x1F800084 = sp;
    temp_t1->unk3C = (s32) saved_reg_ra;
    *(s16 *)0x1F80003C = -1;
    *(s16 *)0x1F80003E = -1;
    *(s16 *)0x1F800040 = -1;
    *(s16 *)0x1F800042 = -1;
    *(s16 *)0x1F800014 = 0;
    temp_s2 = *(s16 *)0x1F800058;
    *(s16 *)0x1F800038 = 0;
    *(s16 *)0x1F800064 = (s32) temp_s2->unk8;
    *(s16 *)0x1F800068 = (s32) temp_s2->unkC;
    *(s16 *)0x1F80006C = (s32) temp_s2->unk10;
    *(s16 *)0x1F80005C = 0;
    if (temp_s2 != NULL) {
        temp_a2 = *(s16 *)0x1F800030;
        temp_s3 = *(s16 *)0x1F80001C;
        if (temp_s2->unk0 != 0) {
            var_s5 = 5;
            var_s7 = temp_s3;
            var_v0 = temp_a2->unk4 + 0x2C;
loop_3:
            if (var_s5 > 0) {
                temp_s6 = *var_v0;
                var_v0 += 4;
                *var_s7 = temp_s6;
                var_s5 -= 1;
                var_s7 += 4;
                goto loop_3;
            }
            temp_s4 = *(s16 *)0x1F800004;
            temp_s6_2 = *(s16 *)0x1F800018;
            temp_s4->unk4 = temp_s3;
            var_s5_2 = 5;
            var_v0_2 = temp_s6_2;
            var_v1 = temp_s2 + 0x14;
loop_6:
            if (var_s5_2 > 0) {
                temp_s7 = *var_v1;
                var_v1 += 4;
                *var_v0_2 = temp_s7;
                var_s5_2 -= 1;
                var_v0_2 += 4;
                goto loop_6;
            }
            temp_s4->unk0 = temp_s6_2;
            func_8016DE54(temp_a2);
            goto block_9;
        }
    } else {
block_9:
        if (M2C_ERROR(/* Read from unset register $t0 */)->unk58->unk4 != 0) {
            M2C_ERROR(/* Read from unset register $t0 */)->unk38 = (s16) (M2C_ERROR(/* Read from unset register $t0 */)->unk38 + 1);
            func_8016E894();
            func_8016DE54();
        }
    }
    var_sp = M2C_ERROR(/* Read from unset register $t0 */)->unk70;
    if (M2C_ERROR(/* Read from unset register $t0 */)->unk27 == 0) {
        M2C_ERROR(/* Read from unset register $t0 */)->unk25 = 1;
    }
loop_13:
    if (var_sp != 0) {
        if (((u8) arg3 != 0) && (arg0 != 0)) {
            M2C_ERROR(/* Read from unset register $t0 */)->unk30 = var_sp;
            if ((u32) func_8016E894() != 0) {
                M2C_ERROR(/* Read from unset register $t0 */)->unk38 = (s16) (M2C_ERROR(/* Read from unset register $t0 */)->unk38 + 1);
                func_8016DE54();
            }
        }
        var_sp = arg4;
        goto loop_13;
    }
}
