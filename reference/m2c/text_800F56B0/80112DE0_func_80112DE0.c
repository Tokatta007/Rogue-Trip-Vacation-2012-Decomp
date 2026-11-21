/* m2c reference for func_80112DE0 @ 80112DE0 (59 words). Generated; not compiled or validated. */
? func_801129F4(s32, ?, ?, ?);                      /* extern */
? func_80125518(? *, s16, s16, s16);                /* extern */
extern ? D_80180D1C;

void func_80112DE0(s32 arg0, ? arg1, ? arg2, void *arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg8) {
    s16 var_a1;
    s16 var_a2;
    s16 var_a3;

    if (arg3 == NULL) {
        var_a1 = 0;
        var_a2 = 0;
        var_a3 = 0;
    } else {
        var_a1 = (s16) arg3->unk0;
        var_a2 = (s16) arg3->unk4;
        var_a3 = (s16) arg3->unk8;
    }
    func_80125518(&D_80180D1C, var_a1, var_a2, var_a3);
    D_80180D1C.unk10 = 1;
    D_80180D1C.unk10 = 1;
    D_80180D1C.unk8 = (s16) arg4;
    D_80180D1C.unkA = (s16) arg8;
    D_80180D1C.unkC = (s16) arg5;
    D_80180D1C.unkE = (s8) arg6;
    D_80180D1C.unkF = (s8) arg7;
    func_801129F4(arg0, arg1, arg2, 0x44);
}
