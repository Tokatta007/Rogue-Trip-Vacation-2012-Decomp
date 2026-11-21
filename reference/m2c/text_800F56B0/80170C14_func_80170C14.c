/* m2c reference for func_80170C14 @ 80170C14 (15 words). Generated; not compiled or validated. */
void func_80170C14(void *arg0, s16 arg1) {
    s32 var_v1;
    void *var_a0;

    var_a0 = arg0;
    var_v1 = 0;
    if (arg1 > 0) {
        do {
            var_a0->unk240 = -1;
            var_a0->unk242 = -1;
            var_a0->unk244 = -1;
            var_a0->unk246 = -1;
            var_v1 += 1;
            var_a0 += 8;
        } while (var_v1 < arg1);
    }
}
