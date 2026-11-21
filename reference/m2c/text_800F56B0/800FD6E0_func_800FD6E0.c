/* m2c reference for func_800FD6E0 @ 800FD6E0 (384 words). Generated; not compiled or validated. */
? func_800FDCE0(void *, s32, s32, s32);             /* extern */
s32 func_80114368(void *, s32, s32, s32);           /* extern */
? func_801339B8(s32, void *, s32, s32);             /* extern */
? func_8013EF98(s32, void *, s32, s32);             /* extern */
? func_80149D40(void *, ?, void *, ?);              /* extern */
? func_8014F27C(void *, s32, s32);                  /* extern */
? func_8015069C(void *, s32, s32);                  /* extern */
? func_8015190C(void *, s32, s32, s32);             /* extern */
? func_80152404(void *, s32, s32);                  /* extern */
? func_80152BB4(void *, s32, s32);                  /* extern */
extern ? D_801C3730;
extern ? D_801C3738;
extern ? D_801C3740;
extern ? D_801C3748;
extern ? D_801C3750;
extern ? D_801C3758;
extern ? D_801C3760;
extern ? D_801C3768;
extern ? D_801C3770;
extern ? D_801C3918;
extern ? D_801C39A8;
extern ? D_801C3BE8;
extern ? D_801C3C78;
extern ? D_801C3D08;
extern ? D_801C3D98;
extern ? D_801C3E28;
extern ? D_801C3F98;
static void *D_801C34EC = NULL;

