/* m2c reference for func_80180534 @ 80180534 (16 words). Generated; not compiled or validated. */
extern void *D_801C3238;

s32 func_80180534(void) {
    s32 var_v0;

    var_v0 = 0;
    if (D_801C3238->unk4 & 1) {
        var_v0 = 1;
        if (!(D_801C3238->unk0 & 1)) {
            var_v0 = 0;
        }
    }
    return var_v0;
}
