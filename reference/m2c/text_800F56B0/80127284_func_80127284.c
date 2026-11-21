/* m2c reference for func_80127284 @ 80127284 (48 words). Generated; not compiled or validated. */
s32 func_80127230(s16, s16);                        /* extern */
extern ? D_8018444C;

void func_80127284(s32 arg0, s16 arg1, s32 arg2) {
    s16 var_s0;
    s32 temp_s0;
    s32 var_s1;
    void *temp_v0;
    void *temp_v0_2;

    if (arg0 == 0x212) {
        var_s0 = 0xF;
        var_s1 = 2;
        do {
            temp_v0 = (func_80127230(arg1, var_s0) << 5) + &D_8018444C;
            temp_v0->unk1C = var_s0;
            var_s0 += 2;
            var_s1 -= 1;
            temp_v0->unk1E = arg1;
            temp_v0->unk18 = arg2;
        } while (var_s1 != 0);
        return;
    }
    temp_s0 = arg0 >> 4;
    temp_v0_2 = (func_80127230(arg1, (s16) temp_s0) << 5) + &D_8018444C;
    temp_v0_2->unk1C = (s16) temp_s0;
    temp_v0_2->unk1E = arg1;
    temp_v0_2->unk18 = arg2;
}
