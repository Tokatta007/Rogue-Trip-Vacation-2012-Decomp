/* m2c reference for func_800FF040 @ 800FF040 (73 words). Generated; not compiled or validated. */
s16 func_800FF040(s32 *arg0, s32 arg1, s16 arg2) {
    s32 var_s1;
    s32 var_s2;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v1;
    void *temp_s0;

    temp_s0 = *arg0 + ((s32) (arg1 << 0x10) >> 0xB);
    if ((s8) temp_s0->unk1E >= 2) {
        var_s2 = 1;
        var_s1 = 0;
loop_2:
        var_v1 = 0;
        if (temp_s0->unk1E != 0) {
            var_v1 = rand() % (s8) temp_s0->unk1E;
            var_v0_2 = var_v1 * 2;
        } else {
            var_v0_2 = 0 * 2;
        }
        var_s1 += 1;
        if ((s16) (temp_s0 + var_v0_2)->unkC != arg2) {
            var_s2 = 0;
        } else if (var_s1 < 8) {
            goto loop_2;
        }
        var_v0 = var_v1 * 2;
        if (var_s2 & 0xFF) {
            goto block_10;
        }
    } else {
block_10:
        var_v0 = 0 * 2;
    }
    return (s16) (temp_s0 + var_v0)->unkC;
}
