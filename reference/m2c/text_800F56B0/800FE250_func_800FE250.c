/* m2c reference for func_800FE250 @ 800FE250 (71 words). Generated; not compiled or validated. */
? func_8013BDCC(s32, ?, ?, void *);                 /* extern */
? func_8013BEA8(s32, void *);                       /* extern */
extern ? D_801C3100;
extern ? D_801C31CC;
extern ? D_801C3BE8;
static s32 D_801C34F4 = 0;

void func_800FE250(void *arg0, s32 arg1) {
    void *temp_a1;
    void *temp_v1;

    temp_v1 = *((arg0->unk78 * 4) + (((s32) arg0->unk7C0 >> 4) * 8) + &D_801C3BE8);
    if (temp_v1 != NULL) {
        if (arg1 != 0) {
            arg0->unk8B = 1;
            temp_v1->unk3 = (u8) ((temp_v1->unk3 & 0x80) | 1);
            if (arg0->unk7B8 == 1) {
                D_801C31CC.unk8 = 0x1B;
                temp_a1 = arg0 + 0x1E4;
                D_801C31CC.unkC = (s32) arg0->unk7D0;
                D_801C3100.unk0 = (s32) arg0->unk1E4;
                D_801C3100.unk4 = (s32) temp_a1->unk4;
                D_801C31CC.unk0 = &D_801C3100;
                D_801C3100.unk8 = (s32) temp_a1->unk8;
                func_8013BDCC(D_801C34F4, 0, 0, arg0);
            }
        } else {
            arg0->unk8B = 0;
            temp_v1->unk3 = (u8) (temp_v1->unk3 & 0x80);
            if (arg0->unk7B8 == 1) {
                D_801C31CC.unk8 = 0x1B;
                D_801C31CC.unkC = (s32) arg0->unk7D0;
                func_8013BEA8(D_801C34F4, arg0);
            }
        }
    }
}
