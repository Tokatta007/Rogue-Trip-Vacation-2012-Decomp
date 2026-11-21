/* m2c reference for func_8013CAE0 @ 8013CAE0 (159 words). Generated; not compiled or validated. */
? func_8013BDCC(void *, ?, ?);                      /* extern */
? func_8013BEA8(void *);                            /* extern */
s32 func_8017D580(?);                               /* extern */
extern ? D_801C3100;
extern ? D_801C31CC;
extern s32 D_801C31D4;

void func_8013CAE0(void *arg0, s32 arg1, void *arg2) {
    s32 var_v0;
    s32 var_v0_2;
    void *temp_a0;
    void *temp_s0;

    if (arg1 == 0x11) {
        if (func_8017D580(0x18) > 0) {
            D_801C31D4 = 0x18;
            func_8013BEA8(arg0);
        }
        if (func_8017D580(0xE) > 0) {
            D_801C31D4 = 0xE;
            func_8013BEA8(arg0);
        }
        if (func_8017D580(0xF) > 0) {
            D_801C31D4 = 0xF;
            func_8013BEA8(arg0);
        }
        if (func_8017D580(0x10) > 0) {
            D_801C31D4 = 0x10;
            func_8013BEA8(arg0);
        }
        if (func_8017D580(5) > 0) {
            D_801C31D4 = 5;
            func_8013BEA8(arg0);
        }
        D_801C31CC.unk8 = arg1;
        D_801C31CC.unkC = arg1;
        if (arg2 == NULL) {
            D_801C31CC.unk4 = (s32) (D_801C31CC.unk4 | 1);
        } else {
            D_801C3100.unk0 = (s32) arg2->unk0;
            D_801C3100.unk4 = (s32) arg2->unk4;
            D_801C31CC.unk0 = &D_801C3100;
            D_801C3100.unk8 = (s32) arg2->unk8;
        }
        var_v0 = D_801C31CC.unk4 | 8;
        goto block_27;
    }
    temp_s0 = arg0 + ((arg1 - 0xE) * 4);
    if (temp_s0->unk230 <= 0) {
        if (arg1 == 0xE) {
            arg0->unk230 = (s32) ((rand() & 3) + 4);
            var_v0_2 = arg1 * 8;
        } else if (arg1 == 0xF) {
            (arg0 + 4)->unk230 = (s32) ((rand() & 7) + 4);
            var_v0_2 = arg1 * 8;
        } else {
            temp_s0->unk230 = (s32) ((rand() & 0xF) + 4);
            var_v0_2 = arg1 * 8;
        }
        temp_a0 = var_v0_2 + arg0;
        D_801C31CC.unk8 = arg1;
        temp_a0->unk1CC = (s32) (temp_a0->unk1CC + 1);
        if ((temp_a0 + 0x1CC)->unk4 < temp_a0->unk1CC) {
            temp_a0->unk1CC = 1;
        }
        D_801C31CC.unkC = (s32) temp_a0->unk1CC;
        if (arg2 == NULL) {
            D_801C31CC.unk4 = (s32) (D_801C31CC.unk4 | 1);
        } else {
            D_801C3100.unk0 = (s32) arg2->unk0;
            D_801C3100.unk4 = (s32) arg2->unk4;
            D_801C31CC.unk0 = &D_801C3100;
            D_801C3100.unk8 = (s32) arg2->unk8;
        }
        var_v0 = D_801C31CC.unk4 | 0xC;
block_27:
        D_801C31CC.unk4 = var_v0;
        func_8013BDCC(arg0, 0, 0);
    }
}
