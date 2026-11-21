/* m2c reference for func_80117AEC @ 80117AEC (293 words). Generated; not compiled or validated. */
s32 func_800FF594(s32, void *);                     /* extern */
? func_800FFB58(void *, ?);                         /* extern */
? func_80117F80(void *);                            /* extern */
? func_801181F0(void *);                            /* extern */
? func_80118484(void *);                            /* extern */
s32 func_80122F24(s32, s32, ?, s32 *);              /* extern */
? func_80125050(void *, s32, s32 *);                /* extern */
s32 func_801250C8(s32, void *);                     /* extern */
u16 func_8015A62C(s32, s32);                        /* extern */
u16 func_80176C1C(s16, s16, ?);                     /* extern */
s32 func_80178A2C();                                /* extern */
static s32 D_801C34EC = 0;

s32 func_80117AEC(void *arg0) {
    s32 sp10;
    s32 sp20;
    s32 temp_s0;
    s32 temp_v1;
    s32 var_a0;
    s32 var_s0;
    s32 var_s2;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;

    var_s2 = 1;
    if ((arg0->unk315 != 0) && (func_80122F24(D_801C34EC, arg0->unk38 + 0x1C, 0x2EE0, &sp20) == 0) && (sp20 >= 0x961)) {
        arg0->unk38->unkC = 1;
        arg0->unk315 = 0U;
    }
    var_v0 = 1;
    if (arg0->unk315 == 0) {
        if (arg0->unk2A4 != func_80178A2C()) {
            func_80118484(arg0);
        }
        var_s0 = 0;
        if (arg0->unk312 != 0) {
            if ((func_801250C8(arg0->unk3C + 0x1C, arg0->unk38 + 0x1C) >= 0x641) || (arg0->unk14 >= 0x961)) {
                var_s0 = 1;
            }
            if ((var_s0 == 0) && (temp_s0 = func_800FF594(arg0->unk40, arg0->unk3C + 0x1C), (temp_s0 == func_800FF594(arg0->unk40, arg0->unk38 + 0x1C)))) {
                arg0->unk14 = (s32) (arg0->unk2BC * 4);
                arg0->unk1E = 0U;
                func_80125050(arg0->unk38 + 0x1C, arg0->unk3C + 0x1C, &sp10);
                arg0->unk1C = func_8015A62C(sp10, sp14);
                var_v0_2 = (s16) arg0->unk38->unk18 - (s16) arg0->unk1C;
                if (var_v0_2 < 0) {
                    var_v0_2 = -var_v0_2;
                }
                if (var_v0_2 >= 0x156) {
                    arg0->unk278 = (s32) (arg0->unk278 - (arg0->unk274 * 2));
                    if (arg0->unk278 < 0) {
                        arg0->unk278 = 0;
                    }
                }
            } else {
                arg0->unk278 = (s32) (arg0->unk278 - (arg0->unk274 * 2));
                if (arg0->unk278 < arg0->unk274) {
                    arg0->unk312 = 0U;
                }
            }
        }
        if ((arg0->unk14 < (arg0->unk2BC + ((s32) arg0->unk2BC >> 2))) && (arg0->unk64 == 0)) {
            func_800FFB58(arg0, -1);
            func_80117F80(arg0);
            if (arg0->unk2D8 != 0) {
                arg0->unk2DC = 0;
            }
            arg0->unk2FE = 0;
            arg0->unk314 = 0;
        }
        if (arg0->unk298 != 0) {
            if (((s32) arg0->unk298 >> 1) != 0) {
                arg0->unk298 = (s32) ((s32) arg0->unk298 >> 1);
            } else {
                arg0->unk298 = 0;
            }
        }
        if (arg0->unk29C != 0) {
            if (((s32) arg0->unk29C >> 1) != 0) {
                arg0->unk29C = (s32) ((s32) arg0->unk29C >> 1);
            } else {
                arg0->unk29C = 0;
            }
        }
        var_a0 = 0;
        if (arg0->unk14 < arg0->unk2BC) {
            var_s2 = 0;
        } else {
            if ((arg0->unk14 < (arg0->unk2BC * 2)) || (arg0->unk69 != 0)) {
                var_a0 = 1;
            }
            if (var_a0 != 0) {
                if (arg0->unk69 != 0) {
                    if (arg0->unk278 < (arg0->unk274 * 2)) {
                        arg0->unk278 = 0;
                        var_s2 = 0;
                    } else {
                        goto block_48;
                    }
                } else if (arg0->unk288 >= arg0->unk278) {
                    if (arg0->unk278 < (arg0->unk288 - arg0->unk274)) {
                        var_v0_3 = arg0->unk278 + arg0->unk274;
                        goto block_49;
                    }
                } else {
                    goto block_48;
                }
            } else {
                temp_v1 = arg0->unk280;
                if (arg0->unk278 < temp_v1) {
                    var_v0_3 = arg0->unk278 + arg0->unk274;
                    goto block_49;
                }
                if (temp_v1 < arg0->unk278) {
block_48:
                    var_v0_3 = arg0->unk278 - arg0->unk274;
block_49:
                    arg0->unk278 = var_v0_3;
                }
            }
        }
        arg0->unk38->unk18 = func_80176C1C((s16) arg0->unk38->unk18, (s16) arg0->unk1C, 3);
        if (arg0->unk301 == 0) {
            arg0->unk38->unk14 = func_80176C1C((s16) arg0->unk38->unk14, (s16) arg0->unk1E, 3);
        }
        func_801181F0(arg0);
        var_v0 = var_s2;
        if (arg0->unk300 != 0) {
            var_v0 = 0;
        }
    }
    return var_v0;
}
