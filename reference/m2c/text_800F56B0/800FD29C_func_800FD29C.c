/* m2c reference for func_800FD29C @ 800FD29C (110 words). Generated; not compiled or validated. */
? func_800F5E1C(void *, s32);                       /* extern */
? func_8010B62C(s32, ?, ?);                         /* extern */
void *func_80122E88(s32);                           /* extern */
? func_80147778(void *, ?);                         /* extern */
extern s32 D_801C3720;
extern s32 D_801C3724;
static s32 D_801C34EC = 0;

void func_800FD29C(void *arg0) {
    s32 temp_s0;
    s32 var_s0;
    void *temp_v0;
    void *temp_v1;

    arg0->unkAD = 1;
    temp_s0 = arg0->unk3C->unkA & 0xFF;
    switch (D_801C3720) {                           /* irregular */
    case 0:
        if (temp_s0 == 0) {
            func_8010B62C(D_801C34EC + 0x6220, 0x68, 0);
        }
        var_s0 = temp_s0 + 0xA;
        if (var_s0 >= 0xF1) {
            D_801C3720 += 1;
        }
        break;
    case 1:
        var_s0 = temp_s0 - 0xA;
        if (var_s0 < 0x32) {
            D_801C3720 = 2;
        }
        break;
    case 2:
        var_s0 = temp_s0 + 0xA;
        if (var_s0 >= 0xF1) {
            D_801C3720 = 3;
        }
        break;
    case 3:
        var_s0 = temp_s0 - 0xA;
        if (var_s0 < 0x32) {
            D_801C3720 = 4;
        }
        break;
    case 4:
        var_s0 = temp_s0 + 0xA;
        if (var_s0 >= 0xF1) {
            D_801C3720 = 5;
        }
        break;
    case 5:
        var_s0 = temp_s0 - 0xA;
        if (var_s0 < 0x80) {
            D_801C3720 = 6;
        }
        break;
    default:
        arg0->unk19E = 1;
        D_801C3724 = 1;
        var_s0 = 0x80;
        func_80147778(arg0, 1);
        arg0->unk8 = 3;
        arg0->unk58 = 0x12;
        func_800F5E1C(arg0, func_80122E88(D_801C34EC)->unk738);
        arg0->unk780 = 0;
        break;
    }
    temp_v1 = arg0->unk3C;
    temp_v0 = arg0->unk3C;
    temp_v0->unkA = (u8) var_s0;
    temp_v1->unk9 = (u8) temp_v0->unkA;
    arg0->unk3C->unk8 = (u8) temp_v1->unk9;
}
