/* m2c reference for func_80156138 @ 80156138 (160 words). Generated; not compiled or validated. */
s32 func_80155BDC();                                /* extern */
? func_80156B14();                                  /* extern */
s32 func_8015EBDC(?);                               /* extern */
s32 func_8015EF40();                                /* extern */
extern ? (*D_801B49F0)(u8, u8 *);
extern ? (*D_801B49F4)(u8, ? *);
extern u8 D_801B4A11;
extern ? D_801B4A18;
extern ? D_801B4A98;
extern u8 *D_801B4CB8;
extern ? D_801B4CD0;
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
static ? D_800F4838;                                /* unable to generate initializer: unknown type; const */

s32 func_80156138(s32 arg0, u8 *arg1) {
    s32 temp_a2;
    s32 temp_v0;
    s32 temp_v1;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v1;
    u8 *var_a0;
    u8 *var_a1;
    u8 temp_s1;
    u8 temp_v0_2;

    D_801E4790 = func_8015EBDC(-1) + 0x3C0;
    D_801E4794 = 0;
    D_801E4798 = &D_800F4838;
loop_1:
    if ((D_801E4790 < func_8015EBDC(-1)) || (temp_v1 = D_801E4794, D_801E4794 += 1, ((temp_v1 > 0x3C0000) != 0))) {
        puts(D_800F47B0);
        printf(D_800F47C0, D_801E4798, *((D_801B4A11 * 4) + &D_801B4A18), *((D_801B4CD0.unk0 * 4) + &D_801B4A98), *((D_801B4CD0.unk1 * 4) + &D_801B4A98));
        func_80156B14();
        var_v0_2 = -1;
    } else {
        var_v0_2 = 0;
    }
    var_v0 = -1;
    if (var_v0_2 == 0) {
        if (func_8015EF40() != 0) {
            temp_s1 = *D_801B4CB8 & 3;
loop_8:
            temp_v0 = func_80155BDC();
            if (temp_v0 != 0) {
                var_v0_3 = temp_v0 & 2;
                if (temp_v0 & 4) {
                    if (D_801B49F4 != NULL) {
                        D_801B49F4(D_801B4CD0.unk1, &D_801E4780);
                    }
                    var_v0_3 = temp_v0 & 2;
                }
                if ((var_v0_3 != 0) && (D_801B49F0 != NULL)) {
                    D_801B49F0(D_801B4CD0.unk0, &D_801E4778);
                }
                goto loop_8;
            }
            *D_801B4CB8 = temp_s1;
        }
        temp_a2 = D_801B4CD0.unk0 & 0xFF;
        if ((temp_a2 == 2) || (temp_a2 == 5)) {
            D_801B4CD0.unk0 = 2U;
            var_a1 = arg1;
            var_a0 = &D_801E4778;
            var_v1 = 7;
            if (var_a1 != NULL) {
                do {
                    temp_v0_2 = *var_a0;
                    var_a0 += 1;
                    var_v1 -= 1;
                    *var_a1 = temp_v0_2;
                    var_a1 += 1;
                } while (var_v1 != -1);
            }
            return temp_a2;
        }
        var_v0 = 0;
        if (arg0 != 0) {
            /* Duplicate return node #24. Try simplifying control flow for better match */
            return var_v0;
        }
        goto loop_1;
    }
    return var_v0;
}
