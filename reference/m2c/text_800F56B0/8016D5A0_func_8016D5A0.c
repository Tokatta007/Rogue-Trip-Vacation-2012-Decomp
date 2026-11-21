/* m2c reference for func_8016D5A0 @ 8016D5A0 (71 words). Generated; not compiled or validated. */
void func_8016D5A0(void *arg0, s32 arg1) {
    u16 var_v0;

    if (arg1 == 0) {
        if ((arg0->unk1A - arg0->unk18) >= 2) {
            var_v0 = arg0->unk18 + (rand() % (s32) (arg0->unk1A - (arg0->unk18 - 1)));
        } else {
            var_v0 = arg0->unk18;
        }
    } else if ((arg0->unk16 - arg0->unk14) >= 2) {
        var_v0 = arg0->unk14 + (rand() % (s32) (arg0->unk16 - (arg0->unk14 - 1)));
    } else {
        var_v0 = arg0->unk14;
    }
    arg0->unk6 = var_v0;
}
