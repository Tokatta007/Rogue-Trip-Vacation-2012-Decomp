/* m2c reference for func_800FEC24 @ 800FEC24 (36 words). Generated; not compiled or validated. */
? func_800FF004(void *);                            /* extern */
s32 func_80100C5C(s32);                             /* extern */
s32 func_80100C88(s32, s32);                        /* extern */
static s32 D_801C34EC = 0;

void func_800FEC24(void *arg0) {
    s32 var_a1;
    void *var_a0;
    void *var_v1;

    var_a1 = 0;
    arg0->unk74 = func_80100C5C(arg0->unk0);
    var_v1 = D_801C34EC + 0x7DC;
    var_a0 = arg0;
    arg0->unk7C = (s32) var_v1->unkDEC;
loop_1:
    if (var_a1 < arg0->unk7C) {
        var_a0->unk8 = var_v1;
        var_a0 += 4;
        var_v1 += 0x84;
        var_a1 += 1;
        goto loop_1;
    }
    arg0->unk78 = func_80100C88(arg0->unk4, var_a1);
    func_800FF004(arg0);
}
