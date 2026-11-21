/* m2c reference for func_801784A8 @ 801784A8 (71 words). Generated; not compiled or validated. */
s32 func_801784A8(void *arg0, VECTOR *arg1) {
    VECTOR sp10;
    s32 var_a0;
    s32 var_v0;

    mathMulVec(arg0 + 0x10, arg1, &sp10);
    var_a0 = 0;
    if (((arg0->unk24 + (s32) sp10) > 0) && ((arg0->unk28 + sp10.vy) > 0)) {
        var_a0 = (arg0->unk2C + sp10.vz) > 0;
    }
    var_v0 = 0;
    if (var_a0 != 0) {
        var_v0 = 1;
        if ((u8) arg0->unk4 >= 4U) {
            mathMulVec(arg0 + 0x30, arg1, &sp10);
            var_v0 = 0;
            if ((arg0->unk44 + (s32) sp10) > 0) {
                var_v0 = 1;
                if ((u8) arg0->unk4 >= 5U) {
                    var_v0 = 0;
                    if ((arg0->unk48 + sp10.vy) > 0) {
                        var_v0 = 1;
                        if ((u8) arg0->unk4 >= 6U) {
                            var_v0 = 1;
                            if ((arg0->unk4C + sp10.vz) <= 0) {
                                var_v0 = 0;
                            }
                        }
                    }
                }
            }
        }
    }
    return var_v0;
}
