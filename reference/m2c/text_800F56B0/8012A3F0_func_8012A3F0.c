/* m2c reference for func_8012A3F0 @ 8012A3F0 (98 words). Generated; not compiled or validated. */
s32 func_80126E2C(void *, s32);                     /* extern */
? func_8012A578(void *);                            /* extern */
? func_8012B094(void *, ?);                         /* extern */
? func_8012BFD0(void *);                            /* extern */
? func_8012C1BC(void *);                            /* extern */
? func_8012C290();                                  /* extern */
static void *D_801C34EC = NULL;

void func_8012A3F0(void *arg0, void *arg1) {
    void *temp_a0;

    arg0->unk0 = arg1;
    arg0->unk42 = 0x32;
    arg0->unk28 = 0x3E8;
    func_8012C290();
    temp_a0 = arg0->unk0;
    if (temp_a0->unk7B8 == 1) {
        if (func_80126E2C(D_801C34EC, D_801C34EC->unk12688) != 0) {
            func_8012BFD0(arg0);
            func_8012C1BC(arg0);
        } else if ((D_801C34EC + (s16) arg0->unk0->unk7D0)->unk127AE != 0) {
            goto block_6;
        }
    } else if (temp_a0->unk7B8 == 2) {
block_6:
        func_8012BFD0(arg0);
    }
    func_8012A578(arg0);
    arg0->unk41 = 0U;
    if ((arg0 + (s8) arg0->unk41)->unk43 == 0) {
        func_8012B094(arg0, 1);
    }
    arg0->unk35 = 0;
    arg0->unk36 = 0;
    arg0->unk37 = 0;
    arg0->unk33 = 0;
    arg0->unk34 = 0;
    arg0->unk3D = 0;
    arg0->unk3E = 0;
    arg0->unk3A = 0;
    arg0->unk3C = 0;
    if (arg0->unk0->unk7B8 == 2) {
        arg0->unk4 = -0x78;
        arg0->unkC = -0xB4;
    } else {
        arg0->unk4 = 0;
        arg0->unkC = 0;
    }
    arg0->unk14 = 0;
    arg0->unk31 = 1;
    arg0->unk32 = 1;
}
