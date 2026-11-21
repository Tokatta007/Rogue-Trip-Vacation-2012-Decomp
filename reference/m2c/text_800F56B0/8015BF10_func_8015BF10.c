/* m2c reference for func_8015BF10 @ 8015BF10 (24 words). Generated; not compiled or validated. */
extern ? (*D_801BAD44)(? *, s32);
extern ? D_801BAD4A;
static ? D_800F4D3C;                                /* unable to generate initializer: unknown type; const */

s32 func_8015BF10(s32 arg0) {
    s32 temp_v0;

    if ((u8) D_801BAD4A.unk0 >= 2U) {
        D_801BAD44(&D_800F4D3C, arg0);
    }
    temp_v0 = D_801BAD4A.unkA;
    D_801BAD4A.unkA = arg0;
    return temp_v0;
}
