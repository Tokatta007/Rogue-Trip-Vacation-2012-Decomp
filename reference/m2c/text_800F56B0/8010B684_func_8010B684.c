/* m2c reference for func_8010B684 @ 8010B684 (38 words). Generated; not compiled or validated. */
extern ? D_801C3FA8;
static void *D_801C34EC = NULL;

void func_8010B684(void) {
    s32 temp_v0;

    temp_v0 = D_801C3FA8.unk10 - 1;
    D_801C3FA8.unk10 = temp_v0;
    if ((temp_v0 <= 0) || (D_801C3FA8.unkC < D_801C3FA8.unk8)) {
        D_801C3FA8.unk10 = 0x64;
        D_801C3FA8.unk0 = (s32) D_801C3FA8.unk4;
        D_801C3FA8.unk8 = (s32) D_801C3FA8.unkC;
        if (D_801C3FA8.unk4 == 0) {
            D_801C3FA8.unk8 = 0x32;
            D_801C3FA8.unk0 = (s32) D_801C34EC->unk12754;
        }
        D_801C3FA8.unkC = 0xA;
        D_801C3FA8.unk4 = (s32) D_801C34EC->unk12754;
    }
}
