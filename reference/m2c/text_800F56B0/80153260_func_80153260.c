/* m2c reference for func_80153260 @ 80153260 (31 words). Generated; not compiled or validated. */
void func_80153260(s32 arg0, s32 arg1, s32 arg2) {
    void *temp_a3;
    void *var_v1;

    if ((arg0 + arg2)->unk18B0 != 0) {
        temp_a3 = arg0 + (arg2 * 4);
        var_v1 = arg0 + arg2;
        if (temp_a3->unk18A4 != NULL) {
            temp_a3->unk18A4->unk8 = 0x80;
            temp_a3->unk18A4->unk9 = 0x80;
            temp_a3->unk18A4->unkA = 0x80;
            goto block_3;
        }
    } else {
block_3:
        var_v1 = arg0 + arg2;
    }
    var_v1->unk18B0 = 1;
    (arg0 + (arg2 * 2))->unk18AC = 0;
    var_v1->unk18B2 = 0;
    (arg0 + (arg2 * 4))->unk18A4 = arg1;
}
