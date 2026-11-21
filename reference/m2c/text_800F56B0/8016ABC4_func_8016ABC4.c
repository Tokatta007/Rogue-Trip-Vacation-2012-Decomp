/* m2c reference for func_8016ABC4 @ 8016ABC4 (79 words). Generated; not compiled or validated. */
s32 func_8016ABC4(void) {
    s32 temp_a3;
    s32 temp_t1;
    s32 temp_t2;
    s32 temp_t3;
    s32 temp_v0;
    s32 temp_v1;
    s32 var_a3;
    s32 var_t1;
    s32 var_t2;
    s32 var_t3;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v1;

    saved_reg_s0->unk24 = (s32) M2C_ERROR(/* Read from unset register $t1 */);
    saved_reg_s0->unk28 = (s32) M2C_ERROR(/* Read from unset register $t2 */);
    saved_reg_s0->unk2C = (s32) M2C_ERROR(/* Read from unset register $t3 */);
    var_v0_2 = (s32) M2C_ERROR(/* Read from unset register $t1 */) >> 0xF;
    if (M2C_ERROR(/* Read from unset register $t1 */) < 0) {
        temp_t1 = -M2C_ERROR(/* Read from unset register $t1 */);
        var_v0_2 = -(temp_t1 >> 0xF);
        var_t1 = -(temp_t1 & 0x7FFF);
    } else {
        var_t1 = M2C_ERROR(/* Read from unset register $t1 */) & 0x7FFF;
    }
    var_v1 = (s32) M2C_ERROR(/* Read from unset register $t2 */) >> 0xF;
    if (M2C_ERROR(/* Read from unset register $t2 */) < 0) {
        temp_t2 = -M2C_ERROR(/* Read from unset register $t2 */);
        var_v1 = -(temp_t2 >> 0xF);
        var_t2 = -(temp_t2 & 0x7FFF);
    } else {
        var_t2 = M2C_ERROR(/* Read from unset register $t2 */) & 0x7FFF;
    }
    var_a3 = (s32) M2C_ERROR(/* Read from unset register $t3 */) >> 0xF;
    if (M2C_ERROR(/* Read from unset register $t3 */) < 0) {
        temp_t3 = -M2C_ERROR(/* Read from unset register $t3 */);
        var_a3 = -(temp_t3 >> 0xF);
        var_t3 = -(temp_t3 & 0x7FFF);
    } else {
        var_t3 = M2C_ERROR(/* Read from unset register $t3 */) & 0x7FFF;
    }
    GTE_IR1 = var_v0_2;
    GTE_IR2 = var_v1;
    GTE_IR3 = var_a3;
    gte_mvmva(0, 0, 3, 3, 0);
    temp_v0 = GTE_MAC1;
    temp_v1 = GTE_MAC2;
    temp_a3 = GTE_MAC3;
    GTE_IR1 = var_t1;
    GTE_IR2 = var_t2;
    GTE_IR3 = var_t3;
    gte_mvmva(1, 0, 3, 3, 0);
    if (temp_v0 < 0) {
        var_v0 = -(temp_v0 * -8);
    } else {
        var_v0 = temp_v0 * 8;
    }
    if (temp_v1 < 0) {

    }
    if (temp_a3 < 0) {

    }
    return GTE_MAC1 + var_v0;
}
