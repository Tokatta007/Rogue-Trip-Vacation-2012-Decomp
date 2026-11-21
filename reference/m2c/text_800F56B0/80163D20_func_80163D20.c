/* m2c reference for func_80163D20 @ 80163D20 (34 words). Generated; not compiled or validated. */
extern ? D_801ECA18;
static s32 D_801C3614 = 0;

void *func_80163D20(s32 arg0, s32 arg1) {
    ? *var_v1;
    s32 temp_a0;
    s32 var_a2;

    var_a2 = 0;
    if (D_801C3614 >= 0) {
        var_v1 = &D_801ECA18;
loop_2:
        if ((var_v1->unk0 != arg0) || (var_v1->unk2 != arg1)) {
            var_a2 += 1;
            var_v1 += 0x14;
            if (D_801C3614 < var_a2) {
                goto block_6;
            }
            goto loop_2;
        }
        /* Duplicate return node #7. Try simplifying control flow for better match */
        return NULL;
    }
block_6:
    temp_a0 = D_801C3614 + 1;
    D_801C3614 = temp_a0;
    if (temp_a0 >= 0xF) {
        return NULL;
    }
    return (temp_a0 * 0x14) + &D_801ECA18;
}
