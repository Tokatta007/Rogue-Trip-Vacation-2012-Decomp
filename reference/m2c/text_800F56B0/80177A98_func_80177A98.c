/* m2c reference for func_80177A98 @ 80177A98 (33 words). Generated; not compiled or validated. */
void func_80177A98(s32 arg3) {
    s32 *temp_a1;
    s32 *temp_a1_2;
    s32 *temp_a1_3;
    s32 *temp_a1_4;
    s32 *temp_a1_5;
    s32 *temp_a1_6;
    s32 *temp_a1_7;
    s32 *temp_a1_8;
    s32 *temp_a1_9;
    s32 temp_a0;
    s32 temp_s5;
    s32 temp_s6;
    s32 temp_s7;
    s32 temp_v1;

    temp_s5 = M2C_ERROR(/* Read from unset register $t0 */)->unk78;
    temp_s6 = M2C_ERROR(/* Read from unset register $t0 */)->unk7C;
    temp_s7 = M2C_ERROR(/* Read from unset register $t0 */)->unk80;
    temp_v1 = M2C_ERROR(/* Read from unset register $t0 */)->unk84;
    temp_a0 = M2C_ERROR(/* Read from unset register $t0 */)->unk88;
    temp_a1 = M2C_ERROR(/* Read from unset register $t8 */) + M2C_ERROR(/* Read from unset register $v0 */);
    *temp_a1 = temp_s5;
    temp_a1_2 = temp_a1 + M2C_ERROR(/* Read from unset register $t3 */);
    *temp_a1_2 = temp_a0;
    temp_a1_3 = temp_a1_2 + M2C_ERROR(/* Read from unset register $t3 */);
    *temp_a1_3 = saved_reg_s3;
    *(temp_a1_3 + M2C_ERROR(/* Read from unset register $t3 */)) = temp_v1;
    temp_a1_4 = M2C_ERROR(/* Read from unset register $t9 */) + M2C_ERROR(/* Read from unset register $v0 */);
    *temp_a1_4 = temp_s6;
    temp_a1_5 = temp_a1_4 + M2C_ERROR(/* Read from unset register $t3 */);
    *temp_a1_5 = saved_reg_s2;
    temp_a1_6 = temp_a1_5 + M2C_ERROR(/* Read from unset register $t3 */);
    *temp_a1_6 = temp_a0;
    *(temp_a1_6 + M2C_ERROR(/* Read from unset register $t3 */)) = temp_s7;
    temp_a1_7 = arg3 + M2C_ERROR(/* Read from unset register $v0 */);
    *temp_a1_7 = temp_a0;
    temp_a1_8 = temp_a1_7 + M2C_ERROR(/* Read from unset register $t3 */);
    *temp_a1_8 = temp_s7;
    temp_a1_9 = temp_a1_8 + M2C_ERROR(/* Read from unset register $t3 */);
    *temp_a1_9 = temp_v1;
    *(temp_a1_9 + M2C_ERROR(/* Read from unset register $t3 */)) = saved_reg_s4;
    *M2C_ERROR(/* Read from unset register $t5 */) = temp_s6;
    *M2C_ERROR(/* Read from unset register $t6 */) = temp_s5;
    *M2C_ERROR(/* Read from unset register $t7 */) = temp_a0;
}
