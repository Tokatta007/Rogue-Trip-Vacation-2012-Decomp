/* m2c reference for func_8015D064 @ 8015D064 (156 words). Generated; not compiled or validated. */
s32 func_8015D2D4(u8, u8, u16);                     /* extern */
s32 func_8015D2F4(s16, s16);                        /* extern */
s32 func_8015D38C(s16, s16);                        /* extern */
s32 func_8015D424(s16, s16);                        /* extern */
s32 func_8015D440(void *);                          /* extern */
extern s16 D_801BAD4C;
extern s16 D_801BAD4E;

void func_8015D064(void *arg0, void *arg1) {
    u16 sp10;
    u16 sp12;
    u16 sp14;
    u16 sp16;
    s32 var_t0;
    u16 temp_a0;
    u16 var_v0;
    u16 var_v0_2;

    arg0->unk4 = func_8015D2F4(arg1->unk0, arg1->unk2);
    arg0->unk8 = func_8015D38C((s16) ((arg1->unk4 + (u16) arg1->unk0) - 1), (s16) (((u16) arg1->unk2 + arg1->unk6) - 1));
    arg0->unkC = func_8015D424(arg1->unk8, arg1->unkA);
    arg0->unk10 = func_8015D2D4(arg1->unk17, arg1->unk16, arg1->unk14);
    arg0->unk14 = func_8015D440(arg1 + 0xC);
    arg0->unk18 = 0xE6000000;
    var_t0 = 7;
    if (arg1->unk18 != 0) {
        sp10 = (u16) arg1->unk0;
        sp12 = (u16) arg1->unk2;
        temp_a0 = arg1->unk4;
        sp14 = temp_a0;
        sp16 = arg1->unk6;
        var_v0 = 0;
        if ((s16) temp_a0 >= 0) {
            var_v0 = (u16) D_801BAD4C - 1;
            if ((D_801BAD4C - 1) >= (s16) temp_a0) {
                var_v0 = temp_a0;
            }
        }
        sp14 = var_v0;
        if ((s16) sp16 >= 0) {
            var_v0_2 = (u16) D_801BAD4E - 1;
            if ((D_801BAD4E - 1) >= (s16) sp16) {
                var_v0_2 = sp16;
            }
        } else {
            var_v0_2 = 0;
        }
        sp16 = var_v0_2;
        if ((sp10 & 0x3F) || (sp14 & 0x3F)) {
            var_t0 = 0xA;
            sp10 -= (u16) arg1->unk8;
            sp12 -= (u16) arg1->unkA;
            *((7 * 4) + arg0) = (arg1->unk1B << 0x10) | ((arg1->unk1A << 8) | 0x60000000) | arg1->unk19;
            *((8 * 4) + arg0) = (s32) sp10;
            *((9 * 4) + arg0) = (s32) sp14;
        } else {
            var_t0 = 0xA;
            *((7 * 4) + arg0) = (arg1->unk1B << 0x10) | ((arg1->unk1A << 8) | 0x02000000) | arg1->unk19;
            *((8 * 4) + arg0) = (s32) sp10;
            *((9 * 4) + arg0) = (s32) sp14;
        }
    }
    arg0->unk3 = (s8) (var_t0 - 1);
}
