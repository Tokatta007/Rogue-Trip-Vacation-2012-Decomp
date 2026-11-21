/* m2c reference for func_8015828C @ 8015828C (64 words). Generated; not compiled or validated. */
s32 func_8015544C();                                /* extern */
s32 func_801555D0(?, s32);                          /* extern */
s32 func_801555E4(?);                               /* extern */
? func_80155868(?, ?, ?);                           /* extern */
s32 func_80155A14(?);                               /* extern */
s32 func_80158008(?);                               /* extern */
s32 func_8015EBDC(?);                               /* extern */
extern ? D_801B4D1C;

s32 func_8015828C(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v1;

    D_801B4D1C.unkC = arg2;
    temp_v1 = D_801B4D1C.unkC & 0x30;
    switch (temp_v1) {                              /* irregular */
    case 0:
        D_801B4D1C.unk10 = 0x200;
        break;
    case 32:
        D_801B4D1C.unk10 = 0x249;
        break;
    default:
        D_801B4D1C.unk10 = 0x246;
        break;
    }
    D_801B4D1C.unkC = (s32) (D_801B4D1C.unkC | 0x20);
    D_801B4D1C.unk4 = arg1;
    D_801B4D1C.unk0 = arg0;
    D_801B4D1C.unk24 = func_801555D0(0, arg0);
    D_801B4D1C.unk28 = func_801555E4(0);
    if (D_801B4D1C.unk30 & 1) {
        D_801B4D1C.unk2C = func_80155A14(0);
    }
    D_801B4D1C.unk1C = func_8015EBDC(-1);
    if (func_8015544C() & 0xE0) {
        func_80155868(9, 0, 0);
    }
    return func_80158008(0) > 0;
}
