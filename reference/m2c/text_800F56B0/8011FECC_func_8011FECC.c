/* m2c reference for func_8011FECC @ 8011FECC (32 words). Generated; not compiled or validated. */
? func_8011FE34(?);                                 /* extern */
? func_8012BCB0(s32, ?, s32);                       /* extern */

void func_8011FECC(s32 arg0, s32 arg1) {
    void *temp_v0;

    temp_v0 = arg0 + arg1;
    if (temp_v0->unk127B2 != 0) {
        func_8011FE34(1);
        return;
    }
    if (temp_v0->unk127BA != 0) {
        func_8012BCB0(arg0 + ((arg1 * 0x8B8) + 0xB788) + 0x264, -1, arg0);
    }
}
