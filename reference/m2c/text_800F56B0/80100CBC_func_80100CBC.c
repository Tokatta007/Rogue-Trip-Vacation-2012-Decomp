/* m2c reference for func_80100CBC @ 80100CBC (97 words). Generated; not compiled or validated. */
s32 func_80100E40(s32);                             /* extern */
s32 func_80100E48(s32);                             /* extern */
s32 func_80100E50(s32);                             /* extern */
s32 func_80100E58(s32);                             /* extern */
s32 func_80100E60(s32);                             /* extern */
s32 func_80100E68(s32);                             /* extern */
s32 func_80100E70(s32);                             /* extern */
s32 func_80100E78(s32);                             /* extern */
s32 func_80100E80(s32);                             /* extern */
s32 func_80100E88(s32);                             /* extern */
s32 func_80100E90(s32);                             /* extern */
s32 func_80100E98(s32);                             /* extern */
? func_80100EA0(s32);                               /* extern */
? func_80168640(? *, ?, ?, ?);                      /* extern */
static ? D_801C3240;                                /* unable to generate initializer: unknown type */
static void *D_801C34EC = NULL;

s32 func_80100CBC(s32 arg0) {
    ? sp10;
    ? sp14;
    ? var_s1;
    s32 var_s0;
    u32 temp_v1;

    sp10 = (unaligned s32) D_801C3240.unk0;
    sp14 = (unaligned s32) D_801C3240.unk4;
    temp_v1 = D_801C34EC->unk12688;
    var_s1 = -0x60;
    switch (temp_v1) {
    case 2:
        var_s0 = func_80100E50(arg0);
        break;
    case 3:
        var_s0 = func_80100E58(arg0);
        break;
    case 1:
        var_s0 = func_80100E48(arg0);
        break;
    case 6:
        var_s0 = func_80100E70(arg0);
        break;
    case 5:
        var_s0 = func_80100E68(arg0);
        break;
    case 7:
        var_s1 = 0;
        var_s0 = func_80100E78(arg0);
        break;
    case 4:
        var_s0 = func_80100E60(arg0);
        break;
    case 8:
        var_s1 = -0xCF0;
        var_s0 = func_80100E80(arg0);
        break;
    case 9:
        var_s1 = 0;
        var_s0 = func_80100E88(arg0);
        break;
    case 10:
        var_s1 = -0xFA0;
        var_s0 = func_80100E90(arg0);
        break;
    case 11:
        var_s1 = -0x12C0;
        var_s0 = func_80100E98(arg0);
        break;
    default:
        func_80100EA0(arg0);
        /* fallthrough */
    case 0:
        var_s0 = func_80100E40(arg0);
        break;
    }
    func_80168640(&sp10, var_s1, 3, 1);
    return var_s0;
}
