/* m2c reference for func_80180324 @ 80180324 (36 words). Generated; not compiled or validated. */
? func_8018041C();                                  /* extern */
? func_801805E0();                                  /* extern */
? func_80180658();                                  /* extern */
extern s32 D_801C3230;

void func_80180324(s8 *arg0, s32 arg1, s8 *arg2, s32 arg3) {
    func_80180658();
    EnterCriticalSection();
    func_801805E0();
    ExitCriticalSection();
    ChangeClearPAD(0);
    func_8018041C();
    InitPAD2(arg0, arg1, arg2, arg3);
    D_801C3230 = 1;
}
