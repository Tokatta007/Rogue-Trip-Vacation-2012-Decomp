/* m2c reference for func_80125CD8 @ 80125CD8 (51 words). Generated; not compiled or validated. */
? func_801253C8(void *, void *);                    /* extern */
? func_80125518(void *, ?, ?, s16);                 /* extern */
? func_8015A05C(void *, void *);                    /* extern */
? func_8016D6BC(s32, ?);                            /* extern */

void func_80125CD8(void *arg0) {
    arg0->unk122C8->unkC = 1;
    func_8016D6BC(arg0->unk122CC, 0);
    func_801253C8(arg0->unk122C8 + 0x1C, arg0 + (((s8) arg0->unk12355 * 0xC) + 0x12208));
    func_80125518(arg0->unk122C8 + 0x14, 0, 0, (s16) (arg0 + ((s32) (arg0->unk12355 << 0x18) >> 0x17))->unk12324);
    func_8015A05C(arg0->unk122C8 + 0x14, arg0->unk122C8 + 0x28);
}
