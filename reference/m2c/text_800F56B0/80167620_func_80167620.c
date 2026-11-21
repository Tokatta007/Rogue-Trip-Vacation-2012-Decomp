/* m2c reference for func_80167620 @ 80167620 (30 words). Generated; not compiled or validated. */
s32 func_80166F90(?);                               /* extern */
? func_80167698(s32, ?, s32);                       /* extern */
static s16 D_801C363C = 0;
static s16 D_801C363E = 0;

void func_80167620(s32 arg0, s32 arg1, s16 arg2, ? arg3, s32 arg4) {
    D_801C363C = arg1 - (func_80166F90(arg3) >> 1);
    D_801C363E = arg2;
    func_80167698(arg0, arg3, arg4);
}
