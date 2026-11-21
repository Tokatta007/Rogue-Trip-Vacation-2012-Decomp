/* m2c reference for func_80121A00 @ 80121A00 (145 words). Generated; not compiled or validated. */
void func_80121A00(void *arg0) {
    s32 temp_a1;
    s32 temp_a1_2;
    s32 var_a3;
    s32 var_a3_2;
    s32 var_a3_3;
    s32 var_t0_2;
    s32 var_t1;
    s32 var_t2;
    s32 var_t3;
    s32 var_t5;
    void *temp_t0;
    void *temp_v0;
    void *temp_v1;
    void *temp_v1_2;
    void *var_a1;
    void *var_a2;
    void *var_a2_2;
    void *var_t0;
    void *var_v1;
    void *var_v1_2;

    arg0->unk12730 = 0;
    arg0->unk12600 = 0x7FFFFFFF;
    var_a3 = 0;
    if (arg0->unk12728 > 0) {
        var_t0 = arg0;
        var_v1 = var_t0 + 0xB788;
        do {
            if (var_v1->unk8C == 0) {
                temp_a1 = var_v1->unk790;
                if (temp_a1 < arg0->unk12600) {
                    arg0->unk12730 = var_a3;
                    arg0->unk12600 = temp_a1;
                }
            }
            var_t0 += 0x8B8;
            var_a3 += 1;
            var_v1 = var_t0 + 0xB788;
        } while (var_a3 < arg0->unk12728);
    }
    var_t3 = 0x7FFFFFFF;
    var_t0_2 = 0x7FFFFFFF;
    var_t2 = -1;
    var_t5 = -1;
    var_a3_2 = 0;
    if (arg0->unk12750 > 0) {
        var_a2 = arg0;
        var_v1_2 = var_a2 + 0xC8F8;
        do {
            if ((var_v1_2->unk7C0 < 0xD0) && (var_v1_2->unk8C == 0)) {
                temp_a1_2 = var_v1_2->unk790;
                if (temp_a1_2 < var_t3) {
                    if (var_t2 >= 0) {
                        var_t0_2 = var_t3;
                        var_t5 = var_t2;
                    }
                    var_t2 = var_a3_2;
                    var_t3 = temp_a1_2;
                } else if (temp_a1_2 < var_t0_2) {
                    var_t5 = var_a3_2;
                    var_t0_2 = temp_a1_2;
                }
                var_a2->unkD231 = (s8) (temp_a1_2 < arg0->unk12600);
            }
            var_a2 += 0x958;
            var_a3_2 += 1;
            var_v1_2 = var_a2 + 0xC8F8;
        } while (var_a3_2 < arg0->unk12750);
    }
    var_a3_3 = 0;
    var_a2_2 = arg0;
    var_t1 = 0xC8F8;
loop_19:
    temp_t0 = var_a2_2 + 0xC8F8;
    if (var_a3_3 < arg0->unk12750) {
        if (temp_t0->unk7C0 < 0xD0) {
            var_a1 = NULL;
            if (var_a3_3 != var_t2) {
                temp_v1 = var_a2_2 + 0xC8FC;
                if (var_a3_3 == var_t5) {
                    var_a1 = NULL;
                    goto block_24;
                }
                if (temp_v1->unk54 == 0xB) {
                    temp_v1->unk54 = 0;
                }
            } else {
block_24:
                temp_v1_2 = var_a2_2 + 0xC8FC;
                temp_v1_2->unk4 = 3;
                temp_v0 = arg0 + var_t1;
                temp_v1_2->unk54 = 0xB;
                temp_v1_2->unk30 = (s32) ((arg0 + 0x10A64)->unk38 + 0x1C);
                temp_t0->unk780 = 0;
                if (temp_v0 != NULL) {
                    var_a1 = temp_v0 + 4;
                }
                var_a1->unk6C = 0;
            }
            var_a2_2->unkD232 = (s8) (var_t3 < arg0->unk12600);
        }
        var_a2_2 += 0x958;
        var_t1 += 0x958;
        var_a3_3 += 1;
        goto loop_19;
    }
    arg0->unk127DF = 1;
}
