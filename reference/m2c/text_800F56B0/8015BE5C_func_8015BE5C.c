/* m2c reference for func_8015BE5C @ 8015BE5C (41 words). Generated; not compiled or validated. */
? func_8015EE4C(?, ?);                              /* extern */
extern void *D_801BAD40;
extern ? (*D_801BAD44)(? *, u8);
extern ? D_801BAD49;
static ? D_800F4D28;                                /* unable to generate initializer: unknown type; const */

u8 func_8015BE5C(u8 arg0) {
    u8 temp_s2;

    temp_s2 = D_801BAD49.unk0;
    if ((u8) D_801BAD49.unk1 >= 2U) {
        D_801BAD44(&D_800F4D28, arg0);
    }
    if (arg0 != D_801BAD49.unk0) {
        D_801BAD40->unk34(1);
        D_801BAD49.unk0 = arg0;
        func_8015EE4C(2, 0);
    }
    return temp_s2;
}
