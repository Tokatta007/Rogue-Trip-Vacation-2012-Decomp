/* m2c reference for func_8012208C @ 8012208C (112 words). Generated; not compiled or validated. */
? func_80124FC8(void *, VECTOR *, VECTOR *);        /* extern */
s32 func_80125094(void *, VECTOR *);                /* extern */

void func_8012208C(void *arg0, void *arg1, s32 *arg2, s32 *arg3) {
    VECTOR sp10;
    s32 sp20;
    s32 sp24;
    s32 sp28;
    s32 var_s0;
    s32 var_s1;
    s32 var_s2;
    s32 var_s3;
    s32 var_v0;
    s32 var_v1;
    void *temp_a0;

    sp20 = 0;
    sp28 = 0;
    if (arg1->unkCC < arg1->unk7A4) {
        var_v0 = 0x960;
    } else {
        var_v0 = 0x320;
    }
    sp24 = var_v0;
    var_s3 = 0x7FFFFFFF;
    var_s2 = 0x7FFFFFFF;
    mathMulTransVec(arg1->unk738 + 0x28, (VECTOR *) &sp20, &sp10);
    func_80124FC8(arg1 + 0x1E4, &sp10, &sp10);
    *arg2 = -1;
    *arg3 = -1;
    var_s0 = 0;
    if (arg0->unk12750 > 0) {
        var_s1 = 0;
        do {
            temp_a0 = arg0 + (var_s1 + 0xC8F8);
            if ((temp_a0->unk7C0 < 0xD0) && (arg1->unk7C8 != temp_a0->unk7C8) && (temp_a0->unk8C == 0)) {
                if (temp_a0->unk82A != 0) {
                    var_v1 = 0x7FFFFFFF;
                } else {
                    var_v1 = func_80125094(temp_a0 + 0x1E4, &sp10);
                }
                if (var_v1 < var_s3) {
                    if (*arg2 >= 0) {
                        var_s2 = var_s3;
                        *arg3 = *arg2;
                    }
                    *arg2 = var_s0;
                    var_s3 = var_v1;
                } else if (var_v1 < var_s2) {
                    *arg3 = var_s0;
                    var_s2 = var_v1;
                }
            }
            var_s1 += 0x958;
            var_s0 += 1;
        } while (var_s0 < arg0->unk12750);
    }
}
