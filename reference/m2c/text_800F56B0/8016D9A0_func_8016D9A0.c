/* m2c reference for func_8016D9A0 @ 8016D9A0 (55 words). Generated; not compiled or validated. */
s32 func_8016415C();                                /* extern */
s32 func_801793C0(void *);                          /* extern */
extern ? D_801BC2B8;
extern ? D_801BD3E8;
extern ? D_801BF954;
extern ? D_801BF968;
extern ? D_801C0C28;
extern ? D_801C1EE8;
extern ? D_801C2438;
extern s32 D_801C38E0;
extern ? D_801F3518;
extern ? D_801F3568;
static s32 D_801C3654 = 0x12C0;
static void *D_801C366C = (void *)0x1F800000;
static s32 D_801C3684;                              /* type too large by 3; unable to generate initializer: not enough data */

void func_8016D9A0(void) {
    D_801C366C->unk0 = &D_801BC2B8;
    D_801C366C->unk4 = &D_801C1EE8;
    D_801C366C->unkC = &D_801F3518;
    D_801C366C->unk10 = (s32) D_801C3654;
    D_801C366C->unk18 = &D_801BF968;
    D_801C366C->unk1C = &D_801C0C28;
    D_801C366C->unk20 = &D_801BD3E8;
    D_801C366C->unk24 = (s32) D_801C3684;
    D_801C366C->unk28 = (void *) (&D_801BD3E8 + 0x12AC);
    D_801C366C->unk2C = &D_801C2438;
    D_801C366C->unk30 = (s32) D_801C38E0;
    D_801C366C->unk34 = &D_801BF954;
    D_801C366C->unk44 = (void *) (&D_801BF954 - 0x12AC);
    D_801C366C->unk54 = &D_801F3568;
    D_801C366C->unk58 = func_801793C0(D_801C366C);
    D_801C366C->unk70 = func_8016415C();
}
