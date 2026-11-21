/* m2c reference for func_800FE36C @ 800FE36C (59 words). Generated; not compiled or validated. */
? func_8013BEA8(s32, void *, s32);                  /* extern */
extern ? D_801C31CC;
extern ? D_801C3760;
extern ? D_801C3C78;
static s32 D_801C34F4 = 0;

void func_800FE36C(void *arg0, s8 arg1) {
    s32 var_a3;
    void *var_a0;

    var_a3 = 0;
    var_a0 = *((arg0->unk78 * 4) + (((s32) arg0->unk7C0 >> 4) * 8) + &D_801C3C78);
    if (arg0->unk7C0 == 0xE0) {
        var_a3 = (s16) arg0->unk160 == 0x40;
    }
    if (var_a3 != 0) {
        var_a0 = *((arg0->unk78 * 4) + &D_801C3760);
    }
    if (var_a0 != NULL) {
        if ((arg1 != 0) && (arg0->unkAB != 0)) {
            var_a0->unk4 = 2;
        } else {
            var_a0->unk4 = arg1;
        }
    }
    if (arg1 == 0) {
        D_801C31CC.unk8 = 5;
        D_801C31CC.unkC = (s32) arg0->unk7C4;
        func_8013BEA8(D_801C34F4, arg0, var_a3);
    }
}
