/* m2c reference for func_8016FDC4 @ 8016FDC4 (56 words). Generated; not compiled or validated. */
s32 func_8016FDC4(void *arg0, void *arg1) {
    s32 var_a2;
    s32 var_a3;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v1;

    var_a3 = arg0->unk0 - arg1->unk0;
    if (var_a3 < 0) {
        var_a3 = -var_a3;
    }
    var_a2 = arg0->unk4 - arg1->unk4;
    var_v1 = arg0->unk8 - arg1->unk8;
    if (var_a2 < 0) {
        var_a2 = -var_a2;
    }
    if (var_v1 < 0) {
        var_v1 = -var_v1;
    }
    if (var_a2 < var_a3) {
        if (var_v1 < var_a3) {
            if (var_v1 < var_a2) {
                var_v0 = var_a3 + (var_a2 >> 1);
                /* Duplicate return node #10. Try simplifying control flow for better match */
                return var_v0 + (var_v1 >> 2);
            }
            var_v0_2 = var_a3 + (var_v1 >> 1);
            /* Duplicate return node #12. Try simplifying control flow for better match */
            return var_v0_2 + (var_a2 >> 2);
        }
        var_v0_2 = var_v1 + (var_a3 >> 1);
        return var_v0_2 + (var_a2 >> 2);
    }
    if (var_v1 < var_a2) {
        if (var_v1 < var_a3) {
            var_v0 = var_a2 + (var_a3 >> 1);
            return var_v0 + (var_v1 >> 2);
        }
        return var_a2 + (var_v1 >> 1) + (var_a3 >> 2);
    }
    return var_v1 + (var_a2 >> 1) + (var_a3 >> 2);
}
