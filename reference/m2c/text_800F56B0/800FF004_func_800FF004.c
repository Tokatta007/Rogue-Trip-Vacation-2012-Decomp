/* m2c reference for func_800FF004 @ 800FF004 (15 words). Generated; not compiled or validated. */
void func_800FF004(void *arg0) {
    s32 var_a1;

    var_a1 = 0;
    if (arg0->unk78 > 0) {
        do {
            ((var_a1 * 4) + arg0->unk4)->unk2 = 0;
            var_a1 += 1;
        } while (var_a1 < arg0->unk78);
    }
}
