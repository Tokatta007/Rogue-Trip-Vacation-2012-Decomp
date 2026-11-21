/* m2c reference for func_80125990 @ 80125990 (77 words). Generated; not compiled or validated. */
? func_80125050(void *, void *, s32 *);             /* extern */
s32 func_801250C8(s32 *, ?);                        /* extern */
s32 func_8015A62C(s32, s32);                        /* extern */

s32 func_80125990(void *arg0, void *arg1) {
    s32 sp10;
    s32 var_s1;
    s32 var_s2;
    s32 var_s3;
    s32 var_v1;
    void *var_a0;
    void *var_s0;

    var_s2 = 0;
    var_s3 = 0;
    if (arg0->unk12728 > 0) {
        var_s1 = 0xB788;
        var_s0 = arg0;
        var_a0 = var_s0 + 0xB788;
loop_2:
        if ((var_a0->unk7C8 != arg1->unk7C8) && (var_a0->unk74C != 0) && (func_80125050(arg1 + 0x1E4, arg0 + var_s1 + 0x1E4, &sp10), ((func_801250C8(&sp10, 0) < 0xAF0) != 0))) {
            var_v1 = arg1->unk1F8 - func_8015A62C(sp10, sp14);
            if (var_v1 < 0) {
                var_v1 = -var_v1;
            }
            var_s1 += 0x8B8;
            if (var_v1 < 0x71) {
                var_s3 = 1;
            } else {
                goto block_10;
            }
        } else {
            var_s1 += 0x8B8;
block_10:
            var_s0 += 0x8B8;
            var_s2 += 1;
            var_a0 = var_s0 + 0xB788;
            if (var_s2 < arg0->unk12728) {
                goto loop_2;
            }
        }
    }
    return var_s3;
}
