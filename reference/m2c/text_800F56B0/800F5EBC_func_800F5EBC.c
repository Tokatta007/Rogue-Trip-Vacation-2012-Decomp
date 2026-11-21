/* m2c reference for func_800F5EBC @ 800F5EBC (85 words). Generated; not compiled or validated. */
? func_800F6010(void *);                            /* extern */
? func_800F6340(void *);                            /* extern */
? func_800F836C(void *);                            /* extern */
? func_800F840C(void *);                            /* extern */
? func_800FD138(void *);                            /* extern */
? func_800FD29C(void *);                            /* extern */
? func_80100630(void *);                            /* extern */
? func_801250FC(void *, s32, ? *);                  /* extern */
? func_80144EC0();                                  /* extern */
? func_80144FF8(void *, s16);                       /* extern */
extern s32 D_801C3724;

void func_800F5EBC(void *arg0) {
    ? sp10;
    s32 var_a0;
    void *var_a0_2;

    func_80144EC0();
    arg0->unk84 = 0;
    arg0->unk920 = (s32) (arg0->unk920 + arg0->unk7D4);
    if (arg0->unk8B != 0) {
        arg0->unk920 = 0;
    }
    func_800F6010(arg0);
    func_800F6340(arg0);
    func_800F840C(arg0);
    func_800FD138(arg0);
    var_a0 = 0;
    if (((arg0->unk537 != 0) || (arg0->unk538 != 0)) && (arg0->unkC8 < arg0->unk7A4)) {
        var_a0 = 1;
    }
    if (var_a0 == 0) {
        if (arg0->unk6E != 0) {
            func_800F836C(arg0);
        } else if (arg0->unk944 != 0) {
            func_801250FC(arg0 + 0x1E4, arg0->unk34, &sp10);
            arg0->unk20 = sp18;
            func_80144FF8(arg0, (s16) arg0->unk20);
        } else {
            var_a0_2 = NULL;
            if (arg0 != NULL) {
                var_a0_2 = arg0 + 4;
            }
            func_80100630(var_a0_2);
        }
    }
    if ((arg0->unk7C0 == 0xD0) && (D_801C3724 == 0)) {
        func_800FD29C(arg0);
    }
}
