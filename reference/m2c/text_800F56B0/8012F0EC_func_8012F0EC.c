/* m2c reference for func_8012F0EC @ 8012F0EC (141 words). Generated; not compiled or validated. */
? func_800FF8B8(void *, s16);                       /* extern */
u16 func_80120FE0(void *);                          /* extern */
? func_80125050(void *, s32, s32 *);                /* extern */
? func_801253C8(void *, void *);                    /* extern */
? func_801253F4(s32, void *);                       /* extern */
? func_801254DC(void *, ?, ?, ?);                   /* extern */
? func_80147DD0(void *);                            /* extern */
s32 func_8015A62C(s32, s32);                        /* extern */
static void *D_801C34EC = NULL;

void func_8012F0EC(void *arg0, u16 arg1) {
    s32 sp10;
    s32 sp14;
    s32 var_s0;
    s32 var_v0;
    void *temp_s0;
    void *temp_s1;
    void *var_a0;

    if (arg1 != -1U) {
        arg0->unk62 = arg1;
    } else {
        arg0->unk62 = func_80120FE0(D_801C34EC);
        var_s0 = 0;
        if (D_801C34EC->unk12688 == 3) {
            var_v0 = 0 < 0x64;
loop_4:
            if ((var_v0 != 0) && ((*arg0->unk44 + ((s32) (arg0->unk62 << 0x10) >> 0xB))->unk8 >= 0x1F40)) {
                var_s0 += 1;
                arg0->unk62 = func_80120FE0(D_801C34EC);
                var_v0 = var_s0 < 0x64;
                goto loop_4;
            }
        }
    }
    temp_s0 = arg0 + 0x1E4;
    if (!(arg0->unk62 & 0x8000)) {
        temp_s1 = *arg0->unk44 + ((s32) (arg0->unk62 << 0x10) >> 0xB);
        func_801253C8(temp_s0, temp_s1);
        arg0->unk1EC = (s32) (arg0->unk1EC - (s16) arg0->unk16C);
        func_80125050(temp_s0, *arg0->unk44 + ((s32) ((temp_s1 + ((rand() % (s8) temp_s1->unk1E) * 2))->unkC << 0x10) >> 0xB), &sp10);
        if (sp14 == 0) {
            sp14 = 1;
        }
        arg0->unk1F0 = 0;
        arg0->unk1F4 = 0;
        arg0->unk1F8 = func_8015A62C(sp10, sp14);
    } else {
        func_801254DC(arg0 + 0x1E4, 0x640, 0x640, -0x460);
        arg0->unk1F0 = 0;
        arg0->unk1F4 = 0;
        arg0->unk1F8 = 0;
    }
    func_801253F4(arg0->unk738 + 0x14, arg0 + 0x1F0);
    func_801253C8(arg0->unk738 + 0x1C, arg0 + 0x1E4);
    var_a0 = NULL;
    if (arg0 != NULL) {
        var_a0 = arg0 + 4;
    }
    func_800FF8B8(var_a0, (s16) arg0->unk62);
    func_80147DD0(arg0);
    arg0->unk77C = 0x1A4;
}
