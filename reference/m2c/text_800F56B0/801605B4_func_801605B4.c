/* m2c reference for func_801605B4 @ 801605B4 (160 words). Generated; not compiled or validated. */
? func_80160A98(s32, void *, ?);                    /* extern */
? func_80160AC0(s32, void *, ?);                    /* extern */
extern void *D_801BC000;
extern s32 *D_801BC004;
extern s32 *D_801BC008;
extern s32 *D_801BC00C;
extern u16 D_801BC018;
extern s32 D_801BC028;
extern s32 D_801BC050;
extern s32 D_801BC054;
extern s32 D_801BC058;

s32 func_801605B4(s32 arg0, u32 arg1, s32 arg2, s32 arg3) {
    s32 temp_a0;
    s32 var_a0;
    s32 var_a2;
    s32 var_v0;
    u32 *var_s0;
    u32 temp_a0_2;
    u32 temp_v0;
    u32 var_v1;
    u32 var_v1_2;
    u32 var_v1_3;

    if (arg0 != 1) {
        if (arg0 < 2) {
            if (arg0 != 0) {
                return 0;
            }
            D_801BC050 = 1;
            if (D_801BC000->unk1A6 != D_801BC018) {
                var_v1 = 1;
loop_15:
                var_v0 = -2;
                if (var_v1 < 0xF01U) {
                    var_v1 += 1;
                    if (D_801BC000->unk1A6 == D_801BC018) {
                        goto block_17;
                    }
                    goto loop_15;
                }
                /* Duplicate return node #29. Try simplifying control flow for better match */
                return var_v0;
            }
block_17:
            D_801BC000->unk1AA = (u16) (D_801BC000->unk1AA | 0x30);
            return 0;
        }
        switch (arg0) {                             /* irregular */
        case 2:
            temp_v0 = arg1 >> D_801BC028;
            D_801BC018 = (u16) temp_v0;
            D_801BC000->unk1A6 = (u16) temp_v0;
            return 0;
        case 3:
            var_a0 = 0x20;
            if (D_801BC050 == 1) {
                var_a0 = 0x30;
            }
            temp_a0 = var_a0 & 0xFFFF;
            var_v1_2 = 1;
            if ((D_801BC000->unk1AA & 0x30) != temp_a0) {
loop_21:
                var_v0 = -2;
                if (var_v1_2 < 0xF01U) {
                    var_v1_2 += 1;
                    if ((D_801BC000->unk1AA & 0x30) == temp_a0) {
                        goto block_23;
                    }
                    goto loop_21;
                }
            } else {
block_23:
                if (D_801BC050 == 1) {
                    var_s0 = &arg1 + 4;
                    func_80160AC0(temp_a0, D_801BC000, 1);
                } else {
                    var_s0 = &arg1 + 4;
                    func_80160A98(temp_a0, D_801BC000, 1);
                }
                D_801BC054 = var_s0->unk-4;
                temp_a0_2 = var_s0->unk0;
                D_801BC058 = (temp_a0_2 >> 6) + ((temp_a0_2 & 0x3F) != 0);
                *D_801BC004 = D_801BC054;
                *D_801BC008 = (D_801BC058 << 0x10) | 0x10;
                var_a2 = 0x01000201;
                if (D_801BC050 == 1) {
                    var_a2 = 0x01000200;
                }
                *D_801BC00C = var_a2;
                var_v0 = 0;
            }
            /* Duplicate return node #29. Try simplifying control flow for better match */
            return var_v0;
        default:
            return 0;
        }
    } else {
        D_801BC050 = 0;
        if (D_801BC000->unk1A6 != D_801BC018) {
            var_v1_3 = 1;
loop_10:
            var_v0 = -2;
            if (var_v1_3 < 0xF01U) {
                var_v1_3 += 1;
                if (D_801BC000->unk1A6 == D_801BC018) {
                    goto block_12;
                }
                goto loop_10;
            }
            return var_v0;
        }
block_12:
        D_801BC000->unk1AA = (u16) ((D_801BC000->unk1AA & 0xFFCF) | 0x20);
        return 0;
    }
}
