/* m2c reference for func_800FED80 @ 800FED80 (161 words). Generated; not compiled or validated. */
? func_800FF004(void *);                            /* extern */

s16 func_800FED80(void *arg0, s32 arg1) {
    s16 *temp_s3;
    s16 *var_v1;
    s32 temp_s2;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s0_3;
    s32 var_s1;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v0_4;
    s32 var_v0_5;
    void *temp_v0;
    void *temp_v1;

    temp_s3 = arg0->unk4;
    temp_s2 = arg0->unk78;
    var_s1 = 0;
    if (temp_s2 != 0) {
        if (arg1 != 0) {
            var_s1 = rand() % temp_s2;
            var_s0 = 0;
            if (((var_s1 * 4) + temp_s3)->unk2 != 0) {
loop_3:
                var_v0 = var_s1 * 4;
                if (var_s0 < temp_s2) {
                    var_s1 = rand() % temp_s2;
                    var_s0 += 1;
                    if (((var_s1 * 4) + temp_s3)->unk2 == 0) {
                        goto block_5;
                    }
                    goto loop_3;
                }
            } else {
block_5:
                var_v0 = var_s1 * 4;
            }
            var_s0_2 = 0;
            if ((var_v0 + temp_s3)->unk2 != 0) {
loop_7:
                var_v0_2 = var_s1 * 4;
                if (var_s0_2 < temp_s2) {
                    var_s1 += 1;
                    var_v0_3 = var_s1 * 4;
                    if (var_s1 >= temp_s2) {
                        var_s1 = 0;
                        var_v0_3 = 0 * 4;
                    }
                    temp_v1 = var_v0_3 + temp_s3;
                    var_v0_2 = var_s1 * 4;
                    if (temp_v1->unk2 != 0) {
                        var_s0_2 += 1;
                        if (temp_v1->unk2 == 0) {
                            goto block_12;
                        }
                        goto loop_7;
                    }
                }
            } else {
block_12:
                var_v0_2 = var_s1 * 4;
            }
            var_v0_4 = var_s0_2 < temp_s2;
            if ((var_v0_2 + temp_s3)->unk2 == 0) {
                goto block_20;
            }
            goto block_21;
        }
        var_s0_3 = 0;
        if (temp_s2 > 0) {
            var_v1 = temp_s3;
loop_17:
            var_v0_4 = var_s0_3 < temp_s2;
            if (var_v1->unk2 != 0) {
                var_s0_3 += 1;
                var_s1 += 1;
                var_v1 += 4;
                if (var_s1 >= temp_s2) {
                    goto block_19;
                }
                goto loop_17;
            }
        } else {
block_19:
            var_v0_4 = var_s0_3 < temp_s2;
        }
block_20:
        var_v0_5 = var_s1 * 4;
        if (var_v0_4 == 0) {
block_21:
            func_800FF004(arg0);
            var_v0_5 = (rand() % temp_s2) * 4;
        }
    } else if (arg0->unk74 > 0) {
        *temp_s3 = (s16) (rand() % (s32) arg0->unk74);
        var_v0_5 = 0 * 4;
    } else {
        *temp_s3 = -1;
        var_v0_5 = 0 * 4;
    }
    temp_v0 = var_v0_5 + temp_s3;
    temp_v0->unk2 = 1;
    return (s16) temp_v0->unk0;
}
