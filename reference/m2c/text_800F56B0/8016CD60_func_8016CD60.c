/* m2c reference for func_8016CD60 @ 8016CD60 (35 words). Generated; not compiled or validated. */
? func_80166234(? *, s32, ? *, ? *);                /* extern */
? func_8016D9A0(s32);                               /* extern */
? func_8016EB48(s32);                               /* extern */
s32 func_8017985C();                                /* extern */
extern ? D_801BD3E8;
extern ? D_801BF968;
extern ? D_801C0C28;
extern s32 D_801C38D8;
static s32 D_801C3654 = 0x12C0;
static s32 D_801C3658[2] = { 0x12C0, 0x1F800000 };
static ? D_801C3685;                                /* unable to generate initializer: unknown type */

void func_8016CD60(s32 arg0) {
    s32 temp_a1;

    D_801C3685.unk0 = 1;
    D_801C3685.unk-1 = 1;
    D_801C3654 = *D_801C3658;
    func_8016D9A0(func_8017985C());
    func_8016EB48(arg0);
    D_801C3685.unk-1 = 0;
    D_801C3685.unk0 = 0;
    temp_a1 = *(u16 *)0x1F800016 & 0xFFFF;
    D_801C38D8 = temp_a1;
    func_80166234(&D_801BD3E8, temp_a1, &D_801BF968, &D_801C0C28);
}
