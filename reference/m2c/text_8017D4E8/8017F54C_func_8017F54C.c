/* m2c reference for func_8017F54C @ 8017F54C (21 words). Generated; not compiled or validated. */
s32 func_8017F54C(s32 arg0) {
    s32 var_v1;

    var_v1 = 0;
    if (arg0 != 1) {
        if (arg0 < 2) {
            if (arg0 != 0) {
                var_v1 = arg0 | 0x8000;
            }
        } else {
            var_v1 = 1;
            if (arg0 != 2) {
                var_v1 = arg0 | 0x8000;
                if (arg0 == 4) {
                    var_v1 = 3;
                }
            }
        }
    } else {
        var_v1 = 2;
    }
    return var_v1;
}
