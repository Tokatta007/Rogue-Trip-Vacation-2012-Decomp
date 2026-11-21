/* m2c reference for func_801619B8 @ 801619B8 (215 words). Generated; not compiled or validated. */
extern void *D_801BC068;
extern s32 *D_801BC06C;
extern s32 *D_801BC080;
extern ? D_801BC098;
extern ? D_801EC970;
extern u16 D_801EC972;
extern ? D_801EC980;
extern u8 *D_801EC984;
extern ? D_801EC990;
extern void *D_801EC994;

s32 func_801619B8(void) {
    s16 temp_a0;

    if (*D_801BC080 & 0x100) {
        *D_801BC080 = -0x101;
    }
    if (D_801BC068->unk4 & 0x38) {
        D_801BC068->unkA = (u16) (D_801BC068->unkA & 0xF7DF);
        D_801EC990.unk8 = 0;
        D_801EC990.unk0 = 0;
        D_801BC068->unkA = 0x50U;
        D_801BC068->unk8 = (u16) D_801EC970.unk0;
        D_801BC068->unkE = (u16) D_801EC970.unk6;
        D_801BC068->unkA = (u16) (D_801BC068->unkA | 0x10);
        DeliverEvent(0xF000000BU, 0x8000U);
        return 0;
    }
    if ((D_801EC990.unk0 != 0) && (D_801EC990.unk8 != 0) && (D_801BC068->unk4 & 2)) {
        temp_a0 = *(&D_801BC098 + ((u32) (D_801EC972 & 0x300) >> 7));
        switch (temp_a0) {                          /* irregular */
        case 1:
            D_801EC994->unk0 = (u8) D_801BC068->unk0;
            break;
        case 2:
            D_801EC994->unk0 = (u8) D_801BC068->unk0;
            D_801EC994->unk1 = (u8) D_801BC068->unk0;
            break;
        case 4:
            D_801EC994->unk0 = (s32) *D_801BC06C;
            break;
        case 8:
            D_801EC994->unk0 = (s32) *D_801BC06C;
            D_801EC994->unk4 = (s32) *D_801BC06C;
            break;
        }
        D_801EC990.unk4 = (s32) (D_801EC990.unk4 + temp_a0);
        D_801EC990.unk8 = (s32) (D_801EC990.unk8 - temp_a0);
        if (D_801EC990.unk8 == 0) {
            D_801EC990.unk0 = 0;
            D_801BC068->unkA = (u16) (D_801BC068->unkA & 0xF7DF);
            DeliverEvent(0xF000000BU, 0x400U);
        }
        D_801BC068->unkA = (u16) (D_801BC068->unkA ^ 2);
    }
    if ((D_801EC980.unk0 != 0) && (D_801BC068->unk4 & 1) && ((D_801BC068->unk4 & 0x80) == D_801EC980.unkC)) {
        if (D_801EC980.unk8 == 0) {
            D_801EC980.unk0 = 0;
            DeliverEvent(0xF000000BU, 0x800U);
        } else {
            D_801EC980.unkC = (s32) (D_801EC980.unkC ^ 0x80);
            D_801BC068->unk0 = (u8) *D_801EC984;
            D_801EC980.unk4 = (s32) (D_801EC980.unk4 + 1);
            D_801EC980.unk8 = (s32) (D_801EC980.unk8 - 1);
            D_801BC068->unkA = (u16) (D_801BC068->unkA | 0x400);
        }
    }
    D_801BC068->unkA = (u16) (D_801BC068->unkA | 0x10);
    return 0;
}
