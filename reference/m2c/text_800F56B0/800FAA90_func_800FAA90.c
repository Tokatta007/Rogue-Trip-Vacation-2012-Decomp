/* m2c reference for func_800FAA90 @ 800FAA90 (195 words). Generated; not compiled or validated. */
s32 func_8012BD30(s32);                             /* extern */
? func_8012C3BC(s32, ?);                            /* extern */

s32 func_800FAA90(void *arg0) {
    s32 temp_s1;
    s32 var_a0;
    s32 var_s2;
    s32 var_v0;
    s32 var_v1;
    s32 var_v1_2;
    s32 var_v1_3;
    s32 var_v1_4;
    s32 var_v1_5;
    u8 temp_a0;
    void *temp_s0;
    void *var_v0_2;

    var_s2 = -1;
    temp_s1 = arg0 + 0x264;
    temp_s0 = arg0 + 0x2A7;
    if ((arg0->unk820 == 0) && (func_8012BD30(temp_s1) < 5)) {
        func_8012C3BC(temp_s1, 2);
    }
    temp_a0 = temp_s0->unk2;
    var_v1 = temp_a0 << 0x18;
    if ((temp_a0 << 0x18) < (temp_s0->unk5 << 0x18)) {
        var_v1 = temp_s0->unk5 << 0x18;
    }
    var_v1_2 = var_v1 >> 0x18;
    if (var_v1 < (temp_s0->unk3 << 0x18)) {
        var_v1_2 = (s32) (s8) temp_s0->unk3;
    }
    if (var_v1_2 < (s8) temp_s0->unk1) {
        var_v1_2 = (s32) (s8) temp_s0->unk1;
    }
    var_a0 = var_v1_2;
    if (arg0->unk78C >= 0x4B1) {
        if (var_a0 < (s8) temp_s0->unk7) {
            var_v1_2 = (s32) (s8) temp_s0->unk7;
        }
        var_a0 = var_v1_2;
        if (arg0->unk937 == 0) {
            var_v0 = var_a0;
            if (var_a0 < (s8) arg0->unk2A7) {
                goto block_19;
            }
            goto block_20;
        }
    } else {
        var_v1_3 = 0;
        if (arg0->unk937 != 0) {
            var_v1_3 = arg0->unk78C < 0x190;
        }
        if (var_v1_3 != 0) {
            var_v0 = var_a0;
            if (var_a0 < (s8) arg0->unk2A7) {
block_19:
                var_v0 = (s32) (s8) arg0->unk2A7;
            }
block_20:
            var_a0 = var_v0;
        }
    }
    if (var_a0 != 0) {
        if (arg0->unk78C >= 0x4B1) {
            var_v1_4 = 0;
            if (arg0->unk937 == 0) {
                var_v1_4 = (s8) arg0->unk2A7 == var_a0;
            }
            if (var_v1_4 == 0) {
                if ((s8) temp_s0->unk7 == var_a0) {
                    var_s2 = 7;
                }
            } else {
                goto block_32;
            }
        } else {
            var_v1_5 = 0;
            if (arg0->unk937 != 0) {
                var_v1_5 = arg0->unk78C < 0x190;
            }
            if ((var_v1_5 != 0) && ((s8) arg0->unk2A7 == var_a0)) {
block_32:
                var_s2 = 0;
            }
        }
        var_v0_2 = arg0 + 0x264;
        if (var_s2 == -1) {
            if ((s8) temp_s0->unk2 == var_a0) {
                var_s2 = 2;
            } else if ((s8) temp_s0->unk5 == var_a0) {
                var_s2 = 5;
            } else if ((s8) temp_s0->unk3 == var_a0) {
                var_s2 = 3;
            } else if ((s8) temp_s0->unk1 == var_a0) {
                var_s2 = 1;
            }
            goto block_43;
        }
        goto block_44;
    }
block_43:
    var_v0_2 = arg0 + 0x264;
    if (var_s2 != -1) {
block_44:
        arg0->unk93F = (s8) (var_v0_2 + var_s2)->unk4C;
    }
    return var_s2;
}
