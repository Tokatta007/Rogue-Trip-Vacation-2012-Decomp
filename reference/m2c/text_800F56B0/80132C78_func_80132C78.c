/* m2c reference for func_80132C78 @ 80132C78 (31 words). Generated; not compiled or validated. */
? func_8012DA78(s32);                               /* extern */
s32 func_8012DB48(s32);                             /* extern */
s32 func_8013A06C();                                /* extern */
s32 func_8016BDA8(s32);                             /* extern */

s32 func_80132C78(s32 arg0, s32 arg1) {
    s32 var_v0;

    if (func_8013A06C() != 0) {
        var_v0 = 1;
        if (func_8012DB48(arg0) == 0) {
            var_v0 = 0;
            if ((func_8016BDA8(arg0) != 0) && (arg1 != 0)) {
                func_8012DA78(arg0);
                return 0;
            }
        }
        /* Duplicate return node #7. Try simplifying control flow for better match */
        return var_v0;
    }
    var_v0 = 1;
    if (arg1 == 0) {
        var_v0 = 0;
    }
    return var_v0;
}
