/* m2c reference for func_80160960 @ 80160960 (41 words). Generated; not compiled or validated. */
extern s32 D_801BC000;
extern s32 D_801BC024;
extern s32 D_801BC028;
extern u32 D_801BC02C;
extern s32 D_801BC030;

u32 func_80160960(s32 arg0, u32 arg1) {
    u32 temp_a3;
    u32 var_a1;

    var_a1 = arg1;
    if ((D_801BC024 != 0) && ((var_a1 % (u32) D_801BC02C) != 0)) {
        var_a1 = (var_a1 + D_801BC02C) & ~D_801BC030;
    }
    temp_a3 = var_a1 >> D_801BC028;
    if (arg0 != -2) {
        if (arg0 == -1) {
            return temp_a3 & 0xFFFF;
        }
        *((arg0 * 2) + D_801BC000) = (s16) temp_a3;
        return var_a1;
    }
    return var_a1;
}
