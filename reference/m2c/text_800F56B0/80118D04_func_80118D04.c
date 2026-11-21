/* m2c reference for func_80118D04 @ 80118D04 (157 words). Generated; not compiled or validated. */
u16 func_80176C1C(s16, s16, ?);                     /* extern */

void func_80118D04(void *arg0) {
    s16 var_v0_2;
    s16 var_v0_3;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 var_a0;
    s32 var_v0;
    s32 var_v1;
    s32 var_v1_2;
    s32 var_v1_3;
    s32 var_v1_4;
    s32 var_v1_5;

    var_v1 = 0;
    if (arg0->unk2F4 == 0) {
        var_v1 = arg0->unk2F2 == 0;
    }
    if (var_v1 != 0) {
        arg0->unk2EE = 0U;
        goto block_32;
    }
    if (arg0->unk304 != 0) {
        arg0->unk2F0 = func_80176C1C((s16) arg0->unk2F0, (s16) arg0->unk2F4, 5);
        arg0->unk2EE = func_80176C1C((s16) arg0->unk2EE, (s16) arg0->unk2F2, 5);
        var_a0 = (s16) arg0->unk2F0 - (s16) arg0->unk2F4;
        if (var_a0 < 0) {
            var_a0 = -var_a0;
        }
        var_v0 = (s16) arg0->unk2EE - (s16) arg0->unk2F2;
        if (var_v0 < 0) {
            var_v0 = -var_v0;
        }
        if ((var_a0 + var_v0) < 0x22) {
            arg0->unk304 = 0U;
        }
    } else {
        var_v1_2 = 0;
        if ((arg0->unk2EE != 0) || (arg0->unk2F0 != 0)) {
            var_v1_2 = 1;
        }
        if (var_v1_2 != 0) {
            if (arg0->unk2EE != 0) {
                temp_a0 = (s32) (arg0->unk2F2 << 0x10) >> 0x13;
                var_v1_3 = temp_a0;
                if (var_v1_3 != 0) {
                    if (var_v1_3 < 0) {
                        var_v1_3 = -var_v1_3;
                    }
                    var_v0_2 = (s16) arg0->unk2EE;
                    if (var_v0_2 < 0) {
                        var_v0_2 = -var_v0_2;
                    }
                    if (var_v1_3 < var_v0_2) {
                        arg0->unk2EE = (u16) (arg0->unk2EE - temp_a0);
                    } else {
                        goto block_23;
                    }
                } else {
block_23:
                    arg0->unk2EE = 0U;
                }
            }
            if (arg0->unk2F0 != 0) {
                temp_a0_2 = (s32) (arg0->unk2F4 << 0x10) >> 0x13;
                var_v1_4 = temp_a0_2;
                if (var_v1_4 != 0) {
                    if (var_v1_4 < 0) {
                        var_v1_4 = -var_v1_4;
                    }
                    var_v0_3 = (s16) arg0->unk2F0;
                    if (var_v0_3 < 0) {
                        var_v0_3 = -var_v0_3;
                    }
                    if (var_v1_4 < var_v0_3) {
                        arg0->unk2F0 = (u16) (arg0->unk2F0 - temp_a0_2);
                    } else {
                        goto block_32;
                    }
                } else {
block_32:
                    arg0->unk2F0 = 0U;
                }
            }
        }
    }
    var_v1_5 = 0;
    if (arg0->unk2EE == 0) {
        var_v1_5 = arg0->unk2F0 == 0;
    }
    if ((var_v1_5 != 0) && (arg0->unk278 < (arg0->unk274 * 2))) {
        arg0->unk305 = 0;
        arg0->unk300 = 0;
        arg0->unk278 = 0;
    }
}
