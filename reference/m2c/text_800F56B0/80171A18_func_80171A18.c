/* m2c reference for func_80171A18 @ 80171A18 (13 words). Generated; not compiled or validated. */
s32 func_80171A18(void *arg0, s32 arg1) {
    s32 var_v1;
    void *var_a0;

    var_a0 = arg0;
    var_v1 = 0;
loop_1:
    var_v1 += 1;
    if (var_a0->unk0 == arg1) {
        return var_a0->unkC;
    }
    var_a0 += 0x18;
    if (var_v1 >= 0x18) {
        return -1;
    }
    goto loop_1;
}
