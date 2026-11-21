/* m2c reference for func_80161D14 @ 80161D14 (61 words). Generated; not compiled or validated. */
extern void *D_801BC068;
extern ? D_801BC070;
extern void *D_801BC080;
extern ? D_801EC968;
extern s32 D_801EC978;
extern ? D_801EC980;
extern ? D_801EC990;

s32 func_80161D14(void) {
    D_801EC968.unkA = 5U;
    D_801EC968.unk8 = 0xCEU;
    D_801EC968.unkE = 0xD8U;
    D_801BC068->unkA = 0x50U;
    D_801BC068->unk8 = (u16) D_801EC968.unk8;
    D_801BC068->unkE = (u16) D_801EC968.unkE;
    D_801BC068->unkA = (u16) (D_801BC068->unkA | 0x10);
    D_801BC068->unkA = (u16) D_801EC968.unkA;
    SysDeqIntRP(3, &D_801BC070);
    SysEnqIntRP(3, &D_801BC070);
    D_801BC080->unk4 = (s32) (D_801BC080->unk4 | 0x100);
    D_801EC990.unk0 = 0;
    D_801EC980.unk0 = (s32) D_801EC990.unk0;
    D_801EC990.unk4 = 0;
    D_801EC980.unk4 = (s32) D_801EC990.unk4;
    D_801EC990.unk8 = 0;
    D_801EC978 = 0;
    D_801EC980.unk8 = (s32) D_801EC990.unk8;
    return 0;
}
