/* m2c reference for func_80174C8C @ 80174C8C (31 words). Generated; not compiled or validated. */
? func_8017498C(s32 *, s32, s32);                   /* extern */
extern s32 D_801C2648;
extern s32 *D_801C2650;

void func_80174C8C(s32 arg0, s32 *arg1, s32 arg3) {
    s32 *var_a1;
    s32 temp_v1;
    s32 var_a2;
    s32 var_a3;

    var_a1 = arg1;
    var_a3 = arg3;
    var_a2 = 0;
    if (D_801C2648 > 0) {
        var_a3 = D_801C2648;
        var_a1 = D_801C2650;
loop_2:
        temp_v1 = *var_a1;
        if (!(temp_v1 & 0x40000000)) {
            var_a2 += 1;
            if (temp_v1 == arg0) {
                *var_a1 = arg0 | 0x80000000;
            } else {
                var_a1 += 8;
                if (var_a2 < var_a3) {
                    goto loop_2;
                }
            }
        }
    }
    func_8017498C(var_a1, var_a2, var_a3);
}
