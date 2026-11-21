/* m2c reference for func_801479F0 @ 801479F0 (31 words). Generated; not compiled or validated. */
? func_801446AC(s16);                               /* extern */

void func_801479F0(void *arg0, s32 arg1) {
    if ((arg1 & 0xFF) || (arg0->unk1A2 != 0)) {
        arg0->unk15C = (u16) arg0->unk15E;
        arg0->unk1A2 = 0x21U;
        arg0->unk1A3 = 1;
    } else {
        arg0->unk15C = (u16) arg0->unk15E;
        arg0->unk1A2 = 0U;
        arg0->unk1A3 = 0;
    }
    func_801446AC((s16) arg0->unk15E);
}
