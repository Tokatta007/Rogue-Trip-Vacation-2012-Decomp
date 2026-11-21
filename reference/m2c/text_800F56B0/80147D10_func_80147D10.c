/* m2c reference for func_80147D10 @ 80147D10 (48 words). Generated; not compiled or validated. */
void func_80147D10(void *arg0) {
    s32 temp_v1;

    temp_v1 = (arg0->unk758 * (s16) arg0->unk15C) / 100;
    arg0->unk768 = (s32) (temp_v1 * 4);
    arg0->unk76C = (s32) (temp_v1 * 8);
    arg0->unk770 = (s32) ((temp_v1 * 0x3C0) / 100);
    arg0->unk774 = (s32) ((temp_v1 * 0x410) / 100);
    arg0->unk778 = (s32) ((temp_v1 * 0x5A0) / 100);
}
