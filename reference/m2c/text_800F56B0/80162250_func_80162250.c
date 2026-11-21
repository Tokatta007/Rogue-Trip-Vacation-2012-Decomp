/* m2c reference for func_80162250 @ 80162250 (53 words). Generated; not compiled or validated. */
extern void *(*D_801EC9D4)();

u8 func_80162250(s32 arg1, s32 arg2) {
    void *temp_v1;
    void *temp_v1_2;

    temp_v1_2 = D_801EC9D4();
    if (arg1 < 0) {
        return temp_v1_2->unkE9;
    }
    if (arg1 < (s32) temp_v1_2->unkE9) {
        temp_v1 = temp_v1_2->unk4 + (arg1 * 5);
        switch (arg2) {
        case 1:
            return temp_v1->unk0;
        case 2:
            return temp_v1->unk1;
        case 3:
            return temp_v1->unk2;
        case 4:
            return temp_v1->unk3;
        case 5:
            return temp_v1->unk4;
        }
    } else {
    default:
        return 0U;
    }
}
