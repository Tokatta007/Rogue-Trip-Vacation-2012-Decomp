/* m2c reference for func_8013E598 @ 8013E598 (37 words). Generated; not compiled or validated. */
extern u16 D_801C385C;
extern s16 D_801C385E;
extern ? D_801E3F78;

void func_8013E598(u16 *arg0) {
    s32 temp_v1;

    if ((u32) ((u16) *arg0 >> 4) < 0x488U) {
        (((((u16) *arg0 >> 4) - 0x474) * 0x28) + &D_801E3F78)->unk4 = arg0;
        D_801C385C += 1;
    } else if (D_801C385E < 7) {
        temp_v1 = D_801C385E + 9;
        D_801C385E = (u16) D_801C385E + 1;
        ((temp_v1 * 0x28) + &D_801E3F78)->unk4 = arg0;
    }
}
