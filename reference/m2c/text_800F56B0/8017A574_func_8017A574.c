/* m2c reference for func_8017A574 @ 8017A574 (43 words). Generated; not compiled or validated. */
? func_8015EE1C(?, s32);                            /* extern */
? func_8015EE7C(?);                                 /* extern */
extern ? D_801C30E4;
extern s8 D_801C30F2;

void func_8017A574(void) {
    if (D_801C30E4.unk0 == 0) {
        D_801C30E4.unkD = 0;
        if (D_801C30E4.unkE != 0x7F) {
            EnterCriticalSection();
            if (D_801C30E4.unkC != 0) {
                func_8015EE7C(0);
                D_801C30E4.unkC = 0;
            } else if (D_801C30E4.unkE == 0) {
                func_8015EE1C(0, D_801C30E4.unk8);
                D_801C30E4.unk8 = 0;
            } else {
                func_8015EE1C(6, 0);
            }
            ExitCriticalSection();
            D_801C30F2 = 0x7F;
        }
    }
}
