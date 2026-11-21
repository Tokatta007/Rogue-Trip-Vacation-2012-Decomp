/* m2c reference for func_801234AC @ 801234AC (47 words). Generated; not compiled or validated. */
void func_801234AC(void *arg0, s32 arg1, s32 arg2) {
    s32 var_a0;
    s32 var_a3;
    void *var_t0;
    void *var_v1;

    var_a3 = 0;
    if (arg0->unk1278C > 0) {
        var_t0 = arg0;
        var_v1 = var_t0 + 0x10000;
loop_2:
        var_a0 = 0;
        if ((arg2 == var_v1->unk24A8) || (arg1 == var_v1->unk2764)) {
            var_a0 = 1;
        }
        var_t0 += 4;
        if (var_a0 == 0) {
            var_a3 += 1;
            var_v1 = var_t0 + 0x10000;
            if (var_a3 >= arg0->unk1278C) {
                goto block_7;
            }
            goto loop_2;
        }
    } else {
block_7:
        (arg0 + (arg0->unk1278C * 4))->unk124A8 = arg2;
        (arg0 + (arg0->unk1278C * 4))->unk12764 = arg1;
        arg0->unk1278C = (s32) (arg0->unk1278C + 1);
    }
}
