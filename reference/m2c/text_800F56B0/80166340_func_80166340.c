/* m2c reference for func_80166340 @ 80166340 (35 words). Generated; not compiled or validated. */
static s32 D_801C3624 = 0;

void func_80166340(void *arg0) {
    s32 temp_v0;
    s32 var_a2;
    void *var_a1;

    if (D_801C3624 < 0) {
        D_801C3624 = 0;
    }
    var_a1 = arg0->unkC;
    var_a2 = 0;
    if (arg0->unk12 != 0) {
        do {
            var_a1->unk3 = (u8) ((var_a1->unk3 & 0x8F) | ((D_801C3624 & 7) * 0x10));
            temp_v0 = D_801C3624 + 1;
            D_801C3624 = temp_v0;
            if (temp_v0 >= 8) {
                D_801C3624 = 0;
            }
            var_a2 += 1;
            var_a1 += ((u8) var_a1->unk1 >> 4) * 4;
        } while (var_a2 < (s32) arg0->unk12);
    }
}
