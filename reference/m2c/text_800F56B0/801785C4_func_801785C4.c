/* m2c reference for func_801785C4 @ 801785C4 (65 words). Generated; not compiled or validated. */
? func_80177B1C(s32, void *, ?, ?);                 /* extern */
s32 func_801786C8(void *, void *);                  /* extern */

void func_801785C4(void *arg0, ? arg1, ? arg2) {
    s32 var_a0;
    s32 var_s1;
    s32 var_s3;
    void *temp_s2;
    void *var_a1;
    void *var_s0;

    var_s1 = 0;
    temp_s2 = arg0->unk0;
    var_s3 = 1;
    var_s0 = temp_s2 + 0xC;
loop_1:
    if (var_s1 < (temp_s2->unk3 & 0x7F)) {
        if (func_801786C8(var_s0, arg0 + 4) != 0) {
            var_s3 = 0;
        }
        var_s1 += 1;
        var_s0 = var_s0 + (var_s0->unk2 & 0xFFFC) + 4;
        if (var_s3 != 0) {
            goto loop_1;
        }
    }
    if (var_s3 != 0) {
        var_a1 = arg0 + 4;
        if (temp_s2->unk4 != 0) {
            var_a0 = temp_s2->unk4;
            goto block_10;
        }
    } else {
        var_a1 = arg0 + 4;
        if (temp_s2->unk8 != 0) {
            var_a0 = temp_s2->unk8;
block_10:
            func_80177B1C(var_a0, var_a1, arg1, arg2);
        }
    }
}
