/* m2c reference for func_80151864 @ 80151864 (42 words). Generated; not compiled or validated. */
s32 func_8012340C(s32, void *);                     /* extern */
s32 func_801244FC(s32, s32);                        /* extern */
? func_80153E34(s32, s32, s32, ?);                  /* extern */
static s32 D_801C34EC = 0;

void func_80151864(s32 arg0, s32 arg2, s32 arg3) {
    s32 var_a1;
    s32 var_a2;
    void *temp_a3;

    temp_a3 = arg0 + arg3;
    temp_a3->unk17FC = 1;
    temp_a3->unk17FA = 0;
    if (arg2 != 0) {
        var_a1 = func_801244FC(D_801C34EC, func_8012340C(D_801C34EC, temp_a3));
        var_a2 = arg2;
    } else {
        var_a1 = func_801244FC(D_801C34EC, func_8012340C(D_801C34EC, temp_a3));
        var_a2 = 0;
    }
    func_80153E34(arg0, var_a1, var_a2, 0x11);
}
