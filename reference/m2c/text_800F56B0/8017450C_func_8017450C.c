/* m2c reference for func_8017450C @ 8017450C (177 words). Generated; not compiled or validated. */
? func_8017498C(s32, ?, void *, s32 *);             /* extern */
extern s32 D_801BC028;
extern s32 D_801BC030;
extern s32 D_801C2648;
extern s32 D_801C264C;
extern s32 *D_801C2650;
extern s32 D_801C2670;
extern s32 D_801C2674;

s32 func_8017450C(s32 arg0) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a1;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_a0;
    s32 var_s0;
    s32 var_s1;
    s32 var_s2;
    s32 var_s3;
    s32 var_v0;
    u32 temp_s1;
    u32 temp_t0;
    void *temp_a2;
    void *temp_v0;
    void *temp_v1_3;
    void *temp_v1_4;
    void *var_a0_2;

    var_a0 = arg0;
    var_s1 = var_a0;
    var_s0 = 0;
    var_s2 = -1;
    if (D_801C2670 == 0) {
        var_s3 = 0;
    } else {
        var_a0 = D_801BC028;
        var_s3 = (0x10000 - D_801C2674) << var_a0;
    }
    if (var_s1 & ~D_801BC030) {
        var_s1 += D_801BC030;
    }
    temp_s1 = (var_s1 >> D_801BC028) << D_801BC028;
    if (*D_801C2650 & 0x40000000) {
        var_s2 = 0;
    } else {
        func_8017498C(var_a0);
        if (D_801C2648 > 0) {
            var_a0_2 = (0 * 8) + D_801C2650;
loop_9:
            temp_v1 = var_a0_2->unk0;
            if ((temp_v1 & 0x40000000) || ((temp_v1 & 0x80000000) && ((u32) var_a0_2->unk4 >= temp_s1))) {
                var_s2 = var_s0;
            } else {
                var_s0 += 1;
                var_a0_2 += 8;
                if (var_s0 < D_801C2648) {
                    goto loop_9;
                }
            }
        }
    }
    var_v0 = -1;
    temp_s0 = var_s2 * 8;
    if (var_s2 != -1) {
        temp_a2 = temp_s0 + D_801C2650;
        temp_v1_2 = temp_a2->unk0;
        if (temp_v1_2 & 0x40000000) {
            var_v0 = -1;
            if (var_s2 < D_801C2648) {
                var_v0 = -1;
                if ((u32) (temp_a2->unk4 - var_s3) >= temp_s1) {
                    temp_a0 = var_s2 + 1;
                    temp_v1_3 = (temp_a0 * 8) + D_801C2650;
                    temp_v1_3->unk0 = (s32) (((temp_a2->unk0 & 0x0FFFFFFF) + temp_s1) | 0x40000000);
                    temp_v1_3->unk4 = (s32) (temp_a2->unk4 - temp_s1);
                    D_801C264C = temp_a0;
                    temp_a2->unk4 = temp_s1;
                    temp_a2->unk0 = (s32) (temp_a2->unk0 & 0x0FFFFFFF);
                    func_8017498C(temp_a0, 0x0FFFFFFF, temp_a2, D_801C2650);
                    return *(temp_s0 + D_801C2650);
                }
            }
            /* Duplicate return node #23. Try simplifying control flow for better match */
            return var_v0;
        }
        temp_t0 = temp_a2->unk4;
        if ((temp_s1 < temp_t0) && (D_801C264C < D_801C2648)) {
            temp_v0 = (D_801C264C * 8) + D_801C2650;
            temp_a1 = temp_v0->unk0;
            temp_a0_2 = temp_v0->unk4;
            temp_v0->unk0 = (s32) ((temp_v1_2 + temp_s1) | 0x80000000);
            temp_v0->unk4 = (s32) (temp_t0 - temp_s1);
            D_801C264C += 1;
            temp_v0->unk8 = temp_a1;
            temp_v0->unkC = temp_a0_2;
        }
        temp_s0_2 = var_s2 * 8;
        temp_v1_4 = temp_s0_2 + D_801C2650;
        temp_v1_4->unk4 = temp_s1;
        temp_v1_4->unk0 = (s32) (temp_v1_4->unk0 & 0x0FFFFFFF);
        func_8017498C(0x0FFFFFFF);
        var_v0 = *(temp_s0_2 + D_801C2650);
        /* Duplicate return node #23. Try simplifying control flow for better match */
        return var_v0;
    }
    return var_v0;
}
