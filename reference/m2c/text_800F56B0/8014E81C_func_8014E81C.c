/* m2c reference for func_8014E81C @ 8014E81C (118 words). Generated; not compiled or validated. */
? func_801253F4(s32, ?);                            /* extern */
? func_80130984(void *, void *);                    /* extern */
? func_80130A58(u32, void *);                       /* extern */
? func_8014D250(s32, void *);                       /* extern */
? func_8015A05C(s32, s32);                          /* extern */
static s32 D_801C34EC = 0;

void func_8014E81C(s32 arg0, void *arg1, ? arg2, void *arg3) {
    s32 var_v1;
    s32 var_v1_2;
    u16 var_a0;
    u16 var_v0;
    u32 temp_a0;
    void *temp_a1;

    var_a0 = arg1->unk46;
    temp_a1 = D_801C34EC + 0xB744;
    if ((s16) var_a0 < 0x12C) {
        var_a0 = 0x12C;
    }
    arg1->unk46 = var_a0;
    arg1->unk48 = (u16) (arg1->unk48 + ((s32) (arg1->unk48 << 0x10) >> 0x11));
    var_v1 = 0;
    if (temp_a1->unk21 != 0) {
        var_v1 = (u32) arg1->unk1C > 0U;
    }
    if (var_v1 != 0) {
        if (arg1->unk24 == 3) {
            func_80130A58(arg1->unk1C, temp_a1);
            if (arg3->unk7B8 == 1) {
                func_80130984(arg3, arg1);
                var_v0 = 0x708;
            } else {
                arg1->unk24 = 2;
                var_v0 = 0xF0;
            }
            arg1->unk46 = var_v0;
        }
        arg1->unk18 = (s32) arg1->unk1C->unk738;
        arg1->unk2C = (s32) arg1->unk1C->unk7C8;
    } else {
        var_v1_2 = 0;
        if (arg1->unk1C != 0) {
            var_v1_2 = arg1->unk1C->unk7B8 == 1;
        }
        if (var_v1_2 != 0) {
            temp_a0 = arg1->unk1C;
            if (temp_a0->unk890 == arg1) {
                func_80130A58(temp_a0, temp_a1);
            }
        }
        arg1->unk24 = 0;
        arg1->unk46 = 0xF0U;
        func_8014D250(arg0, arg1);
    }
    func_801253F4(arg1->unk14 + 0x14, arg2);
    func_8015A05C(arg1->unk14 + 0x14, arg1->unk14 + 0x28);
    arg1->unk1C = (u32) arg3;
    arg1->unk50 = (s16) arg3->unk7C0;
    arg1->unk52 = (s16) arg3->unk7C4;
    arg1->unk4C = 0;
}
