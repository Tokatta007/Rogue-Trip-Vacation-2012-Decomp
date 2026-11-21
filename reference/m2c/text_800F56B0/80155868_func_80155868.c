/* m2c reference for func_80155868 @ 80155868 (83 words). Generated; not compiled or validated. */
s32 func_80156138(?, ?);                            /* extern */
s32 func_80156680(s32, s32, ?, ?);                  /* extern */
extern ? D_801B4968;
extern s32 D_801B49F0;
extern u8 D_801B4A00;

s32 func_80155868(s32 arg0, s32 arg1, ? arg2) {
    s32 temp_s3;
    s32 temp_s5;
    s32 var_s0;
    s32 var_v0;

    var_s0 = 3;
    temp_s3 = arg0 & 0xFF;
    temp_s5 = D_801B49F0;
loop_1:
    D_801B49F0 = 0;
    if ((temp_s3 != 1) && (D_801B4A00 & 0x10)) {
        func_80156680(1, 0, 0, 0);
    }
    if (((arg1 != 0) && (*((temp_s3 * 4) + &D_801B4968) != 0) && (func_80156680(2, arg1, arg2, 0) != 0)) || (D_801B49F0 = temp_s5, var_v0 = 0, (func_80156680(arg0 & 0xFF, arg1, arg2, 0) != 0))) {
        var_s0 -= 1;
        var_v0 = -1;
        if (var_s0 == -1) {
            D_801B49F0 = temp_s5;
        } else {
            goto loop_1;
        }
    }
    if (var_v0 == 0) {
        return func_80156138(0, arg2) == 2;
    }
    return 0;
}
