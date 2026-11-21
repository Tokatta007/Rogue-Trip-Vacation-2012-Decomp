/* m2c reference for func_80122F24 @ 80122F24 (77 words). Generated; not compiled or validated. */
? func_80125050(s32, ?, s32 *);                     /* extern */
s32 func_801250C8(s32 *, ?);                        /* extern */
s32 func_8015A62C(s32, s32);                        /* extern */
? func_8016408C(s32 *);                             /* extern */

s32 func_80122F24(s32 arg0, ? arg1, s32 arg2, s32 *arg3) {
    s32 sp10;
    s32 sp20;
    s32 temp_s5;
    s32 var_s0;
    s32 var_s3;
    s32 var_v0;
    void *temp_a0;
    void *temp_v0;
    void *var_s2;

    var_s0 = 0;
    temp_a0 = arg0 + 0x6220;
    var_s3 = 0;
    var_s2 = temp_a0;
    temp_s5 = temp_a0->unk3CC;
loop_1:
    if ((var_s3 < temp_s5) && (var_s0 == 0)) {
        temp_v0 = var_s2->unk390;
        func_80125050(temp_v0 + 0x1C, arg1, &sp10);
        *arg3 = func_801250C8(&sp10, 0);
        if (*arg3 >= 0x320) {
            if (*arg3 < arg2) {
                sp20 = func_8015A62C(sp10, sp14) - (s16) temp_v0->unk18;
                func_8016408C(&sp20);
                var_v0 = sp20;
                if (var_v0 < 0) {
                    var_v0 = -var_v0;
                }
                if (var_v0 < 0x238) {
                    goto block_8;
                }
            }
        } else {
block_8:
            var_s0 = 1;
        }
        var_s2 += 4;
        var_s3 += 1;
        goto loop_1;
    }
    return var_s0;
}
