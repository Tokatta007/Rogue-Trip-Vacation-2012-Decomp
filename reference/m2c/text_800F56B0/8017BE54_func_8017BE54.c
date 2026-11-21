/* m2c reference for func_8017BE54 @ 8017BE54 (82 words). Generated; not compiled or validated. */
s32 func_8015F890();                                /* extern */
extern s32 D_801C30E0;
extern ? D_801C30E4;
extern s32 D_801F3AA4;

void func_8017BE54(s32 arg0) {
    s32 temp_a0;
    s32 var_v0;

    temp_a0 = func_8015F890();
    if (arg0 & 0x1000) {
        D_801C30E4.unk0 = 1;
        D_801C30E4.unk-4 = (s32) (arg0 & 0xFFF);
    } else {
        D_801C30E4.unk0 = 0;
        D_801C30E4.unk-4 = arg0;
    }
    if (D_801C30E0 < 6) {
        switch (D_801C30E0) {                       /* switch 1 */
        case 4:                                     /* switch 1 */
            D_801F3AA4 = 0x32;
            var_v0 = 5;
            if (temp_a0 != 1) {
                D_801C30E0 = 0x32;
                return;
            }
block_10:
            D_801C30E0 = var_v0;
            return;
        case 1:                                     /* switch 1 */
            var_v0 = 0x3C;
            D_801F3AA4 = 0x3C;
            if (temp_a0 == 0) {
                var_v0 = 5;
            }
            goto block_10;
        case 3:                                     /* switch 1 */
            D_801F3AA4 = 0x78;
            return;
        case 2:                                     /* switch 1 */
            D_801F3AA4 = 0xF0;
            return;
        case 5:                                     /* switch 1 */
            switch (temp_a0) {                      /* switch 2; irregular */
            case 1:                                 /* switch 2 */
block_18:
                D_801F3AA4 = 0x32;
                return;
            default:                                /* switch 1 */
            case 0:                                 /* switch 2 */
block_19:
block_20:
                D_801F3AA4 = 0x3C;
                return;
            }
            break;
        case 0:                                     /* switch 1 */
            if (temp_a0 != 0) {
                if (temp_a0 == 1) {
                    goto block_18;
                }
                goto block_20;
            }
            goto block_19;
        }
    } else {
        D_801F3AA4 = D_801C30E0;
    }
}
