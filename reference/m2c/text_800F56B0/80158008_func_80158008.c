/* m2c reference for func_80158008 @ 80158008 (124 words). Generated; not compiled or validated. */
s32 func_8015544C();                                /* extern */
s32 func_8015545C();                                /* extern */
s8 *func_8015547C();                                /* extern */
? func_801554F4();                                  /* extern */
? func_801555D0(?);                                 /* extern */
? func_801555E4(? *);                               /* extern */
s32 func_801555F8(?, s8 *, ?);                      /* extern */
? func_80155734(?, ?);                              /* extern */
? func_80155A14(? *);                               /* extern */
s32 func_80155B5C(s8 *);                            /* extern */
s32 func_8015EBDC(?);                               /* extern */
extern ? D_801B4D1C;
extern s32 D_801B4D28;
extern ? D_801B4D4C;
extern ? func_80157CDC;
extern ? func_80157F3C;
static s8 D_800F4ACC[0x18] = {
    0x43,
    0x64,
    0x52,
    0x65,
    0x61,
    0x64,
    0x3A,
    0x20,
    0x53,
    0x68,
    0x65,
    0x6C,
    0x6C,
    0x20,
    0x6F,
    0x70,
    0x65,
    0x6E,
    0x2E,
    0x2E,
    0x2E,
    0xA,
    0,
    0,
}; /* const */
static s8 D_800F4AE4[0x20] = {
    0x43,
    0x64,
    0x52,
    0x65,
    0x61,
    0x64,
    0x3A,
    0x20,
    0x72,
    0x65,
    0x74,
    0x72,
    0x79,
    0x2E,
    0x2E,
    0x2E,
    0xA,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
}; /* const */

s32 func_80158008(s32 arg0) {
    s8 sp10;
    s32 *temp_v0;
    s32 temp_s0;
    void *temp_v1;

    func_801555D0(0);
    func_801555E4(NULL);
    if (D_801B4D4C.unk0 & 1) {
        func_80155A14(NULL);
    }
    if (func_8015544C() & 0x10) {
        if (!(func_8015EBDC(-1) & 0x3F)) {
            puts(D_800F4ACC);
        }
        func_80155734(1, 0);
        temp_v1 = &D_801B4D4C - 0x30;
        temp_v1->unk1C = func_8015EBDC(-1);
        temp_v1->unk14 = -1;
        return temp_v1->unk14;
    }
    if (arg0 != 0) {
        puts(D_800F4AE4);
        func_801555F8(9, NULL, 0);
        if (func_801555F8(2, func_8015547C(), 0) == 0) {
            (&D_801B4D4C - 0x30)->unk14 = -1;
            return D_801B4D4C.unk-1C;
        }
    }
    func_801554F4();
    sp10 = (s8) D_801B4D28;
    temp_s0 = D_801B4D28 & 0xFF;
    if ((temp_s0 != func_8015545C()) || (arg0 != 0)) {
        temp_v0 = &D_801B4D28 - 0xC;
        if (func_801555F8(0xE, &sp10, 0) == 0) {
            temp_v0->unk14 = -1;
            return temp_v0->unk14;
        }
    }
    D_801B4D1C.unk20 = func_80155B5C(func_8015547C());
    func_801555E4(&func_80157CDC);
    if (D_801B4D1C.unk30 & 1) {
        func_80155A14(&func_80157F3C);
    }
    D_801B4D1C.unk8 = (s32) D_801B4D1C.unk4;
    func_80155734(6, 0);
    D_801B4D1C.unk14 = (s32) D_801B4D1C.unk0;
    D_801B4D1C.unk18 = func_8015EBDC(-1);
    return D_801B4D1C.unk14;
}
