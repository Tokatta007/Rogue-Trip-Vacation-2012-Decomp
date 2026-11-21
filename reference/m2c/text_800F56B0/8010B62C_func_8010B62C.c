/* m2c reference for func_8010B62C @ 8010B62C (22 words). Generated; not compiled or validated. */
extern ? D_801C3FA8;
static void *D_801C34EC = NULL;

void func_8010B62C(s32 arg1, s32 arg2) {
    if (D_801C3FA8.unk8 >= arg2) {
        D_801C3FA8.unk0 = arg1;
        D_801C3FA8.unk10 = 0x64;
        D_801C3FA8.unk8 = arg2;
        D_801C3FA8.unkC = 0x32;
        D_801C3FA8.unk4 = (s32) D_801C34EC->unk12754;
        return;
    }
    D_801C3FA8.unk4 = arg1;
    D_801C3FA8.unkC = arg2;
}
