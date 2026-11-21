/* m2c reference for func_8011397C @ 8011397C (228 words). Generated; not compiled or validated. */
? func_8016FD98(void *, void *, ?);                 /* extern */

void func_8011397C(void *arg0, void *arg1, s32 arg2) {
    arg1->unk0 = (u16) ((s32) arg0->unk0 >> 5);
    arg1->unk2 = (u16) ((s32) arg0->unk4 >> 5);
    arg1->unk4 = (u16) ((s32) arg0->unk8 >> 5);
    arg1->unk18 = (u16) ((s32) (arg0->unk10 << 0x10) >> 0x15);
    arg1->unk1A = (u16) ((s32) (arg0->unk12 << 0x10) >> 0x15);
    arg1->unk1C = (u16) ((s32) (arg0->unk14 << 0x10) >> 0x15);
    arg1->unk20 = (u16) ((s32) (arg0->unk18 << 0x10) >> 0x15);
    arg1->unk22 = (u16) ((s32) (arg0->unk1A << 0x10) >> 0x15);
    arg1->unk24 = (u16) ((s32) (arg0->unk1C << 0x10) >> 0x15);
    if (arg2 & 0x300) {
        if (arg2 & 0x100) {
            arg1->unk8 = (u16) (arg1->unk0 - ((s32) (arg1->unk20 << 0x10) >> 0x12));
            arg1->unkA = (u16) (arg1->unk2 - ((s32) (arg1->unk22 << 0x10) >> 0x12));
            arg1->unkC = (u16) (arg1->unk4 - ((s32) (arg1->unk24 << 0x10) >> 0x12));
            arg1->unk10 = (u16) (arg1->unk0 - ((s32) (arg1->unk18 << 0x10) >> 0x12));
            arg1->unk12 = (u16) (arg1->unk2 - ((s32) (arg1->unk1A << 0x10) >> 0x12));
            arg1->unk14 = (u16) (arg1->unk4 - ((s32) (arg1->unk1C << 0x10) >> 0x12));
        } else {
            arg1->unk8 = (u16) (arg1->unk0 - arg1->unk20);
            arg1->unkA = (u16) (arg1->unk2 - arg1->unk22);
            arg1->unkC = (u16) (arg1->unk4 - arg1->unk24);
            arg1->unk10 = (u16) (arg1->unk0 - arg1->unk18);
            arg1->unk12 = (u16) (arg1->unk2 - arg1->unk1A);
            arg1->unk14 = (u16) (arg1->unk4 - arg1->unk1C);
        }
        arg1->unk28 = (s16) (arg1->unk8 + arg1->unk18);
        arg1->unk2A = (s16) (arg1->unkA + arg1->unk1A);
        arg1->unk2C = (s16) (arg1->unkC + arg1->unk1C);
        arg1->unk30 = (s16) (arg1->unk10 + arg1->unk20);
        arg1->unk32 = (s16) (arg1->unk12 + arg1->unk22);
        arg1->unk34 = (s16) (arg1->unk14 + arg1->unk24);
        arg1->unk18 = (u16) (arg1->unk18 + arg1->unk0);
        arg1->unk1A = (u16) (arg1->unk1A + arg1->unk2);
        arg1->unk1C = (u16) (arg1->unk1C + arg1->unk4);
        arg1->unk20 = (u16) (arg1->unk20 + arg1->unk0);
        arg1->unk22 = (u16) (arg1->unk22 + arg1->unk2);
        arg1->unk24 = (u16) (arg1->unk24 + arg1->unk4);
        return;
    }
    func_8016FD98(arg1 + 8, arg1, 2);
    func_8016FD98(arg1 + 0x10, arg1, 2);
    arg1->unk18 = (u16) (arg1->unk0 + arg1->unk18);
    arg1->unk1A = (u16) (arg1->unk2 + arg1->unk1A);
    arg1->unk1C = (u16) (arg1->unk4 + arg1->unk1C);
    arg1->unk20 = (u16) (arg1->unk0 + arg1->unk20);
    arg1->unk22 = (u16) (arg1->unk2 + arg1->unk22);
    arg1->unk24 = (u16) (arg1->unk4 + arg1->unk24);
    func_8016FD98(arg1 + 0x28, arg1 + 0x18, 2);
    func_8016FD98(arg1 + 0x30, arg1 + 0x20, 2);
}
