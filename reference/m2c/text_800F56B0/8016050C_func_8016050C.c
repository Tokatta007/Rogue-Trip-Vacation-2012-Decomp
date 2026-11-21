/* m2c reference for func_8016050C @ 8016050C (42 words). Generated; not compiled or validated. */
? func_80160AC0();                                  /* extern */
? func_80160AE8();                                  /* extern */
extern void *D_801BC000;
extern s32 *D_801BC004;
extern s32 *D_801BC008;
extern s32 *D_801BC00C;
extern s32 D_801BC050;

void func_8016050C(s32 arg0, s16 arg1, s32 arg2) {
    D_801BC000->unk1A6 = arg1;
    func_80160AE8();
    D_801BC000->unk1AA = (u16) (D_801BC000->unk1AA | 0x30);
    func_80160AE8();
    func_80160AC0();
    *D_801BC004 = arg0;
    *D_801BC008 = (arg2 << 0x10) | 0x10;
    D_801BC050 = 1;
    *D_801BC00C = 0x01000200;
}
