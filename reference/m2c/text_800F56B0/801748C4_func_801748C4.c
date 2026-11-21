/* m2c reference for func_801748C4 @ 801748C4 (28 words). Generated; not compiled or validated. */
? func_8017495C(? *);                               /* extern */
extern s32 D_801C2660;
extern s32 D_801C2AC8;
extern ? func_80160450;

void func_801748C4(void) {
    s32 temp_v0;

    if (D_801C2AC8 == 0) {
        D_801C2AC8 = 1;
        EnterCriticalSection();
        func_8017495C(&func_80160450);
        temp_v0 = OpenEvent(0xF0000009U, 0x20, 0x2000, NULL);
        D_801C2660 = temp_v0;
        EnableEvent(temp_v0);
        ExitCriticalSection();
    }
}
