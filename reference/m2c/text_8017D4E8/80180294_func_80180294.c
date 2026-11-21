/* m2c reference for func_80180294 @ 80180294 (36 words). Generated; not compiled or validated. */
? func_8018041C();                                  /* extern */
? func_801805E0();                                  /* extern */
? func_80180658();                                  /* extern */
extern s32 D_801C3230;

void func_80180294(s32 arg0, s32 *arg1, ? arg2, ? arg3) {
    func_80180658();
    EnterCriticalSection();
    func_801805E0();
    ExitCriticalSection();
    ChangeClearPAD(0);
    func_8018041C();
    PAD_init(arg0, arg1);
    D_801C3230 = 1;
}
