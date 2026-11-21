/* m2c reference for func_80153CA0 @ 80153CA0 (74 words). Generated; not compiled or validated. */
? func_8011BC6C(void *, ?, ?, ?, s32, s32);         /* extern */
? func_80164274(void *, s32);                       /* extern */
static void *D_801C34EC = NULL;

void func_80153CA0(void *arg0, s32 arg1) {
    void *temp_a0;
    void *temp_v1;

    if (arg0->unk173C->unkC != 0) {
        temp_a0 = arg0->unk173C;
        temp_a0->unk24 = (s32) (temp_a0->unk24 + arg0->unk1744);
        if (arg0->unk1740 < arg0->unk173C->unk24) {
            temp_v1 = arg0 + (arg1 * 8);
            if (temp_v1->unk165C != 0) {
                func_80164274(arg0->unk173C, temp_v1->unk165C);
            }
            arg0->unk1744 = -0x18;
            func_8011BC6C(arg0->unk173C + 0x1C, 0, 5, 0xE, 0, 0);
            func_8011BC6C(arg0->unk173C + 0x1C, 0, 9, 0xE, 0, 0);
        }
        if ((arg0->unk1740 - arg0->unk173C->unk24) >= 0x71) {
            arg0->unk173C->unkC = 0U;
            D_801C34EC->unk12408->unk210 = 0x400;
        }
    }
}
