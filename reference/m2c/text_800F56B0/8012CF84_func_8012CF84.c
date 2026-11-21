/* m2c reference for func_8012CF84 @ 8012CF84 (53 words). Generated; not compiled or validated. */
? func_80160E70();                                  /* extern */
? func_80160EB4(?);                                 /* extern */
u32 func_80161468(?, ?, ?);                         /* extern */
extern s32 D_801C37C8;
static s32 D_801C32E0 = 0;
static s32 D_801C32E4 = 0;
static s32 D_801C32EC = 0;
static s32 D_801C3304 = 0;
static s8 D_801C3308[8] = "sio:";
static s32 D_801C3310 = 0;

s32 func_8012CF84(void) {
    s8 *temp_s0;

    D_801C32EC = 0;
    func_80160E70();
    if (((func_80161468(0, 0, 0) >> 7) ^ 1) & 1) {
        func_80161468(2, 0, 0);
        func_80161468(3, 0, 0);
        func_80161468(1, 3, 0xFD200);
        func_80161468(1, 4, 4);
        temp_s0 = "sio:";
        D_801C32E4 = open(temp_s0, 2U);
        D_801C32E0 = open(temp_s0, 1U);
        D_801C3310 = 0;
        D_801C37C8 = 0;
        D_801C3304 = 0;
        return 1;
    }
    func_80160EB4(2);
    return 0;
}
