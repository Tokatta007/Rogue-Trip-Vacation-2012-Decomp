/* m2c reference for func_800FF4C8 @ 800FF4C8 (51 words). Generated; not compiled or validated. */
void func_800FF4C8(s32 *arg0, s32 arg1, void *arg2, s32 arg3) {
    s32 var_v0;
    void *temp_s1;

    arg2->unk0 = 0;
    arg2->unk4 = 0;
    arg2->unk8 = 0;
    temp_s1 = *arg0 + (arg1 << 5);
    if (arg3 == 0) {
        if (((s8) temp_s1->unk1C >= 2) && ((var_v0 = 0x60, ((rand() & 3) == 1)) || (var_v0 = -0x60, ((rand() & 1) != 0)))) {
            arg2->unk0 = var_v0;
            arg2->unk4 = var_v0;
        }
        if ((s8) temp_s1->unk1C == 2) {
            arg2->unk0 = (s32) ((s32) arg2->unk0 >> 1);
            arg2->unk4 = (s32) ((s32) arg2->unk4 >> 1);
        }
    }
}
