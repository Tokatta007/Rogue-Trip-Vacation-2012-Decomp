/* m2c reference for func_80166C04 @ 80166C04 (51 words). Generated; not compiled or validated. */
s32 func_801555F8(?, ? *, ?);                       /* extern */
? func_8015828C(s32, ?, ?);                         /* extern */
? func_8015838C(?, u8 *);                           /* extern */
? func_80166E5C();                                  /* extern */
extern ? D_801F2E60;

s32 func_80166C04(? arg1, s32 arg2) {
    u8 sp10;
    s32 var_a0;
    s32 var_s0;
    s32 var_v0;

    var_v0 = 0;
    var_a0 = arg2 + 0x7FF;
    if (var_a0 < 0) {
        var_a0 = arg2 + 0xFFE;
    }
    var_s0 = 0;
loop_3:
    if (var_s0 == 0) {
        func_8015828C(var_a0 >> 0xB, arg1, 0x81);
        func_8015838C(0, &sp10);
        var_v0 = arg2;
        if (sp10 == 0x22) {
            var_s0 = 1;
        } else {
            do {
                func_80166E5C();
                var_v0 = 0;
            } while (func_801555F8(2, &D_801F2E60, 0) == 0);
        }
        goto loop_3;
    }
    return var_v0;
}
