/* m2c reference for func_801493A0 @ 801493A0 (41 words). Generated; not compiled or validated. */
? func_800F90BC(void *, void *);                    /* extern */

void func_801493A0(void *arg0, void *arg1) {
    if ((arg1->unk5C << 0x10) > 0xE0000) {
        arg0->unk7E4 = (s32) (arg0->unk7E4 + 1);
        arg0->unk7F0 = (s32) (arg0->unk7F0 + (s16) arg1->unk48);
    } else {
        func_800F90BC(arg0, arg1);
    }
    arg0->unk7EC = (s32) (arg0->unk7EC + (s16) arg1->unk48);
    arg0->unk7E8 = (s32) (arg0->unk7E8 + 1);
}
