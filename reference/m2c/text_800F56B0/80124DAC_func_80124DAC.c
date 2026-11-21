/* m2c reference for func_80124DAC @ 80124DAC (115 words). Generated; not compiled or validated. */
s32 func_8016BE78(s16, s16);                        /* extern */

s32 func_80124DAC(s16 arg0, s16 arg1) {
    s32 var_v0;
    s32 var_v1;

    var_v1 = 0x80 - (func_8016BE78(arg0, arg1) & 0xFF);
    if (var_v1 >= 0x79) {
        var_v1 = 0x78;
    } else if (var_v1 < -0x78) {
        var_v1 = -0x78;
    } else {
        var_v0 = var_v1;
        if (var_v1 < 0) {
            var_v0 = -var_v0;
        }
        if (var_v0 < 0x20) {
            var_v1 = 0;
        }
    }
    if (var_v1 != 0) {
        if (var_v1 >= 0x5B) {
            var_v1 = (((var_v1 - 0x5A) * 0x26) / 30) + 0x5A;
            if (var_v1 >= 0x80) {
                var_v1 = 0x7F;
            }
        } else if (var_v1 > 0) {
            var_v1 = 0x5A - (((0x5A - var_v1) * 0x5A) / 58);
            if (var_v1 < 0) {
                var_v1 = 0;
            }
        } else if (var_v1 >= -0x59) {
            var_v1 = -0x5A - (((-0x5A - var_v1) * 0x5A) / 58);
            if (var_v1 > 0) {
                var_v1 = 0;
            }
        } else {
            var_v1 = (((var_v1 + 0x5A) * 0x26) / 30) - 0x5A;
            if (var_v1 < -0x7F) {
                var_v1 = -0x7F;
            }
        }
    }
    return var_v1;
}
