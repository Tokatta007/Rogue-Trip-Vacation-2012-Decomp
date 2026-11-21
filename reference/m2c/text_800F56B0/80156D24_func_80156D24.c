/* m2c reference for func_80156D24 @ 80156D24 (120 words). Generated; not compiled or validated. */
s32 func_80156138(?, ?);                            /* extern */
s32 func_80156680(?, ?, ?, ?);                      /* extern */
? func_8015EDEC();                                  /* extern */
? func_8015EE1C(?, ? *);                            /* extern */
extern s32 D_801B49F0;
extern s32 D_801B49F4;
extern s32 D_801B4A00;
extern s32 D_801B4A04;
extern s8 D_801B4A10;
extern s8 D_801B4A11;
extern s8 *D_801B4CB8;
extern s8 *D_801B4CC0;
extern u8 *D_801B4CC4;
extern s32 *D_801B4CC8;
extern ? D_801B4CD0;
extern ? D_801B4CD4;
extern ? func_80157264;
static s8 D_800F48A0[0xC] = { 0x43, 0x44, 0x5F, 0x69, 0x6E, 0x69, 0x74, 0x3A, 0, 0, 0, 0 }; /* const */
static s8 D_800F48AC[0xC] = { 0x61, 0x64, 0x64, 0x72, 0x3D, 0x25, 0x30, 0x38, 0x78, 0xA, 0, 0 }; /* const */

s32 func_80156D24(void) {
    puts(D_800F48A0);
    printf(D_800F48AC, &D_801B4CD4);
    D_801B4A11 = 0;
    D_801B4A10 = 0;
    D_801B49F4 = 0;
    D_801B49F0 = 0;
    D_801B4A04 = 0;
    D_801B4A00 = 0;
    func_8015EDEC();
    func_8015EE1C(2, &func_80157264);
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
    func_80156680(1, 0, 0, 0);
    if (D_801B4A00 & 0x10) {
        func_80156680(1, 0, 0, 0);
    }
    if (func_80156680(0xA, 0, 0, 0) == 0) {
        if (func_80156680(0xC, 0, 0, 0) == 0) {
            if (func_80156138(0, 0) == 2) {
                return 0;
            }
            /* Duplicate return node #10. Try simplifying control flow for better match */
            return -1;
        }
        /* Duplicate return node #10. Try simplifying control flow for better match */
        return -1;
    }
    return -1;
}
