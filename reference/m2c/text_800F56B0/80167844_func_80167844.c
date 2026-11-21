/* m2c reference for func_80167844 @ 80167844 (107 words). Generated; not compiled or validated. */
? func_801593DC(s32, s32 *);                        /* extern */
s32 func_8015B5AC(s32, ?, s16, s16);                /* extern */
? func_8015B7B4(void *, ?);                         /* extern */
? func_8015C008(?);                                 /* extern */
? func_8015C2B4(s16 *, s32, u16);                   /* extern */
? func_80166D2C(s32, s32, ?, s32);                  /* extern */
? func_80167154(s32);                               /* extern */
s16 func_80167A94(s32, ?, ?);                       /* extern */
extern ? D_801BC180;
static s16 D_801C363C = 0;
static s16 D_801C363E = 0;

void func_80167844(s32 arg0, s32 arg1) {
    s32 sp10;
    s16 sp30;
    s16 sp32;
    u16 sp34;
    u16 sp36;
    ? *var_s0;
    s16 var_s2;
    s32 temp_v0_3;
    s32 var_s1;
    void *temp_v0;
    void *temp_v0_2;

    D_801C363C = 0;
    D_801C363E = 0;
    D_801BC180.unk2 = 3;
    D_801BC180.unk0 = 8;
    D_801BC180.unk1 = 0xD;
    D_801BC180.unk3 = 8;
    D_801BC180.unk7 = 0;
    temp_v0 = &D_801BC180 + 0x28;
    temp_v0->unk2 = 1;
    D_801BC180.unk28 = 5;
    temp_v0->unk1 = 8;
    temp_v0->unk3 = 8;
    temp_v0->unk7 = 0x1A;
    temp_v0_2 = temp_v0 + 0x28;
    temp_v0_2->unk2 = 3;
    temp_v0->unk28 = 8;
    temp_v0_2->unk1 = 0xD;
    temp_v0_2->unk3 = 8;
    temp_v0_2->unk7 = 0x2A;
    var_s1 = 0;
    if (arg1 != 0) {
        func_80166D2C(arg0, arg1, 3, arg1);
    }
    func_801593DC(arg0 + 4, &sp10);
    sp30 = 0x3C0;
    sp32 = 0x100;
    sp34 = sp18;
    sp36 = sp1A;
    func_8015C2B4(&sp30, sp1C, sp1A);
    var_s2 = 0;
    if (sp28 != 0) {
        var_s2 = func_80167A94(sp28, 0x3C0, 0x13F);
    }
    var_s0 = &D_801BC180;
    do {
        var_s0->unk16 = var_s2;
        var_s0->unkB = 4;
        var_s0->unkF = 0x64U;
        func_80167154(var_s1);
        var_s0->unk14 = 0;
        var_s0->unk15 = 0;
        var_s0->unk18 = (s16) var_s0->unk0;
        var_s0->unk1A = (s16) var_s0->unk1;
        func_8015B7B4(var_s0 + 8, 0);
        var_s1 += 1;
        var_s0->unkF = (u8) (var_s0->unkF | 2);
        temp_v0_3 = func_8015B5AC(sp10, 0, sp30, sp32) & 0x9FF;
        var_s0->unk1F = 1;
        var_s0->unk20 = (s32) (temp_v0_3 | 0xE1000000);
        var_s0 += 0x28;
    } while (var_s1 < 3);
    func_8015C008(0);
}
