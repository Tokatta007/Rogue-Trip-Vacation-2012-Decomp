/* m2c reference for func_8011BC6C @ 8011BC6C (1486 words). Generated; not compiled or validated. */
? func_8011BA5C(void *, void *, void *);            /* extern */
? func_8011BB04(void *, s32);                       /* extern */
s32 func_8015A000(s32);                             /* extern */
? func_8016B504(? *, s32, ? *);                     /* extern */
? func_8016B574(? *, s32, s32 *);                   /* extern */
extern ? D_801823F0;
extern ? D_80182AF8;
extern ? D_801833E0;
extern ? D_801834D8;
extern ? D_801C3788;
extern s32 D_801C378C;
extern ? D_801C7580;

s32 func_8011BC6C(void *arg0, void *arg1, u16 arg2, s8 arg3, s32 arg4, s32 arg5) {
    s32 temp_a0;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s0_5;
    s32 temp_s7;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 var_v0;
    s32 var_v0_3;
    s32 var_v0_9;
    s8 temp_v1_2;
    s8 temp_v1_3;
    s8 temp_v1_5;
    s8 var_a0;
    s8 var_a0_2;
    s8 var_a1;
    s8 var_s4;
    u16 var_s2;
    u16 var_v0_4;
    u16 var_v0_5;
    u16 var_v0_7;
    u16 var_v0_8;
    u16 var_v1;
    u32 temp_a0_2;
    u32 temp_s0_3;
    u32 temp_s0_4;
    u32 temp_v0_4;
    u32 temp_v0_5;
    u32 temp_v1_6;
    u8 var_v0_2;
    u8 var_v0_6;
    u8 var_v1_2;
    void *temp_s1;
    void *temp_v1;
    void *temp_v1_4;

    temp_s7 = D_801C378C;
    var_s4 = arg3;
    var_s2 = arg2;
    var_v0 = -1;
    if (temp_s7 != -1) {
        func_8016B574(&D_80182AF8, temp_s7, &D_801C378C);
        func_8016B504(&D_801823F0, temp_s7, &D_801C3788);
        temp_s1 = (temp_s7 * 0x58) + &D_801C7580;
        if (!(var_s2 & 0xFFFF)) {
            var_s2 = 1;
        }
        temp_v1 = (var_s4 * 4) + &D_801833E0;
        temp_s1->unk49 = var_s4;
        temp_s1->unk47 = (u8) temp_v1->unk0;
        temp_s1->unk46 = (u8) temp_s1->unk47;
        var_v1 = 0x4800;
        temp_s1->unk48 = (u8) temp_v1->unk2;
        if (arg5 & 1) {
            var_v1 = 0x4C00;
        }
        temp_s1->unk24 = var_v1;
        temp_s1->unk34 = 0U;
        temp_s1->unk54 = 0U;
        temp_s1->unk53 = (u8) temp_s1->unk54;
        temp_s1->unk4E = (u8) temp_s1->unk53;
        if (arg5 & 2) {
            temp_s1->unk24 = (u16) (temp_s1->unk24 | 0x100);
            temp_s1->unkC = arg0;
            if (arg1 != NULL) {
                temp_s1->unk10 = (s8) arg1->unk0;
                temp_s1->unk11 = (s8) arg1->unk4;
                temp_s1->unk12 = (s8) arg1->unk8;
            } else {
                temp_s1->unk10 = 0;
                temp_s1->unk11 = 0;
                temp_s1->unk12 = 0;
            }
            func_8011BA5C(temp_s1, temp_s1->unkC, temp_s1 + 0x10);
        } else {
            temp_s1->unk0 = (s32) (arg0->unk0 * 0x10);
            temp_s1->unk4 = (s32) (arg0->unk4 * 0x10);
            temp_s1->unk8 = (s32) (arg0->unk8 * 0x10);
            if (arg1 != NULL) {
                temp_s1->unkC = (s16) (arg1->unk0 * 0x10);
                temp_s1->unkE = (u16) (arg1->unk4 * 0x10);
                temp_s1->unk10 = (s16) (arg1->unk8 * 0x10);
                temp_s1->unk24 = (u16) (temp_s1->unk24 | 1);
            } else {
                temp_s1->unk10 = 0;
                temp_s1->unkE = (u16) temp_s1->unk10;
                temp_s1->unkC = (u16) temp_s1->unkE;
            }
        }
        temp_s1->unk4F = 0;
        switch (var_s4) {
        case 0x47:
            temp_v0 = var_s2 & 0xFFFF;
            temp_s1->unk34 = (u32) ((u32) (temp_v0 << 0xC) / (u32) (temp_v0 + 4));
            temp_s1->unk38 = (u16) ((u32) (temp_s1->unk34 * 0x190) >> 0xC);
            /* fallthrough */
        case 0x48:
            temp_s1->unk47 = (u8) D_801833E0.unk10;
            temp_s1->unk46 = (u8) temp_s1->unk47;
            temp_s1->unk48 = (u8) D_801833E0.unk12;
            /* fallthrough */
        case 0x4:
        case 0x49:
            if (var_s4 == 0x49) {
                temp_s1->unk47 = (u8) D_801833E0.unk14;
                temp_s1->unk46 = (u8) temp_s1->unk47;
                temp_s1->unk48 = (u8) D_801833E0.unk16;
            case 0x5:
            }
            temp_v0_2 = var_s2 & 0xFFFF;
            if (var_s4 != 0x47) {
                temp_s1->unk34 = (u32) ((u32) (temp_v0_2 << 0xC) / (u32) (temp_v0_2 + 0xC));
                temp_s1->unk38 = (u16) ((u32) (temp_s1->unk34 * 0x258) >> 0xB);
            }
            temp_a0 = var_s2 & 0xFFFF;
            temp_v1_2 = ((s32) (temp_a0 + (rand() % temp_a0)) >> 3) + 0x10;
            var_a1 = -1;
            if (temp_v1_2 < 0x100) {
                var_a1 = temp_v1_2;
            }
            temp_s1->unk4C = var_a1;
            temp_s1->unk14 = (u32) (temp_s1->unk38 + 1);
            temp_s1->unk3C = (u16) (((u32) temp_a0 >> 1) + 5);
            if ((u16) temp_s1->unk3C >= 0x29U) {
                temp_s1->unk3C = 0x28U;
            }
            temp_s1->unk4D = (s8) (rand() & 7);
            temp_s1->unk4A = (u8) ((rand() & 7) + 7);
            temp_s1->unk4B = (u8) ((rand() & 7) + 7);
            temp_s1->unkC = (s16) ((u16) temp_s1->unkC - (temp_s1->unk4A * 4));
            temp_s1->unkE = (u16) (temp_s1->unkE - (temp_s1->unk4B * 4));
            temp_s1->unk10 = (s16) ((u16) temp_s1->unk10 - ((u8) temp_s1->unk4C * 4));
            temp_s1->unk4E = 3U;
            temp_s1->unk50 = (u8) temp_s1->unk48;
            temp_s1->unk51 = 0;
            temp_s1->unk53 = 0x14U;
            temp_s1->unk52 = (u8) temp_s1->unk53;
            temp_s1->unk24 = (u16) (temp_s1->unk24 | 0x1007);
            break;
        case 0x4A:
            temp_s0 = var_s2 & 0xFFFF;
            temp_s1->unk47 = (u8) D_801833E0.unk10;
            temp_s1->unk46 = (u8) temp_s1->unk47;
            temp_s1->unk48 = (u8) D_801833E0.unk12;
            temp_s1->unk34 = (u32) ((u32) (temp_s0 << 0xC) / (u32) (temp_s0 + 0xC));
            temp_s1->unk38 = (u16) ((u32) (temp_s1->unk34 * 0x258) >> 0xB);
            temp_v1_3 = ((s32) (temp_s0 + (rand() % temp_s0)) >> 2) + 0x10;
            var_a0 = -1;
            if (temp_v1_3 < 0x100) {
                var_a0 = temp_v1_3;
            }
            temp_s1->unk4C = var_a0;
            temp_s1->unk14 = (u32) (temp_s1->unk38 + 1);
            temp_s1->unk3C = (u16) (var_s2 + 5);
            if ((u16) temp_s1->unk3C >= 0x51U) {
                temp_s1->unk3C = 0x50U;
            }
            temp_s1->unk4D = (s8) (rand() & 7);
            temp_s1->unk4A = (u8) ((rand() & 7) + 7);
            temp_s1->unk4B = (u8) ((rand() & 7) + 7);
            temp_s1->unkC = (s16) ((u16) temp_s1->unkC - (temp_s1->unk4A * 4));
            temp_s1->unkE = (u16) (temp_s1->unkE - (temp_s1->unk4B * 4));
            temp_s1->unk10 = (s16) ((u16) temp_s1->unk10 - ((u8) temp_s1->unk4C * 4));
            temp_s1->unk4E = 3U;
            temp_s1->unk50 = (u8) temp_s1->unk48;
            temp_s1->unk51 = 0;
            temp_s1->unk52 = 0xAU;
            temp_s1->unk53 = 0x14U;
            temp_s1->unk4F = (s8) (rand() & (temp_s1->unk48 - 1));
            temp_s1->unk24 = (u16) (temp_s1->unk24 | 0x3007);
            break;
        case 0x46:
            temp_v0_3 = var_s2 & 0xFFFF;
            temp_s1->unk47 = (u8) D_801833E0.unk8;
            temp_s1->unk46 = (u8) temp_s1->unk47;
            temp_s1->unk48 = (u8) D_801833E0.unkA;
            temp_s1->unk49 = 2;
            temp_s1->unk34 = (u32) ((u32) (temp_v0_3 << 0xC) / (u32) (temp_v0_3 + 4));
            temp_s1->unk38 = (u16) ((u32) (temp_s1->unk34 * 0x190) >> 0xC);
            temp_s1->unk14 = (u32) (temp_s1->unk38 & 0xFFFF);
            temp_s1->unk3C = (u16) (var_s2 + 0xA);
            temp_s1->unk4D = (s8) (rand() & 7);
            temp_s1->unk4E = 2U;
            temp_s1->unk24 = (u16) (temp_s1->unk24 | 5);
            break;
        case 0x34:
            var_s4 += rand() & 7;
            temp_v1_4 = (var_s4 * 4) + &D_801833E0;
            temp_s1->unk47 = (u8) temp_v1_4->unk0;
            temp_s1->unk46 = (u8) temp_s1->unk47;
            temp_s1->unk48 = (u8) temp_v1_4->unk2;
            /* fallthrough */
        case 0x9:
        case 0xC:
            temp_s0_2 = var_s2 & 0xFFFF;
            temp_s1->unk34 = (u32) ((u32) (temp_s0_2 << 0xC) / (u32) (temp_s0_2 + 4));
            temp_s1->unk38 = (u16) ((u32) (temp_s1->unk34 * 0x190) >> 0xC);
            temp_s1->unk14 = (u32) (temp_s1->unk38 & 0xFFFF);
            temp_s1->unk3C = (u16) (var_s2 + 0xA);
            temp_s1->unk4D = (s8) (rand() & 7);
            temp_s1->unk4A = (u8) ((s32) ((rand() & 7) + 7) >> 2);
            temp_s1->unk4B = (u8) ((s32) ((rand() & 7) + 7) >> 2);
            temp_v1_5 = ((s32) (temp_s0_2 + (rand() % temp_s0_2)) >> 2) + 0x10;
            var_a0_2 = -1;
            if (temp_v1_5 < 0x100) {
                var_a0_2 = temp_v1_5;
            }
            temp_s1->unk4C = var_a0_2;
            temp_s1->unkC = (s16) ((u16) temp_s1->unkC - (temp_s1->unk4A * 4));
            temp_s1->unkE = (u16) (temp_s1->unkE - (temp_s1->unk4B * 4));
            temp_s1->unk10 = (s16) ((u16) temp_s1->unk10 - ((u8) temp_s1->unk4C * 4));
            if ((var_s4 == 9) || (var_v0_2 = 6, (var_s4 == 0xC))) {
                var_v0_2 = 4;
            }
            temp_s1->unk4E = var_v0_2;
            temp_s1->unk24 = (u16) (temp_s1->unk24 | 7);
            break;
        case 0x8:
        case 0xA:
        case 0xB:
        case 0xD:
        case 0x21:
        case 0x22:
            temp_s0_3 = var_s2 & 0xFFFF;
            temp_s1->unk14 = (u32) (((var_s2 * 0x10) + 0x10) & 0xFFFF);
            temp_s1->unk38 = (u16) ((temp_s0_3 >> 1) + 0x20);
            temp_s1->unk3C = (u16) (var_s2 + 0xA);
            temp_s1->unk4D = (s8) (rand() & 7);
            temp_s1->unk4A = (u8) ((s32) ((rand() & 7) + 7) >> 1);
            temp_s1->unk4B = (u8) ((s32) ((rand() & 7) + 7) >> 1);
            temp_s1->unk4C = (s8) (((s32) (temp_s0_3 + (rand() % (s32) temp_s0_3)) >> 3) + 4);
            temp_s1->unkC = (s16) ((u16) temp_s1->unkC - (temp_s1->unk4A * 4));
            temp_s1->unkE = (u16) (temp_s1->unkE - (temp_s1->unk4B * 4));
            temp_s1->unk10 = (s16) ((u16) temp_s1->unk10 - ((u8) temp_s1->unk4C * 4));
            temp_s1->unk4E = 2U;
            temp_s1->unk24 = (u16) (temp_s1->unk24 | 0x3007);
            temp_s1->unk50 = (u8) temp_s1->unk48;
            temp_s1->unk51 = 0;
            temp_s1->unk52 = 0xAU;
            temp_s1->unk53 = 0x14U;
            break;
        case 0x3F:
            temp_s1->unk47 = (u8) D_801833E0.unk30;
            temp_s1->unk46 = (u8) temp_s1->unk47;
            temp_s1->unk48 = (u8) D_801833E0.unk32;
            /* fallthrough */
        case 0x3E:
            var_v0_3 = var_s2 * 0x10;
            if (var_s4 == 0x3E) {
                temp_s1->unk47 = (u8) D_801833E0.unk20;
                temp_s1->unk46 = (u8) temp_s1->unk47;
                temp_s1->unk48 = (u8) D_801833E0.unk22;
                var_v0_3 = var_s2 * 0x10;
            }
            temp_s0_4 = var_s2 & 0xFFFF;
            temp_s1->unk14 = (u32) ((var_v0_3 + 0x10) & 0xFFFF);
            temp_s1->unk38 = (u16) ((temp_s0_4 >> 1) + 0x20);
            temp_s1->unk3C = (u16) ((var_s2 * 4) + 0xA);
            temp_s1->unk4D = (s8) (rand() & 7);
            temp_s1->unk4A = (u8) ((s32) ((rand() & 7) + 7) >> 1);
            temp_s1->unk4B = (u8) ((s32) ((rand() & 7) + 7) >> 1);
            temp_s1->unk4C = (s8) (((s32) (temp_s0_4 + (rand() % (s32) temp_s0_4)) >> 2) + 2);
            temp_s1->unkC = (s16) ((u16) temp_s1->unkC - (temp_s1->unk4A * 4));
            temp_s1->unkE = (u16) (temp_s1->unkE - (temp_s1->unk4B * 4));
            temp_s1->unk10 = (s16) ((u16) temp_s1->unk10 - ((u8) temp_s1->unk4C * 4));
            temp_s1->unk24 = (u16) (temp_s1->unk24 | 0x3007);
            temp_s1->unk50 = (u8) temp_s1->unk48;
            temp_s1->unk4E = 3U;
            temp_s1->unk52 = 0xAU;
            temp_s1->unk51 = 0;
            temp_s1->unk53 = 0x14U;
            temp_s1->unk4F = (s8) (rand() & (temp_s1->unk48 - 1));
            break;
        case 0x7:
        case 0x1A:
            if (var_s4 == 0x1A) {
                var_v0_4 = 0x6E0;
            } else {
                var_v0_4 = 0x1B80;
            }
            temp_s1->unk38 = var_v0_4;
            temp_s1->unk14 = (u32) ((u16) temp_s1->unk38 >> 1);
            temp_s1->unk3C = (u16) (((u32) (var_s2 & 0xFFFF) >> 3) + 1);
            temp_s1->unk4D = 0;
            var_v0_5 = temp_s1->unk24 | 0x84;
block_55:
            temp_s1->unk24 = var_v0_5;
            temp_s1->unk55 = 0U;
            break;
        case 0x45:
            temp_s1->unk47 = (u8) D_801833E0.unk1C;
            temp_s1->unk46 = (u8) temp_s1->unk47;
            temp_s1->unk48 = (u8) D_801833E0.unk1E;
            temp_s1->unk38 = 0x6E0U;
            temp_s1->unk14 = (u32) ((u16) temp_s1->unk38 >> 1);
            temp_s1->unk3C = (u16) (((u32) (var_s2 & 0xFFFF) >> 3) + 1);
            temp_s1->unk4D = 0;
            temp_s1->unk24 = (u16) (temp_s1->unk24 | 0x8004);
            break;
        case 0x28:
            temp_s1->unk24 = (u16) (temp_s1->unk24 | 0x80);
            temp_s1->unk55 = 0x14U;
            /* fallthrough */
        case 0x23:
        case 0x24:
            temp_a0_2 = var_s2 & 0xFFFF;
            temp_s1->unk14 = (u32) (temp_a0_2 * 0x10);
            temp_s1->unk38 = (u16) (temp_s1->unk14 * 3);
            temp_s1->unk3C = (u16) ((temp_a0_2 >> 3) + 2);
            temp_s1->unk4D = (s8) (rand() & 7);
            temp_s1->unk24 = (u16) (temp_s1->unk24 | 4);
            break;
        case 0xE:
        case 0xF:
            temp_v0_4 = var_s2 & 0xFFFF;
            temp_s1->unk14 = (u32) (temp_v0_4 << 8);
            temp_s1->unk3C = (u16) (temp_v0_4 >> 1);
            temp_s1->unk4D = 0;
            temp_s1->unk24 = (u16) (temp_s1->unk24 | 1);
            break;
        case 0x27:
            temp_s1->unk14 = (u32) ((var_s2 & 0xFFFF) << 7);
            temp_s1->unk38 = (u16) (var_s2 << 5);
            temp_s1->unk3C = var_s2;
            temp_s1->unk24 = (u16) (temp_s1->unk24 | 0x84);
            temp_s1->unk55 = 0xAU;
            break;
        case 0x6:
            temp_s1->unk14 = (u32) ((var_s2 & 0xFFFF) << 8);
            temp_s1->unk3C = var_s2;
            var_v0_5 = temp_s1->unk24 | 0x81;
            goto block_55;
        case 0x1F:
            temp_s1->unk24 = (u16) (temp_s1->unk24 | 0x1000);
            temp_s1->unk53 = (u8) temp_s1->unk48;
            temp_s1->unk52 = (u8) temp_s1->unk53;
            temp_s1->unk50 = (u8) temp_s1->unk52;
            temp_s1->unk51 = (s8) (rand() % (s32) temp_s1->unk48);
            temp_s1->unk4E = 3U;
            /* fallthrough */
        case 0x14:
        case 0x15:
        case 0x16:
        case 0x17:
            temp_s1->unk38 = (u16) ((var_s2 * 2) + 0x28);
            temp_s1->unk14 = (u32) (temp_s1->unk38 & 0xFFFF);
            temp_s1->unk3C = (u16) (((u32) (var_s2 & 0xFFFF) >> 1) + 1);
            temp_s1->unk4D = (s8) (rand() & 7);
            temp_s1->unk24 = (u16) (temp_s1->unk24 | 0xD);
            var_v0_6 = 4;
            if (var_s4 != 0x1F) {
block_84:
                temp_s1->unk4E = var_v0_6;
            }
            break;
        case 0x2C:
            temp_s1->unk53 = (u8) temp_s1->unk48;
            temp_s1->unk50 = (u8) temp_s1->unk53;
            temp_s1->unk52 = (u8) (temp_s1->unk48 * 2);
            temp_s1->unk51 = (s8) (rand() % (s32) temp_s1->unk52);
            temp_s1->unk14 = (u32) ((var_s2 & 0xFFFF) << 7);
            temp_s1->unk3C = 0x78U;
            temp_s1->unk30 = (s32) ((arg4 * 0x10) - temp_s1->unk14);
            temp_s1->unk4D = (s8) (rand() & 7);
            temp_s1->unk24 = (u16) (temp_s1->unk24 & 0xBFFF);
            var_v0_7 = temp_s1->unk24 | 0x1049;
block_83:
            temp_s1->unk24 = var_v0_7;
            var_v0_6 = 2;
            goto block_84;
        case 0x11:
        case 0x12:
        case 0x13:
        case 0x1B:
        case 0x1C:
        case 0x1D:
        case 0x1E:
            temp_s1->unk24 = (u16) (temp_s1->unk24 & 0xF7FF);
            /* fallthrough */
        case 0x10:
            temp_s0_5 = var_s2 & 0xFFFF;
            temp_s1->unk14 = (u32) (temp_s0_5 << 5);
            temp_s1->unk3C = 0x3CU;
            temp_s1->unk30 = (s32) ((arg4 * 0x10) + temp_s1->unk14);
            temp_s1->unkC = (s16) (((u16) temp_s1->unkC + 0x200) - (rand() & 0x3FF));
            temp_s1->unkE = (u16) ((temp_s1->unkE + 0x200) - (rand() & 0x3FF));
            temp_s1->unk10 = (s16) ((u16) temp_s1->unk10 + (rand() & 0x1FF));
            temp_s1->unk4E = 8U;
            temp_s1->unk24 = (u16) (temp_s1->unk24 & 0xBFFF);
            temp_s1->unk24 = (u16) (temp_s1->unk24 | 0x19);
            if (temp_s1->unk48 == 1) {
                temp_s1->unk24 = (u16) (temp_s1->unk24 | 0x200);
                temp_s1->unk4D = (s8) (rand() & 0x3F);
            } else {
                temp_s1->unk24 = (u16) (temp_s1->unk24 | 0x1000);
                temp_s1->unk4D = (s8) (rand() & 7);
                temp_s1->unk50 = (u8) temp_s1->unk48;
                temp_s1->unk52 = (u8) (0x28 - func_8015A000(temp_s0_5));
                temp_s1->unk51 = (s8) (rand() % (s32) temp_s1->unk52);
                temp_s1->unk53 = (u8) temp_s1->unk48;
            }
            break;
        case 0x18:
            temp_s1->unk4F = (s8) (rand() & (temp_s1->unk48 - 1));
            temp_s1->unk14 = (u32) ((var_s2 & 0xFFFF) << 6);
            temp_s1->unk8 = (s32) (temp_s1->unk8 + (temp_s1->unk14 * 2));
            var_v0_8 = 0x5800;
            if (arg4 > 0) {
                temp_s1->unk3C = (u16) arg4;
            } else {
                temp_s1->unk3C = 1U;
                var_v0_8 = 0x5000;
            }
            temp_s1->unk24 = var_v0_8;
            temp_s1->unk4D = (s8) (rand() & 1);
            temp_s1->unk50 = (u8) temp_s1->unk48;
            temp_s1->unk52 = (u8) (0x28 - func_8015A000(var_s2 & 0xFFFF));
            temp_s1->unk51 = (s8) (rand() % (s32) temp_s1->unk52);
            temp_s1->unk53 = (u8) temp_s1->unk48;
            temp_s1->unk18 = (u32) (temp_s1->unk14 * 2);
            break;
        case 0x42:
            temp_s1->unk4E = 4U;
            /* fallthrough */
        case 0x2:
            if (var_s4 != 0x42) {
                temp_s1->unk4E = 5U;
            }
            temp_v1_6 = var_s2 & 0xFFFF;
            temp_s1->unk14 = (u32) (temp_v1_6 * 0x10);
            temp_s1->unk38 = (u16) temp_s1->unk14;
            temp_s1->unk3C = (u16) (temp_v1_6 >> 1);
            temp_s1->unk47 = (u8) D_801833E0.unk64;
            temp_s1->unk46 = (u8) temp_s1->unk47;
            temp_s1->unk48 = (u8) D_801833E0.unk66;
            temp_s1->unk55 = 5U;
            temp_s1->unk24 = (u16) (temp_s1->unk24 | 0x80);
            /* fallthrough */
        case 0x19:
            temp_s1->unk53 = (u8) temp_s1->unk48;
            temp_s1->unk52 = (u8) temp_s1->unk53;
            temp_s1->unk50 = (u8) temp_s1->unk52;
            temp_s1->unk51 = (s8) (rand() & 0xF);
            if (var_s4 == 0x19) {
                temp_s1->unk14 = (u32) ((var_s2 & 0xFFFF) * 0x10);
                temp_s1->unk38 = (u16) ((u32) temp_s1->unk14 >> 2);
                temp_s1->unk3C = var_s2;
            }
            temp_s1->unk4D = (s8) (rand() & 7);
            temp_s1->unk24 = (u16) (temp_s1->unk24 | 0x1005);
            break;
        case 0x44:
            temp_s1->unk47 = (u8) D_801833E0.unk60;
            temp_s1->unk46 = (u8) temp_s1->unk47;
            temp_s1->unk48 = (u8) D_801833E0.unk62;
            temp_s1->unk53 = (u8) temp_s1->unk48;
            temp_s1->unk52 = (u8) temp_s1->unk53;
            temp_s1->unk50 = (u8) temp_s1->unk52;
            temp_s1->unk14 = (u32) ((var_s2 & 0xFFFF) * 0x10);
            temp_s1->unk38 = (u16) ((u32) temp_s1->unk14 >> 2);
            temp_s1->unk3C = var_s2;
            temp_s1->unk4D = (s8) (rand() & 7);
            temp_s1->unk24 = (u16) (temp_s1->unk24 | 0x1005);
            temp_s1->unk51 = (s8) (rand() & 0xF);
            break;
        case 0x2E:
            temp_s1->unk0 = (s32) (temp_s1->unk0 - (s16) (u16) temp_s1->unkC);
            temp_s1->unk4 = (s32) (temp_s1->unk4 - (s16) temp_s1->unkE);
            temp_s1->unk8 = (s32) (temp_s1->unk8 - (s16) (u16) temp_s1->unk10);
            temp_s1->unk24 = (u16) (temp_s1->unk24 & 0xBFFF);
            /* fallthrough */
        case 0x2F:
            temp_s1->unk14 = (u32) ((var_s2 & 0xFFFF) << 5);
            temp_s1->unk18 = (u32) (arg1->unk8 << 5);
            temp_s1->unk38 = (u16) (var_s2 + 3);
            temp_s1->unk3A = (s16) (arg1->unk8 * 0x10);
            temp_s1->unk4D = (s8) (rand() & 1);
            temp_s1->unk3C = 0xC8U;
            temp_s1->unk30 = (s32) (arg4 * 0x10);
            temp_s1->unk4E = 0U;
            if (var_s4 == 0x2F) {
                temp_s1->unk24 = (u16) (temp_s1->unk24 & 0xF7FF);
            }
            temp_s1->unk24 = (u16) (temp_s1->unk24 | 0x2D);
            break;
        case 0x30:
            temp_s1->unk0 = (s32) (temp_s1->unk0 - (s16) (u16) temp_s1->unkC);
            temp_s1->unk4 = (s32) (temp_s1->unk4 - (s16) temp_s1->unkE);
            temp_s1->unk8 = (s32) (temp_s1->unk8 - (s16) (u16) temp_s1->unk10);
            temp_s1->unk24 = (u16) (temp_s1->unk24 | 0x81);
            temp_s1->unk55 = 0U;
            /* fallthrough */
        case 0x33:
            temp_v0_5 = var_s2 & 0xFFFF;
            temp_s1->unk14 = (u32) (temp_v0_5 << 5);
            temp_s1->unk38 = (u16) (var_s2 + 3);
            temp_s1->unk3C = (u16) ((temp_v0_5 >> 1) + 1);
            temp_s1->unk4D = (s8) (rand() & 7);
            temp_s1->unk24 = (u16) (temp_s1->unk24 | 0x8004);
            var_v0_6 = 5;
            goto block_84;
        case 0x3D:
            temp_s1->unk53 = (u8) temp_s1->unk48;
            temp_s1->unk50 = (u8) temp_s1->unk53;
            temp_s1->unk52 = (u8) (temp_s1->unk48 * 2);
            temp_s1->unk51 = (s8) (rand() & 3);
            temp_s1->unk14 = (u32) ((var_s2 & 0xFFFF) << 6);
            temp_s1->unk3C = 0x78U;
            temp_s1->unk30 = (s32) (arg4 * 0x10);
            temp_s1->unk4D = (s8) (rand() & 1);
            temp_s1->unk24 = (u16) (temp_s1->unk24 & 0xBFFF);
            var_v0_7 = temp_s1->unk24 | 0x1001;
            goto block_83;
        }
        if (temp_s1->unk3C == 0) {
            temp_s1->unk3C = 1U;
        }
        if (!(temp_s1->unk24 & 0x80)) {
            temp_s1->unk55 = (u8) (((u32) temp_s1->unk14 >> 8) + 0xA);
            var_v1_2 = temp_s1->unk55;
            if ((s8) var_v1_2 >= 0x40) {
                var_v1_2 = 0x3F;
            }
            temp_s1->unk55 = var_v1_2;
        }
        temp_s1->unk40 = (u16) temp_s1->unk3C;
        temp_s1->unk3E = (u16) temp_s1->unk40;
        if (temp_s1->unk24 & 0x4000) {
            temp_s1->unk42 = 0x1000;
            temp_s1->unk44 = (s16) ((s32) (temp_s1->unk48 << 0xC) / (s32) temp_s1->unk3C);
            var_v0_9 = ((temp_s1->unk46 * 0xC) + &D_801834D8)->unk8;
        } else {
            var_v0_9 = 0x808080;
        }
        temp_s1->unk2C = var_v0_9;
        if ((var_s4 != 0x2E) && (var_s4 != 0x18)) {
            temp_s1->unk18 = (u32) temp_s1->unk14;
        }
        temp_s1->unk28 = (s16) ((s32) temp_s1->unk18 >> 4);
        temp_s1->unk26 = (s16) ((u32) temp_s1->unk14 >> 4);
        if (temp_s1->unk24 & 0x100) {
            temp_s1->unk1C = (s16) temp_s1->unk0;
            temp_s1->unk1E = (s16) temp_s1->unk4;
            temp_s1->unk20 = (s16) temp_s1->unk8;
            return temp_s7;
        }
        temp_s1->unk1C = (s16) ((s32) temp_s1->unk0 >> 4);
        temp_s1->unk1E = (s16) ((s32) temp_s1->unk4 >> 4);
        if (temp_s1->unk24 & 0x20) {
            func_8011BB04(temp_s1, temp_s7);
            return temp_s7;
        }
        temp_s1->unk20 = (s16) ((s32) temp_s1->unk8 >> 4);
        var_v0 = temp_s7;
        /* Duplicate return node #102. Try simplifying control flow for better match */
        return var_v0;
    }
    return var_v0;
}
