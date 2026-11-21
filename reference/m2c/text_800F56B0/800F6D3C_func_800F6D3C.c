/* m2c reference for func_800F6D3C @ 800F6D3C (54 words). Generated; not compiled or validated. */
u16 func_800F6E14(? *);                             /* extern */
? func_800F7EA8(void *, void *);                    /* extern */
s32 func_800FF2B0(s32 *, ? *, s16);                 /* extern */

void func_800F6D3C(void *arg0) {
    ? sp10;
    s32 var_v1;
    void *var_a1;
    void *var_v1_2;

    arg0->unk66 = func_800F6E14(&sp10);
    arg0->unk8 = 3;
    arg0->unk58 = 0xE;
    arg0->unk780 = 0;
    var_a1 = NULL;
    arg0->unk900 = func_800FF2B0(arg0->unk44, &sp10, (s16) arg0->unk66);
    arg0->unk34 = (s32) (*arg0->unk44 + (arg0->unk900 << 5));
    if (arg0 != NULL) {
        var_a1 = arg0 + 4;
    }
    var_a1->unk6C = 0;
    func_800F7EA8(arg0, var_a1);
    var_v1 = 0;
    if (arg0->unk951 != 0) {
        var_v1 = rand() & 1;
    }
    if (var_v1 != 0) {
        arg0->unk58 = 0x10;
        var_v1_2 = NULL;
        arg0->unk34 = (s32) (arg0->unk40 + 0x1C);
        if (arg0 != NULL) {
            var_v1_2 = arg0 + 4;
        }
        var_v1_2->unk6C = 1;
    }
}
