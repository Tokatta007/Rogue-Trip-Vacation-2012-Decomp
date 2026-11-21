/* m2c reference for func_801581F8 @ 801581F8 (37 words). Generated; not compiled or validated. */
? func_801555D0(s32);                               /* extern */
? func_801555E4(s32);                               /* extern */
? func_80155734(?, ?);                              /* extern */
? func_80155A14(s32);                               /* extern */
? func_80155A38(?);                                 /* extern */
extern ? D_801B4D4C;

void func_801581F8(void) {
    void *var_s1;

    var_s1 = &D_801B4D4C - 0x30;
    if (D_801B4D4C.unk0 & 1) {
        func_80155A38(0);
        var_s1 = &D_801B4D4C - 0x30;
    }
    var_s1->unk14 = 0;
    func_801555D0(D_801B4D4C.unk-C);
    func_801555E4(D_801B4D4C.unk-8);
    if (D_801B4D4C.unk0 & 1) {
        func_80155A14(var_s1->unk2C);
    }
    func_80155734(9, 0);
}
