/* m2c reference for func_80160834 @ 80160834 (33 words). Generated; not compiled or validated. */
? func_80160290(s32, s32);                          /* extern */
? func_801605B4(?, s32, s32);                       /* extern */
extern u16 D_801BC018;
extern s32 D_801BC01C;
extern s32 D_801BC028;

s32 func_80160834(s32 arg0, s32 arg1) {
    if (D_801BC01C == 0) {
        func_801605B4(2, D_801BC018 << D_801BC028);
        func_801605B4(1);
        func_801605B4(3, arg0, arg1);
        return arg1;
    }
    func_80160290(arg0, arg1);
    return arg1;
}
