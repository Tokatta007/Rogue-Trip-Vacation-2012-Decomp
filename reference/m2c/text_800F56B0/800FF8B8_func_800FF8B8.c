/* m2c reference for func_800FF8B8 @ 800FF8B8 (68 words). Generated; not compiled or validated. */
? func_800FECB4(s32 *, s32, s16, void *);           /* extern */
? func_800FF164(s32 *, s16, s16, void *);           /* extern */
? func_801253C8(s32, void *);                       /* extern */
? func_8015A05C(void *, void *);                    /* extern */

void func_800FF8B8(void *arg0, s16 arg1) {
    void *temp_s0;
    void *temp_s1;

    if (arg1 >= 0) {
        temp_s0 = *arg0->unk40 + (arg1 << 5);
        func_801253C8(arg0->unk38 + 0x1C, temp_s0);
        arg0->unk58 = arg1;
        temp_s1 = arg0 + 8;
        arg0->unk5C = (u16) temp_s0->unkC;
        func_800FECB4(arg0->unk40, arg0->unk38 + 0x1C, (s16) arg0->unk5C, temp_s1);
        func_800FF164(arg0->unk40, (s16) (u16) arg0->unk58, (s16) arg0->unk5C, temp_s1);
        arg0->unk38->unk14 = (u16) arg0->unk1E;
        arg0->unk38->unk16 = 0;
        arg0->unk38->unk18 = (u16) arg0->unk1C;
        func_8015A05C(arg0->unk38 + 0x14, arg0->unk38 + 0x28);
    } else {
        arg0->unk5A = 0;
        arg0->unk58 = 0;
        arg0->unk5C = 0U;
    }
    arg0->unk66 = 0;
}
