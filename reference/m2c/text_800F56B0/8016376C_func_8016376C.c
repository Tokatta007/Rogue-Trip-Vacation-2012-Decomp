/* m2c reference for func_8016376C @ 8016376C (26 words). Generated; not compiled or validated. */
s32 func_80162B10(s32);                             /* extern */
extern s32 D_801BC110;
extern s32 D_801BC130;

s32 func_8016376C(void *arg0) {
    s32 temp_v0;
    s32 var_a0;
    s32 var_v0;

    var_a0 = 0;
    if (arg0->unk36 == 0) {
        var_a0 = D_801BC110;
    }
    var_v0 = func_80162B10(var_a0);
    if (var_v0 >= 0) {
        temp_v0 = (var_v0 & 0xF) * 2;
        D_801BC130 = temp_v0;
        var_v0 = 0;
        if (temp_v0 == 0) {
            D_801BC130 = 0x20;
            var_v0 = 0;
        }
    }
    return var_v0;
}
