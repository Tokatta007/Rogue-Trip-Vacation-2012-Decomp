/* m2c reference for func_8017233C @ 8017233C (39 words). Generated; not compiled or validated. */
? func_8017504C(?, s32);                            /* extern */
? func_8017522C(? *);                               /* extern */
extern ? D_801F4A40;

s16 func_8017233C(s16 arg0) {
    s16 var_v1;
    s32 var_a1;
    s32 var_v0;

    var_a1 = 0;
    var_v1 = arg0;
    if (arg0 & 0x8000) {
        var_a1 = 1;
        var_v1 = -arg0;
    }
    if ((u32) (var_v1 & 0xFFFF) < 0xAU) {
        D_801F4A40.unk0 = 1;
        if (var_a1 != 0) {
            var_v0 = (var_v1 | 0x100) << 0x10;
        } else {
            var_v0 = var_v1 << 0x10;
        }
        D_801F4A40.unk4 = (s32) (var_v0 >> 0x10);
        if (var_v1 == 0) {
            func_8017504C(0, var_a1);
        }
        func_8017522C(&D_801F4A40);
        return var_v1;
    }
    return -1;
}
