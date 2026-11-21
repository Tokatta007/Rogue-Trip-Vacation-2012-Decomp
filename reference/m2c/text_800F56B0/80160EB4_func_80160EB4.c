/* m2c reference for func_80160EB4 @ 80160EB4 (19 words). Generated; not compiled or validated. */
static s8 D_800F5000[4] = { 0x73, 0x69, 0x6F, 0 };  /* const */

void func_80160EB4(void) {
    s32 temp_s0;

    temp_s0 = EnterCriticalSection();
    DelDrv(D_800F5000);
    FlushCache();
    if (temp_s0 == 1) {
        ExitCriticalSection();
    }
}
