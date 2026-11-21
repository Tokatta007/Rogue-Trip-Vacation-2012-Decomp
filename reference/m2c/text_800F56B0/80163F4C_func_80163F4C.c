/* m2c reference for func_80163F4C @ 80163F4C (80 words). Generated; not compiled or validated. */
void func_80163F4C(void *arg0) {
loop_2:
    if ((s16) arg0->unk0 >= 0x800) {
        arg0->unk0 = (u16) (arg0->unk0 - 0x1000);
        goto loop_2;
    }
loop_5:
    if ((s16) arg0->unk0 < -0x800) {
        arg0->unk0 = (u16) (arg0->unk0 + 0x1000);
        goto loop_5;
    }
loop_8:
    if ((s16) arg0->unk2 >= 0x800) {
        arg0->unk2 = (u16) (arg0->unk2 - 0x1000);
        goto loop_8;
    }
loop_11:
    if ((s16) arg0->unk2 < -0x800) {
        arg0->unk2 = (u16) (arg0->unk2 + 0x1000);
        goto loop_11;
    }
loop_14:
    if ((s16) arg0->unk4 >= 0x800) {
        arg0->unk4 = (u16) (arg0->unk4 - 0x1000);
        goto loop_14;
    }
loop_17:
    if ((s16) arg0->unk4 < -0x800) {
        arg0->unk4 = (u16) (arg0->unk4 + 0x1000);
        goto loop_17;
    }
}
