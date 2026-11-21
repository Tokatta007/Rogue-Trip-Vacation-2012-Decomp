/* m2c reference for func_80144EE8 @ 80144EE8 (68 words). Generated; not compiled or validated. */
? func_801241AC(s32, ?, ?, ? *);                    /* extern */
? func_80125050(s32, ? *, s32 *);                   /* extern */
? func_80125130(s32 *, s32 *);                      /* extern */
? func_80144FF8(void *, s32);                       /* extern */
? func_8016408C(s32 *);                             /* extern */

s32 func_80144EE8(void *arg0, ? arg1, ? arg2, s32 arg3) {
    s32 sp10;
    s32 sp18;
    ? sp20;
    s32 sp30;
    s32 temp_s1;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;

    temp_s1 = arg0 + 0x1E4;
    func_801241AC(temp_s1, arg2, arg1, &sp20);
    func_80125050(temp_s1, &sp20, &sp10);
    func_80125130(&sp10, &sp30);
    sp18 = sp38 - (s16) arg0->unk738->unk18;
    func_8016408C(&sp18);
    sp10 = sp30 - (s16) arg0->unk738->unk14;
    func_8016408C(&sp10);
    var_v0_2 = sp18;
    if (var_v0_2 < 0) {
        var_v0_2 = -var_v0_2;
    }
    var_v0 = 0;
    if (var_v0_2 < arg3) {
        var_v0_3 = sp10;
        if (var_v0_3 < 0) {
            var_v0_3 = -var_v0_3;
        }
        var_v0 = 0;
        if (var_v0_3 < arg3) {
            func_80144FF8(arg0, sp38);
            var_v0 = 1;
        }
    }
    return var_v0;
}
