/* m2c reference for func_80155488 @ 80155488 (27 words). Generated; not compiled or validated. */
s32 func_80156BE8();                                /* extern */
? func_80156CD8();                                  /* extern */
s32 func_80156D24();                                /* extern */

s32 func_80155488(s32 arg0) {
    s32 var_v0;

    if (arg0 == 2) {
        func_80156CD8();
        return 1;
    }
    var_v0 = 0;
    if (func_80156D24() == 0) {
        var_v0 = 1;
        if (arg0 == 1) {
            var_v0 = 0;
            if (func_80156BE8() == 0) {
                var_v0 = 1;
            }
        }
    }
    return var_v0;
}
