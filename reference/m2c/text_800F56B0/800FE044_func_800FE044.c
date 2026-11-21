/* m2c reference for func_800FE044 @ 800FE044 (15 words). Generated; not compiled or validated. */
extern ? D_801C3918;

u8 func_800FE044(s32 arg0, s32 arg1) {
    void *temp_a1;

    temp_a1 = *((arg1 * 4) + (arg0 * 8) + &D_801C3918);
    if (temp_a1 != NULL) {
        return temp_a1->unk4;
    }
    return -1U;
}
