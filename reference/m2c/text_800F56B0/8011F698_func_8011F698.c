/* m2c reference for func_8011F698 @ 8011F698 (230 words). Generated; not compiled or validated. */
? func_8010C098(void *);                            /* extern */
? func_8010D5FC(void *);                            /* extern */
? func_8010D7D0(void *);                            /* extern */
? func_80127FD0(void *);                            /* extern */
? func_80128B24(void *);                            /* extern */
? func_801490D4(void *);                            /* extern */
? func_8016D6BC(s32, ?);                            /* extern */
static void *D_801C34EC = NULL;

void func_8011F698(void *arg0) {
    s32 var_s1;
    s32 var_s1_2;
    s32 var_s1_3;
    s32 var_s1_4;
    s32 var_s1_5;
    s32 var_s1_6;
    s32 var_s1_7;
    s32 var_s1_8;
    s32 var_s2;
    s32 var_s2_2;
    s32 var_s2_3;
    s32 var_s2_4;
    s32 var_s2_5;
    s32 var_s2_6;
    s32 var_s2_7;
    s32 var_s2_8;
    void *temp_s0;
    void *temp_s0_2;
    void *temp_s0_3;
    void *temp_s0_4;
    void *var_s0;
    void *var_s0_2;
    void *var_s0_3;
    void *var_s0_4;
    void *var_v0;
    void *var_v0_2;
    void *var_v0_3;

    arg0->unk12356 = 0U;
    arg0->unk127E0 = 0;
    var_s1 = 0;
    if (arg0->unk12728 > 0) {
        var_s2 = 0xB788;
        do {
            temp_s0 = arg0 + var_s2;
            if (temp_s0->unk8C == 0) {
                func_8010C098(temp_s0);
                if (temp_s0->unk829 != 0) {
                    func_80127FD0(temp_s0);
                    var_s2 += 0x8B8;
                } else {
                    func_80128B24(temp_s0);
                    goto block_6;
                }
            } else {
block_6:
                var_s2 += 0x8B8;
            }
            var_s1 += 1;
        } while (var_s1 < arg0->unk12728);
    }
    var_s1_2 = 0;
    if (arg0->unk12750 > 0) {
        var_s2_2 = 0xC8F8;
        do {
            temp_s0_2 = arg0 + var_s2_2;
            if (temp_s0_2->unk8C == 0) {
                func_8010C098(temp_s0_2);
                if (temp_s0_2->unk829 != 0) {
                    func_80127FD0(temp_s0_2);
                    var_s2_2 += 0x958;
                } else {
                    func_80128B24(temp_s0_2);
                    goto block_14;
                }
            } else {
block_14:
                var_s2_2 += 0x958;
            }
            var_s1_2 += 1;
        } while (var_s1_2 < arg0->unk12750);
    }
    var_s1_3 = 0;
    if (arg0->unk12728 > 0) {
        var_s2_3 = 0xB788;
        var_s0 = arg0;
        var_v0 = var_s0 + 0xB788;
        do {
            if (var_v0->unk8C == 0) {
                func_8010D5FC(arg0 + var_s2_3);
            }
            var_s2_3 += 0x8B8;
            var_s0 += 0x8B8;
            var_s1_3 += 1;
            var_v0 = var_s0 + 0xB788;
        } while (var_s1_3 < arg0->unk12728);
    }
    var_s1_4 = 0;
    if (arg0->unk12750 > 0) {
        var_s2_4 = 0xC8F8;
        do {
            temp_s0_3 = arg0 + var_s2_4;
            if (temp_s0_3->unk8C == 0) {
                func_8010D5FC(temp_s0_3);
            }
            var_s2_4 += 0x958;
            var_s1_4 += 1;
        } while (var_s1_4 < arg0->unk12750);
    }
    var_s1_5 = 0;
    if (arg0->unk12728 > 0) {
        var_s2_5 = 0xB788;
        var_s0_2 = arg0;
        var_v0_2 = var_s0_2 + 0xB788;
        do {
            if (var_v0_2->unk8C == 0) {
                func_8010D7D0(arg0 + var_s2_5);
            }
            var_s2_5 += 0x8B8;
            var_s0_2 += 0x8B8;
            var_s1_5 += 1;
            var_v0_2 = var_s0_2 + 0xB788;
        } while (var_s1_5 < arg0->unk12728);
    }
    var_s1_6 = 0;
    if (arg0->unk12750 > 0) {
        var_s2_6 = 0xC8F8;
        do {
            temp_s0_4 = arg0 + var_s2_6;
            if (temp_s0_4->unk8C == 0) {
                func_8010D7D0(temp_s0_4);
            }
            var_s2_6 += 0x958;
            var_s1_6 += 1;
        } while (var_s1_6 < arg0->unk12750);
    }
    var_s1_7 = 0;
    if (arg0->unk12728 > 0) {
        var_s2_7 = 0xB788;
        var_s0_3 = arg0;
        var_v0_3 = var_s0_3 + 0xB788;
        do {
            if (var_v0_3->unk8C == 0) {
                func_801490D4(arg0 + var_s2_7);
            }
            var_s2_7 += 0x8B8;
            var_s0_3 += 0x8B8;
            var_s1_7 += 1;
            var_v0_3 = var_s0_3 + 0xB788;
        } while (var_s1_7 < arg0->unk12728);
    }
    var_s1_8 = 0;
    if (arg0->unk12750 > 0) {
        var_s2_8 = 0xC8F8;
        var_s0_4 = arg0 + 0xC8F8;
        do {
            if (var_s0_4->unk8C == 0) {
                func_801490D4(var_s0_4);
            }
            var_s2_8 += 0x958;
            var_s1_8 += 1;
            var_s0_4 = arg0 + var_s2_8;
        } while (var_s1_8 < arg0->unk12750);
    }
    if (arg0->unk12356 == 0) {
        arg0->unk122D0 = 0;
        func_8016D6BC(D_801C34EC->unk122CC, 0);
    }
}
