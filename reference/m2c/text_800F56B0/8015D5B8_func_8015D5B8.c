/* m2c reference for func_8015D5B8 @ 8015D5B8 (140 words). Generated; not compiled or validated. */
extern s16 D_801BAD4C;
extern s16 D_801BAD4E;
extern s32 *D_801BAE20;
extern u32 D_801EAFF8;
extern ? D_801EB020;

s32 func_8015D5B8(void *arg0, u32 arg1) {
    s16 temp_v1;
    s16 temp_v1_2;
    u16 var_v0;
    u16 var_v1;

    temp_v1 = arg0->unk4;
    if (temp_v1 >= 0) {
        var_v0 = (u16) D_801BAD4C - 1;
        if ((D_801BAD4C - 1) >= temp_v1) {
            var_v0 = (u16) arg0->unk4;
        }
    } else {
        var_v0 = 0;
    }
    temp_v1_2 = arg0->unk6;
    arg0->unk4 = (s16) var_v0;
    if (temp_v1_2 >= 0) {
        var_v1 = (u16) D_801BAD4E - 1;
        if ((D_801BAD4E - 1) >= temp_v1_2) {
            var_v1 = (u16) arg0->unk6;
        }
    } else {
        var_v1 = 0;
    }
    arg0->unk6 = (s16) var_v1;
    if ((arg0->unk0 & 0x3F) || ((u16) arg0->unk4 & 0x3F)) {
        D_801EAFF8.unk0 = ((s32) &D_801EB020 & 0xFFFFFF) | 0x08000000;
        D_801EAFF8.unk10 = 0xE6000000;
        D_801EAFF8.unk4 = 0xE3000000;
        D_801EAFF8.unk8 = 0xE4FFFFFF;
        D_801EAFF8.unkC = 0xE5000000;
        D_801EAFF8.unk18 = (s32) ((arg1 & 0xFFFFFF) | 0x60000000);
        D_801EAFF8.unk14 = (s32) ((*D_801BAE20 & 0x7FF) | (((arg1 >> 0x1F) << 0xA) | 0xE1000000));
        D_801EAFF8.unk1C = (s32) arg0->unk0;
        D_801EB020.unk0 = 0x03FFFFFF;
        D_801EAFF8.unk20 = (s32) arg0->unk4;
        D_801EB020.unk4 = (s32) (_param(3U) | 0xE3000000);
        D_801EB020.unk8 = (s32) (_param(4U) | 0xE4000000);
        D_801EB020.unkC = (s32) (_param(5U) | 0xE5000000);
    } else {
        D_801EAFF8.unk0 = 0x05FFFFFF;
        D_801EAFF8.unk4 = 0xE6000000;
        D_801EAFF8.unkC = (s32) ((arg1 & 0xFFFFFF) | 0x02000000);
        D_801EAFF8.unk8 = (s32) ((*D_801BAE20 & 0x7FF) | (((arg1 >> 0x1F) << 0xA) | 0xE1000000));
        D_801EAFF8.unk10 = (s32) arg0->unk0;
        D_801EAFF8.unk14 = (s32) arg0->unk4;
    }
    _cwc(&D_801EAFF8);
    return 0;
}
