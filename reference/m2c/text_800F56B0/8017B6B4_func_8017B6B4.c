/* m2c reference for func_8017B6B4 @ 8017B6B4 (235 words). Generated; not compiled or validated. */
? func_8017B470(s16, s16, u8, void *);              /* extern */
s32 func_8017BA64(s16, s16, s8, void *);            /* extern */
extern ? (*D_801F3A08)(s16, s16, u8, u8);
extern ? (*D_801F3A0C)(s32, s16, u8, void *);
extern ? (*D_801F3A10)(s16, s32, s8, void *);
extern ? (*D_801F3A14)(s32, s16, u8, void *);
extern ? (*D_801F3A18)(s32, s16, u8, void *);
extern ? D_801F3AA8;

s32 func_8017B6B4(s16 arg0, s16 arg1) {
    ? (*var_v0_2)(s32, s16, u8, void *);
    s16 var_a0;
    s32 *var_a2;
    s32 temp_v0;
    s32 var_a0_2;
    s32 var_a1;
    s32 var_v0;
    u8 temp_s2;
    u8 temp_s2_2;
    u8 temp_v1_2;
    u8 var_a2_2;
    u8 var_a2_3;
    u8 var_s4;
    void *temp_a3;
    void *temp_a3_2;
    void *temp_s3;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_4;
    void *temp_v0_5;
    void *temp_v0_6;
    void *temp_v0_7;
    void *temp_v1;

    var_a2 = (arg0 * 4) + &D_801F3AA8;
    temp_v0 = arg1 * 0xB0;
    temp_s3 = *var_a2 + temp_v0;
    temp_a3 = temp_s3->unk0;
    temp_s2 = temp_a3->unk0;
    temp_a3_2 = temp_a3 + 1;
    temp_s3->unk0 = temp_a3_2;
    if (((temp_v0 + *var_a2)->unk98 & 0x401) == 0x401) {
        temp_v1 = temp_s3->unk10;
        var_v0 = temp_s2 & 0x80;
        if (temp_a3_2 == (temp_v1 + 1)) {
            func_8017B470(arg0, arg1, temp_v1->unk1, temp_a3_2);
            return -1;
        }
        goto block_4;
    }
    var_v0 = temp_s2 & 0x80;
block_4:
    if (var_v0 != 0) {
        temp_s3->unk17 = (s8) (temp_s2 & 0xF);
        var_a2 = (s32 *) (temp_s2 & 0xF0);
        if (var_a2 != (s32 *)0xC0) {
            if ((s32) var_a2 < 0xC1) {
                switch (var_a2) {                   /* switch 1; irregular */
                case 0x90:                          /* switch 1 */
                    temp_v0_2 = temp_s3->unk0;
                    temp_s3->unk16 = (u8) var_a2;
                    temp_s2_2 = temp_v0_2->unk0;
                    temp_v0_3 = temp_v0_2 + 1;
                    temp_s3->unk0 = temp_v0_3;
                    var_s4 = temp_v0_2->unk1;
                    temp_s3->unk0 = (void *) (temp_v0_3 + 1);
                    temp_s3->unk90 = func_8017BA64(arg0, arg1, (s8) var_a2, temp_a3_2);
                    var_a2_2 = temp_s2_2;
                    goto block_28;
                case 0xB0:                          /* switch 1 */
                    var_a0 = arg0;
                    temp_v0_4 = temp_s3->unk0;
                    temp_s3->unk16 = (u8) var_a2;
                    var_a2_3 = temp_v0_4->unk0;
                    temp_s3->unk0 = (void *) (temp_v0_4 + 1);
                    var_v0_2 = D_801F3A18;
                    goto block_37;
                default:                            /* switch 1 */
                    return 0;
                }
            } else {
                switch (var_a2) {                   /* switch 2; irregular */
                case 0xE0:                          /* switch 2 */
                    var_a1 = arg1 << 0x10;
                    temp_s3->unk16 = (u8) var_a2;
                    temp_s3->unk0 = (void *) (temp_s3->unk0 + 1);
                    goto block_32;
                case 0xF0:                          /* switch 2 */
                    temp_v0_5 = temp_s3->unk0;
                    temp_s3->unk16 = 0xFFU;
                    temp_s3->unk0 = (void *) (temp_v0_5 + 1);
                    var_a2_3 = temp_v0_5->unk0 & 0xFF;
                    if (var_a2_3 != 0x2F) {
                        var_a0_2 = arg0 << 0x10;
                        goto block_36;
                    }
                    goto block_34;
                default:                            /* switch 2 */
                    return 0;
                }
            }
        } else {
            var_a0 = arg0;
            temp_v0_6 = temp_s3->unk0;
            temp_s3->unk16 = (u8) var_a2;
            var_a2_3 = temp_v0_6->unk0;
            temp_s3->unk0 = (void *) (temp_v0_6 + 1);
            var_v0_2 = D_801F3A0C;
            goto block_37;
        }
    } else {
        temp_v1_2 = temp_s3->unk16;
        if (temp_v1_2 != 0xC0) {
            if ((s32) temp_v1_2 < 0xC1) {
                switch (temp_v1_2) {                /* switch 3; irregular */
                case 0x90:                          /* switch 3 */
                    temp_v0_7 = temp_s3->unk0;
                    var_s4 = temp_v0_7->unk0;
                    temp_s3->unk0 = (void *) (temp_v0_7 + 1);
                    var_a2_2 = temp_s2;
                    temp_s3->unk90 = func_8017BA64(arg0, arg1, (s8) var_a2, temp_a3_2);
block_28:
                    D_801F3A08(arg0, arg1, var_a2_2, var_s4);
                    return 0;
                case 0xB0:                          /* switch 3 */
                    var_a0 = arg0;
                    var_v0_2 = D_801F3A18;
                    var_a2_3 = temp_s2;
                    goto block_37;
                default:                            /* switch 3 */
                    return 0;
                }
            } else {
                switch (temp_v1_2) {                /* switch 4; irregular */
                case 0xE0:                          /* switch 4 */
                    var_a1 = arg1 << 0x10;
block_32:
                    D_801F3A10(arg0, var_a1 >> 0x10, (s8) var_a2, temp_a3_2);
                    return 0;
                case 0xFF:                          /* switch 4 */
                    var_a2_3 = temp_s2 & 0xFF;
                    if (var_a2_3 == 0x2F) {
block_34:
                        func_8017B470(arg0, arg1, 0x2FU, temp_a3_2);
                        return 1;
                    }
                    var_a0_2 = arg0 << 0x10;
block_36:
                    var_a0 = (s16) (var_a0_2 >> 0x10);
                    var_v0_2 = D_801F3A14;
                    goto block_37;
                default:                            /* switch 4 */
                    return 0;
                }
            }
        } else {
            var_a0 = arg0;
            var_v0_2 = D_801F3A0C;
            var_a2_3 = temp_s2;
block_37:
            var_v0_2((s32) var_a0, arg1, var_a2_3, temp_a3_2);
            return 0;
        }
    }
}
