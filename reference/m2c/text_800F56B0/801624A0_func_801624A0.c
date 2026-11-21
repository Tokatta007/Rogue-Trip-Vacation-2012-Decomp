/* m2c reference for func_801624A0 @ 801624A0 (70 words). Generated; not compiled or validated. */
extern s32 D_801BC0F8;
extern s32 D_801BC0FC;
extern s32 D_801BC114;
extern s32 D_801BC118;
extern s32 D_801EC9C0;
extern s32 D_801EC9C4;
extern ? (*D_801EC9F0)(s32);

s32 func_801624A0(s32 arg0) {
    s32 temp_s1;

    temp_s1 = (D_801BC118 * 2) | (D_801BC114 == 0);
    if (temp_s1 != arg0) {
        D_801BC0FC = 0;
        if (arg0 & 1) {
            D_801BC114 = 0;
            if (D_801EC9C0 >= 0x96) {
                D_801EC9F0(D_801BC0F8);
            }
            D_801EC9C0 = 0;
        } else {
            D_801BC114 = 1;
        }
        if (arg0 & 2) {
            D_801BC118 = 1;
            if (D_801EC9C4 >= 0x96) {
                D_801EC9F0(D_801BC0F8 + 0xF0);
            }
            D_801EC9C4 = 0;
        } else {
            D_801BC118 = 0;
        }
        D_801BC0FC = 1;
    }
    return temp_s1;
}
