/* m2c reference for func_80131AC4 @ 80131AC4 (28 words). Generated; not compiled or validated. */
? func_80131A7C();                                  /* extern */
? func_80131B40(?, ?, ?, ?);                        /* extern */
extern s32 *D_801C37F0;
extern s32 D_801C3800;
static s32 D_801C335C = 0;

void func_80131AC4(void) {
    s32 *var_v1;
    s32 var_a0;

    func_80131A7C();
    var_a0 = 0;
    var_v1 = D_801C37F0;
    do {
        *var_v1 = 0;
        var_a0 += 1;
        var_v1 += 4;
    } while (var_a0 < 0x4000);
    D_801C335C = 1;
    func_80131B40(0, 0, 0x280, 0x100);
    func_80131B40(0x3C0, 0x100, 0x40, 0x40);
    D_801C3800 = 0;
}
