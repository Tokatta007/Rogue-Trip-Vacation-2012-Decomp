/* m2c reference for func_800FF710 @ 800FF710 (70 words). Generated; not compiled or validated. */
s32 func_801594CC(?);                               /* extern */
s32 func_8015959C(?, s32, s32);                     /* extern */

s32 func_800FF710(s32 arg0, void *arg1, s32 arg2, ? arg3) {
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_a2;
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_s2;
    s32 temp_v0_2;
    s32 temp_v1;
    s32 var_a2;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v1;
    void *temp_a0;
    void *temp_s4;
    void *temp_v0;

    temp_s4 = arg0 + (arg2 * 4);
    temp_v0 = temp_s4->unk8;
    temp_a2 = arg1->unk0;
    temp_a1 = arg1->unk4;
    temp_s2 = temp_a2 - temp_v0->unk0;
    temp_s1 = temp_a1 - temp_v0->unk4;
    temp_s0 = func_8015959C(arg3, temp_a1, temp_a2);
    temp_v0_2 = func_801594CC(arg3);
    var_v1 = (temp_s2 * temp_s0) - (temp_s1 * temp_v0_2);
    if (var_v1 < 0) {
        var_v1 += 0xFFF;
    }
    var_v0_2 = (temp_s1 * temp_s0) + (temp_s2 * temp_v0_2);
    temp_v1 = var_v1 >> 0xC;
    if (var_v0_2 < 0) {
        var_v0_2 += 0xFFF;
    }
    var_a2 = 0;
    temp_a1_2 = var_v0_2 >> 0xC;
    if ((temp_v1 >= 0) && (temp_a1_2 >= 0)) {
        temp_a0 = temp_s4->unk8;
        if (temp_a0->unkC >= temp_v1) {
            var_a2 = temp_a0->unk10 >= temp_a1_2;
        }
    }
    var_v0 = 0;
    if (var_a2 != 0) {
        var_v0 = 1;
    }
    return var_v0;
}
