/* m2c reference for func_8017C974 @ 8017C974 (29 words). Generated; not compiled or validated. */
? func_8017495C(?);                                 /* extern */
extern s32 D_801BC038;
extern s32 D_801BC03C;
extern s32 D_801C2660;
extern s32 D_801C2AC8;

void func_8017C974(void) {
    if (D_801C2AC8 == 1) {
        D_801C2AC8 = 0;
        EnterCriticalSection();
        D_801BC038 = 0;
        D_801BC03C = 0;
        func_8017495C(0);
        CloseEvent(D_801C2660);
        DisableEvent(D_801C2660);
        ExitCriticalSection();
    }
}
