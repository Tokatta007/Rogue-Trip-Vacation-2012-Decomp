/* m2c reference for func_80171790 @ 80171790 (53 words). Generated; not compiled or validated. */
? func_8017173C(void *, s16);                       /* extern */
? func_80171A4C();                                  /* extern */
s32 func_80175F7C(s32);                             /* extern */

void func_80171790(void *arg0) {
    s16 var_s0_2;
    s32 var_s0;
    void *var_s1;
    void *var_v1;

    func_80171A4C();
    var_s0 = 0;
    var_v1 = arg0;
    do {
        var_v1->unk370 = 0;
        var_s0 += 1;
        var_v1 += 4;
    } while (var_s0 < 0x18);
    arg0->unk3D0 = 0;
    var_s0_2 = 0;
    var_s1 = arg0;
    do {
        if (func_80175F7C(1 << var_s0_2) != 1) {
            if (var_s1->unk14 != 0) {
                var_s1->unk14 = 0;
            } else {
                func_8017173C(arg0, var_s0_2);
            }
        }
        if (var_s1->unk8 != -1) {
            (arg0 + (var_s1->unk8 * 4))->unk370 = 1;
        }
        var_s0_2 += 1;
        var_s1 += 0x18;
    } while (var_s0_2 < 0x18);
}
