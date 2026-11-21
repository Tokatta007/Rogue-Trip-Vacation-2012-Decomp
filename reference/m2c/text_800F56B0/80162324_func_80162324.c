/* m2c reference for func_80162324 @ 80162324 (42 words). Generated; not compiled or validated. */
extern void *(*D_801EC9D4)();

u8 func_80162324(s32 arg1, s32 arg2) {
    void *temp_v1;
    void *temp_v1_2;

    temp_v1_2 = D_801EC9D4();
    if (arg1 < 0) {
        return temp_v1_2->unkEA;
    }
    if (arg1 < (s32) temp_v1_2->unkEA) {
        temp_v1 = temp_v1_2->unk8 + (arg1 * 8);
        if (arg2 < 0) {
            return temp_v1->unk0;
        }
        if (arg2 < (s32) temp_v1->unk0) {
            return *(temp_v1->unk4 + arg2);
        }
        /* Duplicate return node #8. Try simplifying control flow for better match */
        return 0U;
    }
    return 0U;
}
