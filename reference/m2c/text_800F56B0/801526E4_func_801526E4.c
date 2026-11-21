/* m2c reference for func_801526E4 @ 801526E4 (308 words). Generated; not compiled or validated. */
? func_8011BC6C(s32, ? *, ?, ?, s32, s32);          /* extern */
void *func_80124584(s32, ?, s32);                   /* extern */
void *func_80124CBC(s32);                           /* extern */
? func_8012A154(s32, ? *, s32, ?, s32, s32);        /* extern */
? func_8012CDF4(void *, ?);                         /* extern */
s32 func_80133AE0(s32, s32);                        /* extern */
? func_8013BDCC(s32, ?, ?, ? *);                    /* extern */
? func_8013BEA8(s32, ?);                            /* extern */
? func_80148A00(void *, ?);                         /* extern */
? func_801548C8(s32, void *);                       /* extern */
? func_80154918(s32, void *);                       /* extern */
? func_8016408C(void *);                            /* extern */
s32 func_80176CBC(s32, s32, ?);                     /* extern */
s32 func_80178A1C();                                /* extern */
extern ? D_801C3100;
extern ? D_801C31CC;
extern ? D_801E4710;
static s32 D_801C34EC = 0;
static s32 D_801C34F0 = 0;
static s32 D_801C34F4 = 0;
static ? D_801C35F0;                                /* unable to generate initializer: unknown type */
static s32 D_801C35F8[2] = { 0, 0 };

void func_801526E4(s32 arg0, s32 arg1) {
    ? sp18;
    ? sp1C;
    s32 var_a0;
    s32 var_s1;
    s32 var_s4;
    s32 var_v0;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_s0;
    void *temp_s1;
    void *temp_s1_2;
    void *temp_s5;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_4;
    void *temp_v1;
    void *temp_v1_2;
    void *var_v1;

    temp_s1 = arg0 + (arg1 * 4);
    sp18 = (unaligned s32) D_801C35F0.unk0;
    sp1C = (unaligned s32) D_801C35F0.unk4;
    temp_s0 = temp_s1->unk1854;
    temp_s5 = D_801C34EC + 0x10FF4;
    temp_v0 = func_80124584(D_801C34EC, 0x90, arg1);
    var_s4 = 2;
    if (temp_v0->unk8C != 0) {
        (arg0 + arg1)->unk1872 = 0;
        temp_s0->unkC = 0;
    }
    temp_a0 = arg0 + (arg1 * 2);
    temp_a0->unk186C = (u16) (temp_a0->unk186C + func_80178A1C());
    if ((s16) temp_a0->unk186C < 0x78) {
        D_801C31CC.unk8 = 0x43;
        D_801C31CC.unkC = 0x43;
        temp_v1 = temp_s1->unk1864;
        temp_v1_2 = temp_v1 + 0x1C;
        D_801C3100.unk0 = (s32) temp_v1->unk1C;
        D_801C3100.unk4 = (s32) temp_v1_2->unk4;
        D_801C31CC.unk0 = &D_801C3100;
        D_801C3100.unk8 = (s32) temp_v1_2->unk8;
        func_8013BDCC(D_801C34F4, 0, 0, &D_801C31CC);
        temp_s0->unk1C = func_80176CBC(temp_s0->unk1C, temp_s1->unk1864->unk1C, 9);
        temp_s0->unk20 = func_80176CBC(temp_s0->unk20, temp_s1->unk1864->unk20, 9);
        temp_s0->unk24 = func_80176CBC(temp_s0->unk24, temp_s1->unk1864->unk24, 9);
        if (temp_s1->unk1864 != NULL) {
            if (temp_v0->unkB8 == 0) {
                D_801C35F8[arg1] = 1;
            }
            if ((temp_v0->unk7B8 == 2) && !(rand() & 7)) {
                temp_v0->unkB8 = 1U;
                D_801C35F8[arg1] = 1;
            }
            var_a0 = 0;
            if ((temp_v0->unkB8 != 0) && (D_801C35F8[arg1] != 0)) {
                var_a0 = temp_v0->unk87 == 0;
            }
            if (var_a0 != 0) {
                temp_s1_2 = arg0 + (arg1 * 4);
                temp_v0_2 = temp_s1_2->unk185C;
                if (temp_v0_2 != NULL) {
                    if (temp_v0_2->unk89 != 0) {
                        func_801548C8(arg0, temp_s1_2->unk185C);
                    }
                    temp_s1_2->unk185C->unk86 = 1;
                    temp_s1_2->unk185C->unk450 = (s32) ((temp_s1_2->unk185C->unk1F8 + 0x1FF) - (rand() & 0x3FF));
                    func_8016408C(temp_s1_2->unk185C + 0x450);
                    temp_s1_2->unk185C->unk537 = 1;
                    temp_s1_2->unk185C->unk50C = 0x3C;
                    func_80148A00(temp_s1_2->unk185C, 3);
                    var_v1 = arg0 + arg1;
                } else {
                    var_v1 = arg0 + arg1;
                    if (temp_s1_2->unk1864 == temp_s5->unk13C) {
                        var_v1 = arg0 + arg1;
                        if (temp_s5->unk88 == 1) {
                            var_s4 = 0x11;
                            func_80154918(arg0, temp_s5);
                            var_v1 = arg0 + arg1;
                        }
                    }
                }
                var_v1->unk1870 = (u8) (var_v1->unk1870 + var_s4);
                var_s1 = 0;
                if ((s8) var_v1->unk1870 >= 0x1F) {
                    var_s4 = 0;
                }
                temp_v0_3 = func_80124CBC(D_801C34EC);
                temp_a0_2 = arg0 + (arg1 * 4);
                temp_v0_3->unk18 = (s32) temp_v0->unk7C4;
                temp_v0_3->unk14 = 0;
                temp_v0_3->unkC = (s32) (temp_a0_2->unk1864 + 0x1C);
                func_8012A154(D_801C34F0, &sp18, var_s4, 1, (s32) (*temp_a0_2->unk1864)->unk2, 0);
                do {
                    D_801E4710.unk0 = (s32) (0xF - (rand() & 0x1F));
                    D_801E4710.unk4 = (s32) (0xF - (rand() & 0x1F));
                    D_801E4710.unk8 = (s32) ((rand() & 0x3F) + 0xF);
                    temp_v0_4 = temp_a0_2->unk185C;
                    if (temp_v0_4 != NULL) {
                        var_v0 = func_80133AE0(temp_v0_4->unk7C0, temp_v0_4->unk78);
                    } else {
                        var_v0 = 0xA0;
                    }
                    func_8011BC6C(temp_a0_2->unk1864 + 0x1C, &D_801E4710, 2, 0x2C, var_v0, 0);
                    var_s1 += 1;
                } while (var_s1 < 3);
                func_8011BC6C((arg0 + (arg1 * 4))->unk1864 + 0x1C, NULL, 0xF, 0xE, 0, 0);
                D_801C35F8[arg1] = 0;
            }
        }
    } else {
        D_801C31CC.unk8 = 0x43;
        D_801C31CC.unkC = 0x43;
        func_8013BEA8(D_801C34F4, 0);
        (arg0 + arg1)->unk1872 = 0;
        func_8012CDF4(temp_v0 + 0x264, 0);
        temp_s0->unkC = 0;
    }
}
