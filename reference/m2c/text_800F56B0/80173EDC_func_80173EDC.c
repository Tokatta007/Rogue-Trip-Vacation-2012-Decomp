/* m2c reference for func_80173EDC @ 80173EDC (32 words). Generated; not compiled or validated. */
s16 func_80173F5C(s16);                             /* extern */
s16 func_801743BC(?, s16);                          /* extern */
? func_8017447C(?);                                 /* extern */

s16 func_80173EDC(? arg1, s16 arg2, s32 arg3) {
    s16 temp_v0;
    s16 temp_v0_2;
    s16 var_v0;

    temp_v0 = func_80173F5C(arg2);
    if (temp_v0 < 0) {
        return -1;
    }
    temp_v0_2 = func_801743BC(arg1, temp_v0);
    var_v0 = -2;
    if (temp_v0_2 >= 0) {
        var_v0 = temp_v0_2;
        if ((arg3 << 0x10) != 0) {
            func_8017447C(1);
            var_v0 = temp_v0_2;
        }
    }
    return var_v0;
}
