/* m2c reference for func_80145FDC @ 80145FDC (25 words). Generated; not compiled or validated. */
s32 func_80145FDC(void *arg0) {
    s32 var_a1;
    s32 var_a2;
    s32 var_v0;

    var_a2 = 0;
    var_a1 = 0;
    if (arg0->unk84 == 0) {
        var_v0 = arg0->unk21C;
        if (var_v0 < 0) {
            var_v0 = -var_v0;
        }
        if (arg0->unkE4 < var_v0) {
            goto block_4;
        }
    } else {
block_4:
        var_a1 = 1;
    }
    if ((var_a1 != 0) && (arg0->unkCC < arg0->unk7A4)) {
        var_a2 = 1;
    }
    return var_a2;
}
