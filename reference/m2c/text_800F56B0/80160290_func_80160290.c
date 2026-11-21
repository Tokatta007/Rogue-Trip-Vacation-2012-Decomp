/* m2c reference for func_80160290 @ 80160290 (112 words). Generated; not compiled or validated. */
? func_80160AE8(u16);                               /* extern */
extern void *D_801BC000;
extern u16 D_801BC018;
static s8 D_800F4FA4[0x10] = {
    0x53,
    0x50,
    0x55,
    0x3A,
    0x54,
    0x2F,
    0x4F,
    0x20,
    0x5B,
    0x25,
    0x73,
    0x5D,
    0xA,
    0,
    0,
    0,
}; /* const */
static ? D_800F4FC4;                                /* unable to generate initializer: unknown type; const */
static ? D_800F4FD8;                                /* unable to generate initializer: unknown type; const */

void func_80160290(u16 *arg0, u32 arg1) {
    s32 temp_a1_2;
    s32 var_v0;
    s32 var_v1;
    u16 *var_s2;
    u16 temp_a0;
    u16 temp_a1;
    u16 temp_v0;
    u32 var_s0;
    u32 var_s1;
    u32 var_v1_2;
    u32 var_v1_3;

    var_s1 = arg1;
    temp_a1 = D_801BC000->unk1AE;
    var_s2 = arg0;
    D_801BC000->unk1A6 = (u16) D_801BC018;
    func_80160AE8(temp_a1);
    var_v0 = var_s1 < 0x41U;
    if (var_s1 != 0) {
        do {
            var_s0 = 0x40;
            if (var_v0 != 0) {
                var_s0 = var_s1;
            }
            var_v1 = 0;
            if ((s32) var_s0 > 0) {
                do {
                    temp_v0 = *var_s2;
                    var_s2 += 2;
                    var_v1 += 2;
                    D_801BC000->unk1A8 = temp_v0;
                } while (var_v1 < (s32) var_s0);
            }
            temp_a0 = D_801BC000->unk1AA;
            D_801BC000->unk1AA = (u16) ((temp_a0 & 0xFFCF) | 0x10);
            func_80160AE8(temp_a0);
            if (D_801BC000->unk1AE & 0x400) {
                var_v1_2 = 1;
loop_8:
                if (var_v1_2 >= 0xF01U) {
                    printf(D_800F4FA4, &D_800F4FC4);
                } else {
                    var_v1_2 += 1;
                    if (D_801BC000->unk1AE & 0x400) {
                        goto loop_8;
                    }
                }
            }
            var_s1 -= var_s0;
            func_80160AE8();
            func_80160AE8();
            var_v0 = var_s1 < 0x41U;
        } while (var_s1 != 0);
    }
    temp_a1_2 = temp_a1 & 0x7FF & 0xFFFF;
    D_801BC000->unk1AA = (u16) (D_801BC000->unk1AA & 0xFFCF);
    if ((D_801BC000->unk1AE & 0x7FF) != temp_a1_2) {
        var_v1_3 = 1;
loop_14:
        if (var_v1_3 >= 0xF01U) {
            printf(D_800F4FA4, &D_800F4FD8);
            return;
        }
        var_v1_3 += 1;
        if ((D_801BC000->unk1AE & 0x7FF) == temp_a1_2) {

        } else {
            goto loop_14;
        }
    }
}
