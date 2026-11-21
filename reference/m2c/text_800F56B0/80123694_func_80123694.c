/* m2c reference for func_80123694 @ 80123694 (54 words). Generated; not compiled or validated. */
s32 func_80123694(void *arg0, s32 arg1) {
    s32 var_a3;
    s32 var_a3_2;
    s32 var_t0;
    s32 var_t1;
    void *temp_a2;
    void *var_a0;
    void *var_a2;
    void *var_v1;
    void *var_v1_2;

    var_a0 = arg0;
    var_t0 = 0;
    var_a3 = 0;
    var_t1 = 0;
    if (var_a0->unk1270C > 0) {
        var_a2 = var_a0;
        var_v1 = var_a2 + 0x10000;
loop_2:
        if (var_v1->unk241C == arg1) {
            var_t1 = var_v1->unk24E0;
            var_t0 = 1;
        }
        var_a2 += 4;
        var_a3 += 1;
        if (var_a3 < var_a0->unk1270C) {
            var_v1 = var_a2 + 0x10000;
            if (var_t0 == 0) {
                goto loop_2;
            }
        }
    }
    if (var_t0 == 0) {
        var_a3_2 = 0;
        if ((var_t0 < var_a0->unk12760) & 1) {
            temp_a2 = var_a0 + 0x10000;
            var_v1_2 = var_a0 + 0x10000;
            do {
                if (var_v1_2->unk2458 == arg1) {
                    var_t1 = var_v1_2->unk2604;
                    var_t0 = 1;
                }
                var_a0 += 4;
                var_a3_2 += 1;
                var_v1_2 = var_a0 + 0x10000;
            } while ((var_a3_2 < temp_a2->unk2760) & (var_t0 == 0));
        }
    }
    return var_t1;
}
