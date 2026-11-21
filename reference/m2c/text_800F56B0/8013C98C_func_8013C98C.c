/* m2c reference for func_8013C98C @ 8013C98C (13 words). Generated; not compiled or validated. */
extern ? D_801B4364;

s32 func_8013C98C(s32 arg1) {
    s32 var_v1;

    if (arg1 >= 0) {
        var_v1 = 0x38;
        if (arg1 < 0xF) {
            var_v1 = arg1 * 4;
        }
    } else {
        var_v1 = 0;
    }
    return *(&D_801B4364 + var_v1);
}
