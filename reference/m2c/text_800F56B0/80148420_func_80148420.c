/* m2c reference for func_80148420 @ 80148420 (185 words). Generated; not compiled or validated. */
s32 func_801594CC(s16);                             /* extern */
u16 func_80176C1C(s16, ?, ?);                       /* extern */
u16 func_80176CBC(s16, s16, ?);                     /* extern */
s32 func_80178A1C();                                /* extern */

void func_80148420(void *arg0, s32 arg1) {
    s32 sp10;
    s32 sp14;
    s32 sp18;
    ? var_a1;
    s16 var_v0_3;
    s16 var_v0_4;
    s32 temp_lo;
    s32 var_v0_5;
    s32 var_v1;
    u16 var_v0;
    u16 var_v0_2;

    var_v1 = 0;
    if (arg0->unk96 != 0) {
        if (arg1 == 0) {
            arg0->unk712 = 0U;
            arg0->unk70C = 0U;
            arg0->unk710 = (u16) (arg0->unk18A - ((s32) (((s32) (arg0->unk18A << 0x10) >> 0x11) * arg0->unk20C) / (s32) arg0->unkD0));
            var_v0 = 0x20;
            if (!(rand() & 1)) {
                var_v0 = -0x20U;
            }
            arg0->unk70A = var_v0;
        }
        if (arg0->unk80 != 0) {
            var_a1 = -0x400;
            if (arg0->unk21C > 0) {
                var_a1 = 0x400;
            }
            arg0->unk70C = func_80176C1C((s16) arg0->unk70C, var_a1, 5);
            if ((arg0->unk710 << 0x10) < (arg0->unk18A << 0x10)) {
                arg0->unk710 = func_80176CBC((s16) arg0->unk710, (s16) arg0->unk18A, 1);
            }
        } else {
            var_v0_2 = 0x20;
            if ((arg0->unk21C > 0) || (var_v0_2 = -0x20U, (arg0->unk21C < 0))) {
                arg0->unk70A = var_v0_2;
            }
            arg0->unk70C = (u16) (arg0->unk70C + ((s16) arg0->unk70A * arg0->unk7D4));
            var_v0_3 = (s16) arg0->unk70C;
            if (var_v0_3 < 0) {
                var_v0_3 = -var_v0_3;
            }
            if (var_v0_3 >= 0x401) {
                arg0->unk70C = (u16) (arg0->unk70C + ((s16) arg0->unk70A * arg0->unk7D4));
            }
        }
        var_v0_4 = (s16) arg0->unk70C;
        if (var_v0_4 < 0) {
            var_v0_4 = -var_v0_4;
        }
        if (var_v0_4 >= 0x1000) {
            arg0->unk710 = (u16) (arg0->unk710 - ((s32) (arg0->unk710 << 0x10) >> 0x12));
            arg0->unk70C = 0U;
        }
        var_v1 = 1;
        var_v0_5 = (s32) (func_801594CC((s16) arg0->unk70C) * (s16) arg0->unk710) >> 0xC;
        goto block_24;
    }
    if (arg0->unk70E != 0) {
        var_v0_5 = func_80176C1C((s16) arg0->unk70E, 0, 5);
        var_v1 = 1;
block_24:
        arg0->unk70E = (u16) var_v0_5;
    }
    if (var_v1 != 0) {
        temp_lo = -func_801594CC((s16) arg0->unk70E) * (s16) arg0->unk166;
        sp14 = 0;
        sp18 = 0;
        sp10 = temp_lo >> 0xC;
        mathMulTransVec(arg0->unk738 + 0x28, (VECTOR *) &sp10, arg0 + 0x6D4);
        arg0->unk712 = (u16) (arg0->unk712 + func_80178A1C());
    }
}
