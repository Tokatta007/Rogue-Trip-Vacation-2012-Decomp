/* m2c reference for func_8016B4CC @ 8016B4CC (14 words). Generated; not compiled or validated. */
void func_8016B4CC(void *arg0, s32 arg1, s32 *arg2) {
    s32 var_v1;
    void *var_a0;

    var_a0 = arg0;
    var_v1 = 0;
    if (arg1 > 0) {
        do {
            var_a0->unk0 = 0;
            var_a0->unk8 = -1;
            var_a0->unk4 = -1;
            var_v1 += 1;
            var_a0 += 0xC;
        } while (var_v1 < arg1);
    }
    *arg2 = -1;
}
