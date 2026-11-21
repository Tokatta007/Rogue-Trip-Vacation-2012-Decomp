/* m2c reference for func_8010085C @ 8010085C (115 words). Generated; not compiled or validated. */
void *func_80132F8C();                              /* extern */
? func_8015C008(?);                                 /* extern */
? func_8015EBDC(?);                                 /* extern */
? func_80166DC0(void *, s8 *, s32);                 /* extern */
extern ? D_12208;
extern ? D_801806C8;
static void *D_801C34EC = NULL;

void func_8010085C(void) {
    s8 sp10;
    s32 temp_s0_2;
    s32 var_v1;
    s32 var_v1_2;
    void *temp_s0;
    void *temp_s1;
    void *temp_s1_2;
    void *temp_s1_3;
    void *temp_s1_4;
    void *temp_s1_5;
    void *temp_s1_6;
    void *temp_s1_7;
    void *temp_s1_8;
    void *temp_s2;
    void *temp_s3;
    void *temp_s4;
    void *temp_s5;
    void *temp_v0;
    void *var_a0;
    void *var_a0_2;

    temp_s4 = D_801C34EC + 0x3CC4;
    temp_s0 = D_801C34EC + 0x164C;
    temp_s5 = D_801C34EC + 0x7DC;
    temp_s3 = D_801C34EC + 0x4944;
    temp_s2 = D_801C34EC + 0x3BCC;
    strcpy(&sp10, (D_801C34EC->unk12688 * 0x14) + &D_801806C8);
    temp_v0 = func_80132F8C();
    memcpy(temp_v0, temp_s0, 0x2580);
    temp_s1 = temp_v0 + 0x2580;
    var_v1 = 0;
    var_a0 = temp_s2;
    do {
        var_a0->unk2 = 0;
        var_v1 += 1;
        var_a0 += 4;
    } while (var_v1 < 0x1E);
    memcpy(temp_s1, temp_s2, 0x78);
    temp_s1_2 = temp_s1 + 0x78;
    memcpy(temp_s1_2, temp_s4, 0xC80);
    temp_s1_3 = temp_s1_2 + 0xC80;
    var_v1_2 = 0;
    var_a0_2 = temp_s3;
    do {
        var_a0_2->unk2 = 0;
        var_v1_2 += 1;
        var_a0_2 += 4;
    } while (var_v1_2 < 0xA);
    memcpy(temp_s1_3, temp_s3, 0x28);
    temp_s1_4 = temp_s1_3 + 0x28;
    memcpy(temp_s1_4, temp_s5, 0xDEC);
    temp_s1_5 = temp_s1_4 + 0xDEC;
    temp_s1_6 = temp_s1_5 + 0xC0;
    memcpy(temp_s1_5, D_801C34EC + &D_12208, 0xC0);
    temp_s1_7 = temp_s1_6 + 0x20;
    memcpy(temp_s1_6, D_801C34EC + &D_12208, 0x20);
    memcpy(temp_s1_7, D_801C34EC + &D_12208, 0x40);
    temp_s0_2 = (temp_s1_7 + 0x80) - func_80132F8C();
    temp_s1_8 = func_80132F8C();
    func_8015C008(0);
    func_8015EBDC(0);
    func_80166DC0(temp_s1_8, &sp10, temp_s0_2);
}
