/* m2c reference for func_80100EF0 @ 80100EF0 (51 words). Generated; not compiled or validated. */
? func_801011E4(s32, s32, s32, ?);                  /* extern */
s32 func_80133040();                                /* extern */
extern ? D_801807B8;
extern ? D_80180800;
extern ? D_80180848;
extern ? D_80180890;
extern ? D_801808D8;
static s32 D_801C34EC = 0;

void func_80100EF0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    ? *var_v0;
    s32 temp_a0;
    s32 var_v1;

    if (func_80133040() != 0) {
        var_v1 = arg1 * 4;
        *(var_v1 + &D_80180848) = arg2;
        var_v0 = &D_80180890;
    } else {
        var_v1 = arg1 * 4;
        *(var_v1 + &D_801807B8) = arg2;
        var_v0 = &D_80180800;
    }
    *(var_v1 + var_v0) = arg3;
    temp_a0 = D_801C34EC + 0x6220;
    *((arg1 * 4) + &D_801808D8) = arg4;
    func_801011E4(temp_a0, arg0, *(temp_a0 + (arg0 * 4)), 0);
}
