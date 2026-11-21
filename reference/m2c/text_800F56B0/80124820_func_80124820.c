/* m2c reference for func_80124820 @ 80124820 (132 words). Generated; not compiled or validated. */
? func_80125050(s32, void *, s32 *);                /* extern */
s32 func_801250C8(s32 *, ?);                        /* extern */
s32 func_8015A62C(s32, s32);                        /* extern */
? func_8016408C(s32 *);                             /* extern */

void *func_80124820(void *arg0, s32 arg1, void *arg2, s32 arg3, s32 arg4) {
    s32 sp10;
    s32 sp20;
    void *sp24;
    s32 temp_v0;
    s32 var_a0;
    s32 var_s3;
    s32 var_s5;
    s32 var_v0;
    void *var_s1;
    void *var_s2;
    void *var_s4;
    void *var_v1;

    var_s5 = 0x7FFFFFFF;
    var_s3 = 0;
    var_s4 = NULL;
    if (arg0->unk1270C > 0) {
        sp24 = arg0 + 0xB788;
        var_s2 = arg0;
        var_v1 = var_s2 + 0x10000;
        do {
            var_a0 = 0;
            if ((var_v1->unk241C != NULL) && (var_v1->unk241C->unkC != 0)) {
                var_a0 = (u32) ((s32) var_v1->unk241C ^ arg3) > 0U;
            }
            if (var_a0 != 0) {
                if (var_s2->unkB768 == 1) {
                    var_s1 = sp24 + (var_s2->unk126EC * 0x8B8);
                } else {
                    var_s1 = arg0 + 0xC8F8 + (var_s2->unk126EC * 0x958);
                }
                if (var_s1 != NULL) {
                    func_80125050(arg1, var_s1 + 0x1E4, &sp10);
                    temp_v0 = func_801250C8(&sp10, 0);
                    if ((temp_v0 < var_s5) && (temp_v0 < arg4)) {
                        sp20 = (s16) arg2->unk4 - func_8015A62C(sp10, sp14);
                        func_8016408C(&sp20);
                        var_v0 = sp20;
                        if (var_v0 < 0) {
                            var_v0 = -var_v0;
                        }
                        if (var_v0 < 0x38E) {
                            var_s5 = temp_v0;
                            var_s4 = var_s1;
                        }
                    }
                }
            }
            var_s2 += 4;
            var_s3 += 1;
            var_v1 = var_s2 + 0x10000;
        } while (var_s3 < arg0->unk1270C);
    }
    return var_s4;
}
