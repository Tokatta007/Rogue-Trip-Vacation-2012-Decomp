/* m2c reference for func_801669CC @ 801669CC (85 words). Generated; not compiled or validated. */
? func_80154AFC(? *, ? *, s32);                     /* extern */
s32 func_801555F8(?, s8 *, ? *);                    /* extern */
s32 func_8015735C(s8 *, ? *);                       /* extern */
? func_8015EBDC(?);                                 /* extern */
? func_80166E5C();                                  /* extern */
extern s8 D_801F2E60;
static ? D_801C3628;                                /* unable to generate initializer: unknown type */

s32 func_801669CC(s32 arg0, s32 *arg1) {
    ? sp10;
    s8 sp38;
    ? sp40;
    s32 var_s1;
    s32 var_s2;
    s32 var_s4;
    s32 var_v0;
    s32 var_v0_2;

    var_s4 = 1;
    var_s1 = 0;
    func_80154AFC(&sp10, "\\\\%s;1", arg0);
    func_80166E5C();
    sp38 = 0x80;
    func_801555F8(0xF, &sp38, &sp40);
    var_s2 = 0;
    sp38 = 0x80;
    do {

    } while (func_801555F8(0xE, &sp38, NULL) == 0);
    var_v0 = 0 & 0xFF;
    if (!(sp41 & 0x80)) {
        func_8015EBDC(3);
        var_v0 = 0 & 0xFF;
    }
    var_v0_2 = 1 & 0xFF;
    if (var_v0 == 0) {
        do {
            if (func_8015735C(&D_801F2E60, &sp10) != 0) {
                var_s1 = 1;
                var_s4 = 0;
            } else if (var_s2 >= 0x12C) {
                var_s1 = 1;
            } else {
                var_s2 += 1;
                func_8015EBDC(0);
            }
            var_v0_2 = var_s4 & 0xFF;
        } while (!(var_s1 & 0xFF));
    }
    if (var_v0_2 != 0) {
        *arg1 = 0;
        return 0;
    }
    *arg1 = D_801F2E60.unk4;
    do {
        func_80166E5C();
    } while (func_801555F8(2, &D_801F2E60, NULL) == 0);
    return 1;
}
