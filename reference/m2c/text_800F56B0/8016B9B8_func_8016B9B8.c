/* m2c reference for func_8016B9B8 @ 8016B9B8 (104 words). Generated; not compiled or validated. */
s32 func_8016BE78(?, s16);                          /* extern */

s32 func_8016B9B8(s32 arg0, s16 arg1) {
    s32 temp_s0;
    s32 temp_s4;
    s32 temp_s5;
    s32 temp_v1;
    s32 var_v0;
    s32 var_v0_2;

    temp_s5 = 0x80 - (func_8016BE78(2, arg1) & 0xFF);
    temp_s4 = 0x80 - (func_8016BE78(3, arg1) & 0xFF);
    temp_s0 = 0x80 - (func_8016BE78(0, arg1) & 0xFF);
    temp_v1 = 0x80 - (func_8016BE78(1, arg1) & 0xFF);
    if (arg0 != 0x80) {
        if (arg0 < 0x81) {
            if (arg0 != 0x20) {
                if (arg0 < 0x21) {
                    if (arg0 != 0x10) {
                        return 0;
                    }
                    var_v0 = 0;
                    if (temp_v1 >= 0x79) {
                        goto block_28;
                    }
                    /* Duplicate return node #29. Try simplifying control flow for better match */
                    return var_v0;
                }
                if (arg0 != 0x40) {
                    return 0;
                }
                var_v0_2 = temp_v1 < -0x78;
                goto block_26;
            }
            var_v0_2 = temp_s0 < -0x78;
            goto block_26;
        }
        if (arg0 != 0x2000) {
            if (arg0 < 0x2001) {
                if (arg0 != 0x1000) {
                    return 0;
                }
                var_v0 = 0;
                if (temp_s4 >= 0x79) {
                    goto block_28;
                }
                /* Duplicate return node #29. Try simplifying control flow for better match */
                return var_v0;
            }
            if (arg0 != 0x4000) {
                var_v0 = 0;
                if (arg0 == 0x8000) {
                    var_v0 = 0;
                    if (temp_s5 >= 0x79) {
                        goto block_28;
                    }
                }
            } else {
                var_v0_2 = temp_s4 < -0x78;
                goto block_26;
            }
            /* Duplicate return node #29. Try simplifying control flow for better match */
            return var_v0;
        }
        var_v0_2 = temp_s5 < -0x78;
block_26:
        var_v0 = 0;
        if (var_v0_2 != 0) {
            goto block_28;
        }
        /* Duplicate return node #29. Try simplifying control flow for better match */
        return var_v0;
    }
    var_v0 = 0;
    if (temp_s0 >= 0x79) {
block_28:
        var_v0 = 1;
    }
    return var_v0;
}
