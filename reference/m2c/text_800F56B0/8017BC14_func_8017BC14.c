/* m2c reference for func_8017BC14 @ 8017BC14 (24 words). Generated; not compiled or validated. */
extern ? D_801F3AA8;

void func_8017BC14(s32 arg0, s16 arg1) {
    s32 *temp_a0;
    s32 temp_v0;
    void *temp_v0_2;

    temp_a0 = ((s32) (arg0 << 0x10) >> 0xE) + &D_801F3AA8;
    temp_v0 = arg1 * 0xB0;
    (*temp_a0 + temp_v0)->unk14 = 1;
    temp_v0_2 = temp_v0 + *temp_a0;
    temp_v0_2->unk98 = (s32) (temp_v0_2->unk98 & ~8);
}
