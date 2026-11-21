/* m2c reference for func_8015C66C @ 8015C66C (48 words). Generated; not compiled or validated. */
? func_8015D064(void *, void *);                    /* extern */
extern void *D_801BAD40;
extern ? (*D_801BAD44)(? *, void *);
extern u8 D_801BAD4A;
static ? D_800F4E24;                                /* unable to generate initializer: unknown type; const */

void *func_8015C66C(void *arg0) {
    void *temp_s0;

    if ((u8) D_801BAD4A >= 2U) {
        D_801BAD44(&D_800F4E24, arg0);
    }
    temp_s0 = arg0 + 0x1C;
    func_8015D064(temp_s0, arg0);
    arg0->unk1C = (s32) (arg0->unk1C | 0xFFFFFF);
    D_801BAD40->unk8(D_801BAD40->unk18, temp_s0, 0x40, 0);
    memcpy(&D_801BAD4A + 0xE, arg0, 0x5C);
    return arg0;
}
