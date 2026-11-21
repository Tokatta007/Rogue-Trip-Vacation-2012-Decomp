/* m2c reference for func_801737FC @ 801737FC (51 words). Generated; not compiled or validated. */
extern u16 D_801F4330;
extern u16 D_801F4332;
extern ? D_801F4340;
extern ? D_801F4344;
extern ? D_801F435D;
extern u16 D_801F4A38;
extern u16 D_801F4A3A;
extern u16 D_801F4B52;

void func_801737FC(void) {
    s32 temp_v0;
    s32 var_a1;
    s32 var_a2;
    u16 temp_a0;
    u16 temp_v1;
    u32 var_v1;

    var_v1 = D_801F4B52 & 0xFFFF;
    if (var_v1 < 0x10U) {
        var_a2 = 1 << var_v1;
        var_a1 = 0;
    } else {
        var_a2 = 0;
        var_a1 = 1 << (var_v1 - 0x10);
        var_v1 = D_801F4B52 & 0xFFFF;
    }
    temp_v0 = var_v1 * 0x36;
    *(&D_801F435D + temp_v0) = 0;
    *(&D_801F4344 + temp_v0) = 0;
    *(&D_801F4340 + temp_v0) = 0;
    temp_v1 = D_801F4A38 | var_a2;
    D_801F4A38 = temp_v1;
    D_801F4330 &= ~temp_v1;
    temp_a0 = D_801F4A3A | var_a1;
    D_801F4A3A = temp_a0;
    D_801F4332 &= ~temp_a0;
}
