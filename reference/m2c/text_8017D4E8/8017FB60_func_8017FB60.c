/* m2c reference for func_8017FB60 @ 8017FB60 (46 words). Generated; not compiled or validated. */
extern s32 D_801F5380;
extern s32 D_801F5384;
extern s32 D_801F5388;
extern s32 D_801F538C;
extern s32 D_801F5390;
extern s32 D_801F5394;
extern s32 D_801F5398;
extern s32 D_801F539C;

void func_8017FB60(void) {
    s32 temp_s0;

    temp_s0 = EnterCriticalSection();
    CloseEvent(D_801F5380);
    CloseEvent(D_801F5384);
    CloseEvent(D_801F5388);
    CloseEvent(D_801F538C);
    CloseEvent(D_801F5390);
    CloseEvent(D_801F5394);
    CloseEvent(D_801F5398);
    CloseEvent(D_801F539C);
    if (temp_s0 == 1) {
        ExitCriticalSection();
    }
}
