/* m2c reference for func_80149628 @ 80149628 (202 words). Generated; not compiled or validated. */
s32 func_8011BC6C(VECTOR *, s32 *, s32, ?, s32, s32); /* extern */
? func_8011D3E4(s32, ?);                            /* extern */

void func_80149628(void *arg0) {
    VECTOR sp18;                                    /* compiler-managed */
    s32 sp28;
    s32 sp2C;
    s32 sp30;
    s32 sp38;
    s32 sp3C;
    s32 sp40;
    ? var_a3;
    s32 temp_a2;
    s32 temp_a2_2;
    s32 temp_a3;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a2;
    s32 var_v0;
    s32 var_v1;

    var_a0 = 0;
    if ((arg0->unk829 == 0) || (((s32) arg0->unk110 >> 1) < arg0->unk10C)) {
        var_a0 = 1;
    }
    if (var_a0 == 0) {
        temp_v0 = rand();
        temp_v0_2 = temp_v0 & 7;
        if (arg0->unk7B8 == 1) {
            var_v0 = temp_v0_2 != 0;
        } else {
            var_v0 = temp_v0 & 1;
        }
        if (var_v0 == 0) {
            sp38 = arg0->unk244;
            sp3C = arg0->unk248;
            sp40 = arg0->unk24C + 2;
            sp28 = (s32) (s8) arg0->unk744;
            sp2C = (s32) (s8) arg0->unk745;
            sp30 = (s32) (s8) arg0->unk746;
            mathMulTransVec(arg0->unk738 + 0x28, (VECTOR *) &sp28, &sp18);
            sp18 = (s32) sp18 + (arg0->unk1E4 - sp38);
            sp18.vy += arg0->unk1E8 - sp3C;
            sp18.vz += arg0->unk1EC - sp40;
            if (arg0->unk10C < ((s32) arg0->unk110 >> 2)) {
                var_a3 = 9;
                var_a2 = ((s32) (((s32) arg0->unk110 >> 2) - arg0->unk10C) >> 4) + 4;
            } else {
                var_a3 = 0xB;
                var_a2 = 9 - ((s32) arg0->unk10C >> 4);
            }
            func_8011D3E4(func_8011BC6C(&sp18, &sp38, var_a2 & 0xFFFF, var_a3), 7);
            var_a0_2 = 0;
            if (arg0->unk10C < ((s32) arg0->unk110 >> 3)) {
                var_a0_2 = ((s32) arg0->unk20C >> 9) > 0;
            }
            if (var_a0_2 != 0) {
                var_v1 = 0;
                if ((arg0->unk90 != 0) || (arg0->unk9A != 0) || (arg0->unk9B != 0) || (arg0->unk8A != 0) || (arg0->unk9F != 0)) {
                    var_v1 = 1;
                }
                if (var_v1 == 0) {
                    sp28 = (s8) arg0->unk748 + ((rand() & 0x1F) - 0x10);
                    sp2C = (s32) (s8) arg0->unk749;
                    sp30 = (s32) (s8) arg0->unk74A;
                    mathMulTransVec(arg0->unk738 + 0x28, (VECTOR *) &sp28, &sp18);
                    temp_a2 = sp38 >> 1;
                    sp38 = temp_a2;
                    temp_a3 = sp3C >> 1;
                    sp3C = temp_a3;
                    sp18 = (s32) sp18 + (arg0->unk1E4 - temp_a2);
                    temp_a2_2 = sp40 >> 1;
                    sp40 = temp_a2_2;
                    sp18.vy += arg0->unk1E8 - temp_a3;
                    sp18.vz += arg0->unk1EC - temp_a2_2;
                    func_8011BC6C(&sp18, &sp38, ((s32) arg0->unk20C >> 9) & 0xFFFF, 0x14, 0, 0);
                }
            }
        }
    }
}
