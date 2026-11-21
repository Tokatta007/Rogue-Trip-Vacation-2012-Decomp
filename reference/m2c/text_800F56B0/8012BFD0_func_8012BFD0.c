/* m2c reference for func_8012BFD0 @ 8012BFD0 (123 words). Generated; not compiled or validated. */
s32 func_80126E2C(void *, s32);                     /* extern */
? func_8012AF9C(void *, ?, ?);                      /* extern */
? func_8012BCB0(?);                                 /* extern */
? func_8012C3BC(void *, s32);                       /* extern */
static void *D_801C34EC = NULL;

void func_8012BFD0(void *arg0) {
    ? var_a2;
    s32 temp_s0;
    s32 var_v1;
    s32 var_v1_2;
    s32 var_v1_3;
    void *var_v0;

    func_8012BCB0(0);
    var_v1 = 0;
    var_v0 = arg0;
    do {
        var_v0->unk4C = 0;
        var_v1 += 1;
        var_v0 = arg0 + var_v1;
    } while (var_v1 < 9);
    arg0->unk40 = 0;
    arg0->unk10 = 0;
    if (D_801C34EC->unk7D8 == 0) {
        var_a2 = 6;
    } else {
        var_a2 = 2;
    }
    func_8012AF9C(arg0, 0, var_a2);
    if (arg0->unk0->unk7B8 == 1) {
        if (D_801C34EC->unk12728 >= 2) {
            func_8012AF9C(arg0, 1, 2);
            func_8012AF9C(arg0, 3, 4);
            func_8012AF9C(arg0, 6, 2);
            var_v1_2 = 0;
            if (D_801C34EC->unk127E5 == 0) {
                var_v1_2 = func_80126E2C(D_801C34EC, D_801C34EC->unk12688) == 0;
            }
            if (var_v1_2 != 0) {
                arg0->unk0->unk7DC = 0xBB8;
            }
        } else {
            func_8012AF9C(arg0, 1, 2);
            func_8012AF9C(arg0, 3, 4);
            func_8012AF9C(arg0, 6, 2);
            var_v1_3 = 0;
            if (D_801C34EC->unk127E5 == 0) {
                var_v1_3 = D_801C34EC->unk7D8 == 2;
            }
            if (var_v1_3 != 0) {
                arg0->unk0->unk7DC = 0x2710;
            }
        }
    } else {
        temp_s0 = D_801C34EC->unk7D4 + 1;
        func_8012C3BC(arg0, temp_s0);
        func_8012C3BC(arg0, temp_s0);
        func_8012C3BC(arg0, temp_s0);
    }
}
