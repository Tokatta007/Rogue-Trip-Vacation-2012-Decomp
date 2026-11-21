/* m2c reference for func_80118174 @ 80118174 (31 words). Generated; not compiled or validated. */
s16 func_800FF040(s32, s16, ?);                     /* extern */

s16 func_80118174(void *arg0, s16 arg1) {
    s16 var_s1;
    s32 temp_s2;
    s32 var_s0;

    var_s1 = arg1;
    temp_s2 = rand() & 7;
    if (temp_s2 != 0) {
        var_s0 = 1;
        do {
            var_s1 = func_800FF040(arg0->unk40, var_s1, -1);
            var_s0 += 1;
        } while (var_s0 < temp_s2);
    }
    return var_s1;
}
