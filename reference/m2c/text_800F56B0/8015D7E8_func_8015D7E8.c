/* m2c reference for func_8015D7E8 @ 8015D7E8 (143 words). Generated; not compiled or validated. */
? func_8015E554();                                  /* extern */
s32 func_8015E588(s32);                             /* extern */
extern s16 D_801BAD4C;
extern s16 D_801BAD4E;
extern s32 *D_801BAE1C;
extern s32 *D_801BAE20;
extern s32 **D_801BAE24;
extern s32 *D_801BAE28;
extern s32 *D_801BAE2C;

s32 func_8015D7E8(void *arg0, s32 *arg1) {
    s16 temp_a1;
    s16 temp_a1_2;
    s32 *var_s2;
    s32 temp_a0;
    s32 temp_s0;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_a0_3;
    s32 var_s0;
    s32 var_v0;
    s32 var_v0_2;
    u16 var_a0;
    u16 var_a0_2;

    var_s2 = arg1;
    func_8015E554();
    temp_a1 = arg0->unk4;
    if (temp_a1 >= 0) {
        var_a0 = (u16) arg0->unk4;
        if (D_801BAD4C < temp_a1) {
            var_a0 = (u16) D_801BAD4C;
        }
    } else {
        var_a0 = 0;
    }
    temp_a1_2 = arg0->unk6;
    arg0->unk4 = (s16) var_a0;
    if (temp_a1_2 >= 0) {
        var_a0_2 = (u16) arg0->unk6;
        var_v0_2 = var_a0_2 << 0x10;
        if (D_801BAD4E < temp_a1_2) {
            var_a0_2 = (u16) D_801BAD4E;
            goto block_8;
        }
    } else {
        var_a0_2 = 0;
block_8:
        var_v0_2 = var_a0_2 << 0x10;
    }
    arg0->unk6 = (s16) var_a0_2;
    temp_v1 = (arg0->unk4 * (var_v0_2 >> 0x10)) + 1;
    temp_a0 = temp_v1 / 2;
    temp_s0 = temp_v1 >> 5;
    if (temp_a0 <= 0) {
        return -1;
    }
    var_a0_3 = 0xA0000000;
    if (!(*D_801BAE20 & 0x04000000)) {
loop_13:
        var_v0 = -1;
        if (func_8015E588(0xA0000000) == 0) {
            var_a0_3 = 0xA0000000;
            if (*D_801BAE20 & 0x04000000) {
                goto block_15;
            }
            goto loop_13;
        }
    } else {
block_15:
        *D_801BAE20 = 0x04000000;
        *D_801BAE1C = 0x01000000;
        if (0 != 0) {
            var_a0_3 = 0xB0000000;
        }
        *D_801BAE1C = var_a0_3;
        *D_801BAE1C = arg0->unk0;
        var_s0 = (temp_a0 - (temp_s0 * 0x10)) - 1;
        *D_801BAE1C = (s32) arg0->unk4;
        if (var_s0 != -1) {
            do {
                temp_v1_2 = *var_s2;
                var_s2 += 4;
                var_s0 -= 1;
                *D_801BAE1C = temp_v1_2;
            } while (var_s0 != -1);
        }
        if (temp_s0 != 0) {
            *D_801BAE20 = 0x04000002;
            *D_801BAE24 = var_s2;
            *D_801BAE28 = (temp_s0 << 0x10) | 0x10;
            *D_801BAE2C = 0x01000201;
        }
        var_v0 = 0;
    }
    return var_v0;
}
