/* m2c reference for func_80100228 @ 80100228 (105 words). Generated; not compiled or validated. */
s16 func_80100228(void *arg0, void *arg1, s32 arg2, s32 arg3) {
    s16 var_t6;
    s32 temp_t0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 var_a2;
    s32 var_t0;
    s32 var_t4;
    s32 var_t5;
    s32 var_v1;
    u16 temp_v0;
    void *temp_a2;
    void *temp_t7;
    void *var_t3;

    var_t5 = 0x7FFFFFFF;
    var_t4 = 0;
    temp_t7 = *arg0->unk40 + (arg2 << 5);
    var_t3 = temp_t7;
    var_t6 = (s16) temp_t7->unkC;
loop_1:
    if (var_t4 < (s8) temp_t7->unk1E) {
        temp_v0 = var_t3->unkC;
        temp_a2 = *arg0->unk40 + ((s16) temp_v0 << 5);
        if ((arg3 < 0) || ((s8) temp_a2->unk1D == arg3)) {
            var_t0 = 0;
            if ((s8) temp_a2->unk1C == 5) {
                var_t0 = arg0->unk70 == 0;
            }
            if (var_t0 == 0) {
                var_v1 = 0;
                if ((s8) temp_a2->unk1C >= 6) {
                    var_v1 = arg0->unk71 == 0;
                }
                if (var_v1 == 0) {
                    temp_v0_2 = arg1->unk0 - temp_a2->unk0;
                    temp_v0_3 = arg1->unk4 - temp_a2->unk4;
                    temp_t0 = (temp_v0_2 * temp_v0_2) + (temp_v0_3 * temp_v0_3);
                    if (temp_t0 < var_t5) {
                        if ((s16) temp_v0 != (s16) arg0->unk5A) {
                            var_t6 = (s16) temp_v0;
                            var_t5 = temp_t0;
                        } else {
                            var_a2 = 0;
                            if (arg0->unk4C < arg0->unk50) {
                                if ((arg0->unk0 != 1) || (arg0->unk54 == 0x12)) {
                                    var_a2 = 1;
                                }
                                if (var_a2 != 0) {
                                    var_t6 = (s16) temp_v0;
                                    var_t5 = temp_t0 + 0x50;
                                }
                            }
                        }
                    }
                }
            }
        }
        var_t3 += 2;
        var_t4 += 1;
        goto loop_1;
    }
    return var_t6;
}
