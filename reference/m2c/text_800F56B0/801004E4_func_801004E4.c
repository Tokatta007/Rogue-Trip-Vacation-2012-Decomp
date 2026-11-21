/* m2c reference for func_801004E4 @ 801004E4 (42 words). Generated; not compiled or validated. */
s32 func_800FF2B0(s32 *, s32, s32);                 /* extern */
s32 func_800FF594(s32 *, s32);                      /* extern */
s16 func_801003CC(void *, s32, s32, s32);           /* extern */

s16 func_801004E4(void *arg0) {
    s32 temp_v0;
    s8 temp_s0;

    temp_s0 = (s8) (*arg0->unk40 + ((s32) (arg0->unk58 << 0x10) >> 0xB))->unk1D;
    temp_v0 = func_800FF594(arg0->unk40, arg0->unk38 + 0x1C);
    if (temp_v0 != temp_s0) {
        return (s16) arg0->unk58;
    }
    return func_801003CC(arg0, arg0->unk30, func_800FF2B0(arg0->unk40, arg0->unk38 + 0x1C, temp_v0), temp_v0);
}