void func_800FD6E0(s32 arg0, void *arg1, s32 arg2) {
    ? *var_a0_2;
    ? *var_v0;
    ? *var_v1_3;
    ? var_a1;
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_a2;
    s32 temp_a2_2;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v1;
    s32 var_a0;
    s32 var_s0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v0_4;
    s32 var_v1;
    s32 var_v1_2;

    temp_a1 = arg0 & 0xF;
    temp_a2 = arg0 >> 4;
    if (arg0 == 0xD5) {
        temp_v1 = arg2 * 4;
        *(temp_v1 + &D_801C3730) = arg1;
        *(temp_v1 + &D_801C3740) = 0;
        *(temp_v1 + &D_801C3748) = 0;
        return;
    }
    if (arg0 == 0xDC) {
        temp_v0 = arg2 * 4;
        *(temp_v0 + &D_801C3738) = arg1;
        *(temp_v0 + &D_801C3750) = 0;
        return;
    }
    switch (temp_a1) {                              /* switch 1; irregular */
    case 1:                                         /* switch 1 */
        *((arg2 * 4) + (temp_a2 * 8) + &D_801C3918) = arg1;
        if (arg0 == 0xE1) {
            arg1->unk0 = (u16) (arg1->unk0 & 0xF);
            return;
        }
        return;
    case 2:                                         /* switch 1 */
        temp_a1_2 = arg1->unk2 & 0xFF;
        if ((arg0 == 0xE2) && (arg1->unk2 == 1)) {
            *((arg2 * 4) + &D_801C3758) = arg1;
        }
        if (arg0 == 0x42) {
            var_v0 = &D_801C39A8;
            var_v1 = arg2 * 4;
            var_a0 = temp_a2 << 5;
block_51:
            *(var_v1 + var_a0 + var_v0) = arg1;
            return;
        }
        if (temp_a1_2 != 0) {
            var_a0_2 = &D_801C39A8;
            var_v0_2 = (arg2 * 4) + ((temp_a1_2 - 1) * 8);
            var_v1_2 = temp_a2 << 5;
block_20:
            *(var_v0_2 + var_v1_2 + var_a0_2) = arg1;
            return;
        }
        break;
    case 3:                                         /* switch 1 */
        func_8013EF98(temp_a2, arg1, arg2, arg0);
        return;
    case 4:                                         /* switch 1 */
        if (arg0 == 0xE4) {
            var_a0_2 = &D_801C3F98;
            var_v0_2 = arg2 * 4;
            var_v1_2 = arg1->unk2 * 8;
            goto block_20;
        }
        func_801339B8(temp_a2, arg1, arg2, arg0);
        return;
    case 6:                                         /* switch 1 */
        *((arg2 * 4) + (temp_a2 * 8) + &D_801C3BE8) = arg1;
        arg1->unk3 = (u8) (arg1->unk3 & 0x80);
        temp_v0_2 = arg1->unk2 & 0xFF;
        switch (temp_v0_2) {                        /* switch 2; irregular */
        case 0:                                     /* switch 2 */
            arg1->unk18 = (s32) (D_801C34EC + 0x496C)->unk4;
            return;
        case 1:                                     /* switch 2 */
            arg1->unk18 = (s32) (D_801C34EC + 0x496C)->unk8;
            return;
        default:                                    /* switch 2 */
            arg1->unk18 = (s32) (D_801C34EC + 0x496C)->unkC;
            return;
        }
        break;
    case 7:                                         /* switch 1 */
        if ((arg0 == 0xE7) && (arg1->unk2 == 1)) {
            *((arg2 * 4) + &D_801C3760) = arg1;
        } else {
            *((arg2 * 4) + (temp_a2 * 8) + &D_801C3C78) = arg1;
        }
        func_800FDCE0(arg1, temp_a1, temp_a2, arg0);
        return;
    case 8:                                         /* switch 1 */
        *((arg2 * 4) + (temp_a2 * 8) + &D_801C3D08) = arg1;
        arg1->unk3 = (u8) (arg1->unk3 & 0x80);
        arg1->unk18 = (s32) D_801C34EC->unk496C;
        return;
    case 9:                                         /* switch 1 */
        if (((s32) arg1->unk0 & 0xF) == temp_a1) {
            if (temp_a2 == 0xE) {
                if (arg1->unk2 == 1) {
                    ((arg2 * 4) + &D_801C3D98)->unk70 = arg1;
                    return;
                }
                var_v1_3 = &D_801C3768;
                var_v0_3 = arg2 * 4;
                goto block_48;
            }
            var_v0 = &D_801C3D98;
            goto block_50;
        }
        if (((s32) arg1->unk0 & 0xF) == 5) {
            if ((temp_a2 == 0xE) && (arg1->unk2 == 2)) {
                var_v0_3 = arg2 * 4;
                var_v1_3 = &D_801C3770;
block_48:
                *(var_v0_3 + var_v1_3) = arg1;
                return;
            }
            var_v0 = &D_801C3E28;
block_50:
            var_v1 = arg2 * 4;
            var_a0 = temp_a2 * 8;
            goto block_51;
        }
        break;
    case 10:                                        /* switch 1 */
        if (arg0 != 0x5A) {
            if (arg0 < 0x5B) {
                switch (arg0) {                     /* switch 3; irregular */
                default:                            /* switch 3 */
                    var_a1 = 0xF;
                    if (arg0 != 0x4A) {
                        return;
                    }
                    goto block_79;
                case 0x1A:                          /* switch 3 */
                    func_8014F27C(D_801C34EC + 0x496C, func_80114368(arg1, temp_a1, temp_a2, arg0), arg2);
                    return;
                case 0x2A:                          /* switch 3 */
                    func_8015069C(D_801C34EC + 0x496C, func_80114368(arg1, temp_a1, temp_a2, arg0), arg2);
                    return;
                case 0x3A:                          /* switch 3 */
                    var_a1 = 0xE;
                    goto block_79;
                }
            } else if (arg0 != 0x9A) {
                if (arg0 < 0x9B) {
                    if (arg0 != 0x7A) {
                        var_a1 = 0x13;
                        if (arg0 != 0x8A) {
                            return;
                        }
                        goto block_79;
                    }
                    var_s0 = 0;
                    var_v0_4 = 0 < 3;
loop_75:
                    if (var_v0_4 != 0) {
                        temp_a2_2 = var_s0;
                        var_s0 += 1;
                        func_8015190C(D_801C34EC + 0x496C, func_80114368(arg1), temp_a2_2, arg2);
                        var_v0_4 = var_s0 < 3;
                        goto loop_75;
                    }
                } else if (arg0 != 0xAA) {
                    var_a1 = 0x16;
                    if (arg0 != 0xBA) {
                        return;
                    }
block_79:
                    func_80149D40(D_801C34EC + 0x496C, var_a1, arg1, 0);
                } else {
                    func_80149D40(D_801C34EC + 0x496C, 0x15, arg1, 0);
                    func_80152BB4(D_801C34EC + 0x496C, func_80114368(arg1), arg2);
                    return;
                }
            } else {
                func_80152404(D_801C34EC + 0x496C, func_80114368(arg1, temp_a1, temp_a2, arg0), arg2);
                return;
            }
        } else {
            (D_801C34EC + 0x496C + (arg2 * 4))->unk16D8 = arg1;
            return;
        }
        break;
    }
}
