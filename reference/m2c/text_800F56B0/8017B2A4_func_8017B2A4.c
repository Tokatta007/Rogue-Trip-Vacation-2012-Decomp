/* m2c reference for func_8017B2A4 @ 8017B2A4 (38 words). Generated; not compiled or validated. */
? func_8017C84C(s16, s32);                          /* extern */
extern ? D_801F3AA8;

void func_8017B2A4(s32 arg0, s16 arg1) {
    s32 *temp_s2;
    s32 temp_a1;
    s32 temp_s0;
    void *temp_s0_2;
    void *temp_s1;

    temp_s2 = ((s32) (arg0 << 0x10) >> 0xE) + &D_801F3AA8;
    temp_s0 = arg1 * 0xB0;
    temp_a1 = arg1 << 8;
    temp_s1 = *temp_s2 + temp_s0;
    func_8017C84C((s16) (arg0 | temp_a1), temp_a1);
    temp_s1->unk14 = 0;
    temp_s0_2 = temp_s0 + *temp_s2;
    temp_s0_2->unk98 = (s32) (temp_s0_2->unk98 & ~2);
}
