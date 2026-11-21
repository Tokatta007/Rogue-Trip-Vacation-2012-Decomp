/* m2c reference for func_8010F52C @ 8010F52C (35 words). Generated; not compiled or validated. */
u8 func_80176CBC(u8, s32, ?);                       /* extern */

s32 func_8010F52C(u8 *arg1, u8 *arg2, u8 *arg3) {
    s32 var_s0;

    if (*arg3 != 0) {
        var_s0 = *arg1 & 0xFF;
    } else {
        var_s0 = 0x80;
    }
    *arg2 = func_80176CBC(*arg2, var_s0, 5);
    if ((*arg2 == var_s0) && (var_s0 != 0x80)) {
        *arg3 = 0;
    }
    return *arg2 != 0x80;
}
