/* m2c reference for func_8015F410 @ 8015F410 (30 words). Generated; not compiled or validated. */
extern ? D_801BAEE0;
extern u16 *D_801BBF70;
extern s32 *D_801BBF74;

? *func_8015F410(void) {
    if (D_801BAEE0.unk0 == 0) {
        HookEntryInt(&D_801BAEE0 + 0x38);
        D_801BAEE0.unk0 = 1U;
        *D_801BBF70 = D_801BAEE0.unk32;
        *D_801BBF74 = D_801BAEE0.unk34;
        ExitCriticalSection();
        return &D_801BAEE0;
    }
    return NULL;
}
