/* m2c reference for func_80180154 @ 80180154 (28 words). Generated; not compiled or validated. */
extern s32 D_801F53C0;
extern ? func_80180098;
extern ? func_801800C0;

void func_80180154(void) {
    s32 *var_t2;
    void *var_v0;

    D_801F53C0 = saved_reg_ra;
    EnterCriticalSection();
    var_v0 = (void *(*)())0xB0()->unk16C;
    var_t2 = &func_80180098 + 0x14;
    do {
        var_v0->unk9C8 = (s32) *var_t2;
        var_t2 += 4;
        var_v0 += 4;
    } while (var_t2 != &func_801800C0);
    FlushCache();
}
