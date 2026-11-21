/* m2c reference for func_8013BB4C @ 8013BB4C (160 words). Generated; not compiled or validated. */
? func_8013BDCC(void *, ?, ? *, ? *);               /* extern */
? func_8013BEA8(void *);                            /* extern */
? func_8013CF68(void *);                            /* extern */
s32 func_8016B6DC(?, ?);                            /* extern */
? func_8017DE0C();                                  /* extern */
extern ? D_801C3100;
extern ? D_801C31CC;
extern s32 D_801C31D4;
static void *D_801C34EC = NULL;

void func_8013BB4C(void *arg0) {
    s32 sp10;
    s32 sp14;
    s32 sp18;
    s32 var_a0;
    s32 var_s0;
    s32 var_s1;
    s32 var_v1_2;
    void *var_v1;

    if (D_801C34EC->unk12688 == 1) {
        sp10 = -0x1310;
        sp14 = 0x3E8;
        sp18 = -0x18;
        D_801C31CC.unk8 = 0x27;
        D_801C31CC.unkC = 0x27;
        D_801C3100.unk0 = sp10;
        D_801C3100.unk4 = (s32) sp10.unk4;
        D_801C31CC.unk0 = &D_801C3100;
        D_801C3100.unk8 = (s32) sp10.unk8;
        func_8013BDCC(NULL, 0, &D_801C31CC);
    }
    if (arg0->unk2B0 == 0) {
        D_801C31D4 = 0x1A;
        func_8013BEA8(arg0);
    }
    if (arg0->unk2B4 == 0) {
        D_801C31D4 = 0x3F;
        func_8013BEA8(arg0);
    }
    if (arg0->unk2B8 == 0) {
        D_801C31D4 = 0x2B;
        func_8013BEA8(arg0);
    }
    var_a0 = 0;
    if (arg0->unk214 > 0) {
        arg0->unk214 = (s32) (arg0->unk214 - 1);
        var_a0 = 0;
    }
    var_v1 = arg0;
    do {
        if (var_v1->unk230 > 0) {
            var_v1->unk230 = (s32) (var_v1->unk230 - 1);
        }
        var_a0 += 1;
        var_v1 += 4;
    } while (var_a0 < 3);
    if (arg0->unk264 > 0) {
        arg0->unk264 = (s32) (arg0->unk264 - 1);
    }
    var_v1_2 = 0;
    if (arg0->unk25C == 0) {
        var_v1_2 = arg0->unk258 == 0;
    }
    if (var_v1_2 != 0) {
        arg0->unk258 = 1;
    }
    if (arg0->unk258 != 0) {
        D_801C31CC.unk8 = 0x25;
        D_801C31CC.unkC = 0x25;
        if (arg0->unk260 <= 0) {
            func_8013BEA8(arg0);
            arg0->unk258 = 0;
        } else {
            arg0->unk260 = (s32) (arg0->unk260 - arg0->unk254);
            D_801C31CC.unk18 = (s32) arg0->unk260;
            func_8013BDCC(arg0, 0, NULL, &D_801C31CC);
        }
    }
    arg0->unk25C = 0;
    func_8013CF68(arg0 + 0x8C);
    var_s1 = 0;
    var_s0 = 0xA8;
    do {
        func_8013CF68(arg0 + var_s0);
        var_s1 += 1;
        var_s0 += 0x1C;
    } while (var_s1 < 0xD);
    arg0->unk278 = (s32) (func_8016B6DC(1, 0) & 0xFF);
    arg0->unk27C = (s32) (func_8016B6DC(1, 1) & 0xFF);
    arg0->unk2B0 = 0;
    arg0->unk2B4 = 0;
    arg0->unk2B8 = 0;
    func_8017DE0C();
}
