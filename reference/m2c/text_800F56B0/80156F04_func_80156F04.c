/* m2c reference for func_80156F04 @ 80156F04 (90 words). Generated; not compiled or validated. */
? func_80156B14();                                  /* extern */
s32 func_8015EBDC(?);                               /* extern */
extern u8 D_801B4A11;
extern ? D_801B4A18;
extern ? D_801B4A98;
extern ? D_801B4CD0;
extern s32 *D_801B4CFC;
extern s32 D_801E4790;
extern s32 D_801E4794;
extern ? *D_801E4798;
static s8 D_800F47B0[0x10] = {
    0x43,
    0x44,
    0x20,
    0x74,
    0x69,
    0x6D,
    0x65,
    0x6F,
    0x75,
    0x74,
    0x3A,
    0x20,
    0,
    0,
    0,
    0,
}; /* const */
static s8 D_800F47C0[0x1C] = {
    0x25,
    0x73,
    0x3A,
    0x28,
    0x25,
    0x73,
    0x29,
    0x20,
    0x53,
    0x79,
    0x6E,
    0x63,
    0x3D,
    0x25,
    0x73,
    0x2C,
    0x20,
    0x52,
    0x65,
    0x61,
    0x64,
    0x79,
    0x3D,
    0x25,
    0x73,
    0xA,
    0,
    0,
}; /* const */
static ? D_800F48B8;                                /* unable to generate initializer: unknown type; const */

s32 func_80156F04(s32 arg0) {
    s32 var_v0;
    s32 var_v0_2;

    D_801E4790 = func_8015EBDC(-1) + 0x3C0;
    D_801E4794 = 0;
    D_801E4798 = &D_800F48B8;
loop_1:
    if ((D_801E4790 < func_8015EBDC(-1)) || (D_801E4794 += 1, ((D_801E4794 > 0x3C0000) != 0))) {
        puts(D_800F47B0);
        printf(D_800F47C0, D_801E4798, *((D_801B4A11 * 4) + &D_801B4A18), *((D_801B4CD0.unk0 * 4) + &D_801B4A98), *((D_801B4CD0.unk1 * 4) + &D_801B4A98));
        func_80156B14();
        var_v0_2 = -1;
    } else {
        var_v0_2 = 0;
    }
    var_v0 = -1;
    if (var_v0_2 == 0) {
        var_v0 = 0;
        if (*D_801B4CFC & 0x01000000) {
            var_v0 = 1;
            if (arg0 == 0) {
                goto loop_1;
            }
        }
    }
    return var_v0;
}
