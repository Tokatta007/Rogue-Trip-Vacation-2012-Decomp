/* m2c reference for func_8013ACCC @ 8013ACCC (128 words). Generated; not compiled or validated. */
? func_801382EC(s32);                               /* extern */
? func_80147784(void *);                            /* extern */
s32 func_8016B6DC(?, s32);                          /* extern */
s32 func_8016BDA8(s32);                             /* extern */
extern ? D_801B3960;
extern ? D_801DFF40;
extern s32 D_801DFF50;
static s32 D_801C34EC = 0;

void func_8013ACCC(void) {
    ? *var_s6;
    s32 *temp_a0;
    s32 *var_s3;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_s0;
    s32 var_s4;
    s32 var_s5;
    s32 var_s7;
    void *temp_a0_2;
    void *temp_s1;

    var_s0 = 0;
    var_s3 = &D_801DFF50;
    var_s7 = 0;
    var_s6 = &D_801B3960;
    var_s5 = 0xB788;
    var_s4 = 0;
loop_1:
    temp_s1 = var_s0 + &D_801B3960;
    if (var_s0 < (s32) D_801B3960.unk6) {
        if (temp_s1->unk10 != 0) {
            if (func_8016BDA8(var_s0) != 0) {
                temp_v0 = *var_s3 - 1;
                *var_s3 = temp_v0;
                if ((temp_v0 < 0) && (func_8016B6DC(0x40, var_s0) & 0xFF)) {
                    temp_a0 = var_s7 + &D_801DFF40;
                    temp_v0_2 = *temp_a0 - 0x32 + (var_s4 + D_801C34EC + 0xB788)->unk7F4;
                    *temp_a0 = temp_v0_2;
                    if (temp_v0_2 < 0) {
                        *temp_a0 = 0;
                    }
                    func_80147784(D_801C34EC + (var_s4 + 0xB788));
                    temp_s1->unk10 = 0U;
                    func_801382EC(var_s0);
                    var_s3 += 4;
                } else {
                    goto block_16;
                }
                goto block_17;
            }
            temp_a0_2 = D_801C34EC + var_s5;
            if (temp_a0_2->unk10C > 0) {
                var_s3 += 4;
                func_80147784(temp_a0_2);
                temp_s1->unk10 = 0U;
                func_801382EC(var_s0);
                var_s7 += 4;
            } else {
                goto block_16;
            }
        } else {
            if ((D_801C34EC + var_s5)->unk8C != 0) {
                temp_s1->unk10 = 1U;
                var_s6->unk1E = (u16) (var_s6->unk1E + 1);
                *var_s3 = 0x3C;
                if (D_801B3960.unk6 == 2) {
                    if (var_s0 == 0) {
                        D_801B3960.unk24 = (u16) (D_801B3960.unk24 + 1);
                    } else {
                        D_801B3960.unk1C = (u16) (D_801B3960.unk1C + 1);
                    }
                }
            }
block_16:
            var_s3 += 4;
block_17:
            var_s7 += 4;
        }
        var_s6 += 8;
        var_s5 += 0x8B8;
        var_s4 += 0x8B8;
        var_s0 += 1;
        goto loop_1;
    }
}
