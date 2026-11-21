/* m2c reference for func_801761FC @ 801761FC (31 words). Generated; not compiled or validated. */
extern s32 D_801BC000;

void func_801761FC(s32 arg0, s32 arg1) {
    s32 sp0;
    s32 sp4;
    void *temp_a0;

    temp_a0 = (arg0 * 0x10) + D_801BC000;
    temp_a0->unkA = (u16) ((temp_a0->unkA & 0xFFC0) | arg1);
    sp4 = 1;
    sp0 = 0;
loop_2:
    if (sp0 < 2) {
        sp4 *= 0xD;
        sp0 += 1;
        goto loop_2;
    }
}
