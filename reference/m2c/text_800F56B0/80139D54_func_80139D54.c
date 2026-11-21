/* m2c reference for func_80139D54 @ 80139D54 (25 words). Generated; not compiled or validated. */
extern ? D_801B3960;
static s32 D_801C34EC = 0;

void func_80139D54(void) {
    s32 var_v0;
    s32 var_v1;
    void *temp_v0;

    memset(&D_801B3960, 0, 0x3C);
    var_v1 = 0;
    var_v0 = 0 < 4;
loop_1:
    if (var_v0 != 0) {
        temp_v0 = D_801C34EC + var_v1;
        var_v1 += 1;
        temp_v0->unk127AE = 1;
        var_v0 = var_v1 < 4;
        goto loop_1;
    }
}
