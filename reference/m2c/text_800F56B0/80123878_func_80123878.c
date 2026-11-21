/* m2c reference for func_80123878 @ 80123878 (50 words). Generated; not compiled or validated. */
s32 func_80125094(void *, s32);                     /* extern */
? func_801253C8(void *, s32);                       /* extern */

void func_80123878(void *arg0) {
    s32 var_s2;
    s32 var_s3;
    void *temp_s0;
    void *var_s1;
    void *var_s4;

    var_s2 = 0;
    if (arg0->unk12760 > 0) {
        var_s4 = arg0;
        var_s3 = 0x660;
        var_s1 = arg0 + 0x660;
        do {
            temp_s0 = var_s4 + 0x10000;
            var_s4 += 4;
            var_s3 += 0xC;
            temp_s0->unk2604 = func_80125094(var_s1, temp_s0->unk2458 + 0x1C);
            func_801253C8(var_s1, temp_s0->unk2458 + 0x1C);
            var_s2 += 1;
            var_s1 = arg0 + var_s3;
        } while (var_s2 < arg0->unk12760);
    }
}
