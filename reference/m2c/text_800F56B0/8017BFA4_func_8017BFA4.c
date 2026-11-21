/* m2c reference for func_8017BFA4 @ 8017BFA4 (135 words). Generated; not compiled or validated. */
extern s32 D_801F3AA4;
extern ? D_801F3AA8;

void func_8017BFA4(s32 arg0, s16 arg1) {
    s16 temp_a0;
    s32 *temp_a2;
    s32 *temp_t1;
    s32 temp_t0;
    s32 temp_v0;
    s32 temp_v1_4;
    s32 var_v0_2;
    u32 temp_a0_2;
    u32 temp_lo;
    u32 temp_t0_2;
    u32 temp_v0_2;
    u32 temp_v0_3;
    u32 temp_v1_2;
    u32 temp_v1_3;
    u32 var_v0;
    void *temp_a1;
    void *temp_a3;
    void *temp_v1;
    void *var_v1;

    temp_t1 = ((s32) (arg0 << 0x10) >> 0xE) + &D_801F3AA8;
    temp_t0 = arg1 * 0xB0;
    temp_a3 = *temp_t1 + temp_t0;
    temp_v0 = temp_a3->unkA8 - 1;
    temp_a3->unkA8 = temp_v0;
    if (temp_v0 < 0) {
        temp_v1 = temp_t0 + *temp_t1;
        temp_v1->unk98 = (s32) (temp_v1->unk98 & ~0x40);
        var_v1 = temp_t0 + *temp_t1;
        goto block_18;
    }
    temp_a0 = temp_a3->unk4E;
    if (temp_a0 > 0) {
        if ((temp_v0 % temp_a0) == 0) {
            temp_v1_2 = temp_a3->unk94;
            temp_a0_2 = temp_a3->unkAC;
            var_v0 = temp_v1_2 - 1;
            if ((temp_a0_2 < temp_v1_2) || (var_v0 = temp_v1_2 + 1, ((temp_v1_2 < temp_a0_2) != 0))) {
                temp_a3->unk94 = var_v0;
            }
            goto block_13;
        }
    } else {
        temp_v1_3 = temp_a3->unk94;
        temp_t0_2 = temp_a3->unkAC;
        temp_v0_2 = temp_v1_3 + temp_a0;
        if (temp_t0_2 < temp_v1_3) {
            temp_a3->unk94 = temp_v0_2;
            var_v0_2 = temp_v0_2 < temp_t0_2;
            goto block_11;
        }
        temp_v0_3 = temp_v1_3 - temp_a0;
        if (temp_v1_3 < temp_t0_2) {
            temp_a3->unk94 = temp_v0_3;
            var_v0_2 = (u32) temp_a3->unkAC < temp_v0_3;
block_11:
            if (var_v0_2 != 0) {
                temp_a3->unk94 = temp_a3->unkAC;
            }
        }
block_13:
        temp_lo = (u32) (temp_a3->unk50 * temp_a3->unk94 * 0xA) / (u32) (D_801F3AA4 * 0x3C);
        temp_a3->unk54 = (s16) temp_lo;
        if ((temp_lo << 0x10) <= 0) {
            temp_a3->unk54 = 1;
        }
        if ((temp_a3->unkA8 == 0) || (temp_a3->unk94 == temp_a3->unkAC)) {
            temp_a2 = ((s32) (arg0 << 0x10) >> 0xE) + &D_801F3AA8;
            temp_v1_4 = arg1 * 0xB0;
            temp_a1 = temp_v1_4 + *temp_a2;
            temp_a1->unk98 = (s32) (temp_a1->unk98 & ~0x40);
            var_v1 = temp_v1_4 + *temp_a2;
block_18:
            var_v1->unk98 = (s32) (var_v1->unk98 & ~0x80);
        }
    }
}
