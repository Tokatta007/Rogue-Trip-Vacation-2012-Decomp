/* m2c reference for func_8012E3AC @ 8012E3AC (54 words). Generated; not compiled or validated. */
s32 func_8013B69C(?);                               /* extern */
extern s32 D_801C37DC;
extern s32 D_801C37E0;
extern s32 D_801C37E4;
extern s8 D_801C37E8;
extern s8 D_801C37E9;
extern ? D_801CB990;
static s32 D_801C3348 = 0x1F4;
static s32 D_801C334C = 0x7D0;
static s32 D_801C3350 = 1;
static void *D_801C34EC = NULL;

void func_8012E3AC(void) {
    s32 *var_v0;
    s32 temp_v1;
    s32 var_v0_2;
    s32 var_v1;

    var_v1 = 0x12;
    var_v0 = &D_801CB990 + 0x48;
    D_801C37DC = 0;
    D_801C37E8 = 0;
    D_801C37E9 = 0;
    D_801C37E0 = 0;
    D_801C37E4 = 0;
    do {
        *var_v0 = 2;
        var_v1 -= 1;
        var_v0 -= 4;
    } while (var_v1 >= 0);
    temp_v1 = D_801C34EC->unk7D4;
    switch (temp_v1) {                              /* irregular */
    case 0:
        D_801C3348 = 0xFA;
        var_v0_2 = 0x3E8;
        break;
    case 2:
        D_801C3348 = 0x2EE;
        var_v0_2 = 0xBB8;
        break;
    default:
        D_801C3348 = 0x1F4;
        var_v0_2 = 0x7D0;
        break;
    }
    D_801C334C = var_v0_2;
    if (func_8013B69C(2) >= 2) {
        D_801C3348 = (s32) D_801C3348 >> 1;
        D_801C334C = (s32) D_801C334C >> 1;
    }
    D_801C3350 = 1;
}
