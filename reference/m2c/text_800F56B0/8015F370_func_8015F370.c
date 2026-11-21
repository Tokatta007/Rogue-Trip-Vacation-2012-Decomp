/* m2c reference for func_8015F370 @ 8015F370 (40 words). Generated; not compiled or validated. */
extern ? D_801BAEE0;
extern u16 *D_801BBF6C;
extern u16 *D_801BBF70;
extern s32 *D_801BBF74;

? *func_8015F370(void) {
    ? *var_v0;

    var_v0 = NULL;
    if (D_801BAEE0.unk0 != 0) {
        EnterCriticalSection();
        D_801BAEE0.unk32 = (u16) *D_801BBF70;
        D_801BAEE0.unk34 = (s32) *D_801BBF74;
        *D_801BBF70 = 0;
        *D_801BBF6C = *D_801BBF70;
        *D_801BBF74 &= 0x77777777;
        ResetEntryInt();
        var_v0 = &D_801BAEE0;
        D_801BAEE0.unk0 = 0U;
    }
    return var_v0;
}
