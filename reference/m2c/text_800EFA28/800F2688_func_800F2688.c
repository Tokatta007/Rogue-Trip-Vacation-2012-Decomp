/* m2c reference for func_800F2688 @ 800F2688 (74 words). Generated; not compiled or validated. */
void func_800F2688(void) {
    s32 *temp_v1;
    s32 temp_s4;
    s32 temp_s5;
    s32 temp_s6;
    s32 temp_v0_2;
    s32 var_s3;
    s32 var_s4;
    s32 var_s5;
    s32 var_s6;
    s32 var_s7;
    void *temp_v0;

    temp_s4 = M2C_ERROR(/* Read from unset register $t0 */)->unk94;
    temp_s5 = M2C_ERROR(/* Read from unset register $t0 */)->unkA0;
    if (temp_s4 == 0) {
        var_s6 = M2C_ERROR(/* Read from unset register $t0 */)->unk74;
        if (temp_s5 == 0) {
            var_s6 = *(var_s6 + (M2C_ERROR(/* Read from unset register $t0 */)->unk80 * 4));
        }
        M2C_ERROR(/* Read from unset register $t2 */)->unk4 = (s32) (var_s6 & 0xF7FFFFFF);
        return;
    }
    temp_s6 = M2C_ERROR(/* Read from unset register $t0 */)->unk80;
    if (temp_s4 == 1) {
        var_s7 = M2C_ERROR(/* Read from unset register $t0 */)->unk74;
        if (temp_s5 == 0) {
            var_s7 = *((temp_s6 * 4) + var_s7);
        }
        temp_v0 = M2C_ERROR(/* Read from unset register $t0 */)->unk58 + (*(M2C_ERROR(/* Read from unset register $t0 */)->unk78 + (temp_s6 * 2)) * 8);
        GTE_VXY0 = temp_v0->unk0;
        GTE_VXY0 = temp_v0->unk4;
        GTE_RGBC = var_s7;
        gte_nccs();
        M2C_ERROR(/* Read from unset register $t2 */)->unk4 = (s32) (GTE_RGB2 & 0xF7FFFFFF);
        return;
    }
    if (M2C_ERROR(/* Read from unset register $t0 */)->unk14 == 1) {
        var_s3 = M2C_ERROR(/* Read from unset register $t7 */)->unk8;
        var_s5 = M2C_ERROR(/* Read from unset register $t7 */)->unk14;
        var_s4 = M2C_ERROR(/* Read from unset register $t8 */)->unk8;
        if (saved_reg_s2 != 0) {
            var_s4 = M2C_ERROR(/* Read from unset register $t8 */)->unk14;
        }
    } else {
        var_s3 = M2C_ERROR(/* Read from unset register $t8 */)->unk8;
        var_s4 = M2C_ERROR(/* Read from unset register $t8 */)->unk14;
        var_s5 = M2C_ERROR(/* Read from unset register $t7 */)->unk14;
        if (saved_reg_s2 != 0) {
            var_s5 = M2C_ERROR(/* Read from unset register $t7 */)->unk8;
        }
    }
    temp_v0_2 = M2C_ERROR(/* Read from unset register $t0 */)->unk90;
    M2C_ERROR(/* Read from unset register $t2 */)->unk4 = (s32) (var_s3 & 0xF7FFFFFF);
    temp_v1 = M2C_ERROR(/* Read from unset register $t2 */) + 4 + temp_v0_2;
    *temp_v1 = var_s4;
    *(temp_v1 + temp_v0_2) = var_s5;
}
