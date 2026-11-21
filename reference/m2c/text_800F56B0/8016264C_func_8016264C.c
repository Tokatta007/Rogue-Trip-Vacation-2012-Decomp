/* m2c reference for func_8016264C @ 8016264C (103 words). Generated; not compiled or validated. */
? func_8016290C();                                  /* extern */
? func_80162A8C(s32);                               /* extern */
extern s32 D_801BC0F8;
extern s32 D_801BC0FC;
extern s32 D_801BC100;
extern s32 D_801BC104;
extern s32 D_801BC10C;
extern s32 D_801BC114;
extern s32 D_801BC118;
extern s32 D_801BC124;
extern s32 D_801EC9C0;
extern s32 D_801EC9C4;
extern ? (*D_801EC9D8)(s32 *);
extern ? (*D_801EC9DC)(s32);
extern ? (*D_801EC9E0)();

s32 func_8016264C(s32 *arg0) {
    s32 *var_a0;

    var_a0 = arg0;
    D_801BC124 = 1;
    if (D_801BC114 != 0) {
        var_a0 = &D_801EC9C0;
        if (D_801EC9C0 < 0x96) {
            D_801EC9C0 += 1;
        }
    }
    if (D_801BC118 == 0) {
        var_a0 = &D_801EC9C4;
        if (D_801EC9C4 < 0x96) {
            D_801EC9C4 += 1;
        }
    }
    if (D_801BC100 != 0) {
        D_801EC9D8(var_a0);
        D_801EC9E0();
    }
    if ((D_801BC0FC != 0) && (D_801BC118 >= D_801BC114)) {
        func_8016290C();
        D_801BC10C = 0;
        if (D_801BC114 == 0) {
            D_801EC9DC(D_801BC0F8);
        }
        if (D_801BC118 != 0) {
            D_801EC9DC(D_801BC0F8 + 0xF0);
        }
loop_15:
        if (D_801BC118 >= D_801BC104) {
            func_80162A8C(D_801BC0F8 + (D_801BC104 * 0xF0));
            goto loop_15;
        }
    }
    return 0;
}
