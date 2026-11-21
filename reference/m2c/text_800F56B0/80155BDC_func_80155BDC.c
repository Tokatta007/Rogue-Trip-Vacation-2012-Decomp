/* m2c reference for func_80155BDC @ 80155BDC (343 words). Generated; not compiled or validated. */
extern s32 D_801B49FC;
extern s32 D_801B4A00;
extern s32 D_801B4A04;
extern s32 D_801B4A08;
extern u8 D_801B4A11;
extern ? D_801B4A18;
extern ? D_801B4AB8;
extern ? D_801B4BB8;
extern u8 *D_801B4CB8;
extern u8 *D_801B4CBC;
extern s8 *D_801B4CC0;
extern u8 *D_801B4CC4;
extern ? D_801B4CD0;
extern u8 D_801E4778;
extern u8 D_801E4780;
extern u8 D_801E4788;
static s8 D_800F47DC[0xC] = { 0x44, 0x69, 0x73, 0x6B, 0x45, 0x72, 0x72, 0x6F, 0x72, 0x3A, 0x20, 0 }; /* const */
static s8 D_800F47E8[0x1C] = {
    0x63,
    0x6F,
    0x6D,
    0x3D,
    0x25,
    0x73,
    0x2C,
    0x63,
    0x6F,
    0x64,
    0x65,
    0x3D,
    0x28,
    0x25,
    0x30,
    0x32,
    0x78,
    0x3A,
    0x25,
    0x30,
    0x32,
    0x78,
    0x29,
    0xA,
    0,
    0,
    0,
    0,
}; /* const */
static s8 D_800F4804[0x14] = {
    0x43,
    0x44,
    0x52,
    0x4F,
    0x4D,
    0x3A,
    0x20,
    0x75,
    0x6E,
    0x6B,
    0x6E,
    0x6F,
    0x77,
    0x6E,
    0x20,
    0x69,
    0x6E,
    0x74,
    0x72,
    0,
}; /* const */
static s8 D_800F4818[0xC] = { 0x28, 0x25, 0x64, 0x29, 0xA, 0, 0, 0, 0, 0, 0, 0 }; /* const */

