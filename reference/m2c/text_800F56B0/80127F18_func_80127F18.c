/* m2c reference for func_80127F18 @ 80127F18 (46 words). Generated; not compiled or validated. */
extern ? D_8018444C;
static s32 D_801C32D4 = 0;

void func_80127F18(s32 arg0) {
    s32 var_a3;
    void *var_a1;
    void *var_a2;

    var_a3 = 0;
    if (D_801C32D4 > 0) {
        var_a1 = (arg0 * 0xC) + &D_8018444C;
        do {
            if (var_a1->unk9 != 0) {
                var_a2 = (var_a3 << 5) + &D_8018444C;
                if (arg0 == 0) {
                    var_a2 += 0xC;
                }
                if (var_a1->unkA != 0) {
                    var_a1->unk0->unk12 = (u8) var_a1->unkA;
                    var_a2->unk0->unk12 = 0;
                }
                if (var_a1->unkB != 0) {
                    var_a1->unk4->unk12 = (u8) var_a1->unkB;
                    var_a2->unk4->unk12 = 0;
                }
            }
            var_a3 += 1;
            var_a1 += 0x20;
        } while (var_a3 < D_801C32D4);
    }
}
