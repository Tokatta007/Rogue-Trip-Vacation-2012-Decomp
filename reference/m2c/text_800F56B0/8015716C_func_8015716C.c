/* m2c reference for func_8015716C @ 8015716C (59 words). Generated; not compiled or validated. */
extern u8 *D_801B4CB8;
extern s8 *D_801B4CC4;
extern s32 *D_801B4CC8;
extern s32 *D_801B4CEC;
extern s32 *D_801B4CF0;
extern s32 *D_801B4CF4;
extern s32 *D_801B4CF8;
extern s32 *D_801B4CFC;

s32 func_8015716C(s32 arg0, s32 arg1) {
    s32 sp0;

    *D_801B4CB8 = 0;
    *D_801B4CC4 = 0x80;
    *D_801B4CEC = 0x21020843;
    *D_801B4CC8 = 0x1325;
    *D_801B4CF0 |= 0x8000;
    *D_801B4CF4 = arg0;
    *D_801B4CF8 = arg1 | 0x10000;
    if (!(*D_801B4CB8 & 0x40)) {
        do {

        } while (!(*D_801B4CB8 & 0x40));
    }
    *D_801B4CFC = 0x11400100;
    sp0 = *D_801B4CFC;
    return 0;
}
