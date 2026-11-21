/* m2c reference for func_8017498C @ 8017498C (192 words). Generated; not compiled or validated. */
extern s32 D_801C264C;
extern void *D_801C2650;

void func_8017498C(void) {
    s32 *var_v1;
    s32 temp_a1_2;
    s32 temp_a3;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 temp_v1_4;
    s32 temp_v1_5;
    s32 var_a2;
    s32 var_a2_2;
    s32 var_t1;
    s32 var_t1_2;
    s32 var_t1_3;
    s32 var_t1_4;
    s32 var_t1_5;
    void *temp_a1;
    void *temp_v0;
    void *var_a0;
    void *var_a0_2;
    void *var_a0_3;
    void *var_a3;
    void *var_t2;
    void *var_v1_2;

    var_t1 = 0;
    if (D_801C264C >= 0) {
        var_a3 = D_801C2650;
        do {
            var_a2 = var_t1 + 1;
            if (var_a3->unk0 & 0x80000000) {
                var_v1 = (var_a2 * 8) + D_801C2650;
loop_4:
                var_v1 += 8;
                if (*var_v1 == 0x2FFFFFFF) {
                    var_a2 += 1;
                    goto loop_4;
                }
                temp_a1 = (var_a2 * 8) + D_801C2650;
                temp_v1 = temp_a1->unk0;
                if ((temp_v1 & 0x80000000) && ((temp_v1 & 0x0FFFFFFF) == ((var_a3->unk0 & 0x0FFFFFFF) + var_a3->unk4))) {
                    temp_a1->unk0 = 0x2FFFFFFF;
                    var_a3->unk4 = (s32) (var_a3->unk4 + temp_a1->unk4);
                } else {
                    goto block_9;
                }
            } else {
block_9:
                var_a3 += 8;
                var_t1 += 1;
            }
        } while (D_801C264C >= var_t1);
    }
    var_t1_2 = 0;
    if (D_801C264C >= 0) {
        var_v1_2 = D_801C2650;
        do {
            if (var_v1_2->unk4 == 0) {
                var_v1_2->unk0 = 0x2FFFFFFF;
            }
            var_t1_2 += 1;
            var_v1_2 += 8;
        } while (D_801C264C >= var_t1_2);
    }
    var_t1_3 = 0;
    if (D_801C264C >= 0) {
        var_t2 = D_801C2650;
loop_19:
        if (!(var_t2->unk0 & 0x40000000)) {
            var_a2_2 = var_t1_3 + 1;
            if (D_801C264C >= var_a2_2) {
                var_a0 = (var_a2_2 * 8) + D_801C2650;
loop_22:
                temp_a1_2 = var_a0->unk0;
                if (!(temp_a1_2 & 0x40000000)) {
                    temp_a3 = var_t2->unk0;
                    if ((u32) (temp_a1_2 & 0x0FFFFFFF) < (u32) (temp_a3 & 0x0FFFFFFF)) {
                        var_t2->unk0 = temp_a1_2;
                        temp_v1_2 = var_t2->unk4;
                        var_t2->unk4 = (s32) var_a0->unk4;
                        var_a0->unk0 = temp_a3;
                        var_a0->unk4 = temp_v1_2;
                    }
                    var_a2_2 += 1;
                    var_a0 += 8;
                    if (D_801C264C >= var_a2_2) {
                        goto loop_22;
                    }
                }
            }
            var_t1_3 += 1;
            var_t2 += 8;
            if (D_801C264C >= var_t1_3) {
                goto loop_19;
            }
        }
    }
    var_t1_4 = 0;
    if (D_801C264C >= 0) {
        var_a0_2 = D_801C2650;
loop_29:
        temp_v1_3 = var_a0_2->unk0;
        if (!(temp_v1_3 & 0x40000000)) {
            if (temp_v1_3 == 0x2FFFFFFF) {
                temp_v0 = (D_801C264C * 8) + D_801C2650;
                var_a0_2->unk0 = (s32) temp_v0->unk0;
                D_801C264C = var_t1_4;
                var_a0_2->unk4 = (s32) temp_v0->unk4;
            } else {
                var_t1_4 += 1;
                var_a0_2 += 8;
                if (D_801C264C >= var_t1_4) {
                    goto loop_29;
                }
            }
        }
    }
    var_t1_5 = D_801C264C - 1;
    if (var_t1_5 >= 0) {
        var_a0_3 = (var_t1_5 * 8) + D_801C2650;
loop_35:
        temp_v1_4 = var_a0_3->unk0;
        if (temp_v1_4 & 0x80000000) {
            temp_v1_5 = D_801C264C;
            var_a0_3->unk0 = (s32) ((temp_v1_4 & 0x0FFFFFFF) | 0x40000000);
            D_801C264C = var_t1_5;
            var_t1_5 -= 1;
            var_a0_3->unk4 = (s32) (var_a0_3->unk4 + ((temp_v1_5 * 8) + D_801C2650)->unk4);
            var_a0_3 -= 8;
            if (var_t1_5 >= 0) {
                goto loop_35;
            }
        }
    }
}
