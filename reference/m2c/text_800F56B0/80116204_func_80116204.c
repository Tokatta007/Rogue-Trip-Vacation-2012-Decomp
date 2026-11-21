/* m2c reference for func_80116204 @ 80116204 (428 words). Generated; not compiled or validated. */
? func_800FF890(void *, void *, ?);                 /* extern */
? func_800FF8B8(void *, s16);                       /* extern */
? func_80118484(void *);                            /* extern */
s32 func_80122F24(s32, void *, ?, s32 *);           /* extern */
? func_8012376C(s32, void *, ?);                    /* extern */
? func_80125464(void *, s32);                       /* extern */
? func_80125490(void *, s32);                       /* extern */
? func_80125518(void *, s32, s16, s16);             /* extern */
s32 func_8013B690(s32);                             /* extern */
static s32 D_801C34EC = 0;

void func_80116204(void *arg0, void *arg1, ? arg2, s32 arg3, s32 arg4, s32 arg5) {
    s32 sp10;
    s16 temp_a1;
    s16 temp_a1_2;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_v0;
    u16 var_v0_2;
    u16 var_v0_3;

    arg0->unk2C0 = arg3;
    arg0->unk0 = 1;
    arg0->unk4 = 3;
    arg0->unk54 = 0xF;
    arg0->unk30B = 1;
    arg0->unk30C = 1;
    arg0->unk311 = 0;
    arg0->unk313 = 0;
    arg0->unk2A8 = 0;
    arg0->unk30D = 0;
    arg0->unk268 = 0;
    arg0->unk2D4 = 0x64;
    arg0->unk2FE = 0;
    arg0->unk314 = 0;
    arg0->unk278 = 0;
    arg0->unk298 = 0;
    arg0->unk29C = 0;
    arg0->unk2A0 = 0;
    arg0->unk2BC = 0x50;
    arg0->unk30A = 0;
    arg0->unk300 = 0;
    arg0->unk2D8 = 0;
    arg0->unk306 = 0;
    arg0->unk2C4 = arg4;
    arg1->unk0->unk2 = (s8) arg0->unk2C4;
    arg0->unk270 = 0x14;
    arg0->unk28C = 0x32;
    arg0->unk290 = 5;
    temp_v0 = arg0->unk2C0;
    switch (temp_v0) {                              /* switch 1 */
    case 0x12F:                                     /* switch 1 */
        arg0->unk2E8 = 0x60U;
        arg0->unk2EA = 0x70U;
        arg0->unk2EC = -0x58U;
        arg0->unk2E4 = 0x38;
        arg0->unk2E6 = -0x18U;
        arg0->unk27C = (s32) ((rand() & 5) + 0x21);
        var_v0 = 0x28;
block_9:
        arg0->unk2CC = var_v0;
        var_v0_2 = 0xF;
block_10:
        arg0->unk2E2 = var_v0_2;
        arg0->unk30C = 0;
        arg0->unk30B = 0;
        break;
    case 0x136:                                     /* switch 1 */
        arg0->unk2E8 = 0x20U;
        arg0->unk2EA = 0x20U;
        arg0->unk2EC = -0x20U;
        arg0->unk2E4 = 0x20;
        arg0->unk2E6 = -0x18U;
        arg0->unk27C = (s32) ((rand() & 5) + 0xD);
        arg0->unk2CC = 5;
        arg0->unk2E2 = 0x12U;
        arg0->unk270 = 0xF;
        break;
    case 0x140:                                     /* switch 1 */
    case 0x14A:                                     /* switch 1 */
    case 0x154:                                     /* switch 1 */
        arg0->unk4 = 3;
        arg0->unk54 = 0xF;
        arg0->unk2E8 = 0x40U;
        arg0->unk2EA = 0x40U;
        arg0->unk2EC = -0x60U;
        arg0->unk2E4 = 0x20;
        arg0->unk2E6 = -0x18U;
        arg0->unk27C = 0x3C;
        arg0->unk2CC = 0x50;
        arg0->unk2E2 = 6U;
        break;
    case 0x150:                                     /* switch 1 */
        arg0->unk4 = 3;
        arg0->unk54 = 0xF;
        arg0->unk2E8 = 0x18U;
        arg0->unk2EA = 0x20U;
        arg0->unk2EC = -0x20U;
        arg0->unk2E4 = 0x18;
        arg0->unk2E6 = -0x18U;
        arg0->unk27C = 0x3C;
        arg0->unk2CC = 5;
        arg0->unk2E2 = 6U;
        arg0->unk30B = 0;
        arg0->unk30C = 0;
        break;
    case 0x15E:                                     /* switch 1 */
        arg0->unk2E8 = 0x48U;
        arg0->unk2EA = 0x78U;
        arg0->unk2EC = -0x70U;
        arg0->unk2E4 = 0x31;
        arg0->unk2E6 = -0x1BU;
        arg0->unk27C = (s32) ((rand() & 5) + 0x19);
        arg0->unk2CC = 0x3C;
        var_v0_2 = 8;
        goto block_10;
    case 0x168:                                     /* switch 1 */
        arg0->unk2E8 = 0x98U;
        arg0->unk2EA = 0x70U;
        arg0->unk2EC = -0x60U;
        arg0->unk2E4 = 0x48;
        arg0->unk2E6 = -0x30U;
        arg0->unk27C = (s32) ((rand() & 5) + 0x12);
        arg0->unk2CC = 0x50;
        arg0->unk2E2 = 0x14U;
        arg0->unk30C = 0;
        arg0->unk30B = 0;
        arg0->unk311 = 1;
        arg0->unk313 = 1;
        break;
    case 0x169:                                     /* switch 1 */
        arg0->unk2E8 = 0x50U;
        arg0->unk2EA = 0x70U;
        arg0->unk2EC = -0x70U;
        arg0->unk2E4 = 0x48;
        arg0->unk2E6 = -0x30U;
        arg0->unk27C = (s32) ((rand() & 5) + 0x12);
        var_v0 = 0x50;
        goto block_9;
    case 0x186:                                     /* switch 1 */
        arg0->unk4 = 3;
        arg0->unk54 = 0xF;
        arg0->unk2E8 = 0x58U;
        arg0->unk2EA = 0xA0U;
        arg0->unk2EC = -0xA0U;
        arg0->unk2E4 = 0x78;
        arg0->unk2E6 = -8U;
        arg0->unk27C = 0x32;
        arg0->unk2CC = 0x50;
        arg0->unk2E2 = 0x10U;
        break;
    default:                                        /* switch 1 */
        arg0->unk2E8 = 0x40U;
        arg0->unk2EA = 0x20U;
        arg0->unk2EC = -0x20U;
        arg0->unk27C = 0;
        arg0->unk2CC = 2;
        arg0->unk2E2 = 0x64U;
        temp_v0_2 = func_8013B690(arg4);
        switch (temp_v0_2) {                        /* switch 2; irregular */
        case 0:                                     /* switch 2 */
            arg0->unk2E4 = 0x3C;
            var_v0_3 = -0x2BU;
block_23:
            arg0->unk2E6 = var_v0_3;
            break;
        case 1:                                     /* switch 2 */
            arg0->unk2E4 = 0x24;
            var_v0_3 = -0x40U;
            goto block_23;
        case 2:                                     /* switch 2 */
            arg0->unk2E4 = 0x2F;
            var_v0_3 = -0x27U;
            goto block_23;
        case 3:                                     /* switch 2 */
            arg0->unk2E4 = 0x3E;
            var_v0_3 = -0x2CU;
            goto block_23;
        }
        break;
    }
    if (arg0->unk2C0 != 0x17C) {
        func_8012376C(D_801C34EC, arg1, 0);
    }
    arg0->unk2E0 = (u16) arg0->unk2E2;
    func_80118484(arg0);
    func_800FF890(arg0, arg1, arg2);
    if (arg0->unk3C != 0) {
        arg0->unk30 = (s32) (arg0->unk3C + 0x1C);
    }
    arg0->unk5E = (u16) arg5;
    func_800FF8B8(arg0, (s16) arg0->unk5E);
    func_80125464(arg0 + 0x260, arg0->unk38 + 0x14);
    func_80125490(arg0 + 0x78, arg0->unk38 + 0x28);
    arg0->unk38->unkC = 1;
    arg1->unk48 = 5;
    func_80125518(arg1 + 0x4C, 0, 0, (s16) arg0->unk2E6);
    temp_a1 = -(s16) arg0->unk2E8;
    func_80125518(arg1 + 0x54, (s32) ((temp_a1 + ((u32) temp_a1 >> 0x1F)) << 0xF) >> 0x10, (s16) arg0->unk2EA, (s16) (arg0->unk2E6 + 0x20));
    func_80125518(arg1 + 0x5C, (s16) arg0->unk2E8 / 2, (s16) arg0->unk2EA, (s16) (arg0->unk2E6 + 0x20));
    func_80125518(arg1 + 0x64, (s16) arg0->unk2E8 / 2, (s16) arg0->unk2EC, (s16) (arg0->unk2E6 + 0x20));
    temp_a1_2 = -(s16) arg0->unk2E8;
    func_80125518(arg1 + 0x6C, (s32) ((temp_a1_2 + ((u32) temp_a1_2 >> 0x1F)) << 0xF) >> 0x10, (s16) arg0->unk2EC, (s16) (arg0->unk2E6 + 0x20));
    arg0->unk315 = 1U;
    if ((arg0->unk2C0 == 0x17C) || ((func_80122F24(D_801C34EC, arg0->unk38 + 0x1C, 0x2EE0, &sp10) == 0) && (sp10 >= 0x961))) {
        arg0->unk315 = 0U;
    }
    if (arg0->unk315 != 0) {
        arg0->unk38->unkC = 0;
    }
}
