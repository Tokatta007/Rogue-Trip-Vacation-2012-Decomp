/* m2c reference for func_80136CFC @ 80136CFC (106 words). Generated; not compiled or validated. */
? func_8011EDA0(s32);                               /* extern */
s32 func_80132F8C();                                /* extern */
? func_8013B928(s32);                               /* extern */
? func_8015FB80(?, s16, s16);                       /* extern */
? func_80167844(s32, ? *);                          /* extern */
? func_80170388(s32);                               /* extern */
? func_8017A470();                                  /* extern */
? func_8017CA2C();                                  /* extern */
extern ? D_801B399C;
static s32 D_801C34E8 = 0;
static s32 D_801C34EC = 0;
static s32 D_801C34F4 = 0;
static void *D_801C34F8 = NULL;
static s32 D_801C36C0 = 0;
static s32 D_801C36CC = 0;
static s32 D_801C36D8 = 0;
static s32 D_801C36DC = 0;
static ? D_800F3C78;                                /* unable to generate initializer: unknown type; const */

void func_80136CFC(void) {
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a1;
    s32 var_v0;
    s32 var_v1_3;
    u8 var_v1;
    void *temp_v0;
    void *var_v0_2;
    void *var_v1_2;

    func_8011EDA0(D_801C34EC);
    func_8017A470();
    func_8013B928(D_801C34F4);
    func_8017CA2C();
    temp_v0 = D_801C34F8->unk8;
    (temp_v0 + 8)->unk4(D_801C34F8 + (s16) temp_v0->unk8);
    func_80170388(D_801C34E8);
    func_80167844(func_80132F8C(), &D_800F3C78);
    var_a1 = D_801C36D8;
    D_801B399C.unk1 = 0x58;
    D_801B399C.unk2 = 0x39U;
    D_801B399C.unk0 = 1;
    D_801B399C.unk8 = 1;
    D_801B399C.unk9 = 1;
    if (var_a1 > 0x58) {
        var_a1 = 0x58;
    }
    D_801C36C0 = var_a1;
    var_a0 = 0x58;
    if (D_801C36DC > 0x58) {
        var_a0 = D_801C36DC;
    }
    D_801C36C0 = var_a0;
    func_8015FB80(0, (s16) D_801C36C0, (s16) D_801C36C0);
    var_a0_2 = D_801C36D8;
    var_v1 = D_801B399C.unk2;
    if ((s32) var_v1 < var_a0_2) {
        var_a0_2 = (s32) var_v1;
    }
    D_801C36CC = var_a0_2;
    if ((s32) var_v1 < D_801C36DC) {
        var_v1 = (u8) D_801C36DC;
    }
    D_801C36CC = (s32) var_v1;
    var_v0 = 1;
    var_v1_2 = &D_801B399C + 1;
    do {
        var_v1_2->unkA = 0;
        var_v0 -= 1;
        var_v1_2 -= 1;
    } while (var_v0 >= 0);
    var_v1_3 = 4;
    var_v0_2 = &D_801B399C + 4;
    do {
        var_v0_2->unkC = 0;
        var_v1_3 -= 1;
        var_v0_2 -= 1;
    } while (var_v1_3 >= 0);
    D_801B399C.unk4 = 0;
    D_801B399C.unk5 = 0;
    D_801B399C.unk6 = 0;
    D_801B399C.unk7 = 0;
}
