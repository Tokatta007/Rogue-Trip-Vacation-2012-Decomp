/* m2c reference for func_80127DC4 @ 80127DC4 (85 words). Generated; not compiled or validated. */
? func_80127108(void *, u16, u16);                  /* extern */
s32 func_80127230(?, s32);                          /* extern */
? func_801274CC(void *, s16 *);                     /* extern */
extern ? D_8018403C;
extern ? D_8018444C;

void func_80127DC4(s32 arg0, ? arg1, void *arg2) {
    s16 sp10;
    s16 sp12;
    s16 sp14;
    s16 sp16;
    s16 sp18;
    s16 sp1A;
    s16 sp1C;
    s16 sp1E;
    s16 sp20;
    s32 temp_s0;
    s32 temp_s2;
    s32 temp_v1;
    s32 var_v1;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;

    sp20 = 0x1000;
    sp18 = 0x1000;
    sp10 = 0x1000;
    sp1E = 0;
    sp1C = 0;
    sp1A = 0;
    sp16 = 0;
    sp14 = 0;
    sp12 = 0;
    temp_s0 = arg2->unk2 & 0xFF;
    temp_s2 = arg0 & 1;
    if (temp_s0 < 2) {
        if (arg0 >= 0x212) {
            var_v1 = 0x11;
            if (arg0 < 0x215) {
                var_v1 = 0xF;
            }
        } else {
            var_v1 = arg0 >> 4;
        }
        temp_v1 = func_80127230(arg1, var_v1);
        if (temp_s2 != 0) {
            temp_v0 = (temp_s0 * 0xC) + (temp_v1 << 5) + &D_8018444C;
            temp_v0->unk4 = arg2;
            temp_v0->unkB = (u8) arg2->unk12;
            return;
        }
        temp_v0_2 = (temp_s0 * 0xC) + (temp_v1 << 5) + &D_8018444C;
        temp_v0_2->unk0 = arg2;
        temp_v0_2->unkA = (u8) arg2->unk12;
        return;
    }
    temp_v0_3 = (temp_s2 * 8) + &D_8018403C;
    func_80127108(arg2, temp_v0_3->unk2, temp_v0_3->unk4);
    func_801274CC(arg2, &sp10);
    arg2->unk0 = (u16) (arg2->unk0 & 0xF);
    arg2->unk2 = (u8) ((u16) arg2->unk0 >> 4);
}
