/* m2c reference for func_8013AF7C @ 8013AF7C (31 words). Generated; not compiled or validated. */
? func_8013BDCC(s32, ?, ?);                         /* extern */
extern ? D_801C31CC;
static s32 D_801C34F4 = 0;

void func_8013AF7C(s32 arg0, s32 arg1) {
    s32 var_v0;

    D_801C31CC.unk8 = 0x19;
    D_801C31CC.unkC = rand();
    D_801C31CC.unk14 = arg0;
    D_801C31CC.unk10 = -1;
    if (arg1 != 0) {
        var_v0 = 0x64;
    } else {
        var_v0 = 0x32;
    }
    D_801C31CC.unk18 = var_v0;
    func_8013BDCC(D_801C34F4, 0, 0);
}
