/* m2c reference for func_80139DB8 @ 80139DB8 (90 words). Generated; not compiled or validated. */
? func_80139F20(s32, ?, ?, s32 *);                  /* extern */
? func_8015EBDC(?);                                 /* extern */
? func_80167228(?, ?, ?, s32);                      /* extern */
s32 func_8016B6DC(?, ?);                            /* extern */
? func_8016BB9C();                                  /* extern */
extern ? D_801B394C;
static s32 D_801C34FC = 0;

s32 func_80139DB8(s32 arg0, s32 arg1, ? arg2, ? arg3, s32 *arg4) {
    s32 temp_v1;
    s32 var_s0;
    s32 var_s1;
    s32 var_s3;
    s32 var_v0;

    var_s1 = arg0;
    var_s3 = 0;
    var_s0 = 0;
loop_1:
    var_v0 = var_s3;
    if (var_s1 > 0) {
        if (*arg4 > 0) {
            if (arg1 != 0) {
                func_80139F20(arg1, arg2, arg3, arg4);
            }
        } else if (arg1 != 0) {
            func_80167228(1, arg2, arg3, arg1);
        }
        func_8016BB9C();
        if (func_8016B6DC(0x40, 0) & 0xFF) {
            var_s0 = 1;
        }
        if (func_8016B6DC(0x800, 0) & 0xFF) {
            var_s0 = 1;
        }
        if (func_8016B6DC(0x10, 0) & 0xFF) {
            temp_v1 = D_801C34FC - 1;
            var_s3 = *((temp_v1 * 4) + &D_801B394C);
            var_s0 = 1;
            D_801C34FC = temp_v1;
        }
        if (func_8016B6DC(0x80, 0) & 0xFF) {
            var_s0 = 1;
            var_s3 = 1;
        }
        func_8015EBDC(0);
        var_s1 -= 1;
        if (var_s0 != 0) {
            var_v0 = var_s3;
        } else {
            goto loop_1;
        }
    }
    return var_v0;
}
