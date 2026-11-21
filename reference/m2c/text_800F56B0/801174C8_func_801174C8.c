/* m2c reference for func_801174C8 @ 801174C8 (44 words). Generated; not compiled or validated. */
? func_8011D5A0(void *, ?, ?, ?, s32, s32, s32, s32, s32, s32); /* extern */
? func_8013CAE0(s32, ?, void *);                    /* extern */
? func_80164F34(s32, void *, ?, ?, s32);            /* extern */
static s32 D_801C34F4 = 0;

void func_801174C8(void *arg0, ? arg1) {
    func_80164F34(arg0->unk38->unk0, arg0->unk38 + 0x1C, arg1, 0x14, 0x50);
    func_8013CAE0(D_801C34F4, 0xF, arg0->unk38 + 0x1C);
    func_8011D5A0(arg0->unk38 + 0x1C, 0, 0x1F, 7, 0xC, 0xF, 0x49, 5, 0xC0, 6);
    arg0->unk38->unkC = 0;
}
