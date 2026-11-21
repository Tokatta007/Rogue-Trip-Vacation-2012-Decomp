/* m2c reference for func_8010ED2C @ 8010ED2C (424 words). Generated; not compiled or validated. */
? func_8010FDC4(void *, ? *, s32);                  /* extern */
s32 func_8010FF5C(? *, ? *);                        /* extern */
? func_80110FC8(void *, void *, s32, s32, s32, s32); /* extern */
? func_801253C8(? *, ? *);                          /* extern */
? func_8012EEE8(void *, ?, s32, ?);                 /* extern */
? func_8013FD30(void *, ?, ?, ?);                   /* extern */
? func_80147764(void *, ?);                         /* extern */
? func_8016408C(void *);                            /* extern */
? func_801640EC(void *);                            /* extern */

s32 func_8010ED2C(void *arg0, void *arg1) {
    ? sp18;
    ? sp24;
    s32 sp30;
    s32 sp34;
    void *sp38;
    void *sp3C;
    s32 sp40;
    s32 sp44;
    s32 sp58;
    s32 sp5C;
    u8 sp60;
    u8 sp62;
    ? sp68;
    ? sp74;
    s32 sp80;
    s32 sp84;
    void *sp88;
    void *sp8C;
    s32 sp90;
    s32 sp94;
    s32 spA8;
    s32 spAC;
    u8 spB0;
    u8 spB2;
    ? *var_a0;
    s16 var_v0_3;
    s16 var_v0_5;
    s32 temp_lo;
    s32 temp_v0;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_4;
    s32 var_v1;
    s32 var_v1_2;
    s32 var_v1_3;

    func_801253C8(&sp18, arg0 + 0x1FC);
    sp30 = arg0 + 0x220;
    sp34 = arg0 + 0x244;
    sp38 = arg0->unk738;
    sp3C = arg0->unk4FC;
    sp40 = arg0->unk23C;
    sp44 = arg0->unkD0;
    sp58 = (s32) (s16) arg0->unk160;
    sp60 = 0;
    sp5C = (s32) (s16) arg0->unk508;
    sp62 = arg0->unkA4;
    func_801253C8(&sp68, arg1 + 0x1FC);
    sp80 = arg1 + 0x220;
    sp84 = arg1 + 0x244;
    sp88 = arg1->unk738;
    sp8C = arg1->unk4FC;
    sp90 = arg1->unk23C;
    sp94 = arg1->unkD0;
    spA8 = (s32) (s16) arg1->unk160;
    spB0 = 0;
    spAC = (s32) (s16) arg1->unk508;
    spB2 = arg1->unkA4;
    temp_v0 = func_8010FF5C(&sp18, &sp68);
    if (temp_v0 != 0) {
        if (arg0->unk7A4 >= arg1->unk7A4) {
            var_v1 = arg0->unk7A4;
            var_v0 = var_v1 << 8;
        } else {
            var_v1 = arg1->unk7A4;
            var_v0 = var_v1 << 8;
        }
        temp_lo = (s32) (var_v0 - var_v1) / (s32) arg0->unk25C;
        if ((arg0->unk7B8 == 1) && ((s16) arg0->unk508 >= 0x3D)) {
            func_8012EEE8(arg0, 0, temp_lo & 0xFF, 0x3C);
        }
        var_a0 = arg0 + 0x1FC;
        if ((arg1->unk7B8 == 1) && ((s16) arg1->unk508 >= 0x3D)) {
            func_8012EEE8(arg1, 0, temp_lo & 0xFF, 0x3C);
            var_a0 = arg0 + 0x1FC;
        }
        func_801253C8(var_a0, &sp18);
        arg0->unk20C = sp4C;
        var_v0_2 = arg0->unk20C;
        if (var_v0_2 < 0) {
            var_v0_2 = -var_v0_2;
        }
        arg0->unk7A4 = var_v0_2;
        arg0->unk86 = 1;
        if ((sp62 != 0) && (arg0->unkA4 == 0)) {
            func_8013FD30(arg1, 5, 2, 3);
            func_80147764(arg0, 0xB4);
            arg0->unk738->unkD = 0;
        }
        if (arg0->unk8B == 0) {
            arg0->unkA4 = sp62;
        }
        if (sp50 != 0) {
            arg0->unk450 = (s32) ((s16) arg0->unk738->unk18 + sp50);
            func_8016408C(arg0 + 0x450);
            arg0->unk537 = 1;
            arg0->unk50C = (u16) ((s32) (arg1->unk7A4 * 0x78) / (s32) arg1->unkD0);
            arg0->unk50C = (u16) (arg0->unk50C - 0x1E);
            if (arg0->unk50C & 0x8000) {
                arg0->unk50C = 0U;
            }
        }
        var_v1_2 = 0;
        if ((sp60 != 0) && (sp62 == 0) && (arg0->unk87 == 0)) {
            var_v1_2 = arg0->unk8B == 0;
        }
        if (var_v1_2 != 0) {
            arg0->unk9A = 1;
            arg0->unk18E = sp54;
            if (sp61 != 0) {
                arg0->unk218 = 1;
                var_v0_3 = arg0->unk18E - 0x400;
            } else {
                arg0->unk218 = -1;
                var_v0_3 = arg0->unk18E + 0x400;
            }
            arg0->unk190 = var_v0_3;
            func_801640EC(arg0 + 0x190);
            arg0->unk18C = 0;
            arg0->unk194 = 0;
            arg0->unk98 = 0;
        }
        func_801253C8(arg1 + 0x1FC, &sp68);
        arg1->unk20C = sp9C;
        var_v0_4 = arg1->unk20C;
        if (var_v0_4 < 0) {
            var_v0_4 = -var_v0_4;
        }
        arg1->unk7A4 = var_v0_4;
        arg1->unk86 = 1;
        arg1->unk85 = 1;
        if ((spB2 != 0) && (arg1->unkA4 == 0)) {
            func_8013FD30(arg0, 5, 2, 3);
            func_80147764(arg1, 0xB4);
            arg1->unk738->unkD = 0;
        }
        if (arg1->unk8B == 0) {
            arg1->unkA4 = spB2;
        }
        if (spA0 != 0) {
            arg1->unk450 = (s32) ((s16) arg1->unk738->unk18 + spA0);
            func_8016408C(arg1 + 0x450);
            arg1->unk537 = 1;
            arg1->unk50C = (u16) ((s32) (arg0->unk7A4 * 0x78) / (s32) arg0->unkD0);
            arg1->unk50C = (u16) (arg1->unk50C - 0x1E);
            if (arg1->unk50C & 0x8000) {
                arg1->unk50C = 0U;
            }
        }
        var_v1_3 = 0;
        if ((spB0 != 0) && (spB2 == 0) && (arg1->unk87 == 0)) {
            var_v1_3 = arg1->unk8B == 0;
        }
        if (var_v1_3 != 0) {
            arg1->unk9A = 1;
            arg1->unk18E = spA4;
            if (spB1 != 0) {
                arg1->unk218 = -1;
                var_v0_5 = arg1->unk18E - 0x400;
            } else {
                arg1->unk218 = 1;
                var_v0_5 = arg1->unk18E + 0x400;
            }
            arg1->unk190 = var_v0_5;
            func_801640EC(arg1 + 0x190);
            arg1->unk18C = 0;
            arg1->unk194 = 0;
            arg1->unk98 = 0;
        }
        func_80110FC8(arg0 + 0x2C4, arg1 + 0x2C4, arg0->unk738->unk48, arg1->unk738->unk48, arg0->unk7C0, arg1->unk7C0);
    }
    func_8010FDC4(arg0, &sp24, sp48);
    func_8010FDC4(arg1, &sp74, sp98);
    arg0->unk506 = 0;
    arg0->unk508 = 0U;
    arg0->unk50A = (s16) arg1->unk7C0;
    arg0->unk4FC = (void *) arg1->unk738;
    arg1->unk508 = 0U;
    arg1->unk50A = (s16) arg0->unk7C0;
    arg1->unk4FC = (void *) arg0->unk738;
    arg1->unk506 = 0;
    return temp_v0;
}
