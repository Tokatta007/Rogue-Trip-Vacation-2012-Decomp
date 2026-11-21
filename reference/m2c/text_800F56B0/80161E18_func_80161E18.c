/* m2c reference for func_80161E18 @ 80161E18 (36 words). Generated; not compiled or validated. */
extern void *D_801BC068;
extern ? D_801BC070;
extern void *D_801BC080;
extern u16 D_801EC972;
extern ? D_801EC980;
extern ? D_801EC990;

s32 func_80161E18(void) {
    D_801BC080->unk4 = (s32) (D_801BC080->unk4 & ~0x100);
    D_801BC068->unkA = (u16) (D_801BC068->unkA | 0x50);
    D_801BC068->unkA = (u16) D_801EC972;
    SysDeqIntRP(3, &D_801BC070);
    D_801EC990.unk0 = 0;
    D_801EC980.unk0 = (s32) D_801EC990.unk0;
    D_801EC990.unk8 = 0;
    D_801EC980.unk8 = (s32) D_801EC990.unk8;
    return 0;
}
