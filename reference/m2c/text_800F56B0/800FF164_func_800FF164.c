/* m2c reference for func_800FF164 @ 800FF164 (42 words). Generated; not compiled or validated. */
? func_80125050(s32, s32, s32 *);                   /* extern */
s32 func_80125094(s32 *, ?);                        /* extern */
s16 func_8015A62C(s32, s32);                        /* extern */

void func_800FF164(s32 *arg0, s32 arg1, s32 arg2, void *arg3) {
    s32 sp10;
    s32 sp14;

    func_80125050(*arg0 + (arg1 << 5), *arg0 + (arg2 << 5), &sp10);
    arg3->unk10 = func_80125094(&sp10, 0);
    if (sp14 == 0) {
        sp14 = 1;
    }
    if (arg3->unk10 == 0) {
        arg3->unk10 = 1;
    }
    arg3->unk18 = func_8015A62C(sp10, sp14);
    arg3->unk1A = (s16) -func_8015A62C(sp18, arg3->unk10);
}
