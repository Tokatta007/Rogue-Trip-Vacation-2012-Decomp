/* m2c reference for func_80120EB4 @ 80120EB4 (45 words). Generated; not compiled or validated. */
s32 func_80120EB4(void *arg0, void *arg1) {
    s32 var_a2;
    s32 var_v0;

    var_a2 = arg0->unk1267C;
    if (arg0->unk12688 == 9) {
        if (arg1->unk4 < 0) {
            var_v0 = arg1->unk4;
            if (var_v0 < 0) {
                var_v0 = -var_v0;
            }
            var_a2 = (var_v0 / 4) + 0x230;
        } else if (arg1->unk4 >= 0x2F81) {
            var_a2 = 0x970;
        } else {
            var_a2 = ((arg1->unk4 * 0x740) / 12160) + 0x230;
        }
    }
    return var_a2;
}
