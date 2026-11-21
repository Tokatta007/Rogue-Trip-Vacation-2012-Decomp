/* m2c reference for func_80132FA4 @ 80132FA4 (36 words). Generated; not compiled or validated. */
extern ? D_80184D7C;
extern ? D_80198DCC;
extern ? D_801ACE1C;
extern ? D_801AE61C;
extern ? D_801AFE1C;
extern ? D_801B161C;
extern ? *D_801C380C;
extern ? *D_801C3810;
extern ? D_801CBB78;
extern ? D_801CBC78;

void func_80132FA4(void) {
    void *temp_a2;
    void *temp_a3;

    D_801CBB78.unk4 = &D_80184D7C;
    D_801CBB78.unk84 = &D_80198DCC;
    D_801CBB78.unk0 = &D_801ACE1C;
    temp_a3 = &D_80184D7C + 0x14000;
    temp_a2 = &D_80198DCC + 0x14000;
    D_801CBB78.unk80 = &D_801AE61C;
    D_801CBB78.unkC = temp_a3;
    D_801CBB78.unk8C = temp_a2;
    D_801C380C = &D_801CBB78;
    D_801CBC78.unk0 = &D_801AFE1C;
    D_801CBC78.unk80 = &D_801B161C;
    D_801CBC78.unk4 = &D_80184D7C;
    D_801CBC78.unk84 = &D_80198DCC;
    D_801CBC78.unkC = temp_a3;
    D_801CBC78.unk8C = temp_a2;
    D_801C3810 = &D_801CBC78;
}
