/* m2c reference for func_80178910 @ 80178910 (60 words). Generated; not compiled or validated. */
s32 func_801788E4();                                /* extern */
extern s16 D_801C2DD8;
extern s16 D_801C2DDA;
extern u32 D_801C2DDC;
extern s32 D_801C2DE0;
extern s32 D_801C2DE4;
extern s32 D_801C2DE8;
extern s32 D_801C2DEC;
extern u32 D_801F508C;

void func_80178910(void) {
    s32 temp_a1;
    s32 temp_v0;
    u32 temp_hi;
    u32 temp_lo;
    u32 temp_v0_2;

    temp_v0 = func_801788E4();
    temp_a1 = temp_v0 - D_801C2DE8;
    temp_hi = MULTU_HI((temp_a1 + 0x89ED), 0xED93B971);
    D_801C2DE8 = temp_v0;
    D_801C2DEC = temp_v0;
    D_801C2DE4 = temp_a1;
    temp_v0_2 = temp_hi >> 0x10;
    D_801C2DD8 = (s16) temp_v0_2;
    if ((temp_v0_2 << 0x10) <= 0) {
        D_801C2DD8 = 3;
    }
    D_801C2DDC = (u32) D_801F508C / (u32) D_801C2DD8;
    if (D_801C2DD8 >= 6) {
        D_801C2DD8 = 5;
    }
    temp_lo = (u32) D_801F508C / (u32) D_801C2DD8;
    D_801C2DDA = (s16) temp_lo;
    if ((temp_lo << 0x10) <= 0) {
        D_801C2DDA = 1;
    }
    D_801C2DE0 += 1;
}
