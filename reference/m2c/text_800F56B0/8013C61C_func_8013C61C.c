/* m2c reference for func_8013C61C @ 8013C61C (130 words). Generated; not compiled or validated. */
? func_8013BDCC(?, ?, ? *);                         /* extern */
? func_8013C824(s32);                               /* extern */
extern ? D_801C3100;
extern ? D_801C31CC;
static void *D_801C34EC = NULL;

void func_8013C61C(void *arg0, s32 arg1, void *arg2, s32 arg3) {
    ? *temp_a3;
    s32 var_a3;
    s32 var_v0;
    s32 var_v1;

    switch (arg1) {
    case 6:
        var_v0 = 0x15;
block_8:
        D_801C31CC.unk8 = var_v0;
        D_801C31CC.unkC = var_v0;
        D_801C3100.unk0 = (s32) arg2->unk0;
        D_801C3100.unk4 = (s32) arg2->unk4;
        D_801C31CC.unk0 = &D_801C3100;
        D_801C31CC.unk4 = (s32) (D_801C31CC.unk4 | 8);
        D_801C3100.unk8 = (? *) arg2->unk8;
        func_8013BDCC(0, 0, &D_801C31CC);
        return;
    case 8:
        D_801C31CC.unk8 = 0x18;
        arg0->unk288 = (s32) (arg0->unk288 + 1);
        if ((arg0 + 0x288)->unk4 < arg0->unk288) {
            arg0->unk288 = 1;
        }
        D_801C31CC.unkC = (s32) arg0->unk288;
        D_801C3100.unk0 = (s32) arg2->unk0;
        D_801C3100.unk4 = (s32) arg2->unk4;
        temp_a3 = arg2->unk8;
        D_801C31CC.unk0 = &D_801C3100;
        D_801C31CC.unk4 = (s32) (D_801C31CC.unk4 | 8);
        D_801C3100.unk8 = temp_a3;
        func_8013BDCC(0, 0, temp_a3);
        return;
    case 11:
        var_v0 = 0x19;
        goto block_8;
    case 21:
        var_v0 = 0x44;
        goto block_8;
    case 24:
        var_a3 = 0;
        if (D_801C34EC->unk12688 == 0xB) {
            var_a3 = D_801C34EC->unk1106D != 0;
        }
        var_v1 = 0x51;
        if (var_a3 == 0) {
            if (D_801C34EC->unk12688 == 3) {
                var_v1 = 0x5C;
                goto block_14;
            }
            D_801C31CC.unk8 = 0x14;
            D_801C31CC.unkC = 0x15;
        } else {
block_14:
            D_801C31CC.unk8 = var_v1;
            D_801C31CC.unkC = var_v1;
        }
        D_801C3100.unk0 = (s32) arg2->unk0;
        D_801C3100.unk4 = (s32) arg2->unk4;
        D_801C31CC.unk0 = &D_801C3100;
        D_801C31CC.unk4 = (s32) (D_801C31CC.unk4 | 8);
        D_801C3100.unk8 = (? *) arg2->unk8;
        func_8013BDCC(0, 0, &D_801C31CC);
        return;
    default:
        func_8013C824((arg3 + 8) & 0xFFFF);
        return;
    }
}
