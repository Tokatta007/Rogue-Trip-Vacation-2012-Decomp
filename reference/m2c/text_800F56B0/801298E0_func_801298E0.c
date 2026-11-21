/* m2c reference for func_801298E0 @ 801298E0 (115 words). Generated; not compiled or validated. */
? func_8016EE30(?, ?, ?, ?);                        /* extern */
? func_8016EFC0(?, ?, ?, ?, s32);                   /* extern */
? func_8016F018(?, ?, ?, ?);                        /* extern */
s32 func_8016F210(?);                               /* extern */

void func_801298E0(s32 arg0, void *arg1, s32 arg2) {
    s8 var_v1;
    s8 var_v1_2;
    void *temp_v0;
    void *var_v0;
    void *var_v0_2;

    temp_v0 = arg0 + (arg2 * 0x1C);
    if (temp_v0->unk12398 == NULL) {
        arg1->unkA3 = 1;
        temp_v0->unk12398 = arg1;
        temp_v0->unk12396 = 0x14;
        arg1->unk738->unk4 = func_8016F210(3);
        func_8016EE30(3, 0, 0, 0x5A);
        func_8016EFC0(3, 0, 0x19, 0x19, 0xFF);
        func_8016EFC0(3, 1, 0xFF, 0x19, 0x19);
        func_8016EFC0(3, 2, 0x19, 0xFF, 0x19);
        func_8016F018(3, 0x80, 0xA0, 0xFF);
        if (rand() & 1) {
            temp_v0->unk12391 = 1;
        } else {
            temp_v0->unk12391 = -1;
        }
        if (rand() & 1) {
            var_v0 = arg0 + (arg2 * 0x1C) + 0x10000;
            var_v1 = 1;
        } else {
            var_v0 = arg0 + (arg2 * 0x1C) + 0x10000;
            var_v1 = -1;
        }
        var_v0->unk2392 = var_v1;
        if (rand() & 1) {
            var_v0_2 = arg0 + (arg2 * 0x1C) + 0x10000;
            var_v1_2 = 1;
        } else {
            var_v0_2 = arg0 + (arg2 * 0x1C) + 0x10000;
            var_v1_2 = -1;
        }
        var_v0_2->unk2393 = var_v1_2;
    }
}
