/* m2c reference for func_80125DA4 @ 80125DA4 (208 words). Generated; not compiled or validated. */
? func_800F7E84(void *, void *, void *);            /* extern */
s32 func_801250C8(s32, void *);                     /* extern */
? func_80125CD8(void *);                            /* extern */

void func_80125DA4(void *arg0) {
    s32 temp_hi;
    s32 var_s1;
    s32 var_s1_2;
    s32 var_s1_3;
    s32 var_s2;
    s32 var_v1;
    s32 var_v1_2;
    s32 var_v1_3;
    void *temp_a2;
    void *var_a0;
    void *var_a0_2;
    void *var_v0;
    void *var_v1_4;

    if (arg0->unk122C8 != NULL) {
        arg0->unk12355 = -1U;
        var_s1 = 0;
loop_2:
        temp_hi = rand() % (s8) arg0->unk12354;
        var_v1 = 0;
        if ((arg0 + temp_hi)->unk12344 == 0) {
            var_v1 = arg0->unk12318 >= (arg0 + (temp_hi * 4))->unk122D8;
        }
        if (var_v1 != 0) {
            var_s2 = 0;
            if ((arg0->unk12320 == 0) || (func_801250C8(arg0->unk122C8 + 0x1C, arg0 + ((temp_hi * 0xC) + 0x12208)) >= 0x1F41)) {
                var_s2 = 1;
            }
            if (var_s2 == 0) {
                goto block_9;
            }
            arg0->unk12355 = (u8) temp_hi;
        } else {
block_9:
            var_s1 += 1;
            if (var_s1 < 0x1E) {
                goto loop_2;
            }
        }
        if ((s8) arg0->unk12355 == -1) {
            var_s1_2 = 0;
            if ((arg0->unk12354 << 0x18) > 0) {
                var_a0 = arg0;
                var_v0 = arg0;
loop_13:
                var_v1_2 = 0;
                if (var_v0->unk12344 == 0) {
                    var_v1_2 = arg0->unk12318 >= var_a0->unk122D8;
                }
                var_a0 += 4;
                if (var_v1_2 == 0) {
                    var_s1_2 += 1;
                    var_v0 = arg0 + var_s1_2;
                    if (var_s1_2 >= (s8) arg0->unk12354) {

                    } else {
                        goto loop_13;
                    }
                } else {
                    arg0->unk12355 = (u8) var_s1_2;
                }
            }
        }
        var_v1_3 = 0;
        if (!(arg0->unk12355 & 0x80)) {
            var_v1_3 = arg0->unk12320 < 6;
        }
        if (var_v1_3 != 0) {
            arg0->unk12318 = (s32) (arg0->unk12318 + arg0->unk1231C);
            arg0->unk12320 = (s32) (arg0->unk12320 + 1);
            func_80125CD8(arg0);
            arg0->unk122D4 = 0;
        } else {
            arg0->unk12355 = -1U;
            arg0->unk122C8->unkC = 0;
            var_s1_3 = 0;
            if (arg0->unk12750 > 0) {
                var_v1_4 = arg0;
                var_a0_2 = var_v1_4 + 0xC8FC;
                do {
                    if (var_a0_2->unk54 == 0xC) {
                        (var_v1_4 + 0xC8F8)->unk825 = 0;
                        var_a0_2->unk54 = 0;
                    }
                    var_v1_4 += 0x958;
                    var_s1_3 += 1;
                    var_a0_2 = var_v1_4 + 0xC8FC;
                } while (var_s1_3 < arg0->unk12750);
            }
        }
        temp_a2 = (arg0 + 0x10A64)->unk330;
        if ((temp_a2 != NULL) && (temp_a2->unk7B8 == 2)) {
            if (!(arg0->unk12355 & 0x80)) {
                temp_a2->unk81C = (u16) arg0->unk122C8->unk18;
                return;
            }
            func_800F7E84(temp_a2, temp_a2, temp_a2);
        }
    }
}
