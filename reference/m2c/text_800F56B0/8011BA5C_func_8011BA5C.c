/* m2c reference for func_8011BA5C @ 8011BA5C (42 words). Generated; not compiled or validated. */
? func_8016F9A8(s32, s16 *, void *);                /* extern */

void func_8011BA5C(void *arg0, void *arg1, void *arg2) {
    s16 sp10;
    s16 sp12;
    s16 sp14;

    sp10 = (s16) (s8) arg2->unk0;
    sp12 = (s16) (s8) arg2->unk1;
    sp14 = (s16) (s8) arg2->unk2;
    func_8016F9A8(arg1 + 0x28, &sp10, arg0);
    arg0->unk0 = (s32) (arg0->unk0 + arg1->unk1C);
    arg0->unk4 = (s32) (arg0->unk4 + arg1->unk20);
    arg0->unk8 = (s32) (arg0->unk8 + arg1->unk24);
}
