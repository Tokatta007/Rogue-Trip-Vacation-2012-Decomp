/* m2c reference for func_80100A28 @ 80100A28 (110 words). Generated; not compiled or validated. */
void *func_80132F8C();                              /* extern */
? func_8015C008(?);                                 /* extern */
? func_8015EBDC(?);                                 /* extern */
? func_80166D2C(void *, s8 *);                      /* extern */
extern ? D_12208;
extern ? D_801806C8;
static void *D_801C34EC = NULL;

void func_80100A28(void) {
    s8 sp10;
    s32 var_v1;
    s32 var_v1_2;
    void *temp_s1;
    void *temp_s2;
    void *temp_s2_2;
    void *temp_s2_3;
    void *temp_s2_4;
    void *temp_s2_5;
    void *temp_s2_6;
    void *temp_s2_7;
    void *temp_s4;
    void *temp_s5;
    void *temp_s6;
    void *var_a0;
    void *var_s0;

    temp_s5 = D_801C34EC + 0x3CC4;
    temp_s1 = D_801C34EC + 0x164C;
    temp_s6 = D_801C34EC + 0x7DC;
    temp_s4 = D_801C34EC + 0x4944;
    var_s0 = D_801C34EC + 0x3BCC;
    strcpy(&sp10, (D_801C34EC->unk12688 * 0x14) + &D_801806C8);
    temp_s2 = func_80132F8C();
    func_8015C008(0);
    func_8015EBDC(0);
    func_80166D2C(temp_s2, &sp10);
    memcpy(temp_s1, temp_s2, 0x2580);
    temp_s2_2 = temp_s2 + 0x2580;
    memcpy(var_s0, temp_s2_2, 0x78);
    var_v1 = 0;
    do {
        var_s0->unk2 = 0;
        var_v1 += 1;
        var_s0 += 4;
    } while (var_v1 < 0x1E);
    temp_s2_3 = temp_s2_2 + 0x78;
    memcpy(temp_s5, temp_s2_3, 0xC80);
    temp_s2_4 = temp_s2_3 + 0xC80;
    memcpy(temp_s4, temp_s2_4, 0x28);
    var_v1_2 = 0;
    var_a0 = temp_s4;
    do {
        var_a0->unk2 = 0;
        var_v1_2 += 1;
        var_a0 += 4;
    } while (var_v1_2 < 0xA);
    temp_s2_5 = temp_s2_4 + 0x28;
    memcpy(temp_s6, temp_s2_5, 0xDEC);
    temp_s2_6 = temp_s2_5 + 0xDEC;
    temp_s2_7 = temp_s2_6 + 0xC0;
    memcpy(D_801C34EC + &D_12208, temp_s2_6, 0xC0);
    memcpy(D_801C34EC + &D_12208, temp_s2_7, 0x20);
    memcpy(D_801C34EC + &D_12208, temp_s2_7 + 0x20, 0x40);
}
