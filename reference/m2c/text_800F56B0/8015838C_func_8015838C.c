/* m2c reference for func_8015838C @ 8015838C (50 words). Generated; not compiled or validated. */
? func_801555B0(?, ?);                              /* extern */
? func_80158008(?);                                 /* extern */
s32 func_8015EBDC(?);                               /* extern */
extern ? D_801B4D38;

s32 func_8015838C(s32 arg0, ? arg1) {
    s32 var_s0;

loop_1:
    var_s0 = -1;
    if ((D_801B4D38.unk0 + 0x4B0) >= func_8015EBDC(-1)) {
        if ((D_801B4D38.unk-8 < 0) || ((D_801B4D38.unk-4 + 0x3C) < func_8015EBDC(-1))) {
            func_80158008(1);
            var_s0 = D_801B4D38.unk-1C;
        } else {
            var_s0 = D_801B4D38.unk-8;
        }
    }
    if ((arg0 == 0) && (var_s0 > 0)) {
        goto loop_1;
    }
    func_801555B0(1, arg1);
    return var_s0;
}
