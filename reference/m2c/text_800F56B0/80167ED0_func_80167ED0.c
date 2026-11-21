/* m2c reference for func_80167ED0 @ 80167ED0 (24 words). Generated; not compiled or validated. */
s32 func_80167DA0();                                /* extern */

s32 func_80167ED0(void *arg1) {
    s32 temp_v0;
    s32 var_v1;
    void *var_s0;

    var_s0 = arg1;
    temp_v0 = func_80167DA0();
    var_v1 = 0;
    if (temp_v0 > 0) {
        do {
            var_s0->unk2 = (u8) (var_s0->unk2 + 1);
            var_v1 += 1;
            var_s0->unk3 = (u8) (var_s0->unk3 + 1);
            var_s0 += 0xC;
        } while (var_v1 < temp_v0);
    }
    return temp_v0;
}
