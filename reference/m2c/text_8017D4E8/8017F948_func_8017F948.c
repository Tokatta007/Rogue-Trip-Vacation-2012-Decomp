/* m2c reference for func_8017F948 @ 8017F948 (126 words). Generated; not compiled or validated. */
s32 func_8017F878();                                /* extern */
s32 func_8017F88C();                                /* extern */
s32 func_8017F8A0();                                /* extern */
s32 func_8017F8B4();                                /* extern */
s32 func_8017F8C8();                                /* extern */
s32 func_8017F8DC();                                /* extern */
s32 func_8017F8F0();                                /* extern */
s32 func_8017F904();                                /* extern */
? func_8017FC18();                                  /* extern */
extern s32 D_801F5380;
extern s32 D_801F5384;
extern s32 D_801F5388;
extern s32 D_801F538C;
extern s32 D_801F5390;
extern s32 D_801F5394;
extern s32 D_801F5398;
extern s32 D_801F539C;

void func_8017F948(void) {
    s32 temp_s7;

    temp_s7 = EnterCriticalSection();
    D_801F5380 = OpenEvent(0xF4000001U, 4, 0x1000, func_8017F878);
    D_801F5384 = OpenEvent(0xF4000001U, 0x8000, 0x1000, func_8017F88C);
    D_801F5388 = OpenEvent(0xF4000001U, 0x100, 0x1000, func_8017F8A0);
    D_801F538C = OpenEvent(0xF4000001U, 0x2000, 0x1000, func_8017F8B4);
    D_801F5390 = OpenEvent(0xF0000011U, 4, 0x1000, func_8017F8C8);
    D_801F5394 = OpenEvent(0xF0000011U, 0x8000, 0x1000, func_8017F8DC);
    D_801F5398 = OpenEvent(0xF0000011U, 0x100, 0x1000, func_8017F8F0);
    D_801F539C = OpenEvent(0xF0000011U, 0x2000, 0x1000, func_8017F904);
    EnableEvent(D_801F5380);
    EnableEvent(D_801F5384);
    EnableEvent(D_801F5388);
    EnableEvent(D_801F538C);
    EnableEvent(D_801F5390);
    EnableEvent(D_801F5394);
    EnableEvent(D_801F5398);
    EnableEvent(D_801F539C);
    func_8017FC18();
    if (temp_s7 == 1) {
        ExitCriticalSection();
    }
}
