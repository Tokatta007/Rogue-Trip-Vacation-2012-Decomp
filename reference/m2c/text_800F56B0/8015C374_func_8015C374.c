/* m2c reference for func_8015C374 @ 8015C374 (46 words). Generated; not compiled or validated. */
? func_8015C070(? *, void *);                       /* extern */
extern void *D_801BAD40;
extern ? D_801BADE8;
static ? D_800F4DD4;                                /* unable to generate initializer: unknown type; const */

s32 func_8015C374(void *arg0, s32 arg1, s32 arg2) {
    s32 var_v0;

    func_8015C070(&D_800F4DD4, arg0);
    var_v0 = -1;
    if (arg0->unk4 != 0) {
        if (arg0->unk6 == 0) {
            return -1;
        }
        D_801BADE8.unk4 = (s32) ((arg2 << 0x10) | (arg1 & 0xFFFF));
        D_801BADE8.unk0 = (s32) arg0->unk0;
        D_801BADE8.unk8 = (s32) arg0->unk4;
        var_v0 = D_801BAD40->unk8(D_801BAD40->unk18, &D_801BADE8 - 8, 0x14, 0);
        /* Duplicate return node #4. Try simplifying control flow for better match */
        return var_v0;
    }
    return var_v0;
}
