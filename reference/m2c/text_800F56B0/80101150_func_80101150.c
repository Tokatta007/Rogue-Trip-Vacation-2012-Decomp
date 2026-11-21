/* m2c reference for func_80101150 @ 80101150 (37 words). Generated; not compiled or validated. */
? func_801011E4(s32, u32, s32, ?);                  /* extern */

void func_80101150(s32 arg0, u32 arg1, void *arg2) {
    void *temp_a2;
    void *temp_v0;
    void *temp_v0_2;

    if ((arg1 < 2U) && (arg2 != NULL)) {
        temp_a2 = arg0 + (arg1 * 4);
        temp_v0 = temp_a2->unk3A0;
        if (temp_v0 != NULL) {
            temp_v0->unk7CC = arg1;
            temp_v0->unk820 = 0;
        }
        temp_a2->unk3A0 = arg2;
        temp_v0_2 = temp_a2->unk3A0;
        temp_v0_2->unk7CC = arg1;
        temp_v0_2->unk820 = 1;
        func_801011E4(arg0, arg1, temp_a2->unk0, 0);
        (arg0 + arg1)->unk3F4 = 1;
    }
}
