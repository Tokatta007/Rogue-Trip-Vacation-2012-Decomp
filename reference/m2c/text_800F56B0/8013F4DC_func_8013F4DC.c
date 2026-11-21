/* m2c reference for func_8013F4DC @ 8013F4DC (205 words). Generated; not compiled or validated. */
? func_8015A05C(s16 *, MATRIX *);                   /* extern */
u16 func_80176CBC(s16, s32, ?);                     /* extern */

void func_8013F4DC(void *arg0) {
    MATRIX sp10;
    s32 sp30;
    s32 sp34;
    s32 sp38;
    VECTOR sp40;
    s16 sp50;
    s16 sp52;
    s16 sp54;
    s16 var_v0_2;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_s2;
    s32 var_s3;
    s32 var_v1;
    u16 var_v0;
    void *temp_s0;

    var_s3 = 0;
    sp50 = arg0->unk6F0 + arg0->unk704;
    var_s2 = 0x544;
    sp54 = 0;
    sp52 = arg0->unk6F2 + arg0->unk706;
    func_8015A05C(&sp50, &sp10);
    do {
        temp_s0 = arg0 + var_s2;
        if (temp_s0->unk4C != 0) {
            if ((s16) temp_s0->unk34 >= 0x3D) {
                temp_s0->unk46 = 0U;
                goto block_25;
            }
            var_v1 = 0;
            if ((arg0->unk81 != 0) || ((s16) temp_s0->unk34 >= 0x15)) {
                var_v1 = 1;
            }
            if (var_v1 != 0) {
                temp_s0->unk46 = func_80176CBC((s16) temp_s0->unk46, 0, 5);
                var_v0 = func_80176CBC((s16) temp_s0->unk44, arg0->unk6B8, 9);
                goto block_26;
            }
        } else {
            sp30 = temp_s0->unk24;
            sp34 = temp_s0->unk28;
            sp38 = temp_s0->unk2C;
            mathMulTransVec(&sp10, (VECTOR *) &sp30, &sp40);
            temp_s0->unk44 = (u16) ((temp_s0->unk2C - (u16) sp40.vz) * 0x10);
            temp_v1 = (s32) ((s32) (temp_s0->unk8 - temp_s0->unk30) / (s32) arg0->unk7D4) >> 1;
            if ((s16) temp_s0->unk42 < temp_v1) {
                var_a0 = arg0->unk6B4;
                if (temp_v1 < var_a0) {
                    var_a0 = temp_v1;
                }
                temp_s0->unk42 = (u16) var_a0;
                temp_s0->unk40 = (s16) -(s16) temp_s0->unk42;
                temp_s0->unk4D = 1U;
            }
            if (temp_s0->unk42 != 0) {
                var_a0_2 = 0x40;
                var_v0_2 = (s16) temp_s0->unk42;
                if (var_v0_2 < 0) {
                    var_v0_2 = -var_v0_2;
                }
                temp_v1_2 = var_v0_2 >> 1;
                if (temp_v1_2 >= 0x40) {
                    var_a0_2 = temp_v1_2;
                }
                if (temp_s0->unk4D != 0) {
                    temp_s0->unk46 = (u16) (temp_s0->unk46 + var_a0_2);
                    if ((s16) temp_s0->unk42 < ((s16) temp_s0->unk46 + (s16) temp_s0->unk44)) {
                        temp_s0->unk46 = (u16) (temp_s0->unk42 - temp_s0->unk44);
                        temp_s0->unk4D = 0U;
                    }
                } else {
                    temp_s0->unk46 = (u16) ((s32) (temp_s0->unk46 << 0x10) >> 0x11);
                    temp_s0->unk42 = (u16) temp_s0->unk46;
                }
            }
            temp_s0->unk44 = (u16) (temp_s0->unk44 + temp_s0->unk46);
            if (arg0->unk6B4 < (s16) temp_s0->unk44) {
                var_v0 = (u16) arg0->unk6B4;
                goto block_26;
            }
            if ((s16) temp_s0->unk44 < arg0->unk6B8) {
block_25:
                var_v0 = (u16) arg0->unk6B8;
block_26:
                temp_s0->unk44 = var_v0;
            }
        }
        var_s3 += 1;
        var_s2 += 0x54;
    } while (var_s3 < 4);
}
