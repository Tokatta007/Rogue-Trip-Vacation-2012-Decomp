/* m2c reference for func_8011AE24 @ 8011AE24 (163 words). Generated; not compiled or validated. */
? func_8013CEBC(s32, void *, ?);                    /* extern */
? func_8015C008(?, s32);                            /* extern */
? func_8015C2B4(s16 *, ? *);                        /* extern */
? func_8015C314(s16 *, u16 *);                      /* extern */
? func_8015C374(s16 *, u16, u16);                   /* extern */
extern ? D_801C7030;
static ? D_801C32B0;                                /* unable to generate initializer: unknown type */
static ? D_801C32B4;                                /* unable to generate initializer: unknown type */
static s32 D_801C34F4 = 0;

void func_8011AE24(void) {
    s16 sp10;
    u16 sp12;
    s16 sp14;
    s16 sp16;
    u16 sp18;
    s32 var_a1;
    s32 var_s1;
    s32 var_s2;
    s32 var_v1;
    u16 *var_a0;
    void *temp_s0;

    var_s2 = 0;
    var_s1 = 0;
loop_1:
    if (var_s2 < 5) {
        temp_s0 = var_s1 + &D_801C7030;
        if (temp_s0->unk103 != 0) {
            func_8013CEBC(D_801C34F4 + 0x8C, temp_s0 + 0x104, 0);
            switch (temp_s0->unk103) {              /* irregular */
            case 2:
                sp10 = (temp_s0->unkFA & 0x3F) * 0x10;
                sp14 = 0x100;
                sp16 = 1;
                sp12 = (u16) ((u16) temp_s0->unkFA >> 6);
                func_8015C374(&sp10, temp_s0->unkFC, temp_s0->unkFE);
                func_8015C008(0);
                temp_s0->unk103 = 1U;
                var_s1 += 0x110;
                break;
            case 1:
                sp10 = (temp_s0->unkFA & 0x3F) * 0x10;
                sp14 = 0x100;
                sp16 = 1;
                sp12 = (u16) ((u16) temp_s0->unkFA >> 6);
                func_8015C314(&sp10, &sp18);
                var_v1 = 0;
                var_a1 = 0;
                var_a0 = &sp18;
                temp_s0->unk100 = 0xF0U;
loop_7:
                if (*var_a0 == 0) {
                    temp_s0->unk100 = (u8) (var_v1 - 1);
                    var_a1 = 1;
                }
                var_v1 += 1;
                var_a0 += 2;
                if ((var_v1 < 0xFF) && (var_a1 == 0)) {
                    goto loop_7;
                }
                temp_s0->unk103 = 3U;
                func_8015C008(0, var_a1);
                var_s1 += 0x110;
                break;
            case 3:
                temp_s0->unk102 = (u8) (temp_s0->unk102 + ((u8) temp_s0->unk100 >> 6));
                if ((u8) temp_s0->unk102 >= 2U) {
                    sp10 = (s16) temp_s0->unk101;
                    sp14 = 1;
                    sp16 = 1;
                    sp12 = temp_s0->unkFE;
                    func_8015C2B4(&sp10, &D_801C32B0);
                    func_8015C008(0);
                    temp_s0->unk101 = (u8) (temp_s0->unk101 + 1);
                    temp_s0->unk102 = 0U;
                    if ((u8) temp_s0->unk101 >= (u32) ((u8) temp_s0->unk100 >> 3)) {
                        sp10 = temp_s0->unk101 - ((u8) temp_s0->unk100 >> 3);
                        func_8015C2B4(&sp10, &D_801C32B4);
                    }
                    if ((temp_s0->unk100 - 2) < (s32) temp_s0->unk101) {
                        temp_s0->unk103 = 0U;
                        temp_s0->unkF4->unk4 = 2;
                    }
                }
                goto block_18;
            }
        } else {
block_18:
            var_s1 += 0x110;
        }
        var_s2 += 1;
        goto loop_1;
    }
}
