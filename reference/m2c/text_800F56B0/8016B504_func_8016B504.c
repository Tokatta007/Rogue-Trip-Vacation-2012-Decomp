/* m2c reference for func_8016B504 @ 8016B504 (28 words). Generated; not compiled or validated. */
void func_8016B504(s32 arg0, s32 arg1, s32 *arg2) {
    void *temp_a3;

    temp_a3 = arg0 + (arg1 * 0xC);
    if (temp_a3->unk0 == 0) {
        if (*arg2 != -1) {
            ((*arg2 * 0xC) + arg0)->unk4 = arg1;
            temp_a3->unk8 = (s32) *arg2;
            temp_a3->unk4 = -1;
        }
        *arg2 = arg1;
        temp_a3->unk0 = 1;
    }
}
