/* m2c reference for func_8013EEFC @ 8013EEFC (39 words). Generated; not compiled or validated. */
extern ? D_801E41F8;
extern ? D_801E4438;
extern ? D_801E4678;
extern ? D_801E46C8;

void func_8013EEFC(void) {
    s32 temp_v0;
    s32 temp_v1;
    s32 var_a0;
    s32 var_a1;
    s32 var_a2;
    s32 var_a3;
    void *temp_v0_2;
    void *temp_v1_2;

    var_a3 = 0;
loop_1:
    var_a2 = 0;
    if (var_a3 < 0x12) {
loop_3:
        var_a1 = 0;
        if (var_a2 < 4) {
            var_a0 = var_a2 * 8;
            do {
                temp_v0 = var_a0 + (var_a3 << 5);
                var_a1 += 1;
                *(temp_v0 + &D_801E41F8) = 0;
                *(temp_v0 + &D_801E4438) = 0;
                var_a0 += 4;
            } while (var_a1 < 2);
            var_a2 += 1;
            goto loop_3;
        }
        temp_v1 = var_a3 * 4;
        var_a3 += 1;
        temp_v0_2 = temp_v1 + &D_801E4678;
        temp_v0_2->unk0 = 0;
        temp_v0_2->unk2 = 0;
        temp_v1_2 = temp_v1 + &D_801E46C8;
        temp_v1_2->unk0 = 0;
        temp_v1_2->unk2 = 0;
        goto loop_1;
    }
}
