/* m2c reference for func_8017E018 @ 8017E018 (25 words). Generated; not compiled or validated. */
? func_8017F774(? *, ? *, s32);                     /* extern */
extern ? D_801F52D0;
extern ? func_8017E07C;
static s8 D_800F551C[0x28] = {
    0x41,
    0x63,
    0x63,
    0x65,
    0x73,
    0x73,
    0x20,
    0x44,
    0x65,
    0x6E,
    0x69,
    0x65,
    0x64,
    0x2E,
    0x20,
    0x3A,
    0x20,
    0x65,
    0x76,
    0x65,
    0x6E,
    0x74,
    0x20,
    0x6D,
    0x75,
    0x6C,
    0x74,
    0x69,
    0x70,
    0x6C,
    0x65,
    0x20,
    0x6F,
    0x70,
    0x65,
    0x6E,
    0xA,
    0,
    0,
    0,
}; /* const */

s32 func_8017E018(s32 arg0) {
    if (D_801F52D0.unk0 <= 0) {
        D_801F52D0.unk0 = 1;
        D_801F52D0.unk4 = 0;
        D_801F52D0.unk8 = 0;
        D_801F52D0.unkC = arg0;
        func_8017F774(&func_8017E07C, &D_801F52D0, arg0);
        return 1;
    }
    printf(D_800F551C, &D_801F52D0, arg0);
    return 0;
}
