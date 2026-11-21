/* m2c reference for func_80180658 @ 80180658 (26 words). Generated; not compiled or validated. */
extern s32 D_801F5400;

void func_80180658(void) {
    s32 *var_v1;
    s32 var_t2;

    D_801F5400 = saved_reg_ra;
    EnterCriticalSection();
    var_t2 = 9;
    var_v1 = (void *(*)())0xB0()->unk16C + 0x62C;
    do {
        *var_v1 = 0;
        var_v1 += 4;
        var_t2 -= 1;
    } while (var_t2 != 0);
    FlushCache();
    ExitCriticalSection();
}
