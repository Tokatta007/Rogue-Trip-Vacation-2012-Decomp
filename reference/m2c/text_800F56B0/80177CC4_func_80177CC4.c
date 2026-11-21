/* m2c reference for func_80177CC4 @ 80177CC4 (38 words). Generated; not compiled or validated. */
s32 func_80177CC4(void *arg0, s32 arg1, void *arg2) {
    s32 sp0;
    s32 sp4;
    s32 sp8;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;

    if (arg1 <= 0xB504) {
        temp_v0 = arg0->unk0 - arg2->unk0;
        sp0 = temp_v0;
        temp_v0_2 = arg0->unk4 - arg2->unk4;
        sp4 = temp_v0_2;
        temp_v0_3 = arg0->unk8 - arg2->unk8;
        sp8 = temp_v0_3;
        temp_v0_4 = (temp_v0 * temp_v0) + (temp_v0_2 * temp_v0_2) + (temp_v0_3 * temp_v0_3);
        if ((temp_v0_4 < 0) || (temp_v0_4 >= (arg1 * arg1))) {
            return 0;
        }
        /* Duplicate return node #5. Try simplifying control flow for better match */
        return 1;
    }
    return 1;
}
