/* m2c reference for func_8015706C @ 8015706C (64 words). Generated; not compiled or validated. */
extern u8 *D_801B4CB8;
extern s8 *D_801B4CC4;
extern s32 *D_801B4CC8;
extern s32 *D_801B4CEC;
extern s32 *D_801B4CF0;
extern s32 *D_801B4CF4;
extern s32 *D_801B4CF8;
extern s32 *D_801B4CFC;

s32 func_8015706C(s32 arg0, s32 arg1) {
    *D_801B4CB8 = 0;
    *D_801B4CC4 = 0x80;
    *D_801B4CEC = 0x20943;
    *D_801B4CC8 = 0x1323;
    *D_801B4CF0 |= 0x8000;
    *D_801B4CF4 = arg0;
    *D_801B4CF8 = arg1 | 0x10000;
    do {

    } while (!(*D_801B4CB8 & 0x40));
    *D_801B4CFC = 0x11000000;
    if (*D_801B4CFC & 0x01000000) {
        do {

        } while (*D_801B4CFC & 0x01000000);
    }
    *D_801B4CC8 = 0x1325;
    return 0;
}
