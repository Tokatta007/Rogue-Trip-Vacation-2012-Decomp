/* m2c reference for func_8012468C @ 8012468C (101 words). Generated; not compiled or validated. */
s32 func_801250C8(s32, void *);                     /* extern */

void *func_8012468C(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;
    s32 var_a0;
    s32 var_s2;
    s32 var_s4;
    void *var_s0;
    void *var_s1;
    void *var_s3;
    void *var_v1;

    var_s4 = 0x7FFFFFFF;
    var_s2 = 0;
    var_s3 = NULL;
    if (arg0->unk1270C > 0) {
        var_s1 = arg0;
        var_v1 = var_s1 + 0x10000;
        do {
            var_a0 = 0;
            if ((var_v1->unk241C != NULL) && (var_v1->unk241C->unkC != 0)) {
                var_a0 = (u32) ((s32) var_v1->unk241C ^ arg2) > 0U;
            }
            if (var_a0 != 0) {
                if (var_s1->unkB768 == 1) {
                    var_s0 = arg0 + 0xB788 + (var_s1->unk126EC * 0x8B8);
                } else {
                    var_s0 = arg0 + 0xC8F8 + (var_s1->unk126EC * 0x958);
                }
                if (var_s0 != NULL) {
                    temp_v0 = func_801250C8(arg1, var_s0 + 0x1E4);
                    if (temp_v0 < var_s4) {
                        var_s4 = temp_v0;
                        var_s3 = var_s0;
                    }
                }
            }
            var_s1 += 4;
            var_s2 += 1;
            var_v1 = var_s1 + 0x10000;
        } while (var_s2 < arg0->unk1270C);
    }
    return var_s3;
}
