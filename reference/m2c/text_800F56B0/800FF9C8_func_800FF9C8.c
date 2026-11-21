/* m2c reference for func_800FF9C8 @ 800FF9C8 (100 words). Generated; not compiled or validated. */
? func_800FECB4(s32 *, s32, s16, void *);           /* extern */
? func_800FF164(s32 *, s16, s16, void *);           /* extern */
? func_800FF4C8(s32 *, s16, void *, s32);           /* extern */
s32 func_800FF594(s32 *, s32);                      /* extern */

void func_800FF9C8(void *arg0) {
    s32 var_v0;
    void *temp_a0;
    void *temp_s0;
    void *temp_s0_2;

    arg0->unk5A = (u16) arg0->unk58;
    temp_s0 = arg0 + 8;
    arg0->unk58 = (u16) arg0->unk5C;
    arg0->unk5C = (u16) arg0->unk5A;
    arg0->unk64 = 0;
    arg0->unk65 = 0;
    func_800FF4C8(arg0->unk40, (s16) arg0->unk58, temp_s0, arg0->unk0);
    func_800FECB4(arg0->unk40, arg0->unk38 + 0x1C, (s16) arg0->unk58, temp_s0);
    func_800FF164(arg0->unk40, (s16) arg0->unk58, (s16) arg0->unk5C, temp_s0);
    arg0->unk44 = (s32) (arg0->unk14 + 1);
    temp_s0_2 = *arg0->unk40 + ((s32) (arg0->unk58 << 0x10) >> 0xB);
    arg0->unk34 = temp_s0_2;
    arg0->unk6D = 0U;
    arg0->unk6E = 0;
    if ((s8) temp_s0_2->unk1F < 3) {
        arg0->unk6D = (u8) temp_s0_2->unk1F;
    } else if ((s8) temp_s0_2->unk1F == 3) {
        arg0->unk6E = 1;
    }
    if ((s8) temp_s0_2->unk1D == func_800FF594(arg0->unk40, arg0->unk38 + 0x1C)) {
        arg0->unk6B = 1;
    }
    temp_a0 = arg0->unk38;
    if (temp_s0_2->unk8 < temp_a0->unk24) {
        var_v0 = temp_s0_2->unk8;
    } else {
        var_v0 = temp_a0->unk24 - 8;
    }
    arg0->unk48 = var_v0;
}
