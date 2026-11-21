/* m2c reference for func_8017FDD4 @ 8017FDD4 (51 words). Generated; not compiled or validated. */
extern s32 D_801F5380;
extern s32 D_801F5384;
extern s32 D_801F5388;
extern s32 D_801F538C;
extern s32 D_801F53B0;
extern s32 D_801F53B4;
extern s32 D_801F53B8;
extern s32 D_801F53BC;

s32 func_8017FDD4(void) {
    s32 temp_s0;

    do {
        temp_s0 = D_801F53B0 + (D_801F53B4 * 2) + (D_801F53B8 * 4) + (D_801F53BC * 8);
    } while (temp_s0 == 0);
    TestEvent(D_801F5380);
    TestEvent(D_801F5384);
    TestEvent(D_801F5388);
    TestEvent(D_801F538C);
    D_801F53BC = 0;
    D_801F53B8 = D_801F53BC;
    D_801F53B4 = D_801F53B8;
    D_801F53B0 = D_801F53B4;
    return temp_s0 >> 1;
}
