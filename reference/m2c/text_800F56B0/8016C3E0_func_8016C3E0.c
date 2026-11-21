/* m2c reference for func_8016C3E0 @ 8016C3E0 (47 words). Generated; not compiled or validated. */
u8 func_8016C3E0(void *arg0) {
    s32 temp_v1;
    u8 *var_v0_2;
    u8 temp_a1;
    u8 var_v0;

    temp_a1 = arg0->unk36;
    temp_v1 = arg0->unk45 - 3;
    switch (temp_a1) {                              /* irregular */
    case 0x0:
        if ((temp_v1 >= 6) || (var_v0 = 0, ((arg0 + temp_v1)->unk57 != 0))) {
            var_v0 = 0;
            if (temp_v1 < (s32) arg0->unk34) {
                var_v0_2 = arg0->unk28 + temp_v1;
block_7:
                return *var_v0_2;
            }
        }
        return var_v0;
    case 0x4D:
        var_v0 = 0xFF;
        if (temp_v1 < (s32) arg0->unk35) {
            var_v0_2 = arg0->unk2C + temp_v1;
            goto block_7;
        }
        /* Duplicate return node #12. Try simplifying control flow for better match */
        return var_v0;
    default:
        var_v0 = 0;
        if (temp_v1 < (s32) arg0->unk35) {
            var_v0 = *(arg0->unk2C + temp_v1);
        }
        /* Duplicate return node #12. Try simplifying control flow for better match */
        return var_v0;
    }
}
