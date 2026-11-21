/* m2c reference for func_80110FC8 @ 80110FC8 (40 words). Generated; not compiled or validated. */
void func_80110FC8(void *arg0, void *arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    s32 var_v1;
    s32 var_v1_2;
    void *var_a0;
    void *var_a1;
    void *var_t0;

    var_a0 = arg0;
    var_a1 = arg1;
    var_v1 = 0;
    if (arg2 > 0) {
        var_t0 = var_a1;
        do {
            if ((var_a0->unk4 != 0) && ((s16) var_t0->unk22 == arg5)) {
                var_a0->unk4 = 0;
            }
            var_t0 += 0x20;
            var_v1 += 1;
            var_a0 += 0x20;
        } while (var_v1 < arg2);
    }
    var_v1_2 = 0;
    if (arg3 > 0) {
        do {
            if ((var_a1->unk4 != 0) && ((s16) var_a1->unk22 == arg4)) {
                var_a1->unk4 = 0;
            }
            var_v1_2 += 1;
            var_a1 += 0x20;
        } while (var_v1_2 < arg3);
    }
}
