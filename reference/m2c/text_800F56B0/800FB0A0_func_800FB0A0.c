/* m2c reference for func_800FB0A0 @ 800FB0A0 (101 words). Generated; not compiled or validated. */
s32 func_800FAD9C(void *);                          /* extern */
void *func_801244FC(s32, s32);                      /* extern */
? func_80144FF8(void *, s32);                       /* extern */
? func_8016408C(s32 *);                             /* extern */
static s32 D_801C34EC = 0;

s32 func_800FB0A0(void *arg0) {
    s32 sp10;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a0_3;
    s32 var_s1;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v1;
    void *temp_v0;

    var_s1 = 0;
    if (arg0->unk822 == 0) {
        var_a0 = 0;
        if (arg0->unk894 != -1) {
            var_a0 = ((arg0 + 0x264 + arg0->unk894)->unk43 << 0x18) > 0;
        }
        var_v0 = 0;
        if (var_a0 != 0) {
            var_a0_2 = 0;
            if (arg0->unk8 == 3) {
                var_a0_2 = arg0->unk58 >= 0xD;
            }
            var_v0 = 0;
            if (var_a0_2 != 0) {
                var_a0_3 = 0;
                if (arg0->unk78C < (s16) arg0->unk830) {
                    var_a0_3 = (s16) arg0->unk832 < arg0->unk78C;
                }
                var_v0 = 0;
                if (var_a0_3 != 0) {
                    var_v0_2 = arg0->unk868;
                    if (var_v0_2 < 0) {
                        var_v0_2 = -var_v0_2;
                    }
                    if (var_v0_2 < 0x200) {
                        var_v1 = 0;
                        if ((arg0 + 0x264)->unk33 != 0) {
                            var_v1 = func_800FAD9C(arg0) != 0;
                        }
                        var_v0 = 0;
                        if (var_v1 != 0) {
                            temp_v0 = func_801244FC(D_801C34EC, arg0->unk884);
                            var_v0 = 0;
                            if (temp_v0->unk542 == 0) {
                                var_v0 = 0;
                                if (temp_v0->unk7A4 < temp_v0->unkC8) {
                                    var_s1 = 1;
                                    arg0->unkAD = 1;
                                    arg0->unkAA = 0;
                                    arg0->unkAC = 0;
                                    sp10 = arg0->unk86C + arg0->unk1F8;
                                    func_8016408C(&sp10);
                                    func_80144FF8(arg0, sp10);
                                    goto block_19;
                                }
                            }
                        }
                    } else {
                        goto block_19;
                    }
                }
            }
        }
    } else {
block_19:
        var_v0 = var_s1;
    }
    return var_v0;
}
