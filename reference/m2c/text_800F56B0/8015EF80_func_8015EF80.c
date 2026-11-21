/* m2c reference for func_8015EF80 @ 8015EF80 (54 words). Generated; not compiled or validated. */
? func_8015F058();                                  /* extern */
? func_8015F488(u16 *, ?);                          /* extern */
s32 func_8015F4BC();                                /* extern */
s32 func_8015F5DC();                                /* extern */
extern u16 D_801BAEE0;
extern ? D_801BAF1C;
extern void *D_801BBF68;
extern u16 *D_801BBF6C;
extern u16 *D_801BBF70;
extern s32 *D_801BBF74;

void *func_8015EF80(void) {
    void *var_v0;

    var_v0 = NULL;
    if (D_801BAEE0 == 0) {
        *D_801BBF70 = 0;
        *D_801BBF6C = *D_801BBF70;
        *D_801BBF74 = 0x33333333;
        func_8015F488(&D_801BAEE0, 0x41A);
        if (setjmp((s32 *) (&D_801BAEE0 + 0x38)) != 0) {
            func_8015F058();
        }
        D_801BAF1C.unk0 = (void *) (&D_801BAF1C + 0xFDC);
        HookEntryInt(&D_801BAF1C - 4);
        D_801BAF1C.unk-3C = 1;
        D_801BBF68->unk14 = func_8015F4BC();
        D_801BBF68->unk4 = func_8015F5DC();
        _96_remove();
        ExitCriticalSection();
        var_v0 = &D_801BAF1C - 0x3C;
    }
    return var_v0;
}