s32 func_80155BDC(void) {
    u8 sp10;
    u8 sp18;
    s32 temp_v0_2;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a0_3;
    s32 var_a0_4;
    s32 var_a0_5;
    s32 var_a0_7;
    s32 var_a0_9;
    s32 var_s0;
    s32 var_s1;
    s32 var_v1;
    s32 var_v1_10;
    s32 var_v1_8;
    u8 *temp_v1;
    u8 *var_a0_6;
    u8 *var_a0_8;
    u8 *var_a1;
    u8 *var_a1_2;
    u8 *var_a1_3;
    u8 *var_a1_4;
    u8 *var_a1_5;
    u8 *var_a1_6;
    u8 *var_a1_7;
    u8 *var_a1_8;
    u8 *var_a1_9;
    u8 *var_v0;
    u8 *var_v1_11;
    u8 *var_v1_2;
    u8 *var_v1_3;
    u8 *var_v1_4;
    u8 *var_v1_5;
    u8 *var_v1_7;
    u8 *var_v1_9;
    u8 temp_v0;
    u8 temp_v0_10;
    u8 temp_v0_11;
    u8 temp_v0_3;
    u8 temp_v0_4;
    u8 temp_v0_5;
    u8 temp_v0_6;
    u8 temp_v0_7;
    u8 temp_v0_8;
    u8 temp_v0_9;
    u8 var_v0_2;
    u8 var_v1_6;

    *D_801B4CB8 = 1;
    temp_v0 = *D_801B4CC4 & 7;
    sp10 = temp_v0;
    var_s1 = 0;
    if (temp_v0 != 0) {
loop_3:
        var_s0 = 0;
        if (sp10 != (*D_801B4CC4 & 7)) {
            sp10 = *D_801B4CC4 & 7;
            goto loop_3;
        }
loop_5:
        temp_v1 = &(&sp18)[var_s0];
        if (*D_801B4CB8 & 0x20) {
            var_s0 += 1;
            *temp_v1 = *D_801B4CBC;
            if (var_s0 < 8) {
                goto loop_5;
            }
        }
        var_v1 = var_s0;
        if (var_s0 < 8) {
            var_v0 = &(&sp18)[var_v1];
            do {
                *var_v0 = 0;
                var_v1 += 1;
                var_v0 = &(&sp18)[var_v1];
            } while (var_v1 < 8);
        }
        *D_801B4CB8 = 1;
        *D_801B4CC4 = 7;
        *D_801B4CC0 = 7;
        if ((sp10 != 3) || (*(&D_801B4BB8 + (D_801B4A11 * 4)) != 0)) {
            if (!(D_801B4A00 & 0x10) && (sp18 & 0x10)) {
                D_801B4A08 += 1;
            }
            temp_v0_2 = sp18 & 0xFF;
            var_s1 = temp_v0_2 & 0x1D;
            D_801B4A00 = temp_v0_2;
            D_801B4A04 = (s32) sp19;
        }
        if ((sp10 == 5) && (D_801B49FC > 0)) {
            printf(D_800F47DC);
            if (D_801B49FC > 0) {
                printf(D_800F47E8, *(&D_801B4A18 + (D_801B4A11 * 4)), D_801B4A00, D_801B4A04);
            }
        }
        switch (sp10) {
        case 3:
            if (var_s1 != 0) {
                D_801B4CD0.unk0 = 5U;
                var_v1_2 = &D_801E4778;
                var_a1 = &sp18;
                if (&D_801E4778 != NULL) {
                    var_a0 = 7;
                    do {
                        temp_v0_3 = *var_a1;
                        var_a1 += 1;
                        var_a0 -= 1;
                        *var_v1_2 = temp_v0_3;
                        var_v1_2 += 1;
                    } while (var_a0 != -1);
                    return 2;
                }
                goto block_41;
            }
            if (*(&D_801B4AB8 + (D_801B4A11 * 4)) != 0) {
                D_801B4CD0.unk0 = 3U;
                var_v1_3 = &D_801E4778;
                var_a1_2 = &sp18;
                if (&D_801E4778 != NULL) {
                    var_a0_2 = 7;
                    do {
                        temp_v0_4 = *var_a1_2;
                        var_a1_2 += 1;
                        var_a0_2 -= 1;
                        *var_v1_3 = temp_v0_4;
                        var_v1_3 += 1;
                    } while (var_a0_2 != -1);
                }
                return 1;
            }
            D_801B4CD0.unk0 = 2U;
            var_v1_4 = &D_801E4778;
            var_a1_3 = &sp18;
            if (&D_801E4778 != NULL) {
                var_a0_3 = 7;
                do {
                    temp_v0_5 = *var_a1_3;
                    var_a1_3 += 1;
                    var_a0_3 -= 1;
                    *var_v1_4 = temp_v0_5;
                    var_v1_4 += 1;
                } while (var_a0_3 != -1);
                return 2;
            }
block_41:
            return 2;
        case 2:
            var_v0_2 = 2;
            if (var_s1 != 0) {
                var_v0_2 = 5;
            }
            D_801B4CD0.unk0 = var_v0_2;
            var_v1_5 = &D_801E4778;
            var_a1_4 = &sp18;
            if (&D_801E4778 != NULL) {
                var_a0_4 = 7;
                do {
                    temp_v0_6 = *var_a1_4;
                    var_a1_4 += 1;
                    var_a0_4 -= 1;
                    *var_v1_5 = temp_v0_6;
                    var_v1_5 += 1;
                } while (var_a0_4 != -1);
            }
            goto block_41;
        case 1:
            if ((var_s1 != 0) && (var_s0 == 1)) {
                var_s1 = 0;
            }
            var_v1_6 = 1;
            if (var_s1 != 0) {
                var_v1_6 = 5;
            }
            D_801B4CD0.unk1 = var_v1_6;
            var_v1_7 = &D_801E4780;
            var_a1_5 = &sp18;
            if (&D_801E4780 != NULL) {
                var_a0_5 = 7;
                do {
                    temp_v0_7 = *var_a1_5;
                    var_a1_5 += 1;
                    var_a0_5 -= 1;
                    *var_v1_7 = temp_v0_7;
                    var_v1_7 += 1;
                } while (var_a0_5 != -1);
            }
            *D_801B4CB8 = 0;
            *D_801B4CC4 = 0;
            return 4;
        case 4:
            var_a0_6 = &D_801E4788;
            D_801B4CD0.unk2 = 4U;
            var_a1_6 = &sp18;
            D_801B4CD0.unk1 = (u8) D_801B4CD0.unk2;
            var_v1_8 = 7;
            if (&D_801E4788 != NULL) {
                do {
                    temp_v0_8 = *var_a1_6;
                    var_a1_6 += 1;
                    var_v1_8 -= 1;
                    *var_a0_6 = temp_v0_8;
                    var_a0_6 += 1;
                } while (var_v1_8 != -1);
            }
            var_v1_9 = &D_801E4780;
            var_a1_7 = &sp18;
            if (&D_801E4780 != NULL) {
                var_a0_7 = 7;
                do {
                    temp_v0_9 = *var_a1_7;
                    var_a1_7 += 1;
                    var_a0_7 -= 1;
                    *var_v1_9 = temp_v0_9;
                    var_v1_9 += 1;
                } while (var_a0_7 != -1);
            }
            return 4;
        case 5:
            var_a0_8 = &D_801E4778;
            D_801B4CD0.unk1 = 5U;
            var_a1_8 = &sp18;
            D_801B4CD0.unk0 = (u8) D_801B4CD0.unk1;
            var_v1_10 = 7;
            if (&D_801E4778 != NULL) {
                do {
                    temp_v0_10 = *var_a1_8;
                    var_a1_8 += 1;
                    var_v1_10 -= 1;
                    *var_a0_8 = temp_v0_10;
                    var_a0_8 += 1;
                } while (var_v1_10 != -1);
            }
            var_v1_11 = &D_801E4780;
            var_a1_9 = &sp18;
            if (&D_801E4780 != NULL) {
                var_a0_9 = 7;
                do {
                    temp_v0_11 = *var_a1_9;
                    var_a1_9 += 1;
                    var_a0_9 -= 1;
                    *var_v1_11 = temp_v0_11;
                    var_v1_11 += 1;
                } while (var_a0_9 != -1);
            }
            return 6;
        default:
            puts(D_800F4804);
            printf(D_800F4818, sp10);
            goto block_66;
        }
    } else {
block_66:
        return 0;
    }
}
