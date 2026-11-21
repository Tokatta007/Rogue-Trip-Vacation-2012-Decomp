/* m2c reference for func_8013F810 @ 8013F810 (328 words). Generated; not compiled or validated. */
? func_8013FD30(void *, s32, s32, ?);               /* extern */
s32 func_801594CC(s16);                             /* extern */
? func_8015A62C(s32, s16);                          /* extern */
u16 func_80176C1C(s16, s32, ?);                     /* extern */
u16 func_80176CBC(s16, s32, ?);                     /* extern */

void func_8013F810(void *arg0) {
    ? var_a2;
    s16 var_s1;
    s16 var_s2;
    s32 temp_lo;
    s32 temp_s1;
    s32 var_a1;
    s32 var_v1;
    s32 var_v1_2;

    if (arg0->unk91 != 0) {
        if (arg0->unk706 != 0) {
            arg0->unk706 = func_80176C1C((s16) arg0->unk706, 0, 3);
        }
        if (arg0->unk704 != 0) {
            arg0->unk704 = func_80176CBC((s16) arg0->unk704, 0, 3);
        }
        if (arg0->unk6F0 != 0) {
            arg0->unk6F0 = func_80176CBC((s16) arg0->unk6F0, 0, 3);
        }
        if (arg0->unk6F2 != 0) {
            arg0->unk6F2 = func_80176CBC((s16) arg0->unk6F2, 0, 3);
        }
    } else {
        var_v1 = arg0->unk21C;
        if (arg0->unkE0 < var_v1) {
            var_v1 = arg0->unkE0;
        } else if (var_v1 < -arg0->unkE0) {
            var_v1 = -arg0->unkE0;
        }
        arg0->unk706 = func_80176C1C((s16) arg0->unk706, (s32) (arg0->unk7A4 * var_v1 * arg0->unk108) / (s32) (arg0->unkE0 * arg0->unk25C), 5);
        temp_lo = arg0->unkF8 * arg0->unk7D4;
        var_a1 = temp_lo - ((s32) (temp_lo * arg0->unk7A4) / (s32) arg0->unk25C);
        if (arg0->unk150 < var_a1) {
            var_a1 = arg0->unk150;
        } else if (var_a1 < -arg0->unk150) {
            var_a1 = -arg0->unk150;
        }
        if (arg0->unk804 != 0) {
            arg0->unk704 = (u16) (arg0->unk704 - (arg0->unk150 - ((s32) ((arg0->unk150 - 0xB) * arg0->unk7A4) / (s32) arg0->unk25C)));
        } else {
            var_a2 = 5;
            if (arg0->unk7D != 0) {
                var_a2 = 9;
            }
            arg0->unk704 = func_80176CBC((s16) arg0->unk704, -var_a1, var_a2);
        }
        if (arg0->unk6CC != 0) {
            arg0->unk6FC = (u16) (arg0->unk6FC + arg0->unk702);
            if ((s16) arg0->unk6FC < 0x1000) {
                temp_s1 = (s32) arg0->unkD0 >> 3;
                func_8015A62C((s32) arg0->unk6B4 >> 4, (s16) arg0->unk176);
                if (temp_s1 < arg0->unk7A4) {
                    var_s2 = (s16) arg0->unk6E8;
                    var_s1 = (s16) arg0->unk6EA;
                } else {
                    var_s2 = (s16) ((s32) ((s16) arg0->unk6E8 * arg0->unk20C) / temp_s1);
                    var_s1 = (s16) ((s32) ((s16) arg0->unk6EA * arg0->unk20C) / temp_s1);
                }
                arg0->unk6F0 = (u16) ((s32) (func_801594CC((s16) arg0->unk6FC) * var_s2) >> 0xC);
                arg0->unk6F2 = (u16) ((s32) (func_801594CC((s16) arg0->unk6FC) * var_s1) >> 0xC);
                return;
            }
            arg0->unk6FC = (u16) (arg0->unk6FC - 0x1000);
            var_v1_2 = 0;
            if ((arg0->unk6F8 << 0x10) <= 0) {
                var_v1_2 = (rand() & 5) == 1;
            } else if ((arg0->unk6FA << 0x10) <= 0) {
                var_v1_2 = 1;
            }
            if (var_v1_2 == 0) {
                arg0->unk6FA = (u16) (arg0->unk6FA - 1);
                arg0->unk6E8 = (u16) ((s32) (arg0->unk6E8 << 0x10) >> 0x11);
                arg0->unk6EA = (u16) ((s32) (arg0->unk6EA << 0x10) >> 0x11);
                return;
            }
            goto block_35;
        }
        if (arg0->unk6C8 != 0) {
block_35:
            func_8013FD30(arg0, arg0->unk6C8, arg0->unk6D0, 0);
        }
    }
}
