/* m2c reference for func_8012D130 @ 8012D130 (31 words). Generated; not compiled or validated. */
? func_80160EB4();                                  /* extern */
? func_80161468(?, ?, ?);                           /* extern */
s32 func_801788E4();                                /* extern */
static s32 D_801C32E0 = 0;
static s32 D_801C32E4 = 0;
static s32 D_801C32E8 = 0;
static s32 D_801C32EC = 0;
static s32 D_801C32F0 = 0;

void func_8012D130(void) {
    D_801C32EC = 0;
    D_801C32E8 = 0;
    D_801C32F0 = func_801788E4();
    func_80161468(4, 0, 0);
    if (D_801C32E4 != 0) {
        close(D_801C32E4);
        D_801C32E4 = 0;
    }
    if (D_801C32E0 != 0) {
        close(D_801C32E0);
        D_801C32E0 = 0;
    }
    func_80160EB4();
}
