/* m2c reference for func_8017519C @ 8017519C (35 words). Generated; not compiled or validated. */
extern s32 D_801BC028;
extern void *D_801C2650;

s32 func_8017519C(s32 arg0) {
    s32 temp_v1;
    s32 var_v0;
    u32 temp_a0;
    u32 temp_v1_2;
    void *var_a1;

    temp_a0 = arg0 << D_801BC028;
    if (D_801C2650 == NULL) {
        return 0;
    }
    var_a1 = D_801C2650;
loop_3:
    temp_v1 = var_a1->unk0;
    if (temp_v1 & 0x80000000) {
block_7:
        var_a1 += 8;
        goto loop_3;
    }
    temp_v1_2 = temp_v1 & 0x0FFFFFFF;
    if (!(temp_v1 & 0x40000000)) {
        var_v0 = 1;
        if (temp_v1_2 < temp_a0) {
            var_v0 = 1;
            if (temp_a0 >= (u32) (temp_v1_2 + var_a1->unk4)) {
                goto block_7;
            }
        }
    } else {
        var_v0 = 0;
    }
    return var_v0;
}
