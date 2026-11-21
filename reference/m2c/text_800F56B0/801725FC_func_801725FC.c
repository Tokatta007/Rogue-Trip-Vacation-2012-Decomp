/* m2c reference for func_801725FC @ 801725FC (120 words). Generated; not compiled or validated. */
extern ? D_801F4346;
extern ? D_801F4850;
extern ? D_801F4876;
extern ? D_801F4878;
extern ? D_801F487A;
extern s32 D_801F49F8;
extern u16 D_801F4AD8;
extern s32 D_801F4B24;
extern s32 D_801F4B30;
extern ? D_801F4B50;
extern ? D_801F4B54;

void func_801725FC(void) {
    s32 *var_a3;
    s32 var_t0;
    s32 var_v1;
    u16 var_v0;

    var_t0 = 0;
    var_a3 = &D_801F49F8;
    D_801F4B54.unk0 = (s16) (D_801F4B54.unk-2 * 8);
    D_801F4B54.unk2 = (s16) ((s8) D_801F4B54.unk-10 + (D_801F4B54.unk-15 * 0x10));
    *(&D_801F4346 + (D_801F4B54.unk-2 * 0x36)) = 0x7FFF;
    do {
        var_t0 += 1;
        *var_a3 &= ~(1 << *(&D_801F4B54 - 2));
        var_a3 += 4;
    } while (var_t0 < 0x10);
    if ((D_801F4B50.unk0 & 1) > 0) {
        var_v0 = ((((s32) ((s16) D_801F4B50.unk0 - 1) / 2) * 0x10) + D_801F4B24)->unkC;
        var_v1 = D_801F4B50.unk4 * 2;
    } else {
        var_v0 = ((((s32) ((s16) D_801F4B50.unk0 - 1) / 2) * 0x10) + D_801F4B24)->unkE;
        var_v1 = D_801F4B50.unk4 * 2;
    }
    *(&D_801F4876 + var_v1) = var_v0;
    *(&D_801F4850 + D_801F4B50.unk2) = *(&D_801F4850 + D_801F4B50.unk2) | 8;
    *(&D_801F4878 + (D_801F4B54.unk0 * 2)) = ((((D_801F4B54.unk-15 * 0x10) + (s8) D_801F4B54.unk-10) << 5) + D_801F4B30)->unk10;
    *(&D_801F487A + (D_801F4B54.unk0 * 2)) = ((((D_801F4B54.unk-15 * 0x10) + (s8) D_801F4B54.unk-10) << 5) + D_801F4B30)->unk12 + D_801F4AD8;
    *(&D_801F4850 + D_801F4B54.unk-2) = *(&D_801F4850 + D_801F4B54.unk-2) | 0x30;
}
