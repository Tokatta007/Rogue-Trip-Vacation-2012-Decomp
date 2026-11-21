/* m2c reference for func_800F7F9C @ 800F7F9C (92 words). Generated; not compiled or validated. */
? func_800F81F8();                                  /* extern */
? func_80124480(void *, s32, void *);               /* extern */
void *func_801297D4(void *, void *, ?, void *);     /* extern */
s32 func_8012BD30(void *);                          /* extern */
? func_8012E544(void *, void *, ?, ?);              /* extern */
static void *D_801C34EC = NULL;

s32 func_800F7F9C(void *arg0) {
    s32 var_s1;
    s32 var_v0;
    void *temp_v0;
    void *var_a1;

    var_s1 = 0;
    if (D_801C34EC->unk7D4 > 0) {
        var_v0 = 0;
        if (arg0->unk10C < ((s32) arg0->unk110 >> 1)) {
            if (arg0->unk7DC < 0x3E8) {
                func_800F81F8();
            }
            if (arg0->unk7DC >= 0x3E8) {
                temp_v0 = func_801297D4(D_801C34EC, arg0 + 0x1E4, 0x3E8, arg0 + 0x8E0);
                if (temp_v0 != NULL) {
                    var_s1 = 1;
                    arg0->unk34 = temp_v0;
                    arg0->unk8 = 3;
                    arg0->unk58 = 8;
                    arg0->unk918 = 0;
                }
            }
            var_v0 = var_s1;
            if (var_s1 == 0) {
                var_v0 = var_s1;
                if (func_8012BD30(arg0 + 0x264) >= 2) {
                    arg0->unk8 = 3;
                    arg0->unk58 = 9;
                    func_80124480(D_801C34EC, arg0->unk8DC, arg0 + 0x72C);
                    if ((rand() & 3) == 1) {
                        arg0->unk72C = (s32) -arg0->unk72C;
                        var_a1 = arg0 + 0x72C;
                    } else {
                        var_a1 = arg0 + 0x72C;
                        if ((rand() & 3) == 1) {
                            arg0->unk730 = (s32) -arg0->unk730;
                            var_a1 = arg0 + 0x72C;
                        }
                    }
                    arg0->unk34 = var_a1;
                    var_s1 = 1;
                    func_8012E544(arg0->unk34, var_a1, 0, 1);
                    goto block_14;
                }
            }
        }
    } else {
block_14:
        var_v0 = var_s1;
    }
    return var_v0;
}
