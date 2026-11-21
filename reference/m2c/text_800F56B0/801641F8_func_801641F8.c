/* m2c reference for func_801641F8 @ 801641F8 (31 words). Generated; not compiled or validated. */
? func_8016417C(void *, s32);                       /* extern */
extern s32 D_801C3870;
extern ? D_801ECD60;
static s8 D_800F50A0[0x34] = {
    0x69,
    0x6E,
    0x74,
    0x65,
    0x72,
    0x6E,
    0x61,
    0x6C,
    0x20,
    0x65,
    0x72,
    0x72,
    0x6F,
    0x72,
    0x3A,
    0x20,
    0x74,
    0x6F,
    0x6F,
    0x20,
    0x6D,
    0x61,
    0x6E,
    0x79,
    0x20,
    0x63,
    0x6F,
    0x6F,
    0x72,
    0x64,
    0x69,
    0x6E,
    0x61,
    0x74,
    0x65,
    0x20,
    0x73,
    0x79,
    0x73,
    0x74,
    0x65,
    0x6D,
    0x73,
    0x20,
    0x28,
    0x25,
    0x64,
    0x29,
    0xA,
    0,
    0,
    0,
}; /* const */

void *func_801641F8(void) {
    void *temp_s0;

    if (D_801C3870 >= 0x80) {
        printf(D_800F50A0, D_801C3870);
        return NULL;
    }
    temp_s0 = (D_801C3870 * 0xAC) + &D_801ECD60;
    func_8016417C(temp_s0, D_801C3870);
    D_801C3870 += 1;
    return temp_s0;
}
