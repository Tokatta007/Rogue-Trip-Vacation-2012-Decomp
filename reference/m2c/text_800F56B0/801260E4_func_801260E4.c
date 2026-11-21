/* m2c reference for func_801260E4 @ 801260E4 (91 words). Generated; not compiled or validated. */
? func_80108D60(void *, ?, ? *, s32, s32);          /* extern */
? func_801253C8(? *, s32);                          /* extern */
? func_801254F0(? *, ?);                            /* extern */
s32 func_80178A70();                                /* extern */
static void *D_801C34EC = NULL;

void func_801260E4(void *arg0) {
    ? sp18;
    s32 var_s2;
    s32 var_v0;
    void *temp_a0;
    void *temp_s0;
    void *temp_s5;
    void *var_s3;

    arg0->unk12357 = 0;
    var_s2 = 0;
    if (!(arg0->unk12355 & 0x80)) {
        temp_s5 = arg0 + 0x6220;
        var_s3 = temp_s5;
loop_2:
        if (var_s2 < temp_s5->unk3CC) {
            temp_s0 = var_s3->unk3A0;
            func_801253C8(&sp18, arg0->unk122C8 + 0x1C);
            if (!(func_80178A70() & 3)) {
                if (D_801C34EC->unk11D2C == 0) {
                    temp_a0 = arg0->unk122C8;
                    if ((temp_s0->unk1EC - temp_a0->unk24) >= 0) {
                        var_v0 = temp_s0->unk1EC - temp_a0->unk24;
                    } else {
                        var_v0 = temp_a0->unk24 - temp_s0->unk1EC;
                    }
                    if (var_v0 >= 0x1F41) {
                        func_801254F0(&sp18, 0x460);
                    }
                    func_80108D60(D_801C34EC + 0x6220, 0x460, &sp18, var_s2, 0);
                    var_s3 += 4;
                } else {
                    arg0->unk122C8->unkC = 0;
                    goto block_12;
                }
            } else {
block_12:
                var_s3 += 4;
            }
            var_s2 += 1;
            goto loop_2;
        }
    }
}
