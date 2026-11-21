/* m2c reference for func_80126E2C @ 80126E2C (20 words). Generated; not compiled or validated. */
s32 func_80126E2C(void *arg0, s32 arg1) {
    s32 var_a2;

    var_a2 = 0;
    if ((arg0->unk7D8 == 1) || (arg0->unk7D8 == 3)) {
        var_a2 = 1;
    }
    if ((var_a2 != 0) && ((arg1 == 4) || (arg1 == 0xA))) {
        return 1;
    }
    return 0;
}
