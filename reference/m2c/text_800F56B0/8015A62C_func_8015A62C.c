/* m2c reference for func_8015A62C @ 8015A62C (93 words). Generated; not compiled or validated. */
extern ? D_801B9958;

s16 func_8015A62C(s32 arg0, s32 arg1) {
    s16 var_v0;
    s16 var_v1;
    s32 var_a0;
    s32 var_a1;
    s32 var_a2;
    s32 var_a3;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v0_4;

    var_a0 = arg0;
    var_a1 = arg1;
    var_a2 = 0;
    var_a3 = 0;
    if (var_a1 < 0) {
        var_a2 = 1;
        var_a1 = -var_a1;
    }
    if (var_a0 < 0) {
        var_a3 = 1;
        var_a0 = -var_a0;
    }
    var_v0_2 = var_a0 < var_a1;
    if (var_a1 == 0) {
        var_v0 = 0;
        if (var_a0 != 0) {
            var_v0_2 = var_a0 < var_a1;
            goto block_7;
        }
    } else {
block_7:
        if (var_v0_2 != 0) {
            if (var_a0 & 0x7FE00000) {
                var_v0_3 = (var_a0 / (s32) (var_a1 >> 0xA)) * 2;
            } else {
                var_v0_3 = ((s32) (var_a0 << 0xA) / var_a1) * 2;
            }
            var_v1 = *(&D_801B9958 + var_v0_3);
        } else {
            if (var_a1 & 0x7FE00000) {
                var_v0_4 = (var_a1 / (s32) (var_a0 >> 0xA)) * 2;
            } else {
                var_v0_4 = ((s32) (var_a1 << 0xA) / var_a0) * 2;
            }
            var_v1 = 0x400 - *(&D_801B9958 + var_v0_4);
        }
        if (var_a2 != 0) {
            var_v1 = 0x800 - var_v1;
        }
        var_v0 = var_v1;
        if (var_a3 != 0) {
            var_v0 = -var_v1;
        }
    }
    return var_v0;
}
