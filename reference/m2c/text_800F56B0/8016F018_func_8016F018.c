/* m2c reference for func_8016F018 @ 8016F018 (19 words). Generated; not compiled or validated. */
extern ? D_801F37C8;

void func_8016F018(s32 arg0, s16 arg1, s16 arg2, s16 arg3) {
    void *temp_v1;

    if (arg0 < 5) {
        temp_v1 = (arg0 * 0x70) + &D_801F37C8;
        temp_v1->unk0 = (s32) arg1;
        temp_v1->unk4 = (s32) arg2;
        temp_v1->unk8 = (s32) arg3;
    }
}
