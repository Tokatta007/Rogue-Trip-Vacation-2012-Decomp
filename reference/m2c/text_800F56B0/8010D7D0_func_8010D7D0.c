/* m2c reference for func_8010D7D0 @ 8010D7D0 (120 words). Generated; not compiled or validated. */
? func_8010D9B0(void *);                            /* extern */
? func_8010EB6C(void *);                            /* extern */
? func_8010ED2C(void *, void *);                    /* extern */
? func_8010FDC4(void *, void *, ?);                 /* extern */
void *func_801244FC(void *, s32);                   /* extern */
void *func_80124CBC(void *);                        /* extern */
? func_801253F4(? *, void *);                       /* extern */
? func_8012A154(s32, ? *, s32, ?, s32, void *);     /* extern */
static void *D_801C34EC = NULL;
static s32 D_801C34F0 = 0;

void func_8010D7D0(void *arg0) {
    ? sp18;
    s32 temp_s0;
    s32 temp_s1_2;
    s32 var_s0;
    s32 var_v0;
    void *temp_s1;
    void *temp_v0;
    void *temp_v0_2;

    if ((s16) arg0->unk508 < 0x4B0) {
        arg0->unk508 = (u16) (arg0->unk508 + arg0->unk7D4);
    }
    if (arg0->unk53B != 0) {
        func_8010EB6C(arg0);
    }
    if (arg0->unk500 != 0) {
        temp_v0 = func_80124CBC(D_801C34EC);
        temp_s1 = arg0 + 0x1E4;
        temp_v0->unk18 = (s32) arg0->unk7C4;
        temp_v0->unk14 = 1;
        temp_v0->unkC = temp_s1;
        var_v0 = arg0->unk23C;
        if (var_v0 < 0) {
            var_v0 = -var_v0;
        }
        temp_s0 = (s32) (var_v0 * 0xA) / (s32) arg0->unkD0;
        func_801253F4(&sp18, arg0 + 0x244);
        func_8012A154(D_801C34F0, &sp18, temp_s0, 1, arg0->unk500, temp_s1);
        if (temp_v0->unk22 != 0) {
            func_8010FDC4(arg0, temp_v0, 0x20);
        }
        arg0->unk500 = 0;
    }
    if (arg0->unk542 != 0) {
        temp_s1_2 = D_801C34EC->unk1270C;
        var_s0 = 0;
        if (temp_s1_2 > 0) {
            do {
                if (var_s0 != arg0->unk7C8) {
                    temp_v0_2 = func_801244FC(D_801C34EC, var_s0);
                    if (temp_v0_2->unk542 != 0) {
                        func_8010ED2C(arg0, temp_v0_2);
                    }
                }
                var_s0 += 1;
            } while (var_s0 < temp_s1_2);
        }
    }
    func_8010D9B0(arg0);
}
