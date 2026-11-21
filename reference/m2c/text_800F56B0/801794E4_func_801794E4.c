/* m2c reference for func_801794E4 @ 801794E4 (25 words). Generated; not compiled or validated. */
extern ? D_801F5090;

void func_801794E4(void *arg0, s32 arg1) {
    void *temp_a1;
    void *temp_v1;

    temp_a1 = (arg1 * 0x34) + &D_801F5090;
    temp_v1 = temp_a1->unk4;
    if (temp_v1 != NULL) {
        temp_v1->unk1C = (s32) arg0->unk0;
        temp_a1->unk4->unk20 = (s32) arg0->unk4;
        temp_a1->unk4->unk24 = (s32) arg0->unk8;
    }
}
