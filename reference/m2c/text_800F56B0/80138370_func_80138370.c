/* m2c reference for func_80138370 @ 80138370 (43 words). Generated; not compiled or validated. */
? func_801593DC(s32, ? *);                          /* extern */
? func_8015C008(?);                                 /* extern */
? func_8015C2B4(void *, s32);                       /* extern */
extern u16 D_801C3828;
extern s16 D_801C382A;
extern ? D_801C382C;
extern u16 D_801C382E;
extern ? D_801CC6F0;

void func_80138370(s32 arg0, s32 arg1, s16 arg2, s16 arg3) {
    func_8015C008(0);
    func_801593DC(arg1 + 4, &D_801CC6F0);
    D_801C382C.unk-4 = arg2;
    D_801C382E = D_801CC6F0.unkA;
    D_801C382C.unk0 = (u16) D_801CC6F0.unk8;
    if (arg0 != 0) {
        D_801C3828 += 0x140;
    }
    D_801C382A = arg3;
    func_8015C2B4(&D_801C382C - 4, D_801CC6F0.unkC);
    func_8015C008(0);
}
