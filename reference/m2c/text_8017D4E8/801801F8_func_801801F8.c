/* m2c reference for func_801801F8 @ 801801F8 (28 words). Generated; not compiled or validated. */
extern s32 D_80180268;
extern ? D_80180274;
extern s32 D_801F53D0;

void func_801801F8(void) {
    s32 *var_t2;
    void *var_v0;

    D_801F53D0 = saved_reg_ra;
    EnterCriticalSection();
    var_v0 = (void *(*)())0xB0()->unk18;
    var_t2 = &D_80180268;
    do {
        var_v0->unk70 = (s32) *var_t2;
        var_t2 += 4;
        var_v0 += 4;
    } while (var_t2 != &D_80180274);
    FlushCache();
    ExitCriticalSection();
}
