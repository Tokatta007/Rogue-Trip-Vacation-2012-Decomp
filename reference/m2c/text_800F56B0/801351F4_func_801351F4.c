/* m2c reference for func_801351F4 @ 801351F4 (27 words). Generated; not compiled or validated. */
? func_8012D130();                                  /* extern */
? func_8012D1AC(s32 *, ?, ?);                       /* extern */
? func_8015EBDC(?);                                 /* extern */
extern s8 D_801B3967;

void func_801351F4(s32 arg0) {
    s32 sp10;

    sp10 = (sp10 & 0xFFFF00FF & 0xFF00FFFF) | ((arg0 & 0xFF) << 0x10);
    func_8012D1AC(&sp10, 4, 0xFF00FFFF);
    func_8015EBDC(0);
    func_8015EBDC(0);
    func_8012D130();
    D_801B3967 = 0;
}
