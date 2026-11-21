/* m2c reference for func_8016BE08 @ 8016BE08 (22 words). Generated; not compiled or validated. */
extern s8 D_801C38B8;
extern s32 D_801C38BC;
extern s32 D_801C38C4;
extern s32 D_801C38CC;

void func_8016BE08(s8 arg0) {
    s32 *var_a0;
    s32 *var_a1;
    s32 *var_v1;
    s32 var_a2;

    D_801C38B8 = arg0;
    var_a2 = 0;
    if (!(arg0 & 0xFF)) {
        var_a1 = &D_801C38C4;
        var_a0 = &D_801C38BC;
        var_v1 = &D_801C38CC;
        do {
            *var_v1 = 0;
            *var_a0 = 0x10;
            *var_a1 = 0;
            var_a1 += 4;
            var_a0 += 4;
            var_a2 += 1;
            var_v1 += 4;
        } while (var_a2 < 2);
    }
}
