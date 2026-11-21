/* m2c reference for func_80161468 @ 80161468 (309 words). Generated; not compiled or validated. */
? func_8015BC8C(?);                                 /* extern */
extern void *D_801BC068;
extern ? D_801BC084;
extern ? D_801EC968;
extern ? D_801EC970;
extern u16 D_801EC972;
extern u16 D_801EC976;
extern s32 D_801EC978;
extern s32 D_801EC980;
extern s32 D_801EC988;
extern s32 D_801EC990;
extern s32 D_801EC998;

s32 func_80161468(u32 arg0, u32 arg1, u16 arg2) {
    s16 temp_s0;
    s16 var_v0;
    s16 var_v0_4;
    s32 *var_v0_2;
    s32 *var_v1;
    s32 temp_a0;
    s32 temp_a3;
    s32 var_s0;
    s32 var_v0_5;
    u16 var_v0_3;

    var_s0 = 0;
    switch (arg0) {                                 /* switch 1 */
    case 0:                                         /* switch 1 */
        switch (arg1) {                             /* switch 2 */
        case 0:                                     /* switch 2 */
            var_s0 = D_801BC068->unk4 & 0xFFFF;
        default:                                    /* switch 1 */
        default:                                    /* switch 2 */
        default:                                    /* switch 3 */
block_53:
            var_v0 = (s16) var_s0;
            return (s32) var_v0;
        case 1:                                     /* switch 2 */
            var_s0 = ((u16) D_801BC068->unkA >> 1) & 1;
            if (D_801BC068->unkA & 0x20) {
                var_s0 |= 2;
            }
            goto block_53;
        case 2:                                     /* switch 2 */
            var_s0 = D_801EC970.unk0 & 0xFFFF;
            goto block_53;
        case 3:                                     /* switch 2 */
            return 0x1FA400 / (s32) D_801EC976;
        case 5:                                     /* switch 2 */
            if (arg2 == 0) {
                return D_801EC988;
            }
            return D_801EC998;
        case 6:                                     /* switch 2 */
            var_v0_2 = &D_801EC990;
            if (arg2 == 0) {
                var_v0_2 = &D_801EC980;
            }
            var_s0 = *var_v0_2 != 0;
            goto block_53;
        case 4:                                     /* switch 2 */
block_48:
            var_s0 = 1;
            goto block_53;
        }
        break;
    case 1:                                         /* switch 1 */
        switch (arg1) {                             /* switch 3 */
        case 1:                                     /* switch 3 */
            D_801EC968.unkA = (u16) (D_801BC068->unkA & 0xFFDD);
            temp_a3 = (arg2 & 1) * 2;
            temp_a0 = D_801EC968.unkA & 0xFFFF;
            if (arg2 & 2) {
                var_v0_3 = temp_a0 | 0x20 | temp_a3;
            } else {
                var_v0_3 = temp_a0 | temp_a3;
            }
            D_801EC968.unkA = var_v0_3;
            D_801BC068->unkA = (u16) D_801EC972;
            return 0;
        case 2:                                     /* switch 3 */
            D_801EC968.unk8 = arg2;
            D_801BC068->unk8 = (u16) D_801EC968.unk8;
            return 0;
        case 3:                                     /* switch 3 */
            if ((0x1FA400U % arg2) != 0) {
                var_s0 = -1;
                goto block_53;
            }
            D_801EC968.unkE = (u16) (0x1FA400U / arg2);
            D_801BC068->unkE = (u16) D_801EC968.unkE;
            var_v0_4 = D_801BC068->unkA | 0x10;
block_35:
            D_801BC068->unkA = var_v0_4;
            return 0;
        case 4:                                     /* switch 3 */
            if ((u32) (arg2 - 1) < 8U) {
                temp_s0 = *(&D_801BC084 + (arg2 * 2));
                var_v0 = temp_s0;
                if (temp_s0 >= 0) {
                    D_801EC968.unkA = (u16) (D_801EC968.unkA & 0xFCFF);
                    D_801EC968.unkA = (u16) (D_801EC968.unkA | temp_s0);
                    D_801BC068->unkA = (u16) D_801EC968.unkA;
                    return (s32) temp_s0;
                }
                /* Duplicate return node #54. Try simplifying control flow for better match */
                return (s32) var_v0;
            }
            goto block_53;
        }
        break;
    case 2:                                         /* switch 1 */
        switch (arg1) {                             /* switch 4; irregular */
        case 0:                                     /* switch 4 */
            var_v0_5 = EnterCriticalSection();
            D_801BC068->unkA = (u16) (D_801BC068->unkA | 0x50);
            D_801BC068->unk8 = (u16) D_801EC970.unk0;
            D_801BC068->unkA = (u16) D_801EC970.unk2;
            D_801BC068->unkE = (u16) D_801EC970.unk6;
            D_801BC068->unkA = (u16) (D_801BC068->unkA | 0x10);
block_39:
            var_v0 = 0;
            if (var_v0_5 == 1) {
                ExitCriticalSection();
                return 0;
            }
            /* Duplicate return node #54. Try simplifying control flow for better match */
            return (s32) var_v0;
        case 1:                                     /* switch 4 */
            var_v0_4 = D_801BC068->unkA | 0x10;
            goto block_35;
        case 2:                                     /* switch 4 */
            var_v0_5 = EnterCriticalSection();
            D_801BC068->unkA = (u16) (D_801BC068->unkA & 0xFBFF);
            var_v1 = &D_801EC980;
block_38:
            var_v1->unk0 = 0;
            var_v1->unk8 = 0;
            goto block_39;
        case 3:                                     /* switch 4 */
            var_v0_5 = EnterCriticalSection();
            D_801BC068->unkA = (u16) (D_801BC068->unkA & 0xF7DF);
            var_v1 = &D_801EC990;
            goto block_38;
        default:                                    /* switch 4 */
            return 0;
        }
        break;
    case 3:                                         /* switch 1 */
        switch (arg1) {                             /* switch 5; irregular */
        case 0:                                     /* switch 5 */
            if (arg2 != 0) {
                D_801BC068->unkA = (u16) (D_801BC068->unkA | 0x20);
                return 0;
            }
            D_801BC068->unkA = (u16) (D_801BC068->unkA & 0xFFDF);
            return 0;
        case 1:                                     /* switch 5 */
            var_v0 = 0;
            if (D_801BC068->unk4 & 0x100) {
                goto block_48;
            }
            /* Duplicate return node #54. Try simplifying control flow for better match */
            return (s32) var_v0;
        default:                                    /* switch 5 */
            return 0;
        }
        break;
    case 4:                                         /* switch 1 */
        var_v0 = 0;
        if (arg1 == 0) {
            var_s0 = D_801EC978;
            D_801EC978 = (s32) arg2;
            goto block_53;
        }
        /* Duplicate return node #54. Try simplifying control flow for better match */
        return (s32) var_v0;
    case 5:                                         /* switch 1 */
        var_v0 = 0;
        if (arg1 == 0) {
            func_8015BC8C(5);
            goto block_53;
        }
        /* Duplicate return node #54. Try simplifying control flow for better match */
        return (s32) var_v0;
    }
}
