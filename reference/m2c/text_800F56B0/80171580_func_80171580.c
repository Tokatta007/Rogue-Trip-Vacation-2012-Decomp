/* m2c reference for func_80171580 @ 80171580 (54 words). Generated; not compiled or validated. */
? func_8017173C(void *, s16);                       /* extern */
? func_8017222C(s16);                               /* extern */
? func_801761FC(s16, ?);                            /* extern */
? func_80176BEC(s16, u16 *);                        /* extern */

void func_80171580(void *arg0, ? arg1, ? arg2, s32 arg3, s32 arg4) {
    u16 sp10;
    s16 var_s1;
    void *var_s2;

    var_s1 = 0;
    var_s2 = arg0;
loop_1:
    if (var_s1 < 0x18) {
        if ((var_s2->unk0 == arg3) && ((arg4 == -1) || (var_s2->unk4 == arg4))) {
            func_80176BEC(var_s1, &sp10);
            if (sp10 < 5U) {
                func_801761FC(var_s1, 5);
            }
            func_8017222C(var_s1);
            func_8017173C(arg0, var_s1);
        }
        var_s2 += 0x18;
        var_s1 += 1;
        goto loop_1;
    }
}
