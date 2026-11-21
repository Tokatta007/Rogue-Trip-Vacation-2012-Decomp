/* m2c reference for func_80124AF8 @ 80124AF8 (34 words). Generated; not compiled or validated. */
s32 func_80124AF8(void *arg0, s32 arg1) {
    s32 var_a3;
    s32 var_t0;
    void *temp_v1;
    void *var_a2;

    var_t0 = 0;
    var_a3 = 0;
    var_a2 = arg0;
loop_1:
    if (var_a3 < arg0->unk12750) {
        temp_v1 = var_a2 + 0xC8FC;
        if ((var_a2->unkD244 != 0) && (temp_v1->unk54 == 1)) {
            var_a2 += 0x958;
            if (temp_v1->unk30 == (arg0->unk15CC + (arg1 << 5))) {
                var_t0 = 1;
            } else {
                goto block_7;
            }
        } else {
            var_a2 += 0x958;
block_7:
            var_a3 += 1;
            goto loop_1;
        }
    }
    return var_t0;
}
