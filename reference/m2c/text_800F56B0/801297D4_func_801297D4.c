/* m2c reference for func_801297D4 @ 801297D4 (67 words). Generated; not compiled or validated. */
s32 func_801250C8(s32, void *);                     /* extern */

void *func_801297D4(void *arg0, s32 arg1, s32 *arg3) {
    s32 temp_v0;
    s32 var_s1;
    s32 var_s2;
    s32 var_s5;
    void *temp_s0;
    void *var_s3;
    void *var_s4;
    void *var_v0;

    var_s5 = 0x7FFFFFFF;
    var_s1 = 0;
    var_s4 = NULL;
    if (arg0->unk123F0 > 0) {
        var_s3 = arg0;
        var_s2 = 0;
        var_v0 = var_s3 + 0x10000;
        do {
            if (var_v0->unk2390 != 0) {
                temp_s0 = arg0 + (var_s2 + 0x12380) + 4;
                temp_v0 = func_801250C8(arg1, temp_s0);
                if (temp_v0 < var_s5) {
                    var_s5 = temp_v0;
                    var_s4 = temp_s0;
                    *arg3 = var_s1;
                }
            }
            var_s3 += 0x1C;
            var_s2 += 0x1C;
            var_s1 += 1;
            var_v0 = var_s3 + 0x10000;
        } while (var_s1 < arg0->unk123F0);
    }
    return var_s4;
}
