/* m2c reference for func_8014645C @ 8014645C (116 words). Generated; not compiled or validated. */
? func_801253C8(void *, void *);                    /* extern */
? func_801253F4(? *, void *);                       /* extern */
? func_80125490(void *, s32);                       /* extern */
? func_8015A05C(? *, MATRIX *);                     /* extern */
? func_8016408C(void *);                            /* extern */

void func_8014645C(void *arg0) {
    s32 sp10;
    s32 sp14;
    s32 sp18;
    ? sp20;
    MATRIX *temp_s0;
    s32 var_v0;
    s32 var_v1;
    void *temp_s2;

    if (arg0->unk85 == 0) {
        func_801253C8(arg0 + 0x220, arg0 + 0x1E4);
        func_801253C8(arg0 + 0x22C, arg0 + 0x1F0);
        func_80125490(arg0 + 0x1C4, arg0->unk738 + 0x28);
    }
    arg0->unk1F0 = (s32) (arg0->unk1F0 + ((s32) arg0->unk214 >> 3));
    arg0->unk1F4 = (s32) (arg0->unk1F4 + ((s32) arg0->unk218 >> 3));
    var_v0 = arg0->unk1F0;
    if (var_v0 < 0) {
        var_v0 = -var_v0;
    }
    if (var_v0 < 0x600) {
        var_v1 = arg0->unk1F8 + ((s32) arg0->unk21C >> 3);
    } else {
        var_v1 = arg0->unk1F8 - ((s32) arg0->unk21C >> 3);
    }
    arg0->unk1F8 = var_v1;
    temp_s2 = arg0 + 0x1F0;
    func_8016408C(temp_s2);
    func_8016408C(arg0 + 0x1F4);
    func_8016408C(arg0 + 0x1F8);
    func_801253F4(&sp20, temp_s2);
    func_8015A05C(&sp20, arg0->unk738 + 0x28);
    if (arg0->unk86 == 0) {
        func_801253C8(arg0 + 0x1FC, temp_s2);
    }
    func_801253F4(&sp20, arg0 + 0x1FC);
    temp_s0 = arg0 + 0x1A4;
    func_8015A05C(&sp20, temp_s0);
    sp10 = (s32) arg0->unk208 >> 6;
    sp14 = (s32) (arg0->unk20C + arg0->unk260) >> 6;
    sp18 = (s32) arg0->unk210 >> 6;
    mathMulTransVec(temp_s0, (VECTOR *) &sp10, arg0 + 0x244);
    arg0->unk1E4 = (s32) (arg0->unk1E4 + arg0->unk244);
    arg0->unk1E8 = (s32) (arg0->unk1E8 + arg0->unk248);
    arg0->unk1EC = (s32) (arg0->unk1EC + arg0->unk24C);
    func_801253C8(arg0->unk738 + 0x1C, arg0 + 0x1E4);
}
