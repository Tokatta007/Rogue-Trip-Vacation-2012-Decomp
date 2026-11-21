/* m2c reference for func_80180494 @ 80180494 (14 words). Generated; not compiled or validated. */
extern ? D_801F53E0;

s32 func_80180494(void) {
    EnterCriticalSection();
    SysDeqIntRP(1, &D_801F53E0);
    ExitCriticalSection();
    return 1;
}
