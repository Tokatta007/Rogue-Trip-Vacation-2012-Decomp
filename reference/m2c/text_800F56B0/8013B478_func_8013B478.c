/* m2c reference for func_8013B478 @ 8013B478 (67 words). Generated; not compiled or validated. */
s32 func_80132F8C();                                /* extern */
? func_80138370(?, s32, ?, s32);                    /* extern */
? func_8015C008(?);                                 /* extern */
? func_8015C5A0(? *, s16, s16, ?);                  /* extern */
? func_80166D2C(s32, ? *);                          /* extern */
extern s32 D_801C3830;
extern ? D_801CC800;
static ? D_800F3FFC;                                /* unable to generate initializer: unknown type; const */

void func_8013B478(s32 arg0, s32 arg1) {
    s16 temp_a1;
    s16 temp_a2;
    s16 temp_v1;
    s32 temp_s1;

    temp_s1 = func_80132F8C() + 0x61A8;
    if (arg1 != 0) {
        D_801C3830 = arg1;
        func_80166D2C(temp_s1, &D_800F3FFC);
    }
    func_80138370(1, temp_s1, 0x78, D_801C3830);
    D_801CC800.unk3 = 5;
    D_801CC800.unk7 = 0x28;
    D_801CC800.unk8 = 0x80;
    temp_a2 = (u16) D_801C3830 + 0x22;
    temp_a1 = (u16) D_801C3830 + 0x29;
    D_801CC800.unkA = temp_a2;
    temp_v1 = ((arg0 * 0x4A) / 100) + 0x80;
    D_801CC800.unkC = temp_v1;
    D_801CC800.unkE = temp_a2;
    D_801CC800.unk10 = 0x80;
    D_801CC800.unk12 = temp_a1;
    D_801CC800.unk14 = temp_v1;
    D_801CC800.unk16 = temp_a1;
    D_801CC800.unk4 = 0x78;
    D_801CC800.unk5 = 0x32;
    D_801CC800.unk6 = 0x14;
    func_8015C5A0(&D_801CC800, temp_a1, temp_a2, 0x80);
    func_8015C008(0);
}
