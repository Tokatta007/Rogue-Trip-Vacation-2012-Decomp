/* m2c reference for func_8013C958 @ 8013C958 (13 words). Generated; not compiled or validated. */
extern ? D_801B432C;

s32 func_8013C958(s32 arg1) {
    s32 var_v1;

    if (arg1 >= 0) {
        var_v1 = 0x38;
        if (arg1 < 0xF) {
            var_v1 = arg1 * 4;
        }
    } else {
        var_v1 = 0;
    }
    return *(&D_801B432C + var_v1);
}
