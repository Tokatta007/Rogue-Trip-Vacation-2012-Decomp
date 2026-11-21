/* m2c reference for func_8015C42C @ 8015C42C (50 words). Generated; not compiled or validated. */
extern ? (*D_801BAD44)(? *, s32 *, s32);
extern u8 D_801BAD4A;
extern ? D_801BADF4;
extern s32 D_801BAE08;
static ? D_800F4DE0;                                /* unable to generate initializer: unknown type; const */

void func_8015C42C(s32 *arg0, s32 arg1) {
    s32 *temp_a0;
    s32 *var_s0;
    s32 var_s1;

    var_s0 = arg0;
    if ((u8) D_801BAD4A >= 2U) {
        D_801BAD44(&D_800F4DE0, var_s0, arg1);
    }
    var_s1 = arg1 - 1;
    if (var_s1 != 0) {
        do {
            var_s1 -= 1;
            temp_a0 = var_s0 + 4;
            var_s0->unk3 = 0;
            var_s0->unk0 = (var_s0->unk0 & 0xFF000000) | ((s32) temp_a0 & 0xFFFFFF);
            var_s0 = temp_a0;
        } while (var_s1 != 0);
    }
    D_801BAE08 = ((s32) &D_801BADF4 & 0xFFFFFF) | 0x04000000;
    *var_s0 = (s32) &D_801BAE08 & 0xFFFFFF;
}
