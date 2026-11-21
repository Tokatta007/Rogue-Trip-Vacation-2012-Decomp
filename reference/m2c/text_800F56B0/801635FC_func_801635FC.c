/* m2c reference for func_801635FC @ 801635FC (27 words). Generated; not compiled or validated. */
extern ? (*D_801EC9F0)(void *);

s32 func_801635FC(void *arg0) {
    if (arg0->unk53 != 0) {
        if (arg0->unk46 == 2) {
            return 1;
        }
        arg0->unk46 = 0xFEU;
        goto block_5;
    }
    D_801EC9F0(arg0);
    arg0->unk46 = 0U;
block_5:
    return 0;
}
