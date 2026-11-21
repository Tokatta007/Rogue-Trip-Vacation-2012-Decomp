/* m2c reference for func_8015C838 @ 8015C838 (269 words). Generated; not compiled or validated. */
u8 func_8015F890(? *);                              /* extern */
extern void *D_801BAD40;
extern ? (*D_801BAD44)(? *, void *);
extern ? D_801BAD4A;
extern u8 D_801BAD4B;
extern ? D_801BADB4;
extern ? D_801BADC4;
static ? D_800F4E58;                                /* unable to generate initializer: unknown type; const */

void *func_8015C838(void *arg0) {
    ? *temp_a0;
    ? *var_a0_2;
    s16 temp_a0_2;
    s16 temp_v0_2;
    s16 temp_v1;
    s16 temp_v1_2;
    s16 temp_v1_3;
    s32 temp_a1;
    s32 temp_a2;
    s32 var_a0;
    s32 var_a1;
    s32 var_a1_2;
    s32 var_a3;
    s32 var_s1;
    s32 var_s1_2;
    s32 var_s2;
    s32 var_s2_2;
    s32 var_s3;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v1;
    u8 temp_v0;
    u8 temp_v0_3;

    var_s3 = 0x08000000;
    if ((u8) D_801BAD4A.unk0 >= 2U) {
        D_801BAD44(&D_800F4E58, arg0);
    }
    D_801BAD40->unk10(((arg0->unk2 & 0x3FF) << 0xA) | ((arg0->unk0 & 0x3FF) | 0x05000000), D_801BAD40);
    temp_a0 = &D_801BAD4A + 0x72;
    if (((s16) D_801BAD4A.unk72 != arg0->unk8) || ((s16) temp_a0->unk2 != arg0->unkA) || ((s16) temp_a0->unk4 != arg0->unkC) || ((s16) temp_a0->unk6 != arg0->unkE)) {
        temp_v0 = func_8015F890(temp_a0);
        arg0->unk12 = temp_v0;
        temp_a0_2 = arg0->unkA;
        temp_a2 = (arg0->unk8 * 0xA) + 0x260;
        if (temp_v0 & 0xFF) {
            var_s1 = temp_a0_2 + 0x13;
        } else {
            var_s1 = temp_a0_2 + 0x10;
        }
        temp_v1 = arg0->unkC;
        if (temp_v1 != 0) {
            var_a3 = temp_a2 + (temp_v1 * 0xA);
        } else {
            var_a3 = temp_a2 + 0xA00;
        }
        temp_v0_2 = arg0->unkE;
        var_s2 = var_s1 + temp_v0_2;
        if (temp_v0_2 == 0) {
            var_s2 = var_s1 + 0xF0;
        }
        var_a1 = 0x1F4;
        if (temp_a2 >= 0x1F4) {
            var_a1 = 0xCDA;
            if (temp_a2 < 0xCDB) {
                var_a1 = temp_a2;
            }
        }
        var_a1_2 = var_a1 + 0x50;
        var_v0 = var_s1 < 0x10;
        if (var_a3 >= var_a1_2) {
            var_a1_2 = 0xCDA;
            if (var_a3 < 0xCDB) {
                var_a1_2 = var_a3;
            }
            var_v0 = var_s1 < 0x10;
        }
        if (var_v0 == 0) {
            if (arg0->unk12 != 0) {
                if (var_s1 < 0x137) {
                    var_s1_2 = var_s1;
                } else {
                    goto block_26;
                }
            } else {
                var_a0 = var_s1;
                if (var_s1 >= 0x101) {
block_26:
                    var_a0 = 0x100;
                    if (arg0->unk12 != 0) {
                        var_a0 = 0x136;
                    }
                }
                goto block_29;
            }
        } else {
            var_a0 = 0x10;
block_29:
            var_s1_2 = var_a0;
        }
        temp_a1 = var_s1_2 + 2;
        var_v1 = temp_a1;
        if (var_s2 >= temp_a1) {
            if (arg0->unk12 != 0) {
                if (var_s2 < 0x139) {
                    var_s2_2 = var_s2;
                } else {
                    goto block_35;
                }
            } else {
                var_v1 = var_s2;
                if (var_s2 >= 0x103) {
block_35:
                    var_v1 = 0x102;
                    if (arg0->unk12 != 0) {
                        var_v1 = 0x138;
                    }
                }
                goto block_37;
            }
        } else {
block_37:
            var_s2_2 = var_v1;
        }
        D_801BAD40->unk10(((var_a1_2 & 0xFFF) << 0xC) | ((var_a1 & 0xFFF) | 0x06000000), D_801BAD40, var_a1, var_a1_2);
        D_801BAD40->unk10(((var_s2_2 & 0x3FF) << 0xA) | ((var_s1_2 & 0x3FF) | 0x07000000), D_801BAD40);
    }
    var_a0_2 = &D_801BADC4;
    if ((D_801BADC4.unk0 != arg0->unk10) || (var_a0_2 = &D_801BADC4 - 0x10, ((s16) D_801BADC4.unk-10 != (s16) arg0->unk0)) || ((s16) var_a0_2->unk2 != (s16) arg0->unk2) || ((s16) var_a0_2->unk4 != arg0->unk4) || ((s16) var_a0_2->unk6 != arg0->unk6)) {
        temp_v0_3 = func_8015F890(var_a0_2);
        arg0->unk12 = temp_v0_3;
        if ((temp_v0_3 & 0xFF) == 1) {
            var_s3 = 0x08000008;
        }
        if (arg0->unk11 != 0) {
            var_s3 |= 0x10;
        }
        if ((u8) arg0->unk10 != 0) {
            var_s3 |= 0x20;
        }
        if (D_801BAD4B != 0) {
            var_s3 |= 0x80;
        }
        temp_v1_2 = arg0->unk4;
        if (temp_v1_2 >= 0x119) {
            if (temp_v1_2 < 0x161) {
                var_s3 |= 1;
            } else if (temp_v1_2 < 0x191) {
                var_s3 |= 0x40;
            } else if (temp_v1_2 < 0x231) {
                var_s3 |= 2;
            } else {
                var_s3 |= 3;
            }
        }
        temp_v1_3 = arg0->unk6;
        var_v0_2 = temp_v1_3 < 0x121;
        if (arg0->unk12 == 0) {
            var_v0_2 = temp_v1_3 < 0x101;
        }
        if (var_v0_2 == 0) {
            var_s3 |= 0x24;
        }
        D_801BAD40->unk10(var_s3);
    }
    memcpy(&D_801BADB4, arg0, 0x14);
    return arg0;
}
