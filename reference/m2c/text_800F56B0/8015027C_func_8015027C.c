/* m2c reference for func_8015027C @ 8015027C (264 words). Generated; not compiled or validated. */
? func_8011BC6C(void *, ?, ?, ?, s32, s32);         /* extern */
s32 func_801233B4(void *, u8);                      /* extern */
void *func_801244FC(void *, s32);                   /* extern */
void *func_80124584(void *, ?, s32);                /* extern */
void *func_80124CBC(void *);                        /* extern */
? func_80125130(VECTOR *, void *);                  /* extern */
? func_801254DC(VECTOR *, ?, ?, ?);                 /* extern */
? func_8012A154(s32, ?, ?, ?, s32, s32);            /* extern */
? func_8013BDCC(s32, ?, ?, ? *);                    /* extern */
? func_80148A00(void *, ?);                         /* extern */
? func_8016A274(?, s32, s32, ?, u8 *);              /* extern */
extern ? D_801C3100;
extern ? D_801C31CC;
static void *D_801C34EC = NULL;
static s32 D_801C34F0 = 0;
static s32 D_801C34F4 = 0;

void func_8015027C(s32 arg0, s32 arg1) {
    u8 sp18;
    VECTOR sp38;
    VECTOR sp48;
    ? var_s6;
    s32 var_a0;
    s32 var_v0;
    s8 temp_v1;
    void *temp_a2;
    void *temp_s0;
    void *temp_s0_2;
    void *temp_s1;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v1_2;
    void *var_a2;

    temp_v0 = func_80124584(D_801C34EC, 0x10, arg1);
    func_8016A274(0x10, temp_v0->unk7C4, arg0 + ((arg1 * 0xC) + 0x1788), 0xA0, &sp18);
    var_s6 = 3;
    if ((sp18 != 0) && (sp1A >= 0x10U) && (sp19 != 0)) {
        temp_v0_2 = func_80124CBC(D_801C34EC);
        temp_v0_2->unkC = (void *) (temp_v0 + 0x1E4);
        temp_s0 = arg0 + arg1;
        if (sp1A < 0x120U) {
            temp_s0->unk17B4 = (u8) (temp_s0->unk17B4 + 3);
            if ((s8) temp_s0->unk17B4 >= 0x1F) {
                var_s6 = 0;
            }
            temp_s1 = func_801244FC(D_801C34EC, func_801233B4(D_801C34EC, sp19));
            temp_v1 = temp_s0->unk17B0 - 1;
            switch (temp_v1) {
            case 0:
            case 1:
                temp_v1_2 = arg0 + (arg1 * 4);
                if (temp_v1_2->unk17A8 == NULL) {
                    temp_v1_2->unk17A8 = (void *) temp_s1->unk738;
                    if (temp_s1->unk8B == 0) {
                        temp_s1->unk738->unk8 = 0xFF;
                        temp_s1->unk738->unk9 = 0xFF;
                        temp_s1->unk738->unkA = 0x19;
                    }
                }
                func_80148A00(temp_s1, 3);
                var_a2 = arg0 + arg1;
                break;
            case 2:
            case 4:
                func_801254DC(&sp38, -0x64, 0, 0);
                mathMulTransVec(temp_v0->unk738 + 0x28, &sp38, &sp48);
                temp_s1->unk86 = 1;
                func_80125130(&sp48, temp_s1 + 0x1FC);
                if (temp_s1->unk20C < temp_s1->unkD0) {
block_16:
                    var_v0 = temp_s1->unkD0;
                } else {
block_15:
                    var_v0 = temp_s1->unk20C;
                }
block_17:
                temp_s1->unk20C = var_v0;
            default:
                var_a2 = arg0 + arg1;
                break;
            case 3:
                func_801254DC(&sp38, 0x64, 0, 0);
                mathMulTransVec(temp_v0->unk738 + 0x28, &sp38, &sp48);
                temp_s1->unk86 = 1;
                func_80125130(&sp48, temp_s1 + 0x1FC);
                if (temp_s1->unk20C >= temp_s1->unkD0) {
                    goto block_15;
                }
                goto block_16;
                goto block_17;
            }
            var_a0 = 0;
            if ((s8) var_a2->unk17B0 != 2) {
                var_a0 = (u32) ((s8) var_a2->unk17B0 ^ 6) > 0U;
            }
            if (var_a0 != 0) {
                D_801C31CC.unk8 = 0xA;
                temp_a2 = temp_s1 + 0x1E4;
                D_801C31CC.unkC = (s32) (s8) var_a2->unk17B0;
                D_801C3100.unk0 = (s32) temp_s1->unk1E4;
                D_801C3100.unk4 = (s32) temp_a2->unk4;
                D_801C31CC.unk0 = &D_801C3100;
                D_801C3100.unk8 = (s32) temp_a2->unk8;
                func_8013BDCC(D_801C34F4, 0, 0, &D_801C31CC);
            }
        }
        if ((sp1A == 0x212) && (D_801C34EC->unk1106F != 0)) {
            D_801C34EC->unk110A2 = 0x64;
        }
        temp_s0_2 = arg0 + ((arg1 * 0xC) + 0x1788);
        temp_v0_2->unk14 = 0;
        temp_v0_2->unkC = temp_s0_2;
        temp_v0_2->unk18 = (s32) temp_v0->unk7C4;
        temp_v0_2->unk10 = 0;
        temp_v0_2->unk20 = 0;
        temp_v0_2->unk21 = 0;
        func_8012A154(D_801C34F0, 0, var_s6, 0x1D, (s32) sp19, 0);
        if (rand() & 1) {
            func_8011BC6C(temp_s0_2, 0, 0xF, 0xE, 0, 0);
        }
    }
}
