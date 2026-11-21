/* m2c reference for func_8017173C @ 8017173C (21 words). Generated; not compiled or validated. */
void func_8017173C(void *arg0, s16 arg1) {
    void *temp_a0;

    arg0->unk3D0 = (s32) (arg0->unk3D0 + 1);
    temp_a0 = arg0 + (arg1 * 0x18);
    temp_a0->unk14 = 0;
    if (temp_a0->unk0 != -1) {
        temp_a0->unk0 = -1;
        temp_a0->unk4 = -1;
        temp_a0->unk8 = -1;
        temp_a0->unk10 = -1;
        temp_a0->unkC = -1;
    }
}
