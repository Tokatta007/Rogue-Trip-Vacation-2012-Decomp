/* m2c reference for func_8016C49C @ 8016C49C (159 words). Generated; not compiled or validated. */
extern s32 D_801BC10C;

void func_8016C49C(void *arg0) {
    s32 temp_v1;
    s32 var_a2;
    s32 var_a3;
    s32 var_t0;
    s32 var_t2;
    s32 var_v1;
    s32 var_v1_2;
    s32 var_v1_3;
    s8 *var_a0_2;
    u8 *temp_a0;
    u8 *var_a0;
    u8 *var_a1;
    u8 *var_a1_2;
    u8 temp_v1_2;
    u8 var_t1;
    void *var_a0_3;

    bzero(arg0 + 0x57, 6);
    if ((arg0->unkE6 != 0) && (arg0->unk28 != NULL)) {
        var_t1 = 6;
        if ((u8) arg0->unk34 < 7U) {
            var_t1 = arg0->unk34;
        }
        var_t0 = 0;
        if (arg0->unkE9 != 0) {
            var_t2 = 0;
            do {
                var_a2 = 0;
                var_a3 = 1;
                if ((var_t2 + arg0->unk4)->unk2 != 0) {
                    var_a3 = 0xFF;
                }
                var_a1 = arg0 + 0x5D;
                var_a0 = arg0->unk28;
                var_v1 = 0;
                if (var_t1 != 0) {
loop_9:
                    if ((*var_a1 != var_t0) || !(*var_a0 & var_a3)) {
                        var_a1 += 1;
                        var_v1 += 1;
                        var_a0 += 1;
                        if (var_v1 < (s32) var_t1) {
                            goto loop_9;
                        }
                    } else {
                        var_a2 = 1;
                    }
                }
                if (var_a2 != 0) {
                    temp_v1 = D_801BC10C + (var_t2 + arg0->unk4)->unk3;
                    if (temp_v1 < 0x3D) {
                        D_801BC10C = temp_v1;
                    } else {
                        var_a2 = 0;
                    }
                    if (var_a2 != 0) {
                        var_a1_2 = arg0 + 0x5D;
                        var_a0_2 = arg0 + 0x57;
                        var_v1_2 = 0;
                        if (var_t1 != 0) {
                            do {
                                var_a1_2 += 1;
                                if (*var_a1_2 == var_t0) {
                                    *var_a0_2 = 1;
                                }
                                var_v1_2 += 1;
                                var_a0_2 += 1;
                            } while (var_v1_2 < (s32) var_t1);
                        }
                    }
                }
                var_t0 += 1;
                var_t2 += 5;
            } while (var_t0 < (s32) arg0->unkE9);
        }
    } else {
        temp_v1_2 = arg0->unkE8;
        if ((((u32) (temp_v1_2 - 4) < 2U) || (temp_v1_2 == 7)) && (arg0->unkE6 == 0) && ((u8) arg0->unk34 >= 2U)) {
            temp_a0 = arg0->unk28;
            if (((temp_a0->unk0 & 0xC0) == 0x40) && (temp_a0->unk1 & 1) && ((D_801BC10C + 0xA) < 0x3D)) {
                arg0->unk58 = 1;
                arg0->unk57 = 1;
                D_801BC10C += 0xA;
            }
        } else {
            if (arg0->unkE8 == 3) {
                arg0->unk57 = 1;
                return;
            }
            if (arg0->unkE6 == 0) {
                var_v1_3 = 5;
                var_a0_3 = arg0 + 5;
                do {
                    var_a0_3->unk57 = 1;
                    var_v1_3 -= 1;
                    var_a0_3 -= 1;
                } while (var_v1_3 >= 0);
            }
        }
    }
}
