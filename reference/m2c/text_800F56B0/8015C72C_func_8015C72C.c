/* m2c reference for func_8015C72C @ 8015C72C (54 words). Generated; not compiled or validated. */
? func_8015D064(void *, void *);                    /* extern */
extern void *D_801BAD40;
extern ? (*D_801BAD44)(? *, s32, void *);
extern u8 D_801BAD4A;
static ? D_800F4E3C;                                /* unable to generate initializer: unknown type; const */

void func_8015C72C(s32 arg0, void *arg1) {
    void *temp_s0;

    if ((u8) D_801BAD4A >= 2U) {
        D_801BAD44(&D_800F4E3C, arg0, arg1);
    }
    temp_s0 = arg1 + 0x1C;
    func_8015D064(temp_s0, arg1);
    arg1->unk1C = (s32) ((arg1->unk1C & 0xFF000000) | (arg0 & 0xFFFFFF));
    D_801BAD40->unk8(D_801BAD40->unk18, temp_s0, 0x40, 0);
    memcpy(&D_801BAD4A + 0xE, arg1, 0x5C);
}
