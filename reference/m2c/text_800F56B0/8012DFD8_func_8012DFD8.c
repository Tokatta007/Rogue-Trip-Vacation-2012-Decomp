/* m2c reference for func_8012DFD8 @ 8012DFD8 (42 words). Generated; not compiled or validated. */
void func_8012DFD8(void *arg0) {
    s32 sp0;
    s32 temp_v0;

    sp0 = 0x800000;
    if (arg0->unk2C == 0) {
        do {
            temp_v0 = sp0 - 1;
            sp0 = temp_v0;
            if (temp_v0 == 0) {
                arg0->unk2C = 1;
                arg0->unk20 = (s32) (arg0->unk20 == 0);
                arg0->unk24 = (u16) (arg0 + (arg0->unk20 * 8))->unk10;
                arg0->unk26 = (u16) (arg0 + (arg0->unk20 * 8))->unk12;
            }
        } while (arg0->unk2C == 0);
    }
    arg0->unk2C = 0;
}
