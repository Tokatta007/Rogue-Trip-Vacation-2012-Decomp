/* m2c reference for func_800FD138 @ 800FD138 (80 words). Generated; not compiled or validated. */
? func_80147A6C(void *, ?);                         /* extern */
? func_8016408C(s32 *);                             /* extern */

void func_800FD138(void *arg0) {
    s32 sp10;
    ? var_a1;
    s32 var_v0;
    s32 var_v1;

    if (arg0->unk85 == 0) {
        sp10 = arg0->unk1F8 - arg0->unk234;
        func_8016408C(&sp10);
        var_v0 = sp10;
        if (var_v0 < 0) {
            var_v0 = -var_v0;
        }
        arg0->unk874 = (s32) (arg0->unk874 + var_v0);
    } else if ((s8) arg0->unk533 >= 6) {
        func_80147A6C(arg0, -0x320);
        arg0->unk6E = 1;
        arg0->unk874 = 0;
        arg0->unk533 = 0U;
    }
    var_v1 = 0;
    if (arg0->unk874 >= 0x1001) {
        var_v1 = arg0->unk946 == 0;
    }
    if (var_v1 != 0) {
        arg0->unk77C = 0x1A4;
        func_80147A6C(arg0, 0x320);
        arg0->unk6E = 1;
        arg0->unk874 = 0;
    }
    arg0->unk77C = (s32) (arg0->unk77C - arg0->unk7D4);
    if (arg0->unk77C < 0) {
        if (arg0->unk8D != 0) {
            var_a1 = 0x320;
        } else {
            var_a1 = 0x960;
        }
        func_80147A6C(arg0, var_a1);
        arg0->unk68 = 1;
        arg0->unk77C = 0x1A4;
    }
}
