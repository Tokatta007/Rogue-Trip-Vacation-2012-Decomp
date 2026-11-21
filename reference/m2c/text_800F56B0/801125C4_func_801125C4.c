/* m2c reference for func_801125C4 @ 801125C4 (127 words). Generated; not compiled or validated. */
? func_801254DC(s32 *, s16, s16, s16);              /* extern */
? func_80125518(s16 *, s32, s16, s16);              /* extern */
? func_8016F9A8(s32, s16 *, s32 *);                 /* extern */

void func_801125C4(void *arg0, s32 arg1, s32 arg2) {
    s16 sp10;
    u16 sp12;
    u16 sp14;
    s32 sp18;
    u16 temp_v0;
    void *temp_s0;

    if ((arg2 << 0x10) != 0) {
        sp18 = (s32) arg0->unk25A;
    } else {
        sp18 = -(s32) arg0->unk25A;
    }
    func_80125518(&sp10, (s32) (sp18 << 0xF) >> 0x10, 0, (s16) ((s32) arg0->unk25A * -1));
    if (arg0->unk254 & 0x80) {
        temp_v0 = sp14;
        sp14 = 0;
        sp12 = temp_v0;
    }
    if (arg0->unk254 & 0x10000) {
        func_80125518(arg1 + (((s32) (arg2 << 0x10) >> 0xD) + 0x10), (s32) sp10, (s16) sp12, (s16) sp14);
        func_801254DC(&sp18, sp10, (s16) sp12, (s16) sp14);
    } else {
        func_8016F9A8(arg0->unk8, &sp10, &sp18);
        func_80125518(arg1 + (((s32) (arg2 << 0x10) >> 0xD) + 0x10), (s32) (s16) sp18, sp1C, sp20);
    }
    if (arg0->unk254 & 0x10) {
        func_80125518(arg1 + (((s32) (arg2 << 0x10) >> 0xD) + 0x20), (s32) ((sp18 << arg0->unk263) << 0xC) >> 0x10, (s16) ((s32) (((s32) sp1C << arg0->unk263) << 0xC) >> 0x10), (s16) ((s32) (((s32) sp20 << arg0->unk263) << 0xC) >> 0x10));
    }
    if (arg0->unk254 & 4) {
        temp_s0 = arg1 + ((s32) (arg2 << 0x10) >> 0xD);
        temp_s0->unk20 = (u16) ((temp_s0->unk20 + 0x7F) - ((rand() & 0x7F) * 2));
        temp_s0->unk22 = (u16) ((temp_s0->unk22 + 0x7F) - ((rand() & 0x7F) * 2));
        temp_s0->unk24 = (u16) ((temp_s0->unk24 + 0x7F) - ((rand() & 0x7F) * 2));
    }
}
