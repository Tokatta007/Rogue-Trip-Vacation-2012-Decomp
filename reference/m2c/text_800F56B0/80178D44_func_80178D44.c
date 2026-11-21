/* m2c reference for func_80178D44 @ 80178D44 (142 words). Generated; not compiled or validated. */
? func_8015AA3C(s32, s32, s32, s32, u32);           /* extern */
? func_8015AAF0(s32, s32, s32, s32, s32);           /* extern */
s32 func_801641F8(? *);                             /* extern */
? func_80178F7C(s32);                               /* extern */
extern ? D_801C2E34;
extern ? D_801C30D4;
extern ? D_801C38F8;
extern ? D_801C3900;
extern ? D_801C3908;
static s8 D_800F5438[0x2C] = {
    0x54,
    0x72,
    0x79,
    0x69,
    0x6E,
    0x67,
    0x20,
    0x74,
    0x6F,
    0x20,
    0x63,
    0x72,
    0x65,
    0x61,
    0x74,
    0x65,
    0x20,
    0x61,
    0x20,
    0x76,
    0x69,
    0x65,
    0x77,
    0x20,
    0x67,
    0x72,
    0x65,
    0x61,
    0x74,
    0x65,
    0x72,
    0x20,
    0x74,
    0x68,
    0x61,
    0x6E,
    0x20,
    0x4D,
    0x41,
    0x58,
    0x20,
    0xA,
    0,
    0,
}; /* const */

void func_80178D44(void *arg0, s32 arg1, s32 arg2) {
    s32 *temp_s0_2;
    s32 temp_a0;
    s32 temp_s0;
    s32 temp_s2;
    s32 temp_s3;
    s32 temp_s4;
    s32 temp_s5;
    s32 temp_v1;
    s32 var_a0;
    s32 var_a1;
    s32 var_a3;
    u32 temp_s6;
    void *temp_v0;

    if (arg2 >= 2) {
        printf(D_800F5438);
        return;
    }
    temp_v1 = arg2 * 4;
    *(temp_v1 + &D_801C3908) = arg1;
    *(temp_v1 + &D_801C3900) = arg0;
    temp_v0 = (arg1 * 0x60) + &D_801C2E34;
    temp_s2 = temp_v0->unk20;
    temp_s3 = temp_v0->unk24;
    temp_s4 = temp_v0->unk18;
    temp_s6 = temp_v0->unk1C;
    temp_s0 = temp_v0->unk10;
    temp_s5 = temp_v0->unk14;
    func_8015AA3C(arg0 + 0x10, temp_s2, temp_s3, temp_s4, temp_s6);
    func_8015AAF0(arg0 + 0xEC, 0, 0, temp_s0, temp_s5);
    temp_a0 = arg0 + 0x90;
    if (temp_s0 == 0x280) {
        func_8015AA3C(temp_a0, temp_s2, temp_s3, temp_s4, temp_s6);
        var_a0 = arg0 + 0x6C;
        var_a1 = 0;
        var_a3 = 0x280;
    } else {
        func_8015AA3C(temp_a0, temp_s2 + temp_s0, temp_s3, temp_s4, temp_s6);
        var_a0 = arg0 + 0x6C;
        var_a1 = temp_s0;
        var_a3 = var_a1;
    }
    func_8015AAF0(var_a0, var_a1, 0, var_a3, temp_s5);
    SetGeomScreen(((arg1 * 0x60) + &D_801C2E34)->unk8);
    SetGeomOffset(temp_s4 / 2, (s32) (temp_s6 + (temp_s6 >> 0x1F)) >> 1);
    arg0->unk28 = 1;
    arg0->unkA8 = 1;
    arg0->unk26 = 1;
    arg0->unkA6 = 1;
    arg0->unk29 = (u8) D_801C30D4.unk0;
    arg0->unk2A = (u8) D_801C30D4.unk4;
    arg0->unk2B = (u8) D_801C30D4.unk8;
    arg0->unkA9 = (u8) D_801C30D4.unk0;
    arg0->unkAA = (u8) D_801C30D4.unk4;
    arg0->unkAB = (u8) D_801C30D4.unk8;
    temp_s0_2 = (arg2 * 4) + &D_801C38F8;
    if (*temp_s0_2 == 0) {
        *temp_s0_2 = func_801641F8(&D_801C30D4);
    }
    func_80178F7C(arg1);
}
