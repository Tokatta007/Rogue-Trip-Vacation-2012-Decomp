/* m2c reference for func_80147348 @ 80147348 (222 words). Generated; not compiled or validated. */
s32 func_80176CBC(s32, s32, ?);                     /* extern */
s32 func_80178A70();                                /* extern */

void func_80147348(void *arg0) {
    s32 var_a0;
    s32 var_a1;
    s32 var_a1_2;

    if (func_80178A70() & 1) {
        if (arg0->unkAA != 0) {
            var_a0 = arg0->unk804 != 0;
            if ((arg0->unk91 != 0) && ((s16) arg0->unk6C4 >= 0x1F)) {
                var_a0 = 1;
            }
            if (arg0->unk96 != 0) {
                var_a0 = 1;
            }
            if (var_a0 != 0) {
                if (arg0->unk804 != 0) {
                    if (arg0->unk7FC == 4) {
                        var_a1 = arg0->unk7F8;
                        arg0->unk804 = 0;
                    } else if (arg0->unk804 == 1) {
                        var_a1 = arg0->unk7F8 + 0x100;
                        arg0->unk804 = (s32) (arg0->unk804 + 1);
                    } else {
                        arg0->unk804 = 0;
                        var_a1 = arg0->unk7F8 - 0x100;
                    }
                } else {
                    var_a1 = func_80176CBC(arg0->unk7F8, arg0->unk120, 9);
                }
            } else {
                switch (arg0->unk7FC) {             /* irregular */
                case 0:
                    var_a1 = arg0->unk124;
                    break;
                case 1:
                    var_a1 = arg0->unk124 + ((s32) (arg0->unk7A4 * arg0->unk128) / (s32) arg0->unk114);
                    break;
                case 2:
                    var_a1 = arg0->unk12C + ((s32) ((arg0->unk7A4 - arg0->unk114) * arg0->unk130) / (s32) (arg0->unk118 - arg0->unk114));
                    break;
                case 3:
                    var_a1 = arg0->unk134 + ((s32) ((arg0->unk7A4 - arg0->unk118) * arg0->unk138) / (s32) (arg0->unk11C - arg0->unk118));
                    break;
                default:
                    var_a1 = arg0->unk13C + (rand() & 0x7F);
                    break;
                }
            }
            arg0->unk7F8 = var_a1;
        } else {
            arg0->unk804 = 0;
            if (arg0->unkAB != 0) {
                var_a1_2 = arg0->unk140 + ((s32) (arg0->unk7A4 * arg0->unk144) / (s32) arg0->unkCC);
            } else {
                var_a1_2 = arg0->unk148 + ((s32) (arg0->unk7A4 * arg0->unk14C) / (s32) (arg0->unk25C * 2));
            }
            arg0->unk7F8 = func_80176CBC(arg0->unk7F8, var_a1_2, 5);
        }
        arg0->unk800 = func_80176CBC(arg0->unk800, 0x19, 5);
    }
}
