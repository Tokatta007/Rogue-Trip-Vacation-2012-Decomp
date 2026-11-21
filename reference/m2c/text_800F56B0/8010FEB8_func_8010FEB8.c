/* m2c reference for func_8010FEB8 @ 8010FEB8 (41 words). Generated; not compiled or validated. */
s32 func_80123488(s32, s32, s32);                   /* extern */
? func_80125130(s32, ? *);                          /* extern */
? func_8013FD30(void *, ?, ?, ?);                   /* extern */
static s32 D_801C34EC = 0;

void func_8010FEB8(void *arg0, void *arg1) {
    ? sp10;

    func_8013FD30((void *)3, 2, 2);
    func_8013FD30(arg1, 4, 2, 2);
    if (arg1->unk7A4 < arg0->unkCC) {
        arg1->unk86 = 1;
        arg1->unk20C = (s32) arg1->unkCC;
        func_80125130(func_80123488(D_801C34EC, arg1->unk7C8, arg0->unk7C8), &sp10);
        arg1->unk204 = sp18;
    }
}
