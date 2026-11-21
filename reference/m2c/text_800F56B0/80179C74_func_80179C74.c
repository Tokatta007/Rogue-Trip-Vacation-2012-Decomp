/* m2c reference for func_80179C74 @ 80179C74 (33 words). Generated; not compiled or validated. */
void func_80179C74(void *arg0, s32 arg1) {
    s32 var_a2;
    void *var_v1;

    arg0->unk8 = (s32) (arg0->unk8 + arg1);
    arg0->unkC = (s32) (arg0->unkC + arg1);
    arg0->unk14 = (s32) (arg0->unk14 + arg1);
    var_a2 = 0;
    if (arg0->unk13 != 0) {
        var_v1 = arg0;
        do {
            if (var_v1->unk18 != 0) {
                var_v1->unk18 = (s32) (var_v1->unk18 + arg1);
            }
            var_v1 += 4;
            var_a2 += 1;
        } while (var_a2 < (s32) arg0->unk13);
    }
}
