/* m2c reference for func_80156BE8 @ 80156BE8 (60 words). Generated; not compiled or validated. */
extern s8 *D_801B4CB8;
extern s8 *D_801B4CBC;
extern u8 *D_801B4CC0;
extern u8 *D_801B4CC4;
extern void *D_801B4CCC;

s32 func_80156BE8(void) {
    u8 sp0;
    u8 sp1;
    u8 sp2;
    u8 sp3;

    if (D_801B4CCC->unk1B8 == 0) {
        if (D_801B4CCC->unk1BA == 0) {
            D_801B4CCC->unk180 = 0x3FFF;
            D_801B4CCC->unk182 = 0x3FFF;
        }
    }
    D_801B4CCC->unk1B0 = 0x3FFF;
    D_801B4CCC->unk1B2 = 0x3FFF;
    D_801B4CCC->unk1AA = 0xC001;
    sp2 = 0x80;
    sp0 = 0x80;
    sp3 = 0;
    sp1 = 0;
    *D_801B4CB8 = 2;
    *D_801B4CC0 = 0x80;
    *D_801B4CC4 = sp1;
    *D_801B4CB8 = 3;
    *D_801B4CBC = 0x80;
    *D_801B4CC0 = sp3;
    *D_801B4CC4 = 0x20;
    return 0;
}
