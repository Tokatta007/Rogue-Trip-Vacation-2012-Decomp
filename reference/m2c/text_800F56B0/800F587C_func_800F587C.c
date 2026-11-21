/* m2c reference for func_800F587C @ 800F587C (360 words). Generated; not compiled or validated. */
extern s32 D_801C3728;
extern s32 D_801C372C;
static void *D_801C34EC = NULL;

void func_800F587C(void *arg0) {
    s32 temp_a0;
    s32 temp_v0;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_v0_2;
    s32 var_v0_3;
    u8 var_v0;

    arg0->unk936 = 0;
    arg0->unk937 = 0;
    arg0->unk8FC = 2;
    arg0->unk880 = 0x38;
    arg0->unk91C = 0x28;
    arg0->unk904 = 2;
    arg0->unk908 = 1;
    arg0->unk90C = 2;
    arg0->unk910 = 0;
    arg0->unk955 = 1;
    arg0->unk956 = 0x5AU;
    temp_v0 = (s32) arg0->unk7C0 >> 4;
    switch (temp_v0) {
    case 1:
        arg0->unk880 = 0x66;
        arg0->unk937 = 1;
        arg0->unk74 = 1;
        arg0->unk908 = 2;
        var_v0 = 0x3D;
block_7:
        arg0->unk955 = 0;
        arg0->unk956 = var_v0;
        break;
    case 2:
        arg0->unk936 = 1;
        arg0->unk91C = 0x3C;
        arg0->unk880 = 0xAA;
        arg0->unk94F = 1;
        arg0->unk8FC = 5;
        arg0->unk950 = 1;
        break;
    case 3:
        arg0->unk880 = 0x71;
        arg0->unk936 = 1;
        arg0->unk91C = 0x3C;
        arg0->unk8FC = 6;
        arg0->unk950 = 1;
        arg0->unk955 = 0;
        break;
    case 4:
        arg0->unk8FC = 5;
        arg0->unk94C = 1;
        arg0->unk94F = 1;
        arg0->unk904 = 0x14;
        arg0->unk90C = 0xC;
        arg0->unk956 = 0x36U;
        break;
    case 5:
        arg0->unk937 = 1;
        arg0->unk8FC = 1;
        arg0->unk74 = 1;
        arg0->unk949 = 1;
        arg0->unk952 = 1;
        arg0->unk880 = 0x22;
        arg0->unk904 = 0xA;
        arg0->unk908 = 0xA;
        var_v0 = 0x20;
        goto block_7;
    case 6:
        arg0->unk8FC = 3;
        arg0->unk74 = 1;
        arg0->unk953 = 1;
        arg0->unk880 = 0x71;
        arg0->unk910 = 0x19;
        break;
    case 7:
        arg0->unk94E = 1;
        arg0->unk94D = 1;
        arg0->unk94A = 1;
        arg0->unk880 = 0x4F;
        arg0->unk90C = 0xC;
        arg0->unk956 = 0x3AU;
        break;
    case 8:
        arg0->unk94E = 1;
        arg0->unk951 = 1;
        arg0->unk952 = 1;
        arg0->unk908 = 5;
        arg0->unk956 = 0x34U;
        break;
    case 9:
        arg0->unk936 = 1;
        arg0->unk948 = 1;
        arg0->unk880 = 0x22;
        arg0->unk90C = 0x64;
        arg0->unk910 = 0xA;
        arg0->unk955 = 0;
        break;
    case 10:
        arg0->unk75 = 1;
        arg0->unk94C = 1;
        arg0->unk904 = 0xF;
        arg0->unk908 = 5;
        break;
    case 11:
        arg0->unk94B = 1;
        arg0->unk951 = 1;
        arg0->unk904 = 0x64;
        arg0->unk908 = 8;
        arg0->unk956 = 0x28U;
        break;
    case 12:
        arg0->unk90C = 0xC;
        break;
    case 13:
    case 14:
    case 15:
        arg0->unk936 = 1;
        arg0->unk91C = 0x2710;
        /* fallthrough */
    default:
        break;
    }
    temp_v1 = D_801C34EC->unk12688;
    temp_a0 = (temp_v1 * 0x64) / 11;
    D_801C3728 = temp_a0;
    D_801C372C = (temp_a0 << 6) / 100;
    arg0->unk956 = (u8) (arg0->unk956 - (((temp_v1 * 0x64) / 11) / 5));
    arg0->unk87C = (s32) (((D_801C3728 << 0xC) / 360) + 0x155);
    arg0->unk92C = (s32) (4 - ((D_801C3728 * 3) / 100));
    if (arg0->unk7C0 >= 0xD0) {
        var_v0_2 = 0x3C;
        arg0->unk8A8 = 0x3C;
    } else {
        arg0->unk8A8 = (s32) (0x1A4 - ((D_801C3728 * 0x168) / 100));
        var_v0_2 = 0x12C - ((D_801C3728 * 0xF0) / 100);
    }
    arg0->unk8AC = var_v0_2;
    if (D_801C34EC->unk12688 == 0xB) {
        arg0->unk87C = 0x800;
        arg0->unk92C = 1;
    }
    temp_v1_2 = D_801C34EC->unk7D4;
    if (temp_v1_2 == 0) {
        arg0->unk8A8 = (s32) (arg0->unk8A8 * 2);
        arg0->unk8AC = (s32) (arg0->unk8AC * 2);
        arg0->unk936 = 0;
        arg0->unk87C = (s32) (arg0->unk87C - 0xE3);
        arg0->unk904 = 0;
        D_801C372C = (s32) D_801C372C >> 1;
        arg0->unk956 = (u8) ((u8) arg0->unk956 >> 1);
        arg0->unk87C = (s32) ((s32) arg0->unk87C >> 1);
        arg0->unk92C = (s32) (arg0->unk92C + 1);
        arg0->unk110 = (s32) ((s32) arg0->unk110 >> 1);
        var_v0_3 = (s32) arg0->unk10C >> 1;
        goto block_26;
    }
    if (temp_v1_2 != 1) {
        arg0->unk8A8 = (s32) ((s32) arg0->unk8A8 >> 1);
        arg0->unk8AC = (s32) ((s32) arg0->unk8AC >> 1);
        D_801C372C *= 2;
        arg0->unk904 = (s32) (arg0->unk904 * 2);
        arg0->unk956 = (u8) (arg0->unk956 * 2);
        arg0->unk87C = (s32) (arg0->unk87C * 2);
        arg0->unk92C = (s32) (arg0->unk92C - 1);
        arg0->unk110 = (s32) (arg0->unk110 + 0x1E);
        var_v0_3 = arg0->unk10C + 0x1E;
block_26:
        arg0->unk10C = var_v0_3;
    }
    if (D_801C34EC->unk7D8 == 0) {
        arg0->unk87C = 0x800;
        arg0->unk8AC = 0x1E;
        arg0->unk8A8 = 0x3C;
    }
}
