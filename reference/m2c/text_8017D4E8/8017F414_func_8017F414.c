/* m2c reference for func_8017F414 @ 8017F414 (34 words). Generated; not compiled or validated. */
s32 func_8017F54C(s32);                             /* extern */
? func_8017F628(s8 *, s32 *);                       /* extern */
? func_8017FC18();                                  /* extern */
s32 func_8017FDD4();                                /* extern */
extern s32 D_801F52C4;
extern ? D_801F52D0;
static s8 D_800F566C[0x20] = {
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
    0x73,
    0x79,
    0x73,
    0x74,
    0x65,
    0x6D,
    0x20,
    0x62,
    0x75,
    0x73,
    0x79,
    0xA,
    0,
    0,
    0,
}; /* const */

s32 func_8017F414(void) {
    s8 sp10;

    if (D_801F52D0.unk0 == 0) {
        D_801F52C4 |= 1 << D_801F52D0.unkC;
        func_8017F628(&sp10, &D_801F52C4);
        func_8017FC18();
        format(&sp10);
        return func_8017F54C(func_8017FDD4());
    }
    printf(D_800F566C);
    return -1;
}
