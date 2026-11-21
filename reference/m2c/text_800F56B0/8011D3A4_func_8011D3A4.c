/* m2c reference for func_8011D3A4 @ 8011D3A4 (16 words). Generated; not compiled or validated. */
extern ? D_801C7580;

void func_8011D3A4(s32 arg0, s8 arg1) {
    void *temp_v1;

    if (arg0 != -1) {
        temp_v1 = (arg0 * 0x58) + &D_801C7580;
        temp_v1->unk55 = arg1;
        temp_v1->unk24 = (u16) (temp_v1->unk24 | 0x80);
    }
}
