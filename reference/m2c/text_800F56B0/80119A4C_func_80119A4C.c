/* m2c reference for func_80119A4C @ 80119A4C (92 words). Generated; not compiled or validated. */
void func_80119A4C(void *arg0) {
    s32 var_a2;
    s32 var_t0;
    s32 var_t1;
    s32 var_t2;
    s32 var_t3;
    s32 var_v0;
    s32 var_v1;
    s32 var_v1_2;
    void *temp_a1;
    void *var_a3;

    var_t2 = 1;
    var_t3 = 0xDC;
    if (arg0->unk38->unk48 > 1) {
        var_a3 = arg0 + 0xDC;
        do {
            if (var_a3->unk0 != 0) {
                var_v1 = 0;
                if ((var_a3->unkC < -0x960) || ((u32) (var_a3->unk1E - 0x190) < 0x13U)) {
                    var_v1 = 1;
                }
                if (var_v1 != 0) {
                    var_a3->unk0 = 0;
                } else {
                    var_t0 = 1;
                    if (arg0->unk38->unk48 > 1) {
                        var_t1 = 0xDC;
                        do {
                            temp_a1 = arg0 + var_t1;
                            if ((var_t2 != var_t0) && (temp_a1->unk0 != 0)) {
                                var_a2 = 0;
                                if ((var_a3->unk4 == temp_a1->unk4) && (var_a3->unk8 == temp_a1->unk8)) {
                                    var_a2 = var_a3->unkC == temp_a1->unkC;
                                }
                                if (var_a2 != 0) {
                                    var_v1_2 = var_a3->unk10;
                                    var_v0 = temp_a1->unk10;
                                    if (var_v1_2 < 0) {
                                        var_v1_2 = -var_v1_2;
                                    }
                                    if (var_v0 < 0) {
                                        var_v0 = -var_v0;
                                    }
                                    if (var_v0 < var_v1_2) {
                                        temp_a1->unk0 = 0;
                                    } else {
                                        var_a3->unk0 = 0;
                                        var_a3 = temp_a1;
                                    }
                                }
                            }
                            var_t1 += 0x20;
                            var_t0 += 1;
                        } while (var_t0 < arg0->unk38->unk48);
                    }
                }
            }
            var_t3 += 0x20;
            var_t2 += 1;
            var_a3 = arg0 + var_t3;
        } while (var_t2 < arg0->unk38->unk48);
    }
}
