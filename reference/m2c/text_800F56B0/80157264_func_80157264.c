/* m2c reference for func_80157264 @ 80157264 (54 words). Generated; not compiled or validated. */
s32 func_80155BDC();                                /* extern */
extern ? (*D_801B49F0)(u8, ? *);
extern ? (*D_801B49F4)(u8, ? *);
extern u8 *D_801B4CB8;
extern u8 D_801B4CD1;
extern ? D_801E4778;
extern ? D_801E4780;

void func_80157264(void) {
    s32 temp_v0;
    s32 var_v0;
    u8 temp_s2;

    temp_s2 = *D_801B4CB8 & 3;
loop_1:
    temp_v0 = func_80155BDC();
    if (temp_v0 != 0) {
        var_v0 = temp_v0 & 2;
        if (temp_v0 & 4) {
            if (D_801B49F4 != NULL) {
                D_801B49F4(D_801B4CD1, &D_801E4780);
            }
            var_v0 = temp_v0 & 2;
        }
        if ((var_v0 != 0) && (D_801B49F0 != NULL)) {
            D_801B49F0(*(&D_801B4CD1 - 1), &D_801E4778);
        }
        goto loop_1;
    }
    *D_801B4CB8 = temp_s2;
}
