/* m2c reference for func_801211B4 @ 801211B4 (201 words). Generated; not compiled or validated. */
? func_800F56B0(void *, void *, s32, s32, void *, s32); /* extern */
? func_800F5E1C(void *, s32);                       /* extern */
? func_80123058(void *, ?, s32);                    /* extern */
extern s32 D_801C37AC;
static s32 D_801C34F0 = 0;

void func_801211B4(void *arg0, s32 arg1, s32 arg2) {
    void *sp18;
    s32 temp_s0;
    s32 temp_s2;
    s32 var_a1;
    s32 var_fp;
    s32 var_s4;
    s32 var_s5;
    s32 var_v1_2;
    void *temp_a0;
    void *temp_v1;
    void *var_s0;
    void *var_v1;

    var_s5 = arg1;
    var_fp = 0;
    if (arg2 == 0xD0) {
        if (arg0->unk12688 == 0xB) {
            arg0->unk127AD = 1U;
        } else if (arg0->unk127AD == 0) {
            arg0->unk127AC = 1U;
            temp_s0 = rand();
            arg0->unk127A4 = (s32) ((temp_s0 & 1) + ((rand() & 1) + 1));
            if (arg0->unk127A4 >= arg0->unk12750) {
                arg0->unk127A4 = (s32) (arg0->unk12750 - 1);
            }
            arg0->unk12750 = (s32) (arg0->unk12750 - 1);
            var_s5 = arg0->unk12750;
        }
    } else if (arg0->unk127AC != 0) {
        var_s5 -= 1;
    }
    var_s4 = 0;
    if (arg0->unk1270C > 0) {
        temp_v1 = arg0 + (var_s5 * 4);
        temp_s2 = var_s5 * 0x958;
        sp18 = temp_s2 + arg0;
        var_s0 = arg0;
        var_v1 = var_s0 + 0x10000;
loop_11:
        if (var_v1->unk268C == arg2) {
            temp_v1->unk12734 = var_s4;
            temp_v1->unk1243C = (void *) var_v1->unk241C;
            temp_v1->unk1243C->unkC = 1;
            if ((arg2 == 0xD0) && (arg0->unk127AD == 0)) {
                temp_v1->unk1243C->unkC = 0;
            }
            if (arg0->unk7D8 == 3) {
                var_a1 = (arg0 + ((rand() & 1) * 4))->unk1240C;
            } else {
                var_a1 = arg0->unk1240C;
            }
            func_800F5E1C(arg0 + (temp_s2 + 0xC8F8), var_a1);
            var_s0->unkB768 = 2;
            var_s0->unk126EC = var_s5;
            func_800F56B0(arg0 + (temp_s2 + 0xC8F8), temp_v1->unk1243C, var_s5, arg2, arg0 + 0x15CC, var_s0->unk126CC);
            **(D_801C34F0 + (var_s0->unk126CC * 4)) = temp_v1->unk1243C + 0x1C;
            temp_a0 = sp18 + 0xC8F8;
            if (temp_a0->unk82A != 0) {
                temp_a0->unk824 = 0;
            }
            var_v1_2 = 0;
            if (arg0->unk7D8 == 0) {
                var_v1_2 = D_801C37AC == temp_a0->unk7D0;
            }
            if (var_v1_2 != 0) {
                func_80123058(arg0, 0, var_s4);
            }
            var_fp = 1;
        } else {
            var_s0 += 4;
            var_s4 += 1;
            var_v1 = var_s0 + 0x10000;
            if (var_s4 < arg0->unk1270C) {
                goto loop_11;
            }
        }
    }
    if (var_fp == 0) {
        arg0->unk12750 = (s32) (arg0->unk12750 - 1);
    }
}
