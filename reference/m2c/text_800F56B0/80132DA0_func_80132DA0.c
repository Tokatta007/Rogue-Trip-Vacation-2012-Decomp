/* m2c reference for func_80132DA0 @ 80132DA0 (65 words). Generated; not compiled or validated. */
s16 func_80178A1C();                                /* extern */
extern s32 D_801CBB58;
static s32 D_801C3370 = 0;
static s32 D_801C3374 = 0;

s32 func_80132DA0(void) {
    s32 *var_s1;
    s32 temp_v0;
    s32 temp_v1;
    s32 var_a1;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s2;
    void *temp_v1_2;
    void *var_a0;

    if (D_801C3370 != 0) {
        var_s2 = -1;
        var_s0 = 0;
        if (D_801C3370 > 0) {
            var_s1 = &D_801CBB58;
            do {
                temp_v1 = *var_s1 - func_80178A1C();
                *var_s1 = temp_v1;
                if (temp_v1 < 0) {
                    var_s2 = var_s0;
                }
                var_s0 += 1;
                var_s1 += 8;
            } while (var_s0 < D_801C3370);
        }
        if (var_s2 == -1) {
            goto block_7;
        }
        var_s0_2 = var_s2 + 1;
        D_801C3374 = ((var_s2 * 8) + &D_801CBB58)->unk4;
        temp_v0 = var_s0_2 * 8;
        if (var_s0_2 < D_801C3370) {
            var_a0 = temp_v0 + &D_801CBB58;
            var_a1 = temp_v0 - 8;
            do {
                temp_v1_2 = var_a1 + &D_801CBB58;
                var_a1 += 8;
                var_s0_2 += 1;
                temp_v1_2->unk4 = (s32) var_a0->unk4;
                temp_v1_2->unk0 = (s32) var_a0->unk0;
                var_a0 += 8;
            } while (var_s0_2 < D_801C3370);
        }
        D_801C3370 -= 1;
        return 1;
    }
block_7:
    return 0;
}
