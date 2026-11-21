/* m2c reference for func_8013C568 @ 8013C568 (45 words). Generated; not compiled or validated. */
s32 func_801250C8(s32, ?);                          /* extern */
s32 func_80133040();                                /* extern */
static s32 D_801C34EC = 0;

s32 func_8013C568(? arg1) {
    s32 temp_s0;
    s32 temp_v0;
    s32 var_s0;
    s32 var_v0;

    if (func_80133040() != 0) {
        temp_s0 = func_801250C8((D_801C34EC + 0x6220)->unk390 + 0x1C, arg1);
        temp_v0 = func_801250C8((D_801C34EC + 0x6224)->unk390 + 0x1C, arg1);
        var_v0 = temp_s0;
        if (temp_v0 < temp_s0) {
            var_s0 = temp_v0;
            goto block_4;
        }
    } else {
        var_s0 = func_801250C8((D_801C34EC + 0x6220)->unk390 + 0x1C, arg1);
block_4:
        var_v0 = var_s0;
    }
    return var_v0;
}
