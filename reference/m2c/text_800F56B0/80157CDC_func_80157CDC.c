/* m2c reference for func_80157CDC @ 80157CDC (152 words). Generated; not compiled or validated. */
? func_801555D0(s32);                               /* extern */
? func_801555E4(s32);                               /* extern */
? func_80155734(?, ?);                              /* extern */
? func_801559D4(? *, s32);                          /* extern */
? func_801559F4(? *, s32);                          /* extern */
? func_80155A14(? *, ? *);                          /* extern */
? func_80155A38(?);                                 /* extern */
s32 func_80155B5C(? *);                             /* extern */
? func_80158008(?);                                 /* extern */
s32 func_8015EBDC(?);                               /* extern */
extern ? (*D_801B4D18)(?, s32);
extern ? D_801B4D1C;
extern s32 D_801B4D3C;
extern ? D_801B4D4C;
extern ? func_80157F3C;
static s8 D_800F4AB4[0x18] = {
    0x43,
    0x64,
    0x52,
    0x65,
    0x61,
    0x64,
    0x3A,
    0x20,
    0x73,
    0x65,
    0x63,
    0x74,
    0x6F,
    0x72,
    0x20,
    0x65,
    0x72,
    0x72,
    0x6F,
    0x72,
    0xA,
    0,
    0,
    0,
}; /* const */

void func_80157CDC(s32 arg0, s32 arg1) {
    ? sp10;
    ? var_a0;
    void *temp_a0;

    D_801B4D1C.unk34 = arg1;
    if ((arg0 & 0xFF) == 1) {
        if (D_801B4D1C.unk14 > 0) {
            if (D_801B4D1C.unk10 == 0x200) {
                if (D_801B4D1C.unk30 & 1) {
                    func_80155A14(NULL, &D_801B4D1C);
                    func_801559F4(&sp10, 3);
                    func_80155A38(0);
                    func_80155A14(&func_80157F3C);
                } else {
                    func_801559D4(&sp10, 3);
                }
                if (func_80155B5C(&sp10) != D_801B4D3C) {
                    puts(D_800F4AB4);
                    (&D_801B4D3C - 0x20)->unk14 = -1;
                }
            }
            if (D_801B4D4C.unk0 & 1) {
                func_801559F4(D_801B4D4C.unk-28, D_801B4D4C.unk-20);
            } else {
                func_801559D4(D_801B4D4C.unk-28, D_801B4D4C.unk-20);
                temp_a0 = &D_801B4D4C - 0x30;
                temp_a0->unk8 = (void *) (D_801B4D4C.unk-28 + (D_801B4D4C.unk-20 * 4));
                temp_a0->unk14 = (s32) (temp_a0->unk14 - 1);
                temp_a0->unk20 = (s32) (temp_a0->unk20 + 1);
            }
        }
    } else {
        D_801B4D1C.unk14 = -1;
    }
    D_801B4D1C.unk18 = func_8015EBDC(-1);
    if (D_801B4D1C.unk14 < 0) {
        func_80158008(1);
    }
    if ((D_801B4D1C.unk1C + 0x4B0) < func_8015EBDC(-1)) {
        D_801B4D1C.unk14 = -1;
    }
    if ((D_801B4D1C.unk14 == 0) || ((D_801B4D1C.unk1C + 0x4B0) < func_8015EBDC(-1))) {
        func_801555D0(D_801B4D1C.unk24);
        func_801555E4(D_801B4D1C.unk28);
        if (D_801B4D1C.unk30 & 1) {
            func_80155A14(D_801B4D1C.unk2C);
        }
        func_80155734(9, 0);
        if (D_801B4D18 != NULL) {
            var_a0 = 5;
            if (D_801B4D1C.unk14 == 0) {
                var_a0 = 2;
            }
            D_801B4D18(var_a0, arg1);
        }
    }
}
