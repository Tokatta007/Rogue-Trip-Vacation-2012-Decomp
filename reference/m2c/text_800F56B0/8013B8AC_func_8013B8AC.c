/* m2c reference for func_8013B8AC @ 8013B8AC (31 words). Generated; not compiled or validated. */
s8 func_8013B770(u16);                              /* extern */

void func_8013B8AC(s8 *arg0, u16 *arg1) {
    s8 *var_s1;
    u16 *var_s0;
    u16 temp_a0;
    void *temp_s2;

    var_s1 = arg0;
    var_s0 = arg1;
    if ((var_s0 != NULL) && (var_s1 != NULL)) {
        temp_s2 = var_s0 + 0x40;
        if (*var_s0 != 0) {
loop_3:
            if (var_s0 != temp_s2) {
                temp_a0 = *var_s0;
                var_s0 += 2;
                *var_s1 = func_8013B770(temp_a0);
                var_s1 += 1;
                if (*var_s0 != 0) {
                    goto loop_3;
                }
            }
        }
        *var_s1 = 0;
    }
}
