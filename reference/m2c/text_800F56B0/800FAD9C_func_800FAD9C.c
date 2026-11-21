/* m2c reference for func_800FAD9C @ 800FAD9C (39 words). Generated; not compiled or validated. */
static void *D_801C34EC = NULL;

s32 func_800FAD9C(void *arg0) {
    s32 var_a1;
    s32 var_a2;
    s32 var_v0;

    var_a1 = 0;
    if (arg0->unk40 == arg0->unk858) {
        var_a2 = 0;
        if (D_801C34EC->unk127A8 >= 3) {
            if (arg0->unk58 != 0x12) {
                var_v0 = arg0->unk86C;
                if (var_v0 < 0) {
                    var_v0 = -var_v0;
                }
                if (var_v0 >= 0x401) {
                    goto block_6;
                }
            } else {
block_6:
                var_a2 = 1;
            }
            if (var_a2 != 0) {
                var_a1 = 1;
            }
        } else if (arg0->unk931 != 0) {
            goto block_10;
        }
    } else {
block_10:
        var_a1 = 1;
    }
    return var_a1;
}
