/* m2c reference for func_80163448 @ 80163448 (50 words). Generated; not compiled or validated. */
s32 func_80163448(void *arg0) {
    s32 var_a3;
    s32 var_t2;
    s32 var_v1;
    s32 var_v1_2;
    s8 var_t0;
    u8 *var_a1;
    u8 *var_a1_2;
    u8 var_t1;
    void *var_a2;

    var_t0 = 0;
    if (arg0->unkE9 != 0) {
        var_t2 = 0;
        do {
            var_a1 = arg0->unk20;
            var_a3 = 0;
            var_v1 = 5;
loop_3:
            var_a1 += 1;
            if (*var_a1 == var_t0) {
                var_a3 += 1;
            }
            var_v1 -= 1;
            if (var_v1 >= 0) {
                goto loop_3;
            }
            var_t1 = (var_t2 + arg0->unk4)->unk2;
            var_a1_2 = arg0->unk20;
            var_v1_2 = 0;
            if (var_t1 == 0) {
                var_t1 = 1;
            }
            var_a2 = arg0;
loop_9:
            var_a1_2 += 1;
            if (*var_a1_2 == var_t0) {
                if (var_a3 < (s32) var_t1) {
                    var_a2->unk5D = -1;
                    var_a3 -= 1;
                } else {
                    var_a2->unk5D = var_t0;
                }
            }
            var_v1_2 += 1;
            var_a2 += 1;
            if (var_v1_2 < 6) {
                goto loop_9;
            }
            var_t0 += 1;
            var_t2 += 5;
        } while (var_t0 < (s32) arg0->unkE9);
    }
    arg0->unk46 = 0xFE;
    return 0;
}
