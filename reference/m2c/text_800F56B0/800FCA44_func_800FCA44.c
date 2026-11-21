/* m2c reference for func_800FCA44 @ 800FCA44 (137 words). Generated; not compiled or validated. */
s32 func_800FF594(s32, void *);                     /* extern */
s32 func_801250C8(s32, void *);                     /* extern */
? func_80144EE8(void *, s32, s32, ?);               /* extern */
? func_80147A6C(void *, ?);                         /* extern */
? func_80147DD0(void *);                            /* extern */
? func_80148A00(void *, ?);                         /* extern */
s16 func_80178A1C();                                /* extern */
static void *D_801C34EC = NULL;

void func_800FCA44(void *arg0) {
    s32 temp_s1_2;
    s32 temp_v0;
    s32 temp_v1;
    s32 var_v1;
    void *temp_s1;

    temp_s1 = arg0 + 0x1E4;
    if (func_801250C8(arg0->unk854->unk738 + 0x1C, temp_s1) < 0x640) {
        arg0->unkAD = 1;
    } else {
        temp_s1_2 = func_800FF594(arg0->unk44, temp_s1);
        temp_v0 = func_800FF594(arg0->unk44, arg0->unk854->unk738 + 0x1C);
        if ((temp_s1_2 == temp_v0) || (temp_v1 = (arg0->unk44 + (temp_s1_2 * 4))->unk8, ((temp_v1 + (temp_v0 * 2))->unk14 & 0x8000)) || ((s8) (temp_v1 + temp_v0)->unk4E < 0)) {
            arg0->unkAA = 1;
        }
    }
    func_80144EE8(arg0, arg0->unk854->unk738, (func_80178A1C() * 0x2616) / 1000, 0x800);
    if (arg0->unk7C0 == 0x90) {
        var_v1 = 0;
        if (arg0->unk90 == 0) {
            var_v1 = arg0->unk87 == 0;
        }
        if ((var_v1 != 0) && ((rand() & 0x3F) == 0x2A)) {
            func_80148A00(arg0, 1);
            arg0->unk81 = 1;
        }
    }
    arg0->unk89C = (s32) (arg0->unk89C - arg0->unk7D4);
    if (arg0->unk89C <= 0) {
        arg0->unk934 = 0;
        func_80147A6C(arg0, 0x960);
        func_80147DD0(arg0);
        if (D_801C34EC->unk7D8 == 0) {
            arg0->unk780 = (s32) arg0->unk784;
        }
        if (arg0->unk94E != 0) {
            arg0->unk946 = 1;
            arg0->unk874 = 0;
            arg0->unk8D = 1;
        }
    } else if (arg0->unk89C < 0x78) {
        arg0->unkAA = 1;
    }
}
