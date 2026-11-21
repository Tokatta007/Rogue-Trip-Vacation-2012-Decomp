/* m2c reference for func_80127148 @ 80127148 (58 words). Generated; not compiled or validated. */
? func_80167DA0(?, u8 *, ?);                        /* extern */
extern ? D_8018403C;
static s32 D_801C32DC = 0;

void func_80127148(s32 arg0, ? arg1) {
    u8 sp10;
    s8 var_v0;
    void *var_v1;

    func_80167DA0(arg1, &sp10, 1);
    var_v1 = (arg0 * 8) + &D_8018403C;
    var_v1->unk0 = sp10;
    var_v1->unk1 = sp11;
    var_v1->unk2 = sp14;
    var_v1->unk4 = sp16;
    var_v1->unk6 = (s8) (sp12 >> 1);
    switch (sp12) {                                 /* irregular */
    case 0xFF:
        var_v0 = 5;
        break;
    case 0x7F:
        var_v0 = 6;
        break;
    case 0x3F:
        var_v0 = 7;
        break;
    default:
        var_v1 = (arg0 * 8) + &D_8018403C;
        var_v0 = 8;
        break;
    }
    var_v1->unk7 = var_v0;
    D_801C32DC += 1;
}
