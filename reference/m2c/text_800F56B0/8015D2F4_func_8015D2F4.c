/* m2c reference for func_8015D2F4 @ 8015D2F4 (38 words). Generated; not compiled or validated. */
extern s16 D_801BAD4C;
extern s16 D_801BAD4E;

s32 func_8015D2F4(s16 arg0, s16 arg1) {
    s16 var_v0;
    s32 var_a1;
    s32 var_v1;

    var_v0 = 0;
    if (arg0 >= 0) {
        var_v0 = (u16) D_801BAD4C - 1;
        if ((D_801BAD4C - 1) >= arg0) {
            var_v0 = arg0;
        }
    }
    if (arg1 >= 0) {
        var_v1 = arg1 & 0x3FF;
        if ((D_801BAD4E - 1) < arg1) {
            var_a1 = (u16) D_801BAD4E - 1;
            goto block_7;
        }
    } else {
        var_a1 = 0;
block_7:
        var_v1 = var_a1 & 0x3FF;
    }
    return (var_v1 << 0xA) | ((var_v0 & 0x3FF) | 0xE3000000);
}
