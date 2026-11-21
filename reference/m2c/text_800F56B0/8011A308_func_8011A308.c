/* m2c reference for func_8011A308 @ 8011A308 (74 words). Generated; not compiled or validated. */
? func_801253C8(void *, ?, u16 *);                  /* extern */
s8 func_8012A0B8(s32, ?, void *, void *);           /* extern */
static s32 D_801C34F0 = 0;

void func_8011A308(void *arg0, u16 *arg1, ? arg2) {
    s16 var_v0;
    u32 temp_v0;
    void *temp_s0;

    temp_v0 = (u16) *arg1 >> 4;
    switch (temp_v0) {
    case 0x1F5:
    case 0x1FE:
        arg0->unk1C = 1;
        var_v0 = 0x1E;
block_10:
        arg0->unk1E = var_v0;
        break;
    case 0x1F7:
    case 0x200:
        arg0->unk1C = 0xA;
        var_v0 = 0x28;
        goto block_10;
    case 0x1F8:
    case 0x201:
        arg0->unk1C = 0x14;
        var_v0 = 0x50;
        goto block_10;
    case 0x1F9:
    case 0x202:
        arg0->unk1C = 0x28;
        var_v0 = 0x96;
        goto block_10;
    case 0x1FA:
        arg0->unk1C = 5;
        var_v0 = 0xF;
        goto block_10;
    case 0x1FB:
        arg0->unk1C = 1;
        var_v0 = 5;
        goto block_10;
    case 0x1FC:
        arg0->unk1C = 1;
        var_v0 = 0xF;
        goto block_10;
    case 0x1F6:
    case 0x1FD:
    case 0x1FF:
        arg0->unk1C = 5;
        var_v0 = 0x14;
        goto block_10;
    }
    temp_s0 = arg0 + 4;
    arg0->unk10 = arg1;
    arg0->unk14 = 0;
    arg0->unk18 = 0;
    func_801253C8(temp_s0, arg2, arg1);
    arg0->unk10->unk2 = func_8012A0B8(D_801C34F0, 0x1B, arg0, temp_s0);
}
