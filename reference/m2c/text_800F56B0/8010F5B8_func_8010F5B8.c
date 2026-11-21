/* m2c reference for func_8010F5B8 @ 8010F5B8 (66 words). Generated; not compiled or validated. */
? func_8010F7A4(s32 *, s32 *, s32, s32);            /* extern */

void func_8010F5B8(s32 *arg0, s32 arg1, s32 arg2) {
    s32 sp10;
    s32 temp_lo;
    s32 temp_lo_2;
    s32 temp_lo_3;
    s32 temp_s2;
    void *temp_s1;

    temp_s1 = arg0 + ((arg1 << 5) + 0x2C8);
    temp_s2 = temp_s1->unk10 + arg2;
    temp_lo = -temp_s1->unk4 * temp_s2;
    sp10 = temp_lo >> 0xC;
    func_8010F7A4(&sp10, arg0 + 0x46C, temp_lo);
    arg0->unk1E4 = (s32) (arg0->unk1E4 + sp10);
    temp_lo_2 = -temp_s1->unk8 * temp_s2;
    sp10 = temp_lo_2 >> 0xC;
    func_8010F7A4(arg0, &sp10, (s32) (arg0 + 0x470), temp_lo_2);
    arg0->unk1E8 = (s32) (arg0->unk1E8 + sp10);
    temp_lo_3 = -temp_s1->unkC * temp_s2;
    sp10 = temp_lo_3 >> 0xC;
    func_8010F7A4(arg0, &sp10, (s32) (arg0 + 0x474), temp_lo_3);
    arg0->unk1EC = (s32) (arg0->unk1EC + sp10);
}
