/* m2c reference for func_80130F58 @ 80130F58 (186 words). Generated; not compiled or validated. */
s32 func_80131240(?, ?, s32, s32);                  /* extern */
? func_80131B40(s16, s16, s16, s16);                /* extern */
s32 func_80131BEC(s16, s16);                        /* extern */
void *func_80131E10(s32);                           /* extern */
s32 func_8015B5AC(u32, ?, s16, s16);                /* extern */
? func_8015C008(?);                                 /* extern */
? func_8015C2B4(s16 *, s32);                        /* extern */
extern s32 D_801C37EC;
extern s32 D_801C37FC;
extern s32 D_801C3808;

s32 func_80130F58(void *arg0, s32 arg1, s32 arg2) {
    s16 sp18;
    s16 sp1A;
    s16 sp1C;
    s16 sp1E;
    s32 sp20;
    s32 sp24;
    s32 sp28;
    s32 sp2C;
    ? var_a0;
    s16 temp_fp;
    s16 temp_s6;
    s16 var_s1;
    s16 var_s4;
    s32 temp_s0;
    s32 temp_t0;
    s32 temp_t1;
    s32 var_s0;
    s32 var_s2;
    s32 var_s3;
    s32 var_s7;
    s32 var_v0;
    void *temp_v0;
    void *temp_v1;
    void *temp_v1_2;

    var_s2 = 0;
    var_s3 = 0;
    D_801C3808 = arg2;
    temp_s0 = (arg2 * 0x1A) + arg1;
    temp_v0 = func_80131E10(*((arg1 * 4) + D_801C37FC));
    if (temp_v0 != NULL) {
        temp_v1 = (temp_s0 * 0x14) + D_801C37EC;
        temp_v1->unk0 = (s32) temp_v0->unk4;
        temp_v1->unk4 = (s32) temp_v0->unk8;
        temp_v1->unk8 = (s32) temp_v0->unkC;
        temp_v1->unkC = (s32) temp_v0->unk10;
        temp_v1->unk10 = (s32) temp_v0->unk14;
        return 1;
    }
    sp20 = 0x100;
    sp24 = temp_s0 * 0x14;
    temp_fp = arg0->unk8 & 0xFFFF;
    temp_s6 = arg0->unkA & 0xFFFF;
    var_s4 = 0;
loop_3:
    if ((0 < 0x400) && (var_s2 == 0)) {
        temp_t1 = sp20 + 0x100;
        var_s7 = 0x100;
        sp28 = temp_t1;
        sp2C = sp20 < temp_t1;
        var_v0 = 0 < 0x100;
loop_6:
        var_s1 = var_s4;
        if ((var_v0 != 0) && (var_s2 == 0)) {
loop_8:
            var_s0 = sp20;
            if ((sp2C != 0) && (var_s2 == 0)) {
loop_10:
                if (func_80131BEC(var_s1, (s16) var_s0) != 0) {
                    func_80131B40(var_s1, (s16) var_s0, temp_fp, temp_s6);
                    sp18 = var_s1;
                    sp1A = (s16) var_s0;
                    sp1C = temp_fp;
                    sp1E = temp_s6;
                    func_8015C2B4(&sp18, arg0->unkC);
                    func_8015C008(0);
                    var_s3 = 1;
                    if (((u32) arg0->unk0 >> 3) & 1) {
                        var_a0 = 0x10;
                        if (!(arg0->unk0 & 7)) {
                            goto block_16;
                        }
                        if ((arg0->unk0 & 7) == 1) {
                            var_a0 = 0x100;
block_16:
                            var_s3 = func_80131240(var_a0, 1, arg0->unk18, arg1);
                        }
                    }
                    var_s2 = 1;
                    temp_v1_2 = sp24 + D_801C37EC;
                    temp_v1_2->unk0 = (s32) (func_8015B5AC(arg0->unk0, 0, var_s1, (s16) var_s0) & 0x1F);
                    temp_v1_2->unk4 = (s32) var_s1;
                    temp_v1_2->unk8 = var_s0;
                }
                var_s0 += temp_s6;
                if ((var_s0 < sp28) && (var_s2 == 0)) {
                    goto loop_10;
                }
            }
            var_s1 += temp_fp;
            if ((var_s1 < var_s7) && (var_s2 == 0)) {
                goto loop_8;
            }
        }
        var_s4 += 0x100;
        var_s7 += 0x100;
        if (var_s4 < 0x400) {
            var_v0 = var_s4 < var_s7;
            if (var_s2 == 0) {
                goto loop_6;
            }
        }
    }
    temp_t0 = sp20 + 0x100;
    sp20 = temp_t0;
    if (temp_t0 < 0x200) {
        var_s4 = 0;
        if (var_s2 == 0) {
            goto loop_3;
        }
    }
    return var_s3;
}
