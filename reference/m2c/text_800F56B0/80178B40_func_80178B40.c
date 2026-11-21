/* m2c reference for func_80178B40 @ 80178B40 (39 words). Generated; not compiled or validated. */
extern s32 D_801C2DF8;

s32 func_80178B40(s32 arg0, s16 arg1, s32 arg2) {
    s16 var_a3;
    s32 temp_t0;
    s32 var_v0;
    void *temp_v1;

    temp_t0 = arg0 & 0xFFFF;
    var_a3 = 0x48;
    if (temp_t0 >= 3) {
        return 0;
    }
    temp_v1 = (temp_t0 * 0x10) + D_801C2DF8;
    temp_v1->unk4 = 0;
    temp_v1->unk8 = arg1;
    if ((u32) temp_t0 < 2U) {
        if (arg2 & 0x10) {
            var_a3 = 0x49;
        }
        var_v0 = arg2 & 0x1000;
        if (!(arg2 & 1)) {
            var_a3 |= 0x100;
        }
    } else {
        var_v0 = arg2 & 0x1000;
        if (temp_t0 == 2) {
            var_v0 = arg2 & 0x1000;
            if (!(arg2 & 1)) {
                var_a3 = 0x248;
            }
        }
    }
    if (var_v0 != 0) {
        var_a3 |= 0x10;
    }
    ((temp_t0 * 0x10) + D_801C2DF8)->unk4 = var_a3;
    return 1;
}
