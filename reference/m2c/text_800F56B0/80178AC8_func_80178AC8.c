/* m2c reference for func_80178AC8 @ 80178AC8 (22 words). Generated; not compiled or validated. */
extern u32 D_801F508C;

u32 func_80178AC8(s32 arg0) {
    s32 temp_v1;
    u32 var_v1;

    temp_v1 = (arg0 + 0x89ED) / 70618;
    if ((temp_v1 <= 0) || (var_v1 = (u32) D_801F508C / (u32) temp_v1, ((s32) var_v1 <= 0))) {
        var_v1 = 1;
    }
    return var_v1;
}
