/* m2c reference for func_8016DA7C @ 8016DA7C (96 words). Generated; not compiled or validated. */
? func_800F03B8(void *, ? *, s32, ? *, ? *);        /* extern */
? func_800F1684(void *, ? *, s32, ? *, ? *);        /* extern */
? func_8015CE18(void *, s32, s32, s32, void *);     /* extern */
? func_8016CED0();                                  /* extern */
? func_8016D9A0(?);                                 /* extern */
? func_8016DC60();                                  /* extern */
? func_801770C8(void *, ? *, s32);                  /* extern */
extern ? D_801BC2B8;
extern ? D_801BD3E8;
extern ? D_801BE6A8;
extern ? D_801BF968;
extern ? D_801C0C28;
extern s32 D_801C38D8;
extern ? D_801F3568;
static void *D_801C366C = (void *)0x1F800000;
static s32 D_801C3678 = 0;

void func_8016DA7C(void *arg0, ? arg1) {
    s32 var_a1;
    s32 var_v1;
    s32 var_v1_2;

    func_8016D9A0(arg1);
    func_8016DC60();
    D_801C38D8 = (s32) *(u16 *)0x1F800016;
    D_801C3678 = (s32) *(u16 *)0x1F800014;
    D_801C366C->unkA7 = 1;
    var_a1 = 0xE1000000;
    if (arg0->unk26 != 0) {
        var_a1 = 0xE1000200;
    }
    var_v1 = var_a1;
    if (arg0->unk27 != 0) {
        var_v1 |= 0x400;
    }
    D_801C366C->unkA8 = var_v1;
    D_801C366C->unk28 = &D_801F3568;
    D_801C366C->unk88 = 0;
    if (*(u16 *)0x1F800014 != 0) {
        func_800F1684(arg0, &D_801BE6A8, *(u16 *)0x1F800014 & 0xFFFF, &D_801BF968, &D_801C0C28);
    }
    func_8015CE18(D_801C366C + 0x60, arg0->unk27 & 0xFF, arg0->unk26 & 0xFF, arg0->unk24 & 0xFFFF, arg0 + 0x1C);
    var_v1_2 = 0xE1000000;
    D_801C366C->unk6F = 1;
    if (arg0->unk26 != 0) {
        var_v1_2 = 0xE1000200;
    }
    if (arg0->unk27 != 0) {
        var_v1_2 |= 0x400;
    }
    D_801C366C->unk70 = var_v1_2;
    D_801C366C->unk4C = &D_801BC2B8;
    func_800F03B8(arg0, &D_801BD3E8, D_801C38D8, &D_801BF968, &D_801C0C28);
    func_801770C8(arg0, &D_801BC2B8, D_801C366C->unk38);
    func_8016CED0();
}
