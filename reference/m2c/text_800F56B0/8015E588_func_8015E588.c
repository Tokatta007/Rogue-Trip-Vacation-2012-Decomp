/* m2c reference for func_8015E588 @ 8015E588 (81 words). Generated; not compiled or validated. */
s32 func_8015EBDC(?);                               /* extern */
s32 func_8015EF68(s32);                             /* extern */
extern s32 *D_801BAE20;
extern s32 *D_801BAE24;
extern s32 *D_801BAE2C;
extern s32 *D_801BAE3C;
extern s32 D_801BAE40;
extern s32 D_801BAE44;
extern s32 D_801BAE50;
extern s32 D_801BAE54;
extern s32 D_801BAE58;
static s8 D_800F4E70[0x34] = {
    0x47,
    0x50,
    0x55,
    0x20,
    0x74,
    0x69,
    0x6D,
    0x65,
    0x6F,
    0x75,
    0x74,
    0x3A,
    0x71,
    0x75,
    0x65,
    0x3D,
    0x25,
    0x64,
    0x2C,
    0x73,
    0x74,
    0x61,
    0x74,
    0x3D,
    0x25,
    0x30,
    0x38,
    0x78,
    0x2C,
    0x63,
    0x68,
    0x63,
    0x72,
    0x3D,
    0x25,
    0x30,
    0x38,
    0x78,
    0x2C,
    0x6D,
    0x61,
    0x64,
    0x72,
    0x3D,
    0x25,
    0x30,
    0x38,
    0x78,
    0x2C,
    0,
    0,
    0,
}; /* const */

s32 func_8015E588(void) {
    s32 temp_a0;
    s32 temp_v0;

    if ((D_801BAE54 < func_8015EBDC(-1)) || (temp_a0 = D_801BAE58, D_801BAE58 += 1, ((temp_a0 > 0xF0000) != 0))) {
        printf(D_800F4E70, (D_801BAE40 - D_801BAE44) & 0x3F, *D_801BAE20, *D_801BAE2C, *D_801BAE24);
        temp_v0 = func_8015EF68(0);
        D_801BAE44 = 0;
        D_801BAE50 = temp_v0;
        D_801BAE40 = D_801BAE44;
        *D_801BAE2C = 0x401;
        *D_801BAE3C |= 0x800;
        *D_801BAE20 = 0x02000000;
        *D_801BAE20 = 0x01000000;
        func_8015EF68(D_801BAE50);
        return -1;
    }
    return 0;
}
