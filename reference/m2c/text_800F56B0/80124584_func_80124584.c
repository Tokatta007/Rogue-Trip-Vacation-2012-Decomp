/* m2c reference for func_80124584 @ 80124584 (66 words). Generated; not compiled or validated. */
void *func_80124584(void *arg0, s32 arg1, s32 arg2) {
    s32 var_t1;
    void *var_a0;
    void *var_a3;
    void *var_t0;

    var_t1 = 0;
    var_t0 = NULL;
    if (arg0->unk1270C > 0) {
        var_a3 = arg0;
        var_a0 = var_a3 + 0x10000;
loop_2:
        if (var_a0->unk268C == arg1) {
            if (var_a3->unkB768 == 1) {
                var_a3 += 4;
                if ((arg0 + 0xB788 + (var_a0->unk26EC * 0x8B8))->unk78 == arg2) {
                    var_t0 = arg0 + ((var_a0->unk26EC * 0x8B8) + 0xB788);
                } else {
                    goto block_8;
                }
            } else {
                var_t0 = arg0 + ((var_a0->unk26EC * 0x958) + 0xC8F8);
                goto block_7;
            }
        } else {
block_7:
            var_a3 += 4;
block_8:
            var_t1 += 1;
            var_a0 = var_a3 + 0x10000;
            if (var_t1 < arg0->unk1270C) {
                goto loop_2;
            }
        }
    }
    return var_t0;
}
