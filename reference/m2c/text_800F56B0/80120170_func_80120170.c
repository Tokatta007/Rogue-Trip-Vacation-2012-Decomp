/* m2c reference for func_80120170 @ 80120170 (54 words). Generated; not compiled or validated. */
s32 func_80120170(s32 arg0, s32 arg1) {
    void *temp_a1;
    void *temp_a3;

    temp_a3 = arg0 + arg1;
    temp_a1 = (arg1 * 0x8B8) + arg0 + 0xB788;
    return (temp_a3->unk127B2 & 1) | ((temp_a3->unk127B6 & 1) * 2) | ((temp_a3->unk127BA & 1) * 4) | ((temp_a3->unk127C2 & 1) * 8) | ((temp_a3->unk127BE & 1) * 0x10) | ((temp_a3->unk127C6 & 1) << 5) | ((temp_a1->unk19E & 1) << 6) | ((temp_a1->unk1A3 & 1) << 7) | ((temp_a1->unk196 & 1) << 8) | ((temp_a1->unk197 & 1) << 9) | ((temp_a1->unk198 & 1) << 0xA);
}
