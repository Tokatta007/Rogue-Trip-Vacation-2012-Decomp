/* m2c reference for func_8015C21C @ 8015C21C (38 words). Generated; not compiled or validated. */
? func_8015C070(? *, s32);                          /* extern */
extern void *D_801BAD40;
static ? D_800F4DB0;                                /* unable to generate initializer: unknown type; const */

void func_8015C21C(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_8015C070(&D_800F4DB0, arg0);
    D_801BAD40->unk8(D_801BAD40->unkC, arg0, 8, ((arg3 & 0xFF) << 0x10) | (((arg2 & 0xFF) << 8) | 0x80000000) | (arg1 & 0xFF));
}
