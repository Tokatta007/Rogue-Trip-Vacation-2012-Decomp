/* m2c reference for func_8017FD08 @ 8017FD08 (51 words). Generated; not compiled or validated. */
extern s32 D_801F5390;
extern s32 D_801F5394;
extern s32 D_801F5398;
extern s32 D_801F539C;
extern s32 D_801F53A0;
extern s32 D_801F53A4;
extern s32 D_801F53A8;
extern s32 D_801F53AC;

s32 func_8017FD08(void) {
    s32 temp_s0;

    do {
        temp_s0 = D_801F53A0 + (D_801F53A4 * 2) + (D_801F53A8 * 4) + (D_801F53AC * 8);
    } while (temp_s0 == 0);
    TestEvent(D_801F5390);
    TestEvent(D_801F5394);
    TestEvent(D_801F5398);
    TestEvent(D_801F539C);
    D_801F53AC = 0;
    D_801F53A8 = D_801F53AC;
    D_801F53A4 = D_801F53A8;
    D_801F53A0 = D_801F53A4;
    return temp_s0 >> 1;
}
