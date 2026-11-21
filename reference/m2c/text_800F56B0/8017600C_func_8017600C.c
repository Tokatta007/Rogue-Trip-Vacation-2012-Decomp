/* m2c reference for func_8017600C @ 8017600C (23 words). Generated; not compiled or validated. */
? func_80160834(u32);                               /* extern */
extern s32 D_801BC034;
extern s32 D_801BC038;

u32 func_8017600C(u32 arg1) {
    u32 var_s0;

    var_s0 = arg1;
    if (var_s0 > 0x7EFF0U) {
        var_s0 = 0x7EFF0;
    }
    func_80160834(var_s0);
    if (D_801BC038 == 0) {
        D_801BC034 = 0;
    }
    return var_s0;
}
