/* m2c reference for func_8015BE00 @ 8015BE00 (23 words). Generated; not compiled or validated. */
extern ? (*D_801BAD44)(? *, u8, u8, u8);
extern ? D_801BAD4A;
static ? D_800F4CFC;                                /* unable to generate initializer: unknown type; const */

u8 func_8015BE00(u8 arg0) {
    u8 temp_s0;

    temp_s0 = D_801BAD4A.unk0;
    D_801BAD4A.unk0 = arg0;
    if (arg0 & 0xFF) {
        D_801BAD44(&D_800F4CFC, D_801BAD4A.unk0, D_801BAD4A.unk-2, D_801BAD4A.unk1);
    }
    return temp_s0;
}
