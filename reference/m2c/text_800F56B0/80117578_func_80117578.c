/* m2c reference for func_80117578 @ 80117578 (349 words). Generated; not compiled or validated. */
? func_80116204(void *, void *, s32, s32, s32, s32); /* extern */
? func_801181F0(void *);                            /* extern */
? func_801187A0(void *);                            /* extern */
s32 func_80122F24(s32, void *, ?, s32 *);           /* extern */
? func_8016408C(s32 *);                             /* extern */
u16 func_80176C1C(s16, s32, ?);                     /* extern */
s32 func_80176CBC(s32, ?, ?);                       /* extern */
s16 func_80178A1C();                                /* extern */
static s32 D_801C34EC = 0;

s32 func_80117578(void *arg0) {
    s32 sp18;
    s32 sp1C;
    s32 sp20;
    s32 sp24;
    s16 temp_v0;
    s32 temp_a0;
    s32 temp_s0;
    s32 temp_s2;
    s32 var_a0;
    s32 var_a1;
    s32 var_a1_2;
    s32 var_a1_3;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s0_3;
    s32 var_s3;
    s32 var_s4;
    s32 var_s5;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v0_4;
    s32 var_v0_5;
    s32 var_v0_6;
    s32 var_v0_7;
    s32 var_v0_8;
    s32 var_v1;
    s32 var_v1_2;
    s32 var_v1_3;
    u16 temp_v0_2;

    var_s5 = 0;
    var_s3 = 0;
    var_s4 = 1;
    if ((arg0->unk315 != 0) && (func_80122F24(D_801C34EC, arg0->unk38 + 0x1C, 0x2EE0, &sp18) == 0) && (sp18 >= 0x961)) {
        arg0->unk38->unkC = 1;
        arg0->unk315 = 0U;
    }
    var_v0 = 1;
    if (arg0->unk315 == 0) {
        if (arg0->unk300 != 0) {
            func_801187A0(arg0);
        } else if (arg0->unk2D8 != 0) {
            var_s0 = 0;
            if (arg0->unk306 != 0) {
                if ((func_80122F24(D_801C34EC, arg0->unk38 + 0x1C, 0x2EE0, &sp18) != 0) || (func_80122F24(D_801C34EC, arg0->unk30, 0x2EE0, &sp1C) != 0)) {
                    var_s0 = 1;
                }
                if ((var_s0 != 0) || (sp18 < 0xFA0) || (sp1C < 0xFA0)) {
                    arg0->unk2DC = 0;
                }
            } else {
                arg0->unk2DC = (s32) (arg0->unk2DC + 1);
            }
            if (arg0->unk2D8 < arg0->unk2DC) {
                arg0->unk2D8 = 0;
                if (arg0->unk306 != 0) {
                    func_80116204(arg0, arg0->unk38, arg0->unk40, arg0->unk2C0, arg0->unk2C4, (s32) (s16) arg0->unk5E);
                }
            }
            arg0->unk278 = func_80176CBC(arg0->unk278, 0, 1);
        } else {
            if (arg0->unk288 < arg0->unk278) {
                arg0->unk278 = (s32) (arg0->unk278 - arg0->unk274);
                if (arg0->unk278 < arg0->unk288) {
                    var_v0_2 = arg0->unk288;
                    goto block_26;
                }
            } else if (arg0->unk278 < arg0->unk288) {
                var_v0_2 = arg0->unk278 + arg0->unk274;
block_26:
                arg0->unk278 = var_v0_2;
            }
            sp20 = (s16) arg0->unk1C - (s16) arg0->unk38->unk18;
            func_8016408C(&sp20);
            if (arg0->unk301 != 0) {
                sp24 = 0;
            } else {
                sp24 = (s16) arg0->unk1E - (s16) arg0->unk38->unk14;
                func_8016408C(&sp24);
            }
            var_v1 = arg0->unk298;
            var_v0_3 = arg0->unk29C;
            if (var_v1 < 0) {
                var_v1 = -var_v1;
            }
            if (var_v0_3 < 0) {
                var_v0_3 = -var_v0_3;
            }
            if (var_v0_3 < var_v1) {
                var_v0_4 = arg0->unk298;
            } else {
                var_v0_4 = arg0->unk29C;
            }
            temp_s0 = var_v0_4 >> 3;
            temp_v0 = func_80178A1C();
            var_a0 = temp_s0;
            if (temp_s0 < 0) {
                var_a0 = -var_a0;
            }
            temp_s2 = var_a0 + (temp_v0 * 0x16);
            var_v0_5 = sp20;
            if (sp20 < 0) {
                var_v0_5 = -var_v0_5;
            }
            if (var_v0_5 < temp_s2) {
                var_s5 = 1;
                var_v0_6 = (s32) arg0->unk298 >> 1;
            } else {
                if (sp20 > 0) {
                    var_a1 = arg0->unk294;
                } else {
                    var_a1 = -arg0->unk294;
                }
                var_v0_6 = func_80176C1C((s16) arg0->unk298, var_a1, 1);
            }
            arg0->unk298 = var_v0_6;
            if (arg0->unk67 != 0) {
                var_v0_7 = sp20;
                if (var_v0_7 < 0) {
                    var_v0_7 = -var_v0_7;
                }
                if (var_v0_7 >= 0x401) {
                    var_v1_2 = 0;
                    if (arg0->unk280 != 0) {
                        var_v1_2 = arg0->unk278 < arg0->unk280;
                    }
                    var_s0_2 = -0x200;
                    if (var_v1_2 == 0) {
                        var_s0_2 = 0;
                        if (arg0->unk280 != 0) {
                            var_s0_2 = (s32) -(arg0->unk278 << 9) / (s32) arg0->unk280;
                        }
                    }
                    temp_v0_2 = func_80176C1C((s16) arg0->unk38->unk14, var_s0_2, 3);
                    sp24 = temp_s2;
                    arg0->unk38->unk14 = temp_v0_2;
                    arg0->unk29C = 0;
                }
            }
            var_a1_2 = sp24;
            if (sp24 < 0) {
                var_a1_2 = -var_a1_2;
            }
            temp_a0 = var_a1_2 < temp_s2;
            if (temp_a0 != 0) {
                var_s3 = 1;
            }
            var_v1_3 = sp20;
            if (sp20 < 0) {
                var_v1_3 = -var_v1_3;
            }
            if (var_v1_3 < (var_a1_2 * 2)) {
                if (temp_a0 != 0) {
                    var_s3 = 1;
                    var_v0_8 = (s32) arg0->unk29C >> 1;
                } else {
                    var_s0_3 = 0;
                    if (var_v1_3 < 0x400) {
                        if (sp24 > 0) {
                            var_a1_3 = arg0->unk294;
                        } else {
                            var_s0_3 = -arg0->unk294;
                            goto block_70;
                        }
                    } else {
block_70:
                        var_a1_3 = var_s0_3;
                    }
                    var_v0_8 = func_80176C1C((s16) arg0->unk29C, var_a1_3, 1);
                }
                arg0->unk29C = var_v0_8;
            }
        }
        func_801181F0(arg0);
        if (arg0->unk2C0 == 0x17C) {
            var_s3 = 1;
            var_s5 = 1;
        }
        if (arg0->unk312 == 0) {
            if (var_s5 & 0xFF) {
                var_v0 = 1;
                if (var_s3 & 0xFF) {
                    goto block_78;
                }
            } else {
                goto block_79;
            }
        } else {
block_78:
            var_s4 = 0;
block_79:
            var_v0 = var_s4;
        }
    }
    return var_v0;
}
