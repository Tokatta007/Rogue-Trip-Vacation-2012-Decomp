/* m2c reference for func_80127108 @ 80127108 (16 words). Generated; not compiled or validated. */
void func_80127108(void *arg0, s16 arg1, s16 arg2) {
    s32 var_a0;
    void *var_v1;

    var_v1 = arg0->unkC;
    var_a0 = arg0->unk12 & 0xFF;
    if (var_a0 != 0) {
        do {
            var_v1->unkE = arg2;
            var_v1->unk12 = arg1;
            var_a0 -= 1;
            var_v1 += ((u8) var_v1->unk1 >> 4) * 4;
        } while (var_a0 != 0);
    }
}
