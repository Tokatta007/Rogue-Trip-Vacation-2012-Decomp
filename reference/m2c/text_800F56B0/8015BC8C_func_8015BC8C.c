/* m2c reference for func_8015BC8C @ 8015BC8C (93 words). Generated; not compiled or validated. */
u8 func_8015E2C8(s32);                              /* extern */
? func_8015EBAC(? *, ?, ?);                         /* extern */
? func_8015EDEC();                                  /* extern */
extern ? D_801BAD00;
extern void *D_801BAD40;
extern ? (*D_801BAD44)(? *, s32);
extern ? D_801BAD48;
extern u8 D_801BAD4A;
extern ? D_801BADC8;
extern ? D_801BADD4;
static s8 D_800F4CC8[0x20] = {
    0x52,
    0x65,
    0x73,
    0x65,
    0x74,
    0x47,
    0x72,
    0x61,
    0x70,
    0x68,
    0x3A,
    0x6A,
    0x74,
    0x62,
    0x3D,
    0x25,
    0x30,
    0x38,
    0x78,
    0x2C,
    0x65,
    0x6E,
    0x76,
    0x3D,
    0x25,
    0x30,
    0x38,
    0x78,
    0xA,
    0,
    0,
    0,
}; /* const */
static ? D_800F4CE8;                                /* unable to generate initializer: unknown type; const */

u8 func_8015BC8C(s32 arg0) {
    s32 temp_v1;

    temp_v1 = arg0 & 7;
    switch (temp_v1) {                              /* irregular */
    case 3:
    case 0:
        printf(D_800F4CC8, &D_801BAD00, &D_801BAD48);
        /* fallthrough */
    case 5:
        func_8015EBAC(&D_801BAD48, 0, 0x80);
        func_8015EDEC();
        GPU_cw((s32) D_801BAD40 & 0xFFFFFF);
        D_801BAD48.unk0 = func_8015E2C8(arg0);
        D_801BAD48.unk1 = 1;
        D_801BAD48.unk4 = (u16) *(&D_801BADC8 + (D_801BAD48.unk0 * 4));
        D_801BAD48.unk6 = (u16) *(&D_801BADD4 + (D_801BAD48.unk0 * 4));
        func_8015EBAC(&D_801BAD48 + 0x10, -1, 0x5C);
        func_8015EBAC(&D_801BAD48 + 0x6C, -1, 0x14);
        return D_801BAD48.unk0;
    default:
        if ((u8) D_801BAD4A >= 2U) {
            D_801BAD44(&D_800F4CE8, arg0);
        }
        return D_801BAD40->unk34(1);
    }
}
