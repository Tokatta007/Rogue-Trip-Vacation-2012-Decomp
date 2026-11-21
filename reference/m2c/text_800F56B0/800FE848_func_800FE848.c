/* m2c reference for func_800FE848 @ 800FE848 (41 words). Generated; not compiled or validated. */
extern ? D_801C3BE8;
extern ? D_801C3C78;
extern ? D_801C3D08;

void func_800FE848(void *arg0) {
    void *temp_v1;
    void *temp_v1_2;

    (*((arg0->unk78 * 4) + (((s32) arg0->unk7C0 >> 4) * 8) + &D_801C3C78))->unk4 = 0;
    temp_v1 = *((arg0->unk78 * 4) + (((s32) arg0->unk7C0 >> 4) * 8) + &D_801C3BE8);
    temp_v1->unk3 = (u8) (temp_v1->unk3 & 0x80);
    temp_v1_2 = *((arg0->unk78 * 4) + (((s32) arg0->unk7C0 >> 4) * 8) + &D_801C3D08);
    temp_v1_2->unk3 = (u8) (temp_v1_2->unk3 & 0x80);
}
