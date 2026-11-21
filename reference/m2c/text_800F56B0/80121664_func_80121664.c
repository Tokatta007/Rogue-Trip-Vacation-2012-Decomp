/* m2c reference for func_80121664 @ 80121664 (35 words). Generated; not compiled or validated. */
void func_80121664(void *arg0, s32 arg1, s8 arg2) {
    s32 var_a3;
    void *temp_a1;
    void *temp_t1;
    void *var_a0;
    void *var_v0;

    var_a0 = arg0;
    if (var_a0->unk7D8 != 0) {
        var_a3 = 0;
        if (var_a0->unk12750 > 0) {
            temp_t1 = (arg1 * 0x8B8) + var_a0 + 0xB788;
            temp_a1 = var_a0 + 0x10000;
            var_v0 = var_a0 + 0xC8FC;
            do {
                if (var_v0->unk3C == temp_t1->unk738) {
                    var_a0->unkD238 = arg2;
                }
                var_a0 += 0x958;
                var_a3 += 1;
                var_v0 = var_a0 + 0xC8FC;
            } while (var_a3 < temp_a1->unk2750);
        }
    }
}
