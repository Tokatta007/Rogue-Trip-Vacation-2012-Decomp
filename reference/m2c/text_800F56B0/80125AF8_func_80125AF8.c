/* m2c reference for func_80125AF8 @ 80125AF8 (27 words). Generated; not compiled or validated. */
void func_80125AF8(void *arg0) {
    s32 var_v0;
    s32 var_v1;
    void *var_v0_2;

    arg0->unk12320 = 0;
    arg0->unk12355 = -1;
    if (arg0->unk7D8 == 5) {
        arg0->unk12318 = 0x4E2;
        var_v0 = 0xFA;
    } else {
        arg0->unk12318 = 0x9C4;
        var_v0 = 0x1F4;
    }
    arg0->unk1231C = var_v0;
    var_v1 = 0;
    var_v0_2 = arg0;
    do {
        var_v0_2->unk12344 = 0;
        var_v1 += 1;
        var_v0_2 = arg0 + var_v1;
    } while (var_v1 < 0x10);
}
