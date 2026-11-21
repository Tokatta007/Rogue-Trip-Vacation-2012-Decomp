/* m2c reference for func_80131B40 @ 80131B40 (43 words). Generated; not compiled or validated. */
? func_80131C5C(s32, s32);                          /* extern */
static s32 D_801C335C = 0;

void func_80131B40(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_a3;
    s32 temp_v1;
    s32 var_s0;
    s32 var_s1;

    if (D_801C335C != 0) {
        var_s1 = arg1;
        temp_a3 = var_s1 + arg3;
        if (var_s1 < temp_a3) {
            var_s0 = arg0;
            do {
                temp_v1 = var_s0 + arg2;
                if (var_s0 < temp_v1) {
                    do {
                        func_80131C5C(var_s1, var_s0);
                        var_s0 += 1;
                    } while (var_s0 < temp_v1);
                }
                var_s1 += 1;
                var_s0 = arg0;
            } while (var_s1 < temp_a3);
        }
    }
}
