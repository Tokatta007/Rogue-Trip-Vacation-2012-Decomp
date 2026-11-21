/* m2c reference for func_8011FE34 @ 8011FE34 (38 words). Generated; not compiled or validated. */
? func_8012BCB0(void *, ?);                         /* extern */
? func_8012BFD0(void *);                            /* extern */

void func_8011FE34(s32 arg0, s32 arg1, s8 arg2) {
    void *temp_s0;
    void *temp_v0;

    temp_v0 = arg0 + arg1;
    temp_v0->unk127B2 = arg2;
    temp_v0->unk127B6 = arg2;
    temp_v0->unk127BA = arg2;
    temp_v0->unk127C2 = arg2;
    temp_s0 = arg0 + ((arg1 * 0x8B8) + 0xB788);
    temp_s0->unk19D = arg2;
    temp_s0->unk19E = (s8) (arg2 == 0);
    temp_s0->unk19F = arg2;
    temp_s0->unk1A1 = arg2;
    temp_s0->unk2A2 = arg2;
    if (arg2 != 0) {
        func_8012BCB0(temp_s0 + 0x264, -1);
        temp_s0->unk2A4 = 2;
        return;
    }
    func_8012BFD0(temp_s0 + 0x264);
}
