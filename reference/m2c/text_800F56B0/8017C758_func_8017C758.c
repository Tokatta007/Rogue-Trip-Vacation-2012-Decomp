/* m2c reference for func_8017C758 @ 8017C758 (25 words). Generated; not compiled or validated. */
extern ? D_801F3AA8;
extern s16 D_801F4B4E;

s16 func_8017C758(s16 arg0, u16 *arg1, u16 *arg2) {
    void *temp_v1;

    D_801F4B4E = arg0;
    temp_v1 = *(&D_801F3AA8 + ((arg0 & 0xFF) * 4)) + (((s32) (arg0 & 0xFF00) >> 8) * 0xB0);
    *arg1 = temp_v1->unk58;
    *arg2 = temp_v1->unk5A;
    return D_801F4B4E;
}
