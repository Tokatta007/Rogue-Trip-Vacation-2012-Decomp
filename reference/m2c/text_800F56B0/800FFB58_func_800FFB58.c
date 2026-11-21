/* m2c reference for func_800FFB58 @ 800FFB58 (265 words). Generated; not compiled or validated. */
? func_800FECB4(s32 *, s32, s16, void *);           /* extern */
? func_800FF164(s32 *, s16, s16, void *);           /* extern */
s16 func_800FF594(s32 *, s32);                      /* extern */
s32 func_800FFF7C(void *, VECTOR *, s16);           /* extern */
u16 func_80100228(void *, VECTOR *, s16, s32);      /* extern */
u16 func_801003CC(void *, VECTOR *, s16, s32);      /* extern */
? func_8010058C(void *, VECTOR *, s16);             /* extern */
? func_80124FC8(VECTOR *, s32, VECTOR *);           /* extern */
? func_80125050(s32, s32, s32 *);                   /* extern */
? func_801597FC(s32 *, VECTOR *);                   /* extern */
static void *D_801C34EC = NULL;

void func_800FFB58(void *arg0, u16 arg1) {
    VECTOR sp10;
    s32 sp20;
    s32 sp24;
    s32 sp28;
    s16 temp_s0;
    s16 var_a2;
    s32 temp_a0;
    s32 temp_a1;
    s32 temp_v0;
    s32 temp_v1;
    s32 var_a0;
    s32 var_a1;
    s32 var_a1_2;
    s32 var_a3;
    s32 var_s2;
    s32 var_v0;
    u16 var_v1;
    void *var_s0;

    arg0->unk6B = 0;
    if (arg1 != -1U) {
        arg0->unk5C = arg1;
        var_s0 = arg0 + 8;
    } else {
        if (arg0->unk54 == 0xF) {
            sp20 = 0;
            sp24 = 0x960;
            if (rand() & 1) {
                var_v0 = 0xFA0;
                if (!(rand() & 1)) {
                    var_v0 = -0xFA0;
                }
                sp20 = var_v0;
            }
            sp28 = 0;
            mathMulTransVec(arg0->unk38 + 0x28, (VECTOR *) &sp20, &sp10);
            var_a1 = *arg0->unk40 + ((s32) (arg0->unk58 << 0x10) >> 0xB);
            goto block_14;
        }
        if (arg0->unk54 == 0xE) {
            if ((s16) arg0->unk62 == func_800FF594(arg0->unk40, arg0->unk38 + 0x1C)) {
                func_8010058C(arg0, &sp10, (s16) arg0->unk62);
                var_a3 = -1;
            } else {
                goto block_37;
            }
        } else if (arg0->unk4 == 1) {
            if (arg0->unk54 == 3) {
                sp20 = 0;
                sp24 = -0xFA0;
                sp28 = 0;
                mathMulTransVec(arg0->unk3C + 0x28, (VECTOR *) &sp20, &sp10);
                var_a1 = arg0->unk3C + 0x1C;
block_14:
                func_80124FC8(&sp10, var_a1, &sp10);
                var_a3 = -1;
            } else {
                if (arg0->unk54 == 4) {
                    temp_a1 = D_801C34EC->unk124DC;
                    var_a1_2 = temp_a1 + 0x1E4;
                    if (temp_a1 != 0) {
                        var_a0 = arg0->unk3C + 0x1C;
                    } else {
                        var_a0 = arg0->unk3C + 0x1C;
                        var_a1_2 = arg0->unk38 + 0x1C;
                    }
                    func_80125050(var_a0, var_a1_2, &sp10.vx);
                    goto block_35;
                }
                var_s2 = 0;
                if (((s16) arg0->unk60 == arg1) || (temp_s0 = (s16) arg0->unk60, (temp_s0 == func_800FF594(arg0->unk40, arg0->unk38 + 0x1C)))) {
                    var_s2 = 1;
                }
                if (var_s2 != 0) {
                    func_80125050(arg0->unk3C + 0x1C, arg0->unk38 + 0x1C, &sp20);
                    if (((u32) (sp20 + 0x3FFF) >= 0x7FFFU) || (sp24 >= 0x4000) || (sp24 < -0x3FFF) || (sp28 >= 0x4000) || (sp28 < -0x3FFF)) {
                        do {
loop_29:
                            temp_v0 = sp20 >> 2;
                            temp_v1 = sp24 >> 2;
                            temp_a0 = sp28 >> 2;
                            sp20 = temp_v0;
                            sp24 = temp_v1;
                            sp28 = temp_a0;
                            if ((u32) (temp_v0 + 0x3FFF) >= 0x7FFFU) {
                                goto loop_29;
                            }
                            if (temp_v1 >= 0x4000) {
                                goto loop_29;
                            }
                            if (temp_v1 < -0x3FFF) {
                                goto loop_29;
                            }
                            if (temp_a0 >= 0x4000) {
                                goto loop_29;
                            }
                        } while (temp_a0 < -0x3FFF);
                    }
                    func_801597FC(&sp20, &sp10);
block_35:
                    func_80124FC8(&sp10, arg0->unk38 + 0x1C, &sp10);
                    var_a3 = -1;
                    arg0->unk60 = -1U;
                } else {
                    var_a2 = (s16) arg0->unk60;
                    goto block_38;
                }
            }
        } else {
block_37:
            var_a2 = func_800FF594(arg0->unk40, arg0->unk30);
block_38:
            var_a3 = func_800FFF7C(arg0, &sp10, var_a2);
        }
        if (arg0->unk54 < 7) {
            var_v1 = func_80100228(arg0, &sp10, (s16) arg0->unk58, var_a3);
        } else {
            var_v1 = func_801003CC(arg0, &sp10, (s16) arg0->unk58, var_a3);
        }
        if (var_v1 == (s16) arg0->unk5A) {
            arg0->unk4C = (s32) (arg0->unk4C + 1);
        } else {
            arg0->unk4C = 0;
        }
        arg0->unk5C = var_v1;
        var_s0 = arg0 + 8;
    }
    func_800FECB4(arg0->unk40, arg0->unk38 + 0x1C, (s16) arg0->unk58, var_s0);
    func_800FF164(arg0->unk40, (s16) arg0->unk58, (s16) arg0->unk5C, var_s0);
    arg0->unk64 = 1;
}
