/* m2c reference for func_8015AB6C @ 8015AB6C (40 words). Generated; not compiled or validated. */
s16 func_8015A88C(void *, ?, ?, s32, s32, s32, s32); /* extern */
s16 func_8015A9D8(? *, s32, s32);                   /* extern */
extern ? D_801BA168;
extern s32 D_801BA2E8;
extern ? D_801BA2F0;
extern s16 D_801EAFE8;
extern s16 D_801EAFEA;

void func_8015AB6C(s32 arg0, s32 arg1) {
    D_801EAFEA = func_8015A9D8(&D_801BA2F0, arg0, arg1 + 0x80);
    D_801EAFE8 = func_8015A88C(&D_801BA2F0 + 0x200, 0, 0, arg0, arg1, 0x80, 0x20);
    D_801BA2E8 = 0;
    memset(&D_801BA168, 0, 0x180);
}
