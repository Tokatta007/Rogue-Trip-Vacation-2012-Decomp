/* m2c reference for func_80112ECC @ 80112ECC (100 words). Generated; not compiled or validated. */
s32 func_80112ECC(void *arg0, s32 arg1, void *arg2) {
    s32 temp_a1;
    s32 temp_t1;
    s32 var_a1;
    s32 var_a1_2;
    s32 var_v0;
    s32 var_v1;
    s8 var_t0;
    void *temp_a0;
    void *temp_a0_2;

    temp_a1 = arg1 >> 1;
    var_v1 = 0;
    if ((arg0 == NULL) || ((s32) arg0->unk268 < temp_a1) || (arg0->unk254 == 0)) {
        var_v1 = 1;
    }
    if (var_v1 != 0) {
        /* Duplicate return node #5. Try simplifying control flow for better match */
        return 0;
    }
    var_t0 = (s8) arg0->unk25F;
    temp_t1 = (s8) arg0->unk25E >> arg0->unk261;
    var_a1 = temp_a1 + temp_t1;
    if (var_t0 < temp_t1) {
        var_t0 = arg0->unk268 + (var_t0 + 1);
    }
    if ((var_a1 >= temp_t1) && (var_t0 >= var_a1)) {
        var_v0 = var_a1 << 6;
        if ((s32) arg0->unk268 < var_a1) {
            var_a1 = (var_a1 - 1) - arg0->unk268;
            var_v0 = var_a1 << 6;
        }
        temp_a0 = arg0 + (var_v0 + 0xC);
        arg2->unk0 = (s32) ((s32) temp_a0->unk0 >> 5);
        arg2->unk4 = (s32) ((s32) temp_a0->unk4 >> 5);
        arg2->unk8 = (s32) ((s32) temp_a0->unk8 >> 5);
        var_a1_2 = var_a1 + 1;
        if (arg1 & 1) {
            if ((var_a1_2 >= temp_t1) && (var_t0 >= var_a1_2)) {
                if ((s32) arg0->unk268 < var_a1_2) {
                    var_a1_2 = (var_a1_2 - 1) - arg0->unk268;
                }
                temp_a0_2 = arg0 + ((var_a1_2 << 6) + 0xC);
                arg2->unk0 = (s32) ((s32) (arg2->unk0 + ((s32) temp_a0_2->unk0 >> 5)) >> 1);
                arg2->unk4 = (s32) ((s32) (arg2->unk4 + ((s32) temp_a0_2->unk4 >> 5)) >> 1);
                arg2->unk8 = (s32) ((s32) (arg2->unk8 + ((s32) temp_a0_2->unk8 >> 5)) >> 1);
                /* Duplicate return node #18. Try simplifying control flow for better match */
                return 1;
            }
            /* Duplicate return node #5. Try simplifying control flow for better match */
            return 0;
        }
        return 1;
    }
    return 0;
}
