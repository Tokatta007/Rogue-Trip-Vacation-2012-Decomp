/* m2c reference for func_8011EDA0 @ 8011EDA0 (42 words). Generated; not compiled or validated. */
void func_8011EDA0(void *arg0) {
    s32 var_v1;
    void *var_v0;

    arg0->unk127E3 = 1;
    var_v1 = 0;
    var_v0 = arg0;
    do {
        var_v1 += 1;
        var_v0->unk127AE = 1;
        var_v0->unk127B2 = 0;
        var_v0->unk127B6 = 0;
        var_v0->unk127BA = 0;
        var_v0->unk127C2 = 0;
        var_v0->unk127BE = 0;
        var_v0->unk127C6 = 0;
        var_v0 = arg0 + var_v1;
    } while (var_v1 < 4);
    arg0->unk12794 = 0;
    memset(arg0 + 0xB788, 0, 0x1170);
    memset(arg0 + 0xC8F8, 0, 0x4168);
}
