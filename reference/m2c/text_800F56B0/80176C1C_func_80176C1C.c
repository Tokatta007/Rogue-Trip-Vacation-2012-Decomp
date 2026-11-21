/* m2c reference for func_80176C1C @ 80176C1C (40 words). Generated; not compiled or validated. */
? func_8016408C(s32 *);                             /* extern */
s32 func_80176CF0(s32, s32, s32, ?);                /* extern */

s32 func_80176C1C(s32 arg0, s32 arg1, ? arg2) {
    s32 sp10;
    s32 sp14;
    s32 var_s0;
    s32 var_v0;

    var_s0 = arg1;
    sp10 = var_s0 - arg0;
    func_8016408C(&sp10);
    var_v0 = arg0 < -0x400;
    if ((arg0 < 0x401) || (var_v0 = arg0 < -0x400, ((var_s0 < -0x400) == 0))) {
        if (var_v0 != 0) {
            if (var_s0 >= 0x401) {
                goto block_4;
            }
        }
    } else {
block_4:
        var_s0 = arg0 + sp10;
    }
    sp14 = func_80176CF0(sp10, arg0, var_s0, arg2);
    func_8016408C(&sp14);
    return sp14;
}
