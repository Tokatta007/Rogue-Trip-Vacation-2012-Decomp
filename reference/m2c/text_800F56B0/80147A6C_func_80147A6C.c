/* m2c reference for func_80147A6C @ 80147A6C (71 words). Generated; not compiled or validated. */
s16 func_800FF2B0(s32, VECTOR *, s32);              /* extern */
s32 func_800FF594(s32, void *);                     /* extern */
? func_800FF9C8(void *);                            /* extern */
? func_800FFB58(void *, ?);                         /* extern */
? func_80124FC8(VECTOR *, void *, VECTOR *);        /* extern */

void func_80147A6C(void *arg0, s32 arg1) {
    VECTOR sp10;
    s32 sp20;
    s32 sp24;
    s32 sp28;
    s32 var_v0;
    void *temp_s0;
    void *var_a0;
    void *var_a0_2;

    var_v0 = arg1;
    if (arg1 < 0) {
        var_v0 = -var_v0;
    }
    sp20 = 0;
    if (var_v0 >= 0x321) {
        sp24 = (s32) (arg1 * arg0->unk7A4) / (s32) arg0->unk25C;
    } else {
        sp24 = arg1;
    }
    sp28 = 0;
    mathMulTransVec(arg0->unk738 + 0x28, (VECTOR *) &sp20, &sp10);
    temp_s0 = arg0 + 0x1E4;
    func_80124FC8(&sp10, temp_s0, &sp10);
    sp10.vz = arg0->unk1EC;
    var_a0 = NULL;
    arg0->unk60 = func_800FF2B0(arg0->unk44, &sp10, func_800FF594(arg0->unk44, temp_s0));
    if (arg0 != NULL) {
        var_a0 = arg0 + 4;
    }
    func_800FF9C8(var_a0);
    var_a0_2 = NULL;
    if (arg0 != NULL) {
        var_a0_2 = arg0 + 4;
    }
    func_800FFB58(var_a0_2, -1);
    arg0->unk68 = 1;
}
