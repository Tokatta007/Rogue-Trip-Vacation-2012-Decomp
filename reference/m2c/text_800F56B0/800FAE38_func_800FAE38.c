/* m2c reference for func_800FAE38 @ 800FAE38 (78 words). Generated; not compiled or validated. */
? func_801241AC(s32, s32, ?, ? *);                  /* extern */
? func_80125050(s32, ? *, ? *);                     /* extern */
? func_80125130(? *, s32 *);                        /* extern */
s32 func_801258F4(s32);                             /* extern */
? func_8016408C(s32 *);                             /* extern */

s32 func_800FAE38(void *arg0, ? arg1, s32 *arg2, s32 *arg3, s32 arg4) {
    ? sp10;
    ? sp20;
    s32 sp30;
    s32 temp_s0;
    s32 var_v0;
    s32 var_v0_2;

    if ((arg0 + 0x264)->unk33 != 0) {
        temp_s0 = arg0 + 0x1E4;
        func_801241AC(temp_s0, func_801258F4(arg4), arg1, &sp10);
        func_80125050(temp_s0, &sp10, &sp20);
        func_80125130(&sp20, &sp30);
        *arg2 = sp38 - (s16) arg0->unk738->unk18;
        func_8016408C(arg2);
        var_v0 = *arg2;
        if (var_v0 < 0) {
            var_v0 = -var_v0;
        }
        *arg2 = var_v0;
        *arg3 = sp30 - (s16) arg0->unk738->unk14;
        func_8016408C(arg3);
        var_v0_2 = *arg3;
        if (var_v0_2 < 0) {
            var_v0_2 = -var_v0_2;
        }
        *arg3 = var_v0_2;
        return 0;
    }
    return 1;
}
