/* m2c reference for func_80146E4C @ 80146E4C (86 words). Generated; not compiled or validated. */
? func_800FDE00();                                  /* extern */
? func_800FE080(void *);                            /* extern */
? func_800FE250(void *, ?);                         /* extern */
? func_800FE36C(void *, s8);                        /* extern */
? func_800FE4CC(void *);                            /* extern */
s32 func_8012468C(s32, void *, s32);                /* extern */
? func_80146FA4(void *);                            /* extern */
static s32 D_801C34EC = 0;

void func_80146E4C(void *arg0) {
    s32 var_v1;
    void *temp_v0;

    func_800FDE00();
    func_800FE080(arg0);
    var_v1 = 0;
    if ((arg0->unk8B != 0) || (arg0->unk192 != 0)) {
        var_v1 = 1;
    }
    if (var_v1 != 0) {
        arg0->unk192 = (u16) (arg0->unk192 - arg0->unk7D4);
        if ((arg0->unk192 << 0x10) <= 0) {
            arg0->unk192 = 0U;
            arg0->unk8B = 0U;
            func_800FE250(arg0, 0);
        }
    }
    if ((arg0->unk7D ^ (s8) arg0->unkAC) != 0) {
        if (arg0->unkAC != 0) {
            arg0->unk20C = (s32) (arg0->unk20C + (arg0->unkC4 * 2));
        }
        func_800FE36C(arg0, (s8) arg0->unkAC);
        arg0->unk7D = (u8) arg0->unkAC;
    }
    func_800FE4CC(arg0);
    if ((arg0->unk820 != 0) || (temp_v0 = D_801C34EC + 0x6220, (arg0 == func_8012468C(D_801C34EC, temp_v0->unk3A0 + 0x1E4, temp_v0->unk3A0->unk738)))) {
        func_80146FA4(arg0);
        return;
    }
    arg0->unk804 = 0;
}
