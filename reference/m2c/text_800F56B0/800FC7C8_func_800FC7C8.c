/* m2c reference for func_800FC7C8 @ 800FC7C8 (55 words). Generated; not compiled or validated. */
void *func_801244FC(s32, s32);                      /* extern */
static s32 D_801C34EC = 0;

s32 func_800FC7C8(void *arg0) {
    s32 var_a0;
    s32 var_v0;
    s32 var_v1;
    void *temp_v0;

    var_a0 = 0;
    if (arg0->unk8 == 3) {
        var_a0 = arg0->unk58 >= 0xD;
    }
    var_v0 = 0;
    if (var_a0 != 0) {
        var_v0 = 0;
        if (arg0->unk78C < 0xFA0) {
            var_v1 = 0;
            if (arg0->unk940 != 0) {
                var_v1 = ((s32) arg0->unkD0 >> 1) < arg0->unk7A4;
            }
            var_v0 = 0;
            if (var_v1 != 0) {
                temp_v0 = func_801244FC(D_801C34EC, arg0->unk884);
                var_v0 = 0;
                if (temp_v0->unk542 == 0) {
                    var_v0 = 0;
                    if (temp_v0->unk7A4 < ((s32) arg0->unk7A4 >> 1)) {
                        var_v0 = 1;
                    }
                }
            }
        }
    }
    return var_v0;
}
