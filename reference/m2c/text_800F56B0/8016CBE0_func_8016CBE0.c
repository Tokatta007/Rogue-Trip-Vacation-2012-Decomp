/* m2c reference for func_8016CBE0 @ 8016CBE0 (96 words). Generated; not compiled or validated. */
? func_800F03B8(void *, ? *, s32, ? *, ? *);        /* extern */
? func_8015CE18(void *, s32, s32, s32, void *);     /* extern */
? func_8016D9A0(s32);                               /* extern */
? func_801770C8(void *, ? *, s32);                  /* extern */
s16 func_80178A1C();                                /* extern */
s32 func_8017985C();                                /* extern */
extern ? D_801BC2B8;
extern ? D_801BD3E8;
extern ? D_801BF968;
extern ? D_801C0C28;
extern s32 D_801C38D8;
extern s32 D_801C38DC;
static s32 D_801C3654 = 0x12C0;
static s32 D_801C3658[2] = { 0x12C0, 0x1F800000 };
static void *D_801C366C = (void *)0x1F800000;
static u8 D_801C3685 = 0;
static u8 D_801C3687 = 0;

void func_8016CBE0(void *arg0, void *arg1, s32 arg2) {
    s32 var_a1;
    s32 var_v1;

    if (arg1->unk0 != 0) {
        D_801C3654 = *D_801C3658;
        D_801C38DC = (s32) func_80178A1C();
        func_8016D9A0(func_8017985C());
        if (D_801C3687 == 0) {
            D_801C3685 = 1;
        }
        D_801C366C->unk28 = (s32) D_801C3685;
        if (arg1->unkE == 0) {
            D_801C3685 = 0;
            return;
        }
        D_801C3685 = 0;
        D_801C366C->unk28 = 0;
        D_801C38D8 = D_801C366C->unk3C;
        func_8015CE18(D_801C366C + 0x60, arg0->unk27 & 0xFF, arg0->unk26 & 0xFF, arg0->unk24 & 0xFFFF, arg0 + 0x1C);
        var_a1 = 0xE1000000;
        D_801C366C->unk6F = 1;
        if (arg0->unk26 != 0) {
            var_a1 = 0xE1000200;
        }
        var_v1 = var_a1;
        if (arg0->unk27 != 0) {
            var_v1 |= 0x400;
        }
        D_801C366C->unk70 = var_v1;
        D_801C366C->unk4C = &D_801BC2B8;
        D_801C366C->unk88 = 0;
        D_801C366C->unk40 = 0x46;
        if (arg2 != 0) {
            func_800F03B8(arg0, &D_801BD3E8, D_801C38D8, &D_801BF968, &D_801C0C28);
            func_801770C8(arg0, &D_801BC2B8, D_801C366C->unk38);
        }
    }
}
