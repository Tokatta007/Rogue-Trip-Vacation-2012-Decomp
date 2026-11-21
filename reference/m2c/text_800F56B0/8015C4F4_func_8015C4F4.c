/* m2c reference for func_8015C4F4 @ 8015C4F4 (43 words). Generated; not compiled or validated. */
extern void *D_801BAD40;
extern ? (*D_801BAD44)(? *, s32 *, ?);
extern u8 D_801BAD4A;
extern ? D_801BADF4;
extern s32 D_801BAE08;
static ? D_800F4DF8;                                /* unable to generate initializer: unknown type; const */

void func_8015C4F4(s32 *arg0, ? arg1) {
    if ((u8) D_801BAD4A >= 2U) {
        D_801BAD44(&D_800F4DF8, arg0, arg1);
    }
    D_801BAD40->unk2C(arg0, arg1);
    D_801BAE08 = ((s32) &D_801BADF4 & 0xFFFFFF) | 0x04000000;
    *arg0 = (s32) &D_801BAE08 & 0xFFFFFF;
}
