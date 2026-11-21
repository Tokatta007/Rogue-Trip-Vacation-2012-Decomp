/* m2c reference for func_80163DA8 @ 80163DA8 (23 words). Generated; not compiled or validated. */
extern ? D_801ECA18;
static s32 D_801C3614 = 0;

? *func_80163DA8(s32 arg0, s32 arg1) {
    ? *var_v1;
    s32 var_a2;

    var_a2 = 0;
    if (D_801C3614 >= 0) {
        var_v1 = &D_801ECA18;
loop_2:
        if (var_v1->unk0 == arg0) {
            var_a2 += 1;
            if (var_v1->unk2 == arg1) {
                return var_v1;
            }
            goto block_6;
        }
        var_a2 += 1;
block_6:
        var_v1 += 0x14;
        if (D_801C3614 < var_a2) {
            /* Duplicate return node #7. Try simplifying control flow for better match */
            return NULL;
        }
        goto loop_2;
    }
    return NULL;
}
