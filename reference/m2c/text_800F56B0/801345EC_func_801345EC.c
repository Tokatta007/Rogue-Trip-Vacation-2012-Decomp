/* m2c reference for func_801345EC @ 801345EC (109 words). Generated; not compiled or validated. */
? func_8012D130();                                  /* extern */
? func_80136AAC(?);                                 /* extern */
? func_8013841C(? *, ? *, ? *);                     /* extern */
? func_8013B478(?, ?);                              /* extern */
? func_8015BF70(?);                                 /* extern */
? func_80166D2C(?, ? *);                            /* extern */
u32 func_801F7D80(?);                               /* extern */
extern s32 D_801B38E4;
extern ? D_801B394C;
extern ? D_801B3960;
extern s8 D_801B399F;
extern ? D_801B39B0;
extern ? D_801B3A14;
extern s32 D_801C3830;
extern s32 D_801C3834;
extern s32 D_801C383C;
extern s32 D_801C3840;
static s32 D_801C32EC = 0;
static void *D_801C34EC = NULL;
static s32 D_801C34FC = 0;
static ? D_800F39C8;                                /* unable to generate initializer: unknown type; const */
static ? D_800F39D8;                                /* unable to generate initializer: unknown type; const */
static ? D_800F39E8;                                /* unable to generate initializer: unknown type; const */

s32 func_801345EC(void) {
    s32 var_s0;
    s32 var_s0_2;
    s32 var_v0;
    u32 temp_v0;

    func_8013841C(&D_800F39C8, &D_801B39B0);
    func_8013841C((? *)0x800BECE0, &D_800F39D8, &D_801B3A14);
    func_8015BF70(1);
    D_801C3840 = 0x10;
    D_801C383C = 0;
    D_801C3834 = 0xB;
    D_801C3830 = 0;
    if (D_801C32EC != 0) {
        func_8012D130();
    }
    temp_v0 = func_801F7D80(0);
    switch (temp_v0) {
    case 0:
        var_s0 = 2;
block_6:
        func_80166D2C(0x800201D0, &D_800F39E8);
        func_80136AAC(0x800201D0);
        var_v0 = var_s0;
        break;
    case 1:
        var_s0 = 3;
        goto block_6;
    case 2:
        var_s0_2 = 5;
block_11:
        var_v0 = var_s0_2;
        break;
    case 3:
        var_s0_2 = 6;
        goto block_11;
    case 15:
        D_801C34EC->unk7D8 = 0;
        D_801C34EC->unk12688 = (s32) D_801B3960.unk4;
        D_801B399F = 1;
        D_801B3960.unk5 = 1;
        D_801B3960.unk6 = 1;
        D_801B38E4 = rand() % (s32) D_801C3834;
        func_8013B478(0, 0x50);
        var_v0 = 0xB;
        break;
    default:
        var_s0_2 = 1;
        goto block_11;
    }
    *((D_801C34FC * 4) + &D_801B394C) = 1;
    D_801C34FC += 1;
    return var_v0;
}
