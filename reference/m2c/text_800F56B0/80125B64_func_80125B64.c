/* m2c reference for func_80125B64 @ 80125B64 (93 words). Generated; not compiled or validated. */
void func_80125B64(void *arg0) {
    s32 var_a1;
    s32 var_v0;
    u32 temp_v1;
    void *var_v0_2;

    arg0->unk122C8 = 0;
    arg0->unk122CC = 0;
    if (arg0->unk7D8 == 5) {
        arg0->unk12318 = 0x4E2;
        var_v0 = 0xFA;
    } else {
        arg0->unk12318 = 0x9C4;
        var_v0 = 0x1F4;
    }
    arg0->unk1231C = var_v0;
    var_a1 = 0;
    arg0->unk12354 = 0;
    arg0->unk12355 = -1;
    arg0->unk12357 = 0;
    arg0->unk12320 = 0;
    var_v0_2 = arg0;
    do {
        var_v0_2->unk12344 = 0;
        var_a1 += 1;
        var_v0_2 = arg0 + var_a1;
    } while (var_a1 < 0x10);
    temp_v1 = arg0->unk12688;
    switch (temp_v1) {
    case 0:
        arg0->unk12354 = 0x10;
        /* fallthrough */
    default:
        return;
    case 1:
        arg0->unk12354 = 0xD;
        return;
    case 2:
    case 8:
        arg0->unk12354 = 8;
        return;
    case 3:
    case 5:
        arg0->unk12354 = 0xB;
        return;
    case 6:
        arg0->unk12354 = 6;
        return;
    case 7:
        arg0->unk12354 = 9;
        return;
    case 9:
        arg0->unk12354 = 0xF;
        return;
    case 11:
        arg0->unk12354 = 7;
        /* fallthrough */
        return;
    }
}
