/* m2c reference for func_8016EFC0 @ 8016EFC0 (22 words). Generated; not compiled or validated. */
extern ? D_801F37C8;

void func_8016EFC0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    void *temp_v1;

    if ((arg0 < 5) && (arg1 < 3)) {
        temp_v1 = (arg1 * 2) + (arg0 * 0x70) + &D_801F37C8;
        temp_v1->unkC = (s16) (arg2 * 0x10);
        temp_v1->unk12 = (s16) (arg3 * 0x10);
        temp_v1->unk18 = (s16) (arg4 * 0x10);
    }
}
