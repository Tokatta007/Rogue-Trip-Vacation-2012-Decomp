/* m2c reference for func_80174FFC @ 80174FFC (18 words). Generated; not compiled or validated. */
extern void *D_801BC000;

s32 func_80174FFC(s32 arg0) {
    s32 var_a1;

    var_a1 = 0;
    if (arg0 >= 0) {
        var_a1 = arg0;
        if (var_a1 >= 0x40) {
            var_a1 = 0x3F;
        }
    }
    D_801BC000->unk1AA = (u16) ((D_801BC000->unk1AA & 0xC0FF) | ((var_a1 & 0x3F) << 8));
    return var_a1;
}
