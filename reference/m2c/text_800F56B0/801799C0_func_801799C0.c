/* m2c reference for func_801799C0 @ 801799C0 (106 words). Generated; not compiled or validated. */
s32 func_80178A2C();                                /* extern */

void func_801799C0(void *arg0, u8 arg1) {
    s32 temp_v0;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v1;
    s32 var_v1_2;

    var_v1 = 0;
    if (arg0->unk0 != NULL) {
        var_v1 = (u32) (arg0->unk0->unk12 ^ arg1) > 0U;
    }
    if (var_v1 != 0) {
        arg0->unk1EC = 0;
        if ((arg1 != 0xFF) && (arg0->unk1FC == 0) && (arg0->unk0->unk12 != 0xFF)) {
            temp_v0 = func_80178A2C();
            arg0->unk1FC = (s32) (temp_v0 / (s32) (((s32) arg0->unk1F4 >> 3) + 1));
            var_v0 = arg0->unk1FC;
            if (var_v0 < 0) {
                var_v0 = 0;
            }
            arg0->unk1FC = var_v0;
            var_v1_2 = temp_v0;
            if (arg0->unk1FC < var_v1_2) {
                var_v1_2 = arg0->unk1FC;
            }
            arg0->unk1FC = var_v1_2;
            var_v0_2 = arg0->unk1FC;
        } else {
            arg0->unk0->unk11 = 0;
            arg0->unk1F8 = 0;
            arg0->unk1FC = 0;
            var_v0_2 = func_80178A2C() / (s32) (((s32) arg0->unk1F4 >> 3) + 1);
        }
        arg0->unk200 = var_v0_2;
        arg0->unk204 = (s32) (arg0->unk0->unk12 & 0xFF);
        arg0->unk0->unk12 = arg1;
    }
}
