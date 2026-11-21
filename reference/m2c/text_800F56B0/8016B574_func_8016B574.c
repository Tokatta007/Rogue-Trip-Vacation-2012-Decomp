/* m2c reference for func_8016B574 @ 8016B574 (40 words). Generated; not compiled or validated. */
void func_8016B574(s32 arg0, s32 arg1, s32 *arg2) {
    s32 temp_v1;
    void *temp_a3;

    temp_a3 = arg0 + (arg1 * 0xC);
    if (temp_a3->unk0 == 1) {
        temp_v1 = temp_a3->unk8;
        if (temp_v1 != -1) {
            ((temp_v1 * 0xC) + arg0)->unk4 = (s32) temp_a3->unk4;
        }
        if (arg1 == *arg2) {
            *arg2 = temp_a3->unk8;
        } else {
            ((temp_a3->unk4 * 0xC) + arg0)->unk8 = (s32) temp_a3->unk8;
        }
        temp_a3->unk8 = -1;
        temp_a3->unk4 = -1;
        temp_a3->unk0 = 0;
    }
}
