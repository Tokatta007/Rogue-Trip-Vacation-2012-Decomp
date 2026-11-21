/* m2c reference for func_8011B4F0 @ 8011B4F0 (35 words). Generated; not compiled or validated. */
? func_80167DA0(void *, void *, s16);               /* extern */
extern ? D_801833E0;
extern ? D_801834D8;
static s32 D_801C32C0[3] = { 0, 1, 9 };

void func_8011B4F0(s32 arg0, void *arg1) {
    s16 temp_s0;
    void *temp_v0;

    temp_s0 = arg1->unk12 & 0xFF;
    if ((*D_801C32C0 + temp_s0) < 0xF0) {
        func_80167DA0(arg1, (*D_801C32C0 * 0xC) + &D_801834D8, temp_s0);
        temp_v0 = (arg0 * 4) + &D_801833E0;
        temp_v0->unk2 = temp_s0;
        temp_v0->unk0 = (u16) *D_801C32C0;
        *D_801C32C0 += temp_s0;
    }
}
