/* m2c reference for func_80179314 @ 80179314 (18 words). Generated; not compiled or validated. */
extern ? D_801C38F8;

void func_80179314(void *arg0, s32 arg1) {
    void **temp_a1;

    temp_a1 = (arg1 * 4) + &D_801C38F8;
    (*temp_a1)->unk14 = (u16) arg0->unk0;
    (*temp_a1)->unk16 = (u16) arg0->unk2;
    (*temp_a1)->unk18 = (u16) arg0->unk4;
}
