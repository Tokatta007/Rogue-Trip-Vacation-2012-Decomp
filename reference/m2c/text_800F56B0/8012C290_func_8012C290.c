/* m2c reference for func_8012C290 @ 8012C290 (75 words). Generated; not compiled or validated. */
void func_8012C290(void *arg0) {
    s32 temp_v0;
    s32 var_a1;
    s32 var_a1_2;
    s8 var_v0_2;
    u8 temp_v0_2;
    void *var_a0;
    void *var_v0;

    var_a1 = 0;
    var_v0 = arg0;
    do {
        var_v0->unk55 = 2;
        var_a1 += 1;
        var_v0 = arg0 + var_a1;
    } while (var_a1 < 9);
    arg0->unk5B = 0xF;
    temp_v0 = (s32) arg0->unk0->unk7C0 >> 4;
    switch (temp_v0) {
    case 1:
    case 4:
        arg0->unk56 = 0x14;
        arg0->unk5D = 0x19;
        var_v0_2 = 0x1E;
        break;
    case 2:
        arg0->unk5A = 0x19;
        arg0->unk58 = 0x1E;
        var_v0_2 = 0x14;
        break;
    case 6:
    case 9:
        arg0->unk56 = 0x19;
        arg0->unk58 = 0x1E;
        var_v0_2 = 0x14;
        break;
    case 5:
    case 8:
        arg0->unk56 = 0x1E;
        arg0->unk5D = 0x1E;
        var_v0_2 = 0xF;
        break;
    default:
        arg0->unk58 = 0x14;
        arg0->unk5D = 0x1E;
        var_v0_2 = 0x19;
        break;
    }
    arg0->unk57 = var_v0_2;
    var_a1_2 = 0;
    var_a0 = arg0;
    do {
        temp_v0_2 = var_a0->unk55;
        var_a1_2 += 1;
        var_a0->unk55 = (u8) (((temp_v0_2 << 0x18) / 26214400) - ((s32) ((s32) (temp_v0_2 << 0x18) >> 0x12) >> 0x1F));
        var_a0 = arg0 + var_a1_2;
    } while (var_a1_2 < 9);
}
