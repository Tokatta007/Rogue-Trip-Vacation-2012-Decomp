/* m2c reference for func_801003CC @ 801003CC (70 words). Generated; not compiled or validated. */
s32 func_80100228(void *, ?, s32, ?);               /* extern */
s32 func_801250C8(?, void *);                       /* extern */

s32 func_801003CC(void *arg0, ? arg1, s32 arg2) {
    s32 temp_s0_3;
    s32 temp_v0;
    s32 var_s1;
    s32 var_s2;
    s32 var_s3;
    s32 var_v0;
    void *temp_s0;
    void *temp_s0_2;

    var_s2 = func_80100228();
    temp_s0 = *arg0->unk40 + (arg2 << 5);
    var_v0 = var_s2;
    if ((s8) temp_s0->unk1C == 4) {
        var_s3 = func_801250C8(arg1, temp_s0);
        var_s1 = 0;
loop_2:
        var_v0 = var_s2;
        if (var_s1 == 0) {
            temp_s0_2 = *arg0->unk40 + (var_s2 << 5);
            var_s1 = 1;
            if ((s8) temp_s0_2->unk1C == 4) {
                temp_s0_3 = func_80100228(arg0, arg1, var_s2, -1);
                temp_v0 = func_801250C8(arg1, temp_s0_2);
                if (temp_v0 < var_s3) {
                    var_s2 = temp_s0_3;
                    var_s3 = temp_v0;
                    var_s1 = 0;
                }
            }
            goto loop_2;
        }
    }
    return var_v0;
}
