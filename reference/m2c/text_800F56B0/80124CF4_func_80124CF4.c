/* m2c reference for func_80124CF4 @ 80124CF4 (46 words). Generated; not compiled or validated. */
void func_80124CF4(void *arg0, void *arg1, s32 arg2, s32 arg3, s32 arg4) {
    arg0->unk0 = (s32) ((arg1->unk0 + (rand() & ((arg2 * 2) + 1))) - arg2);
    arg0->unk4 = (s32) ((arg1->unk4 + (rand() & ((arg3 * 2) + 1))) - arg3);
    arg0->unk8 = (s32) ((arg1->unk8 + (rand() & ((arg4 * 2) + 1))) - arg4);
}
