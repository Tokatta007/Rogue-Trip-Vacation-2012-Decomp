/* m2c reference for func_8016E62C @ 8016E62C (76 words). Generated; not compiled or validated. */
s32 func_8016E62C(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_a0;
    s32 temp_a1;
    s32 temp_a2;
    s32 temp_a3;
    s32 temp_v0;
    s32 temp_v1;
    s32 var_a0;
    s32 var_a1;
    s32 var_a2;
    s32 var_a3;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v1;

    M2C_ERROR(/* Read from unset register $t0 */)->unk48 = arg0;
    M2C_ERROR(/* Read from unset register $t0 */)->unk4C = arg1;
    M2C_ERROR(/* Read from unset register $t0 */)->unk50 = arg2;
    var_v0_2 = arg0 >> 0xF;
    if (arg0 < 0) {
        temp_a0 = -arg0;
        var_v0_2 = -(temp_a0 >> 0xF);
        var_a0 = -(temp_a0 & 0x7FFF);
    } else {
        var_a0 = arg0 & 0x7FFF;
    }
    var_v1 = arg1 >> 0xF;
    if (arg1 < 0) {
        temp_a1 = -arg1;
        var_v1 = -(temp_a1 >> 0xF);
        var_a1 = -(temp_a1 & 0x7FFF);
    } else {
        var_a1 = arg1 & 0x7FFF;
    }
    var_a3 = arg2 >> 0xF;
    if (arg2 < 0) {
        temp_a2 = -arg2;
        var_a3 = -(temp_a2 >> 0xF);
        var_a2 = -(temp_a2 & 0x7FFF);
    } else {
        var_a2 = arg2 & 0x7FFF;
    }
    GTE_IR1 = var_v0_2;
    GTE_IR2 = var_v1;
    GTE_IR3 = var_a3;
    gte_mvmva(0, 0, 3, 3, 0);
    temp_v0 = GTE_MAC1;
    temp_v1 = GTE_MAC2;
    temp_a3 = GTE_MAC3;
    GTE_IR1 = var_a0;
    GTE_IR2 = var_a1;
    GTE_IR3 = var_a2;
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
