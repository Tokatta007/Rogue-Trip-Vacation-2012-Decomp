/* m2c reference for func_80162040 @ 80162040 (22 words). Generated; not compiled or validated. */
extern s32 D_801BC110;
extern void *(*D_801EC9D4)();

s32 func_80162040(void) {
    if (D_801BC110 != 0) {
        return D_801EC9D4()->unk10->unkE8 == 8;
    }
    return 0;
}
