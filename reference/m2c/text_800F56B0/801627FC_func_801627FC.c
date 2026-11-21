/* m2c reference for func_801627FC @ 801627FC (51 words). Generated; not compiled or validated. */
extern s32 D_801BC0F8;
extern s32 D_801BC0FC;
extern void *D_801BC11C;
extern ? D_801EC9B0;
extern ? D_801EC9C0;
extern ? (*D_801EC9F0)(s32);

void func_801627FC(void) {
    D_801BC0FC = 0;
    EnterCriticalSection();
    SysDeqIntRP(2, &D_801EC9B0);
    SysEnqIntRP(2, &D_801EC9B0);
    D_801BC11C->unk0 = -2;
    D_801BC11C->unk4 = (s32) (D_801BC11C->unk4 | 1);
    ChangeClearRCnt(3, 0);
    ExitCriticalSection();
    D_801EC9F0(D_801BC0F8);
    D_801EC9F0(D_801BC0F8 + 0xF0);
    D_801EC9C0.unk4 = 0;
    D_801EC9C0.unk0 = 0;
    D_801BC0FC = 1;
}
