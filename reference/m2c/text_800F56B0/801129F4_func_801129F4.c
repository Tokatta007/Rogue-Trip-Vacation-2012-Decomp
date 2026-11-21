/* m2c reference for func_801129F4 @ 801129F4 (251 words). Generated; not compiled or validated. */
? func_80112388(? *);                               /* extern */
? func_801127C0(void *, void *);                    /* extern */
? func_8011B7A4(u8, void *, void *);                /* extern */
? func_8016B504(? *, s32, ? *);                     /* extern */
? func_8016B574(? *, s32, s32 *);                   /* extern */
extern ? D_80180B3C;
extern ? D_80180C2C;
extern ? D_80180D1C;
extern ? D_801834D8;
extern ? D_801C3FC0;
static ? D_801C32A8;                                /* unable to generate initializer: unknown type */
static s32 D_801C32AC = 0;

void *func_801129F4(s32 arg0, s32 arg1, s32 arg2, u8 arg3) {
    s32 temp_s0_2;
    u8 temp_a0;
    u8 var_a0;
    u8 var_v0;
    void *temp_s0;

    temp_s0_2 = D_801C32AC;
    if (temp_s0_2 != -1) {
        func_8016B574(&D_80180C2C, temp_s0_2, &D_801C32AC);
        func_8016B504(&D_80180B3C, temp_s0_2, &D_801C32A8);
        temp_s0 = (temp_s0_2 * 0x26C) + &D_801C3FC0;
        func_8011B7A4(arg3, temp_s0 + 0x267, temp_s0 + 0x268);
        temp_s0->unk254 = 0x2009;
        temp_s0->unk0 = arg0;
        temp_s0->unk8 = arg1;
        temp_s0->unk4 = arg2;
        temp_s0->unk265 = 0;
        temp_s0->unk266 = (u8) (((temp_s0->unk267 * 0xC) + &D_801834D8)->unk2 - 1);
        temp_s0->unk258 = (u16) D_80180D1C.unk8;
        temp_s0->unk24C = (u16) D_80180D1C.unk0;
        temp_s0->unk24E = (u16) D_80180D1C.unk2;
        temp_s0->unk250 = (u16) D_80180D1C.unk4;
        temp_s0->unk25C = (u16) D_80180D1C.unkA;
        if ((s16) D_80180D1C.unkA != 0) {
            temp_s0->unk254 = (s32) (temp_s0->unk254 | 0x8000);
        }
        if (D_80180D1C.unkE != 0) {
            temp_s0->unk263 = (u8) D_80180D1C.unkE;
            temp_s0->unk254 = (s32) (temp_s0->unk254 | 0x30);
        }
        temp_s0->unk26A = 0xAU;
        temp_s0->unk269 = (u8) D_80180D1C.unkF;
        temp_s0->unk25A = (s16) (D_80180D1C.unkC << 5);
        temp_a0 = D_80180D1C.unk11 & 0xFF;
        if (temp_a0 != 2) {
            temp_s0->unk261 = (u8) D_80180D1C.unk11;
        } else {
            temp_s0->unk261 = temp_a0;
        }
        temp_s0->unk262 = -0x1F;
        temp_s0->unk26B = arg3;
        switch (arg3) {
        case 0x0:
            temp_s0->unk26A = 5U;
            temp_s0->unk254 = 0x100;
            temp_s0->unk264 = (s8) ((s32) (temp_s0->unk266 + 1) >> 2);
            break;
        case 0x2D:
            temp_s0->unk26A = 0U;
            temp_s0->unk254 = 0x200;
            break;
        case 0x20:
            var_v0 = 3;
block_14:
            temp_s0->unk26A = var_v0;
            temp_s0->unk254 = 0x2000;
            break;
        case 0x3:
        case 0x2B:
            var_v0 = 5;
            goto block_14;
        case 0x25:
        case 0x26:
            temp_s0->unk26A = 5U;
            temp_s0->unk254 = 0x100;
            break;
        case 0x32:
            temp_s0->unk254 = (s32) (temp_s0->unk254 & ~8);
            temp_s0->unk254 = (s32) (temp_s0->unk254 | 0x4106);
            temp_s0->unk26A = 0U;
            temp_s0->unk261 = 0U;
block_22:
            temp_s0->unk264 = 0;
            break;
        case 0x40:
        case 0x41:
            temp_s0->unk261 = 0U;
            /* fallthrough */
        case 0x43:
            temp_s0->unk254 = (s32) (temp_s0->unk254 & ~8);
            var_a0 = 1;
            temp_s0->unk254 = (s32) (temp_s0->unk254 | 0x506);
            if (arg3 == 0x41) {
                var_a0 = 0x29;
            }
            func_8011B7A4(var_a0, temp_s0 + 0x267, temp_s0 + 0x268);
            temp_s0->unk26A = 0U;
            temp_s0->unk262 = -4;
            goto block_22;
        case 0x44:
            temp_s0->unk254 = (s32) (temp_s0->unk254 | 0x106);
            temp_s0->unk26A = 0U;
            temp_s0->unk261 = 1U;
            func_8011B7A4(1U, temp_s0 + 0x267, temp_s0 + 0x268);
            goto block_22;
        }
        temp_s0->unk25F = (u8) temp_s0->unk268;
        temp_s0->unk260 = (u8) (temp_s0->unk268 << temp_s0->unk261);
        temp_s0->unk25E = (u8) temp_s0->unk260;
        if (temp_s0->unk26A == 0) {
            func_801127C0(temp_s0, temp_s0 + (((s32) (temp_s0->unk25F << 0x18) >> 0x12) + 0xC));
        }
        if (temp_s0->unk254 & 0x4000) {
            (temp_s0 + ((s32) (temp_s0->unk25F << 0x18) >> 0x12))->unk18 = (s32) ((temp_s0->unk267 * 0xC) + &D_801834D8)->unk8;
        } else {
            (temp_s0 + ((s32) (temp_s0->unk25F << 0x18) >> 0x12))->unk18 = 0;
        }
        func_80112388(&D_801834D8);
        return temp_s0;
    }
    return NULL;
}
