/* m2c reference for func_80100630 @ 80100630 (139 words). Generated; not compiled or validated. */
u8 func_800FAF70(void *);                           /* extern */
s32 func_800FB590(void *);                          /* extern */
? func_800FECB4(s32 *, s32, s16, void *);           /* extern */
? func_800FF9C8(void *);                            /* extern */
u8 func_80117578(void *);                           /* extern */
s32 func_80117AEC(void *);                          /* extern */
? func_8016408C(s32 *);                             /* extern */

void func_80100630(void *arg0) {
    s32 sp10;
    s32 sp14;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    u8 temp_v0;
    void *var_a0;
    void *var_a0_2;

    if (arg0->unk44 < arg0->unk14) {
        arg0->unk69 = 1;
    } else {
        arg0->unk69 = 0;
    }
    arg0->unk44 = (s32) arg0->unk14;
    func_800FECB4(arg0->unk40, arg0->unk38 + 0x1C, (s16) arg0->unk58, arg0 + 8);
    if (arg0->unk66 != 0) {
        if (arg0->unk0 == 0) {
            var_a0 = NULL;
            if (arg0 != NULL) {
                var_a0 = arg0 - 4;
            }
            arg0->unk66 = func_800FAF70(var_a0);
            return;
        }
        if (arg0->unk0 == 1) {
            arg0->unk66 = func_80117578(arg0);
            return;
        }
        arg0->unk66 = 0U;
        return;
    }
    if (arg0->unk0 == 0) {
        var_a0_2 = NULL;
        if (arg0 != NULL) {
            var_a0_2 = arg0 - 4;
        }
        var_v0 = func_800FB590(var_a0_2) & 0xFF;
    } else {
        var_v0 = 1;
        if (arg0->unk0 == 1) {
            var_v0 = func_80117AEC(arg0) & 0xFF;
        }
    }
    if (var_v0 == 0) {
        arg0->unk66 = 1U;
        func_800FF9C8(arg0);
        arg0->unk6F = 0;
        sp10 = (s16) arg0->unk1C - (s16) arg0->unk38->unk18;
        func_8016408C(&sp10);
        sp14 = (s16) arg0->unk1E - (s16) arg0->unk38->unk14;
        func_8016408C(&sp14);
        var_v0_2 = sp10;
        if (var_v0_2 < 0) {
            var_v0_2 = -var_v0_2;
        }
        if (var_v0_2 < 0x601) {
            var_v0_3 = sp14;
            if (var_v0_3 < 0) {
                var_v0_3 = -var_v0_3;
            }
            if (var_v0_3 >= 0x601) {
                goto block_24;
            }
            arg0->unk67 = 0;
        } else {
block_24:
            arg0->unk67 = 1;
            temp_v0 = (*arg0->unk40 + ((s32) (arg0->unk5A << 0x10) >> 0xB))->unk1C;
            if ((s8) temp_v0 == 1) {
                arg0->unk6F = (s8) temp_v0;
            }
        }
    }
}
