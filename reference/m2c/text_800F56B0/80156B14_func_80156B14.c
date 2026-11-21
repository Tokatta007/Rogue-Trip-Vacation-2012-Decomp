/* m2c reference for func_80156B14 @ 80156B14 (53 words). Generated; not compiled or validated. */
extern s8 *D_801B4CB8;
extern s8 *D_801B4CC0;
extern u8 *D_801B4CC4;
extern s32 *D_801B4CC8;
extern ? D_801B4CD0;

void func_80156B14(void) {
    *D_801B4CB8 = 1;
    if (*D_801B4CC4 & 7) {
        do {
            *D_801B4CB8 = 1;
            *D_801B4CC4 = 7;
            *D_801B4CC0 = 7;
        } while (*D_801B4CC4 & 7);
    }
    D_801B4CD0.unk2 = 0U;
    D_801B4CD0.unk1 = (u8) D_801B4CD0.unk2;
    D_801B4CD0.unk0 = 2;
    *D_801B4CB8 = 0;
    *D_801B4CC4 = 0;
    *D_801B4CC8 = 0x1325;
}
