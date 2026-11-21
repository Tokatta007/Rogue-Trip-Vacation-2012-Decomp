/* m2c reference for func_800FE458 @ 800FE458 (29 words). Generated; not compiled or validated. */
extern ? D_801C3D08;

void func_800FE458(void *arg0, s32 arg1) {
    void *temp_v1;

    temp_v1 = *((arg0->unk78 * 4) + (((s32) arg0->unk7C0 >> 4) * 8) + &D_801C3D08);
    if (temp_v1 != NULL) {
        if (arg1 != 0) {
            temp_v1->unk3 = (u8) ((temp_v1->unk3 & 0x80) | 1);
            return;
        }
        temp_v1->unk3 = (u8) (temp_v1->unk3 & 0x80);
    }
}
