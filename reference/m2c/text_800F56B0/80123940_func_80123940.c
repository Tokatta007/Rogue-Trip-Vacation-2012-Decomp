/* m2c reference for func_80123940 @ 80123940 (74 words). Generated; not compiled or validated. */
s32 func_80123A68(s32, void *, ?, s32, ? *, s32 *); /* extern */
s32 func_80123E88(s32, ?, s32, ? *, s32);           /* extern */
? func_8014B7D8(s32, ?, ? *);                       /* extern */
extern s32 D_801C37A4;

s32 func_80123940(s32 arg0, void *arg1, ? arg2, ? arg3, s32 arg4) {
    ? sp18;
    s32 sp20;
    s32 var_a0;
    s32 var_a1;

    func_8014B7D8(arg0 + 0x496C, arg2, &sp18);
    if (D_801C37A4 != 0) {
        sp20 = 0;
        var_a0 = func_80123A68(arg0, arg1, arg3, arg4, &sp18, &sp20);
        var_a1 = 0;
        if (var_a0 == 0) {
            if ((arg1->unk7B8 == 1) || (arg1->unk82A == 0)) {
                var_a1 = 1;
            }
            if (var_a1 != 0) {
                var_a0 = func_80123E88(arg0, arg3, arg4, &sp18, sp20);
            }
        }
    } else {
        var_a0 = func_80123E88(arg0, arg3, arg4, &sp18, 0);
        if (var_a0 == 0) {
            var_a0 = func_80123A68(arg0, arg1, arg3, arg4, &sp18, &sp20);
        }
    }
    return var_a0;
}
