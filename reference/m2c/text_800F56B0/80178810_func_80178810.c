/* m2c reference for func_80178810 @ 80178810 (36 words). Generated; not compiled or validated. */
s32 func_80178AB0();                                /* extern */
? func_80178B40(?, ?, ?);                           /* extern */
? func_80178C14(?);                                 /* extern */
extern s32 D_801C2DE0;
extern s32 D_801C2DF0;
extern s32 D_801F5088;
extern s32 D_801F508C;

void func_80178810(void) {
    D_801C2DF0 = 0;
    EnterCriticalSection();
    D_801F5088 = OpenEvent(0xF2000002U, 2, 0x1000, func_80178AB0);
    ExitCriticalSection();
    EnableEvent(D_801F5088);
    func_80178B40(0xF2000002, 0xFFFF, 0x1000);
    func_80178C14(0xF2000002);
    D_801C2DE0 = 0;
    D_801F508C = 0x3C;
}
