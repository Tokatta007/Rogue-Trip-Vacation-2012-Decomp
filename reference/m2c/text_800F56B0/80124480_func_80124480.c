/* m2c reference for func_80124480 @ 80124480 (31 words). Generated; not compiled or validated. */
void func_80124480(s32 arg0, s32 arg1, void *arg2) {
    void *temp_v1;

    arg2->unk0 = 0x3E80;
    arg2->unk4 = 0x3E80;
    arg2->unk8 = 0xC80;
    temp_v1 = (arg1 * 0x8B8) + arg0 + 0xB788;
    if (temp_v1->unk1E4 > 0) {
        arg2->unk0 = (s32) -arg2->unk0;
    }
    if (temp_v1->unk1E8 > 0) {
        arg2->unk4 = (s32) -arg2->unk4;
    }
}
