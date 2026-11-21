/* m2c reference for func_80160E70 @ 80160E70 (17 words). Generated; not compiled or validated. */
extern ? D_801BC0A0;

void func_80160E70(void) {
    s32 temp_s0;

    temp_s0 = EnterCriticalSection();
    AddDrv(&D_801BC0A0);
    if (temp_s0 == 1) {
        ExitCriticalSection();
    }
}
