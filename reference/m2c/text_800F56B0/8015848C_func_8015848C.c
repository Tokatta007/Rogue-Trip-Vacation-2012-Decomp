/* m2c reference for func_8015848C @ 8015848C (33 words). Generated; not compiled or validated. */
? func_801555E4(? *);                               /* extern */
? func_801555F8(?, s8 *, ?);                        /* extern */
? func_80155A14(? *);                               /* extern */
extern s32 D_801E47A8;
extern ? func_80158510;
extern ? func_8015859C;

void func_8015848C(s8 arg0) {
    s8 sp10;

    sp10 = arg0;
    func_801555F8(0xE, &sp10, 0);
    if (arg0 & 0x100) {
        if (arg0 & 0x20) {
            D_801E47A8 = 0;
        } else {
            D_801E47A8 = 1;
        }
        func_80155A14(&func_8015859C);
        func_801555E4(&func_80158510);
    }
    func_801555F8(0x1B, NULL, 0);
}
