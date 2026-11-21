/* m2c reference for func_8010D9B0 @ 8010D9B0 (133 words). Generated; not compiled or validated. */
u8 func_8010F3CC(void *, void *);                   /* extern */
u8 func_8010F52C(void *, void *, void *, void *);   /* extern */
? func_80147764(void *, ?);                         /* extern */
? func_80147778(void *);                            /* extern */

void func_8010D9B0(void *arg0) {
    s32 temp_v1;
    s32 var_a0;

    if (arg0->unk537 != 0) {
        arg0->unk537 = func_8010F3CC(arg0 + 0x450, arg0 + 0x1F8);
    }
    if (arg0->unk504 != 0) {
        var_a0 = (s32) (arg0->unk504 << 0x10) >> 0x12;
        if (var_a0 >= 0x51) {
            var_a0 = 0x50;
        }
        arg0->unk1E4 = (s32) (arg0->unk1E4 + ((s32) (arg0->unk454 * var_a0) >> 0xC));
        arg0->unk1E8 = (s32) (arg0->unk1E8 + ((s32) (arg0->unk458 * var_a0) >> 0xC));
        temp_v1 = (s32) (arg0->unk504 << 0x10) >> 0x12;
        if (temp_v1 != 0) {
            arg0->unk504 = (u16) (arg0->unk504 - temp_v1);
        } else {
            arg0->unk504 = 0U;
        }
    }
    if (arg0->unkA4 != 0) {
        arg0->unk53E = 1U;
        if ((s16) arg0->unk508 < 0xB4) {
            arg0->unk536 = 0;
            arg0->unk541 = 1;
            func_80147764(arg0, 0xB4);
        } else {
            arg0->unkA4 = 0U;
            arg0->unk738->unkD = 1;
            arg0->unk541 = 0;
            arg0->unk536 = 0x80;
            func_80147778(arg0);
        }
    }
    if (arg0->unk53C != 0) {
        arg0->unk53C = func_8010F52C(arg0, arg0 + 0x534, arg0->unk738 + 8, arg0 + 0x53F);
    }
    if (arg0->unk53D != 0) {
        arg0->unk53D = func_8010F52C(arg0, arg0 + 0x535, arg0->unk738 + 9, arg0 + 0x540);
    }
    if (arg0->unk53E != 0) {
        arg0->unk53E = func_8010F52C(arg0, arg0 + 0x536, arg0->unk738 + 0xA, arg0 + 0x541);
    }
    if (arg0->unk80 != 0) {
        if ((s16) arg0->unk506 >= 0x10) {
            arg0->unk538 = 0U;
            arg0->unk537 = (u8) arg0->unk538;
            return;
        }
        arg0->unk214 = 0;
        arg0->unk21C = 0;
    }
}
