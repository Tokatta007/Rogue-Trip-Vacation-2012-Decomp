/* m2c reference for func_8016C2A0 @ 8016C2A0 (26 words). Generated; not compiled or validated. */
void func_8016C2A0(void *arg0) {
    s32 var_v0;
    s8 *var_v1;

    if (arg0->unk49 != 0) {
        var_v1 = arg0 + 0x5D;
        var_v0 = 5;
        arg0->unk49 = 0U;
        arg0->unk46 = 0;
        arg0->unkE6 = 0;
        arg0->unk14 = 0;
        arg0->unk18 = 0;
        arg0->unkE3 = 0;
        arg0->unkE4 = 0;
        arg0->unkE6 = 0;
        arg0->unkE9 = 0;
        arg0->unkEA = 0;
        arg0->unk0 = 0;
        arg0->unk4 = 0;
        arg0->unk8 = 0;
        do {
            *var_v1 = 0xFF;
            var_v0 -= 1;
            var_v1 += 1;
        } while (var_v0 >= 0);
    }
}
