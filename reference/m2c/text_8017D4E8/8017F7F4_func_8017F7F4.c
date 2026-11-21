/* m2c reference for func_8017F7F4 @ 8017F7F4 (29 words). Generated; not compiled or validated. */
extern s32 D_801C321C;
extern ? D_801F5330;
extern ? D_801F5370;

void func_8017F7F4(void) {
    s32 temp_a1;

    if (D_801C321C >= 0) {
        temp_a1 = D_801C321C * 0x10;
        if (*((D_801C321C * 4) + &D_801F5370)(temp_a1 + &D_801F5330, temp_a1) != 0) {
            D_801C321C -= 1;
        }
    }
}
