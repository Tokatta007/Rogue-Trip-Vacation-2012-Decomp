/* m2c reference for func_80163E3C @ 80163E3C (68 words). Generated; not compiled or validated. */
void func_80163E3C(void *arg0) {
loop_2:
    if (arg0->unk0 >= 0x800) {
        arg0->unk0 = (s32) (arg0->unk0 - 0x1000);
        goto loop_2;
    }
loop_5:
    if (arg0->unk0 < -0x800) {
        arg0->unk0 = (s32) (arg0->unk0 + 0x1000);
        goto loop_5;
    }
loop_8:
    if (arg0->unk4 >= 0x800) {
        arg0->unk4 = (s32) (arg0->unk4 - 0x1000);
        goto loop_8;
    }
loop_11:
    if (arg0->unk4 < -0x800) {
        arg0->unk4 = (s32) (arg0->unk4 + 0x1000);
        goto loop_11;
    }
loop_14:
    if (arg0->unk8 >= 0x800) {
        arg0->unk8 = (s32) (arg0->unk8 - 0x1000);
        goto loop_14;
    }
loop_17:
    if (arg0->unk8 < -0x800) {
        arg0->unk8 = (s32) (arg0->unk8 + 0x1000);
        goto loop_17;
    }
}
