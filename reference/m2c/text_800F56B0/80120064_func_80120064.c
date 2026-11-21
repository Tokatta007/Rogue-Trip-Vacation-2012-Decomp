/* m2c reference for func_80120064 @ 80120064 (67 words). Generated; not compiled or validated. */
? func_8011FF4C(s8);                                /* extern */
? func_8012BFD0(s32);                               /* extern */

void func_80120064(s32 arg0, s32 arg1, u32 arg2) {
    s32 temp_s1;
    s8 temp_a2;
    void *temp_s0;
    void *temp_v1;

    temp_s0 = arg0 + arg1;
    temp_s0->unk127B2 = (s8) (arg2 & 1);
    temp_s0->unk127B6 = (s8) ((arg2 >> 1) & 1);
    temp_s0->unk127BA = (u8) ((arg2 >> 2) & 1);
    temp_s0->unk127C2 = (s8) ((arg2 >> 3) & 1);
    temp_s0->unk127BE = (s8) ((arg2 >> 4) & 1);
    temp_s0->unk127C6 = (s8) ((arg2 >> 5) & 1);
    temp_s1 = arg1 * 0x8B8;
    temp_v1 = temp_s1 + arg0 + 0xB788;
    temp_v1->unk19E = (s8) ((arg2 >> 6) & 1);
    temp_v1->unk1A3 = (s8) ((arg2 >> 7) & 1);
    temp_v1->unk196 = (s8) ((arg2 >> 8) & 1);
    temp_a2 = (arg2 >> 0xA) & 1;
    temp_v1->unk197 = (s8) ((arg2 >> 9) & 1);
    temp_v1->unk198 = temp_a2;
    func_8011FF4C(temp_a2);
    if (temp_s0->unk127BA == 0) {
        func_8012BFD0(arg0 + (temp_s1 + 0xB788) + 0x264);
    }
}
