/* m2c reference for func_80100BE0 @ 80100BE0 (31 words). Generated; not compiled or validated. */
void func_80100BE0(void *arg0, s32 arg1, s32 arg2) {
    s32 var_a3;
    s32 var_t0;
    s32 var_t0_2;
    void *var_a0;
    void *var_t1;
    void *var_v1;

    var_t1 = arg0->unk0;
    var_t0 = 0;
    if (arg1 > 0) {
        do {
            var_a3 = 0;
            var_v1 = var_t1;
            var_t1->unk1F = 0;
            var_t1->unk1D = 0;
            var_t1->unk1E = 0;
loop_3:
            var_v1->unkC = -1;
            var_a3 += 1;
            var_v1 += 2;
            if (var_a3 < 8) {
                goto loop_3;
            }
            var_t1->unk1C = 0;
            var_t0 += 1;
            var_t1 += 0x20;
        } while (var_t0 < arg1);
    }
    var_a0 = arg0->unk4;
    var_t0_2 = 0;
    if (arg2 > 0) {
        do {
            var_a0->unk0 = -1;
            var_a0->unk2 = 0;
            var_t0_2 += 1;
            var_a0 += 4;
        } while (var_t0_2 < arg2);
    }
}
