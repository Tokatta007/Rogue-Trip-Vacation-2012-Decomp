/* m2c reference for func_80112484 @ 80112484 (80 words). Generated; not compiled or validated. */
? func_801254DC(void *, s32, s32, s32);             /* extern */
? func_80125518(? *, s16, s16, s16);                /* extern */
? func_8016F9A8(s32, ? *, void *);                  /* extern */

void func_80112484(void *arg0, void *arg1) {
    ? sp10;
    u16 sp12;
    u16 sp14;
    u32 temp_s2;

    temp_s2 = (u16) arg0->unk25A >> 1;
    if (arg0->unk254 & 0x10000) {
        func_801254DC(arg1, arg0->unk0 << 5, (arg0->unk4 << 5) + temp_s2, arg0->unk8 << 5);
        return;
    }
    func_80125518(&sp10, (s16) (arg0->unk24C << 5), (s16) (arg0->unk24E << 5), (s16) (arg0->unk250 << 5));
    if (arg0->unk254 & 0x80) {
        sp12 += temp_s2;
    } else {
        sp14 += temp_s2;
    }
    func_8016F9A8(arg0->unk8, &sp10, arg1);
    arg1->unk0 = (s32) (arg1->unk0 + (arg0->unk0->unk0 << 5));
    arg1->unk4 = (s32) (arg1->unk4 + (arg0->unk0->unk4 << 5));
    arg1->unk8 = (s32) (arg1->unk8 + (arg0->unk0->unk8 << 5));
}
