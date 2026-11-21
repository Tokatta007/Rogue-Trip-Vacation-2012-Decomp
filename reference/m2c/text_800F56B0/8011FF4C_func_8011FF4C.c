/* m2c reference for func_8011FF4C @ 8011FF4C (70 words). Generated; not compiled or validated. */
? func_8011FE34(s32, s32, ?);                       /* extern */
? func_8012BCB0(s32, ?);                            /* extern */

void func_8011FF4C(s32 arg0, s32 arg1) {
    void *temp_a1;
    void *temp_v0;
    void *var_v0;

    temp_v0 = arg0 + arg1;
    temp_a1 = (arg1 * 0x8B8) + arg0 + 0xB788;
    temp_a1->unk19D = (u8) temp_v0->unk127B2;
    temp_a1->unk19F = (u8) temp_v0->unk127BA;
    temp_a1->unk1A1 = (u8) temp_v0->unk127C2;
    temp_a1->unk1A0 = (u8) temp_v0->unk127BE;
    temp_a1->unk1A2 = (u8) temp_v0->unk127C6;
    if (temp_a1->unk1A2 != 0) {
        temp_a1->unk1A3 = 1;
        var_v0 = arg0 + arg1;
    } else {
        temp_a1->unk1A3 = 0;
        var_v0 = arg0 + arg1;
    }
    if (var_v0->unk127BA != 0) {
        func_8012BCB0(arg0 + ((arg1 * 0x8B8) + 0xB788) + 0x264, -1);
    }
    if (var_v0->unk127B2 != 0) {
        func_8011FE34(arg0, arg1, 1);
    }
}
