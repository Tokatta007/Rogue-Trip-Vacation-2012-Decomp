/* m2c reference for func_8018041C @ 8018041C (30 words). Generated; not compiled or validated. */
extern s32 D_801F53E0;
extern ? D_801F53E4;
extern s32 D_801F53EC;
extern ? func_801804CC;
extern ? func_80180534;

s32 func_8018041C(void) {
    void *temp_s0;

    EnterCriticalSection();
    temp_s0 = &D_801F53E4 - 4;
    D_801F53E4.unk0 = &func_801804CC;
    D_801F53E4.unk4 = &func_80180534;
    D_801F53E0 = 0;
    D_801F53EC = 0;
    SysDeqIntRP(1, temp_s0);
    SysEnqIntRP(1, temp_s0);
    ExitCriticalSection();
    return 1;
}
