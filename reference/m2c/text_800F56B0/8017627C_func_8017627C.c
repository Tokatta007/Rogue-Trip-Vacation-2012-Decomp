/* m2c reference for func_8017627C @ 8017627C (382 words). Generated; not compiled or validated. */
? func_80160960(s32, s32);                          /* extern */
s16 func_80176908(u32, s32, u32, s32);              /* extern */
extern s32 D_801BC000;
extern u16 D_801C2694;

void func_8017627C(void *arg0) {
    s32 sp10;
    s32 sp14;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v1;
    s16 temp_v1_2;
    s32 temp_s1;
    s32 temp_s2;
    s32 temp_s3;
    s32 temp_v1_3;
    s32 temp_v1_4;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a1;
    s32 var_a1_2;
    s32 var_a2;
    s32 var_a2_2;
    s32 var_a2_3;
    s32 var_s4;
    s32 var_v0;
    s32 var_v0_2;
    u16 *var_s5;
    u16 temp_a1;
    u16 temp_a3;
    u16 var_a1_3;
    u16 var_a1_4;
    u16 var_a1_5;
    u16 var_a1_6;
    u16 var_a1_7;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a0_3;
    void *temp_a0_4;
    void *temp_v1_5;

    var_s4 = 0;
    temp_s1 = arg0->unk4;
    var_s5 = &D_801C2694;
    temp_s2 = temp_s1 == 0;
    do {
        if (arg0->unk0 & (1 << var_s4)) {
            temp_s3 = var_s4 * 8;
            if ((temp_s2 != 0) || (temp_s1 & 0x10)) {
                ((var_s4 * 0x10) + D_801BC000)->unk4 = (u16) arg0->unk14;
            }
            if ((temp_s2 != 0) || (temp_s1 & 0x40)) {
                *var_s5 = arg0->unk18;
            }
            if ((temp_s2 != 0) || (temp_s1 & 0x20)) {
                temp_a1 = *var_s5;
                temp_a3 = arg0->unk16;
                ((temp_s3 * 2) + D_801BC000)->unk4 = func_80176908(temp_a1 >> 8, temp_a1 & 0xFF, temp_a3 >> 8, temp_a3 & 0xFF);
            }
            if ((temp_s2 != 0) || (temp_s1 & 1)) {
                var_a0 = 0;
                var_a1 = arg0->unk8 & 0x7FFF;
                if ((temp_s2 != 0) || (temp_s1 & 4)) {
                    temp_v0 = arg0->unkC - 1;
                    switch (temp_v0) {              /* switch 1 */
                    case 0:                         /* switch 1 */
                        var_a0 = 0x8000;
                        break;
                    case 1:                         /* switch 1 */
                        var_a0 = 0x9000;
                        break;
                    case 2:                         /* switch 1 */
                        var_a0 = 0xA000;
                        break;
                    case 3:                         /* switch 1 */
                        var_a0 = 0xB000;
                        break;
                    case 4:                         /* switch 1 */
                        var_a0 = 0xC000;
                        break;
                    case 5:                         /* switch 1 */
                        var_a0 = 0xD000;
                        break;
                    case 6:                         /* switch 1 */
                        var_a0 = 0xE000;
                        break;
                    }
                }
                if (var_a0 != 0) {
                    temp_v1 = (s16) arg0->unk8;
                    if (temp_v1 >= 0x80) {
                        var_a1 = 0x7F;
                    } else if (temp_v1 < 0) {
                        var_a1 = 0;
                    }
                }
                *((temp_s3 * 2) + D_801BC000) = var_a1 | var_a0;
            }
            if ((temp_s2 != 0) || (temp_s1 & 2)) {
                var_a0_2 = 0;
                var_a1_2 = arg0->unkA & 0x7FFF;
                if ((temp_s2 != 0) || (temp_s1 & 8)) {
                    temp_v0_2 = arg0->unkE - 1;
                    switch (temp_v0_2) {            /* switch 2 */
                    case 0:                         /* switch 2 */
                        var_a0_2 = 0x8000;
                        break;
                    case 1:                         /* switch 2 */
                        var_a0_2 = 0x9000;
                        break;
                    case 2:                         /* switch 2 */
                        var_a0_2 = 0xA000;
                        break;
                    case 3:                         /* switch 2 */
                        var_a0_2 = 0xB000;
                        break;
                    case 4:                         /* switch 2 */
                        var_a0_2 = 0xC000;
                        break;
                    case 5:                         /* switch 2 */
                        var_a0_2 = 0xD000;
                        break;
                    case 6:                         /* switch 2 */
                        var_a0_2 = 0xE000;
                        break;
                    }
                }
                if (var_a0_2 != 0) {
                    temp_v1_2 = (s16) arg0->unkA;
                    if (temp_v1_2 >= 0x80) {
                        var_a1_2 = 0x7F;
                    } else if (temp_v1_2 < 0) {
                        var_a1_2 = 0;
                    }
                }
                ((temp_s3 * 2) + D_801BC000)->unk2 = (s16) (var_a1_2 | var_a0_2);
            }
            if ((temp_s2 != 0) || (temp_s1 & 0x80)) {
                func_80160960(temp_s3 | 3, arg0->unk1C);
            }
            if ((temp_s2 != 0) || (temp_s1 & 0x10000)) {
                func_80160960(temp_s3 | 7, arg0->unk20);
            }
            var_v0 = temp_s3 * 2;
            if ((temp_s2 != 0) || (var_v0 = temp_s3 * 2, ((temp_s1 & 0x20000) != 0))) {
                (var_v0 + D_801BC000)->unk8 = (u16) arg0->unk3A;
            }
            var_v0_2 = temp_s3 * 2;
            if ((temp_s2 != 0) || (var_v0_2 = temp_s3 * 2, ((temp_s1 & 0x40000) != 0))) {
                (var_v0_2 + D_801BC000)->unkA = (u16) arg0->unk3C;
            }
            if ((temp_s2 != 0) || (temp_s1 & 0x800)) {
                var_a1_3 = arg0->unk30;
                if (var_a1_3 >= 0x80U) {
                    var_a1_3 = 0x7F;
                }
                var_a2 = 0;
                if (((temp_s2 != 0) || (temp_s1 & 0x100)) && (arg0->unk24 == 5)) {
                    var_a2 = 0x80;
                }
                temp_a0 = (temp_s3 * 2) + D_801BC000;
                temp_a0->unk8 = (u16) ((temp_a0->unk8 & 0xFF) | ((var_a1_3 | var_a2) << 8));
            }
            if ((temp_s2 != 0) || (temp_s1 & 0x1000)) {
                var_a1_4 = arg0->unk32;
                if (var_a1_4 >= 0x10U) {
                    var_a1_4 = 0xF;
                }
                temp_a0_2 = (temp_s3 * 2) + D_801BC000;
                temp_a0_2->unk8 = (u16) ((temp_a0_2->unk8 & 0xFF0F) | (var_a1_4 * 0x10));
            }
            if ((temp_s2 != 0) || (temp_s1 & 0x2000)) {
                var_a1_5 = arg0->unk34;
                if (var_a1_5 >= 0x80U) {
                    var_a1_5 = 0x7F;
                }
                var_a2_2 = 0x100;
                if ((temp_s2 != 0) || (temp_s1 & 0x200)) {
                    temp_v1_3 = arg0->unk28;
                    switch (temp_v1_3) {            /* switch 3; irregular */
                    case 1:                         /* switch 3 */
                        var_a2_2 = 0;
                        break;
                    case 5:                         /* switch 3 */
                        var_a2_2 = 0x200;
                        break;
                    case 7:                         /* switch 3 */
                        var_a2_2 = 0x300;
                        break;
                    }
                }
                temp_a0_3 = (temp_s3 * 2) + D_801BC000;
                temp_a0_3->unkA = (u16) ((temp_a0_3->unkA & 0x3F) | ((var_a1_5 | var_a2_2) << 6));
            }
            if ((temp_s2 != 0) || (temp_s1 & 0x4000)) {
                var_a1_6 = arg0->unk36;
                if (var_a1_6 >= 0x20U) {
                    var_a1_6 = 0x1F;
                }
                var_a2_3 = 0;
                if ((temp_s2 != 0) || (temp_s1 & 0x400)) {
                    temp_v1_4 = arg0->unk2C;
                    if ((temp_v1_4 != 3) && (temp_v1_4 == 7)) {
                        var_a2_3 = 0x20;
                    }
                }
                temp_a0_4 = (temp_s3 * 2) + D_801BC000;
                temp_a0_4->unkA = (u16) ((temp_a0_4->unkA & 0xFFC0) | (var_a1_6 | var_a2_3));
            }
            if ((temp_s2 != 0) || (temp_s1 & 0x8000)) {
                var_a1_7 = arg0->unk38;
                if (var_a1_7 >= 0x10U) {
                    var_a1_7 = 0xF;
                }
                temp_v1_5 = (temp_s3 * 2) + D_801BC000;
                temp_v1_5->unk8 = (u16) ((temp_v1_5->unk8 & 0xFFF0) | var_a1_7);
            }
        }
        var_s4 += 1;
        var_s5 += 2;
    } while (var_s4 < 0x18);
    sp14 = 1;
    sp10 = 0;
loop_109:
    if (sp10 < 2) {
        sp14 *= 0xD;
        sp10 += 1;
        goto loop_109;
    }
}
