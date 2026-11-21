/* m2c reference for func_8017504C @ 8017504C (51 words). Generated; not compiled or validated. */
s32 func_8017519C(s32);                             /* extern */
extern void *D_801BC000;
extern s32 D_801C266C;
extern s32 D_801C2670;
extern s32 D_801C2674;

s32 func_8017504C(s32 arg0) {
    s16 var_v0;

    switch (arg0) {                                 /* irregular */
    case 0:
        D_801C266C = 0;
        var_v0 = D_801BC000->unk1AA & 0xFF7F;
block_8:
        D_801BC000->unk1AA = var_v0;
        break;
    case 1:
        if ((D_801C2670 != arg0) && (func_8017519C(D_801C2674) != 0)) {
            D_801C266C = 0;
            var_v0 = D_801BC000->unk1AA & 0xFF7F;
        } else {
            D_801C266C = arg0;
            var_v0 = D_801BC000->unk1AA | 0x80;
        }
        goto block_8;
    }
    return D_801C266C;
}
