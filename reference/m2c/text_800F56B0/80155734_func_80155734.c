/* m2c reference for func_80155734 @ 80155734 (77 words). Generated; not compiled or validated. */
s32 func_80156680(s32, s32, ?, ?);                  /* extern */
extern ? D_801B4968;
extern s32 D_801B49F0;
extern u8 D_801B4A00;

s32 func_80155734(s32 arg0, s32 arg1) {
    s32 temp_s2;
    s32 temp_s4;
    s32 var_s0;
    s32 var_v0;

    var_s0 = 3;
    temp_s2 = arg0 & 0xFF;
    temp_s4 = D_801B49F0;
loop_1:
    D_801B49F0 = 0;
    if ((temp_s2 != 1) && (D_801B4A00 & 0x10)) {
        func_80156680(1, 0, 0, 0);
    }
    if (((arg1 != 0) && (*((temp_s2 * 4) + &D_801B4968) != 0) && (func_80156680(2, arg1, 0, 0) != 0)) || (D_801B49F0 = temp_s4, var_v0 = 1, (func_80156680(arg0 & 0xFF, arg1, 0, 1) != 0))) {
        var_s0 -= 1;
        if (var_s0 == -1) {
            D_801B49F0 = temp_s4;
            var_v0 = 0;
        } else {
            goto loop_1;
        }
    }
    return var_v0;
}
