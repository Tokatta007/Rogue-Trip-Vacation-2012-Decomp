/* m2c reference for func_80117F80 @ 80117F80 (125 words). Generated; not compiled or validated. */
? func_8016408C(s32 *, s32);                        /* extern */
s16 func_80178A1C(s32);                             /* extern */

void func_80117F80(void *arg0, s32 arg2) {
    s32 sp10;
    s32 temp_a0;
    s32 temp_v0;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_a2;
    s32 var_v0;
    s32 var_v1;

    var_a2 = arg2;
    if (arg0->unk18 >= 0x321) {
        var_v0 = arg0->unk27C;
    } else {
        temp_v1 = arg0->unk27C;
        temp_v0 = arg0->unk14;
        var_a2 = MULT_HI((temp_v1 * temp_v0), 0x51EB851F);
        var_v0 = (temp_v1 * temp_v0) / 800;
    }
    arg0->unk284 = var_v0;
    sp10 = (s16) arg0->unk20 - (s16) arg0->unk38->unk18;
    func_8016408C(&sp10, var_a2);
    var_v1 = sp10;
    if (sp10 < 0) {
        var_v1 = -var_v1;
    }
    sp10 = var_v1;
    if (var_v1 >= 0x556) {
        arg0->unk284 = (s32) ((s32) arg0->unk284 >> 2);
    } else if (var_v1 >= 0x156) {
        arg0->unk284 = (s32) (arg0->unk284 - ((((s32) arg0->unk284 >> 2) * var_v1) / 1365));
    }
    if (arg0->unk284 < 9) {
        arg0->unk284 = 9;
    }
    arg0->unk2BC = (s32) (arg0->unk284 * 0x10);
    temp_a0 = arg0->unk284;
    temp_v1_2 = func_80178A1C() * 0xC3;
    arg0->unk288 = (s32) (((temp_a0 * temp_v1_2) / 1000) << 6);
    arg0->unk280 = (s32) (((arg0->unk27C * (func_80178A1C((s32) (temp_a0 * temp_v1_2) >> 0x1F) * 0xC3)) / 1000) << 6);
}
