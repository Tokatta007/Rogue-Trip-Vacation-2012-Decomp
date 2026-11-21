/* m2c reference for func_801476C0 @ 801476C0 (25 words). Generated; not compiled or validated. */
? func_800FE458(void *, ?);                         /* extern */
? func_80144EC0();                                  /* extern */

void func_801476C0(void *arg0) {
    func_80144EC0();
    arg0->unkAD = 1;
    arg0->unk154 = (u16) (arg0->unk154 - arg0->unk7D4);
    if (arg0->unk154 & 0x8000) {
        arg0->unk87 = 0;
        func_800FE458(arg0, 0);
    }
}
