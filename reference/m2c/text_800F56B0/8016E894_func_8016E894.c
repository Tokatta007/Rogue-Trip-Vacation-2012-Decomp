/* m2c reference for func_8016E894 @ 8016E894 (89 words). Generated; not compiled or validated. */
? func_8016E62C();                                  /* extern */
u64 func_8016E7FC(s32, s32, s32, s32);              /* extern */
u64 func_8016E9F8(s32, s32, s32);                   /* extern */

void func_8016E894(void *arg0, void *arg1, s16 arg3, s32 arg7, s32 arg8, s32 arg9, ? arg10) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_a2;
    s32 temp_a2_2;
    s32 temp_a3;
    s32 temp_fp;
    s32 temp_fp_2;
    s32 temp_s7;
    s8 temp_v1;
    u32 temp_v1_2;
    u32 var_v1;
    void *temp_s2;
    void *temp_s3;
    void *temp_s3_2;

    M2C_ERROR(/* Read from unset register $t0 */)->unk60 = (s32) saved_reg_ra;
    var_v1 = 1;
    if (((arg0->unk0 & 0xF) == 1) && !(arg0->unk14 & 8)) {
        var_v1 = (u32) func_8016E9F8(M2C_ERROR(/* Read from unset register $t0 */)->unk64 + arg7, M2C_ERROR(/* Read from unset register $t0 */)->unk68 + arg8, M2C_ERROR(/* Read from unset register $t0 */)->unk6C + arg9);
    }
    temp_v1 = var_v1 | M2C_ERROR(/* Read from unset register $t0 */)->unk27;
    arg3 = temp_v1;
    if (temp_v1 != 0) {
        GTE_RT11RT12 = arg10.unk0;
        GTE_RT13RT21 = arg10.unk4;
        GTE_RT22RT23 = arg10.unk8;
        GTE_RT31RT32 = arg10.unkC;
        GTE_RT33 = arg10.unk10;
        temp_fp = M2C_ERROR(/* Read from unset register $t0 */)->unk5C;
        func_8016E62C();
        if (temp_fp < 0xC6) {
            temp_fp_2 = temp_fp + 1;
            M2C_ERROR(/* Read from unset register $t0 */)->unk5C = temp_fp_2;
            temp_a3 = temp_fp_2 * 8;
            temp_s7 = temp_fp_2 << 5;
            temp_s2 = M2C_ERROR(/* Read from unset register $t0 */)->unk58;
            temp_s3 = temp_s2 + 0x14;
            temp_a0 = temp_s3->unk8;
            temp_a1 = temp_s3->unkC;
            GTE_RT11RT12 = temp_s2->unk14;
            GTE_RT13RT21 = temp_s3->unk4;
            GTE_RT22RT23 = temp_a0;
            GTE_RT31RT32 = temp_a1;
            GTE_RT33 = temp_s3->unk10;
            temp_a2 = M2C_ERROR(/* Read from unset register $t0 */)->unk18 + temp_s7;
            *(M2C_ERROR(/* Read from unset register $t0 */)->unk4 + temp_a3) = temp_a2;
            temp_v1_2 = (u32) func_8016E7FC(temp_a0, temp_a1, temp_a2, temp_a3);
            temp_s3_2 = arg1 + 0x2C;
            temp_a0_2 = temp_s3_2->unk8;
            temp_a1_2 = temp_s3_2->unkC;
            GTE_RT11RT12 = arg1->unk2C;
            GTE_RT13RT21 = temp_s3_2->unk4;
            GTE_RT22RT23 = temp_a0_2;
            GTE_RT31RT32 = temp_a1_2;
            GTE_RT33 = temp_s3_2->unk10;
            temp_a2_2 = M2C_ERROR(/* Read from unset register $t0 */)->unk1C + temp_s7;
            temp_v1_2->unk4 = temp_a2_2;
            func_8016E7FC(temp_a0_2, temp_a1_2, temp_a2_2);
        }
    }
}
