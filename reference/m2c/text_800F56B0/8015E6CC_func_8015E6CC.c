/* m2c reference for func_8015E6CC @ 8015E6CC (40 words). Generated; not compiled or validated. */
extern s32 *D_801BAE1C;
extern s32 *D_801BAE20;

s32 func_8015E6CC(s32 arg0) {
    *D_801BAE20 = 0x10000007;
    if ((*D_801BAE1C & 0xFFFFFF) != 2) {
        *D_801BAE1C = (*D_801BAE20 & 0x3FFF) | 0xE1001000;
        return 0;
    }
    if (arg0 & 8) {
        *D_801BAE20 = 0x09000001;
        return 2;
    }
    return 1;
}
