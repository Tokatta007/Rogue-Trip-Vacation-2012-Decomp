/* m2c reference for func_800FECB4 @ 800FECB4 (51 words). Generated; not compiled or validated. */
? func_80124FC8(s32, void *, ? *);                  /* extern */
? func_80125050(?, ? *, s32 *);                     /* extern */
s32 func_801250C8(s32 *, ?);                        /* extern */
s16 func_8015A62C(s32, s32);                        /* extern */

void func_800FECB4(s32 *arg0, ? arg1, s32 arg2, void *arg3) {
    s32 sp10;
    s32 sp14;
    ? sp20;
    s32 var_s0;

    func_80124FC8(*arg0 + (arg2 << 5), arg3, &sp20);
    func_80125050(arg1, &sp20, &sp10);
    arg3->unkC = func_801250C8(&sp10, 0);
    var_s0 = func_801250C8(&sp10, 0);
    if (sp14 == 0) {
        sp14 = 1;
    }
    if (var_s0 == 0) {
        var_s0 = 1;
    }
    arg3->unk14 = func_8015A62C(sp10, sp14);
    arg3->unk16 = (s16) -func_8015A62C(sp18, var_s0);
}
