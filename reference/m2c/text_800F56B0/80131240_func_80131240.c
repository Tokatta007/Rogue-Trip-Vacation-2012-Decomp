/* m2c reference for func_80131240 @ 80131240 (111 words). Generated; not compiled or validated. */
? func_80131B40(s32, s32, s16, s32);                /* extern */
s32 func_80131BEC(s32, s32);                        /* extern */
? func_8015C008(?);                                 /* extern */
? func_8015C2B4(s16 *, s32);                        /* extern */
extern s32 D_801C37EC;

s32 func_80131240(s16 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s16 sp10;
    s16 sp12;
    s16 sp14;
    u16 sp16;
    s32 sp18;
    s32 sp1C;
    s32 sp20;
    s32 temp_s4;
    s32 temp_s6;
    s32 var_s0;
    s32 var_s1;
    s32 var_s2;
    s32 var_s3;
    s32 var_s5;
    void *temp_v0;

    var_s2 = 0;
    var_s5 = 0;
    sp18 = 0;
    sp1C = ((arg4 * 0x1A) + arg3) * 0x14;
loop_1:
    var_s3 = 0;
    if (var_s2 == 0) {
        temp_s6 = var_s5 + 0x100;
        sp20 = var_s5 < temp_s6;
loop_3:
        var_s1 = var_s5;
        if ((sp20 != 0) && (var_s2 == 0)) {
            temp_s4 = var_s3 + 0x100;
loop_6:
            var_s0 = var_s3;
            if ((var_s3 < temp_s4) && (var_s2 == 0)) {
loop_8:
                if (func_80131BEC(var_s0, var_s1) != 0) {
                    func_80131B40(var_s0, var_s1, arg0, arg1);
                    var_s2 = 1;
                    sp18 = 1;
                    temp_v0 = sp1C + D_801C37EC;
                    temp_v0->unkC = var_s0;
                    temp_v0->unk10 = var_s1;
                    sp10 = (s16) var_s0;
                    sp12 = (s16) var_s1;
                    sp14 = arg0;
                    sp16 = (u16) arg1;
                    func_8015C2B4(&sp10, arg2);
                    func_8015C008(0);
                }
                var_s0 += arg0;
                if ((var_s0 < temp_s4) && (var_s2 == 0)) {
                    goto loop_8;
                }
            }
            var_s1 += arg1;
            if ((var_s1 < temp_s6) && (var_s2 == 0)) {
                goto loop_6;
            }
        }
        var_s3 += 0x100;
        if ((var_s3 < 0x400) && (var_s2 == 0)) {
            goto loop_3;
        }
    }
    var_s5 += 0x100;
    if ((var_s5 < 0x200) && (var_s2 == 0)) {
        goto loop_1;
    }
    return sp18;
}
