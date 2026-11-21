/* m2c reference for func_8014945C @ 8014945C (115 words). Generated; not compiled or validated. */
? func_80125464(void *, void *);                    /* extern */
? func_80125490(void *, void *);                    /* extern */
s32 func_8015959C(s16);                             /* extern */
static s32 D_801C34EC = 0;

void func_8014945C(void *arg0) {
    s32 sp10;
    s32 sp14;
    s32 sp18;
    VECTOR sp20;
    s16 var_v0;
    s32 temp_v1;
    s32 var_v0_2;
    void *temp_s0;

    sp10 = 0;
    sp14 = -0x50;
    temp_v1 = (s32) (func_8015959C((s16) arg0->unk738->unk14) * 0x18) >> 0xC;
    sp18 = temp_v1;
    if ((s16) arg0->unk580 < -1) {
        var_v0 = (s16) arg0->unk580;
    } else {
        var_v0 = (s16) ((s32) (arg0->unk580 << 0x10) >> 0x13);
    }
    sp18 = temp_v1 - var_v0;
    mathMulTransVec(arg0->unk738 + 0x28, (VECTOR *) &sp10, &sp20);
    temp_s0 = (D_801C34EC + (arg0->unk78 * 4))->unk610C;
    temp_s0->unkC = (u8) arg0->unk738->unkC;
    temp_s0->unk1C = (s32) (arg0->unk738->unk1C + (s32) sp20);
    temp_s0->unk20 = (s32) (arg0->unk738->unk20 + sp20.vy);
    temp_s0->unk24 = (s32) (arg0->unk738->unk24 + sp20.vz);
    if (arg0->unkA4 != 0) {
        temp_s0->unkA = (u8) arg0->unk738->unkA;
        var_v0_2 = -(arg0->unk738->unkA * 0x18);
        if (var_v0_2 < 0) {
            var_v0_2 += 0x7F;
        }
        temp_s0->unk24 = (s32) ((temp_s0->unk24 - 0x18) - (var_v0_2 >> 7));
    } else {
        temp_s0->unkA = (u8) arg0->unk738->unkA;
    }
    func_80125464(temp_s0 + 0x14, arg0->unk738 + 0x14);
    func_80125490(temp_s0 + 0x28, arg0->unk738 + 0x28);
}
