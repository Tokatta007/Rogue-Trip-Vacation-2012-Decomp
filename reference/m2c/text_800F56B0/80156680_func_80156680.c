/* m2c reference for func_80156680 @ 80156680 (259 words). Generated; not compiled or validated. */
s32 func_80155BDC();                                /* extern */
? func_80156138(?, ?);                              /* extern */
? func_80156B14();                                  /* extern */
s32 func_8015EBDC(?, s32 *);                        /* extern */
s32 func_8015EF40();                                /* extern */
extern ? (*D_801B49F0)(u8, u8 *);
extern ? (*D_801B49F4)(u8, ? *);
extern s32 D_801B49FC;
extern ? D_801B4A0C;
extern u8 D_801B4A10;
extern u8 D_801B4A11;
extern ? D_801B4A18;
extern ? D_801B4A98;
extern ? D_801B4B38;
extern ? D_801B4C38;
extern u8 *D_801B4CB8;
extern u8 *D_801B4CBC;
extern u8 *D_801B4CC0;
extern s32 D_801B4CD0;
extern u8 D_801E4778;
extern ? D_801E4780;
extern s32 D_801E4790;
extern s32 D_801E4794;
extern ? *D_801E4798;
static s8 D_800F47B0[0x10] = {
    0x43,
    0x44,
    0x20,
    0x74,
    0x69,
    0x6D,
    0x65,
    0x6F,
    0x75,
    0x74,
    0x3A,
    0x20,
    0,
    0,
    0,
    0,
}; /* const */
static s8 D_800F47C0[0x1C] = {
    0x25,
    0x73,
    0x3A,
    0x28,
    0x25,
    0x73,
    0x29,
    0x20,
    0x53,
    0x79,
    0x6E,
    0x63,
    0x3D,
    0x25,
    0x73,
    0x2C,
    0x20,
    0x52,
    0x65,
    0x61,
    0x64,
    0x79,
    0x3D,
    0x25,
    0x73,
    0xA,
    0,
    0,
}; /* const */
static s8 D_800F484C[8] = { 0x25, 0x73, 0x2E, 0x2E, 0x2E, 0xA, 0, 0 }; /* const */
static s8 D_800F4854[0x10] = {
    0x25,
    0x73,
    0x3A,
    0x20,
    0x6E,
    0x6F,
    0x20,
    0x70,
    0x61,
    0x72,
    0x61,
    0x6D,
    0xA,
    0,
    0,
    0,
}; /* const */
static ? D_800F4864;                                /* unable to generate initializer: unknown type; const */

s32 func_80156680(u8 arg0, u8 *arg1, u8 *arg2, s32 arg3) {
    s32 *temp_v1_2;
    s32 *var_a1;
    s32 temp_a0;
    s32 temp_v0;
    s32 temp_v1;
    s32 temp_v1_3;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_v0;
    s32 var_v0_4;
    s32 var_v0_5;
    s32 var_v1;
    s32 var_v1_2;
    u8 *var_a0_3;
    u8 *var_a2;
    u8 *var_v0_2;
    u8 *var_v0_3;
    u8 temp_s1;
    u8 temp_v0_2;

    if (D_801B49FC >= 2) {
        printf(D_800F484C, *(&D_801B4A18 + ((arg0 & 0xFF) * 4)));
    }
    temp_v1 = (arg0 & 0xFF) * 4;
    if ((*(&D_801B4C38 + temp_v1) != 0) && (arg1 == NULL)) {
        var_v0 = -2;
        if (D_801B49FC > 0) {
            printf(D_800F4854, *(&D_801B4A18 + temp_v1));
            return -2;
        }
        /* Duplicate return node #42. Try simplifying control flow for better match */
        return var_v0;
    }
    func_80156138(0, 0);
    var_v1 = arg0 & 0xFF;
    if (var_v1 == 2) {
        var_a0 = 0;
        var_v0_2 = arg1;
        do {
            *(&D_801B4A0C + var_a0) = *var_v0_2;
            var_a0 += 1;
            var_v0_2 = arg1 + var_a0;
        } while (var_a0 < 4);
        var_v1 = arg0 & 0xFF;
    }
    if (var_v1 == 0xE) {
        D_801B4A10 = *arg1;
    }
    var_a1 = &D_801B4CD0;
    temp_a0 = var_v1 * 4;
    D_801B4CD0.unk0 = 0U;
    if (*(&D_801B4B38 + temp_a0) != 0) {
        D_801B4CD0.unk1 = 0U;
    }
    *D_801B4CB8 = 0;
    temp_v1_2 = temp_a0 + (&D_801B4B38 + 0x100);
    var_a0_2 = 0;
    if (*temp_v1_2 > 0) {
        var_a1 = temp_v1_2;
        var_v0_3 = arg1;
        do {
            *D_801B4CC0 = *var_v0_3;
            var_a0_2 += 1;
            var_v0_3 = arg1 + var_a0_2;
        } while (var_a0_2 < *var_a1);
    }
    D_801B4A11 = arg0;
    *D_801B4CBC = arg0;
    var_v0 = 0;
    if (arg3 == 0) {
        D_801E4790 = func_8015EBDC(-1, var_a1) + 0x3C0;
        D_801E4794 = 0;
        D_801E4798 = &D_800F4864;
        var_a2 = arg2;
        if (D_801B4CD0.unk0 == 0) {
loop_20:
            if ((D_801E4790 < func_8015EBDC(-1)) || (temp_v1_3 = D_801E4794, D_801E4794 += 1, ((temp_v1_3 > 0x3C0000) != 0))) {
                puts(D_800F47B0);
                printf(D_800F47C0, D_801E4798, *((D_801B4A11 * 4) + &D_801B4A18), *((D_801B4CD0.unk0 * 4) + &D_801B4A98), *((D_801B4CD0.unk1 * 4) + &D_801B4A98));
                func_80156B14();
                var_v0_4 = -1;
            } else {
                var_v0_4 = 0;
            }
            var_v0 = -1;
            if (var_v0_4 == 0) {
                if (func_8015EF40() != 0) {
                    temp_s1 = *D_801B4CB8 & 3;
loop_27:
                    temp_v0 = func_80155BDC();
                    if (temp_v0 != 0) {
                        var_v0_5 = temp_v0 & 2;
                        if (temp_v0 & 4) {
                            if (D_801B49F4 != NULL) {
                                D_801B49F4(D_801B4CD0.unk1, &D_801E4780);
                            }
                            var_v0_5 = temp_v0 & 2;
                        }
                        if ((var_v0_5 != 0) && (D_801B49F0 != NULL)) {
                            D_801B49F0(D_801B4CD0.unk0, &D_801E4778);
                        }
                        goto loop_27;
                    }
                    *D_801B4CB8 = temp_s1;
                }
                var_a2 = arg2;
                if (D_801B4CD0.unk0 != 0) {
                    goto block_37;
                }
                goto loop_20;
            }
        } else {
block_37:
            var_a0_3 = &D_801E4778;
            var_v1_2 = 7;
            if (var_a2 != NULL) {
                do {
                    temp_v0_2 = *var_a0_3;
                    var_a0_3 += 1;
                    var_v1_2 -= 1;
                    *var_a2 = temp_v0_2;
                    var_a2 += 1;
                } while (var_v1_2 != -1);
            }
            var_v0 = 0;
            if (D_801B4CD0.unk0 == 5) {
                var_v0 = -1;
            }
        }
    }
    return var_v0;
}
