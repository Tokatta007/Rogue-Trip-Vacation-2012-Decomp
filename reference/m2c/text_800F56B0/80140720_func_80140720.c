/* m2c reference for func_80140720 @ 80140720 (217 words). Generated; not compiled or validated. */
? func_800F012C(?, s32);                            /* extern */
? func_800F013C(?, s32);                            /* extern */
? func_800F0144(?, s32);                            /* extern */
? func_800F014C(?, s32);                            /* extern */
? func_800F0180(?, s16, s16, s32);                  /* extern */
? func_800F0190(?, s16, s16, s32);                  /* extern */
? func_800F01A0(?, s16, s16, s32);                  /* extern */
? func_800F01B0(?, s16, s16, s32);                  /* extern */
? func_800F01C0(?, u16, u16);                       /* extern */
? func_800F01E8(?, ?, ?);                           /* extern */
? func_800F0220(?, ?);                              /* extern */
? func_800F023C(?, s32, u8);                        /* extern */
? func_800F0248(?, s32, s32);                       /* extern */
? func_800F0254(?, u8, s32);                        /* extern */
? func_800F0260(?, u8, u8);                         /* extern */
? func_800F0318(?, ?);                              /* extern */
void *func_8011BA28(?);                             /* extern */
? func_8016679C(s32, ?);                            /* extern */
extern ? D_801B447C;
extern ? D_801B454C;
static s32 D_801C35C0 = 0;

void func_80140720(s32 arg0) {
    u16 sp10;
    u16 sp12;
    u16 sp14;
    u16 sp18;
    u16 sp1A;
    u16 sp1C;
    u16 sp20;                                       /* compiler-managed */
    u16 sp22;                                       /* compiler-managed */
    u16 sp24;                                       /* compiler-managed */
    ? *var_s1;
    ? var_a0;
    s16 temp_a1_2;
    s16 temp_a2_2;
    s16 temp_a3_2;
    s32 *var_s0;
    s32 *var_s5;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 var_s3;
    s32 var_s3_2;
    s32 var_s6;
    s32 var_v1;
    u16 temp_a1;
    u16 temp_a2;
    u16 temp_a3;
    void *temp_v0;
    void *var_s4;

    if (D_801C35C0 != 0) {
        func_800F0318(0x1F800000, 9);
        func_800F0220(0x1F800000, 1);
        var_s1 = &D_801B454C;
        var_s6 = 5;
        *(u8 *)0x1F800003 |= 0x80;
        do {
            var_v1 = 0;
            if ((var_s1->unkAF != 0) && ((var_s1->unkAC << 0x10) > 0)) {
                var_v1 = (u8) var_s1->unkAE < 4U;
            }
            if (var_v1 != 0) {
                var_s4 = var_s1 + 0x1C;
                var_s3 = 0;
                if (var_s1->unkAF == 0x11) {
                    var_s3 = 1;
                    var_a0 = 0x2A;
                } else {
                    var_a0 = 0x3C;
                }
                temp_v0 = func_8011BA28(var_a0);
                func_800F01C0(0x1F800000, temp_v0->unk4, temp_v0->unk6);
                func_800F023C(0x1F800000, (temp_v0->unk0 + temp_v0->unk2) & 0xFF, temp_v0->unk1);
                func_800F0248(0x1F800000, (temp_v0->unk0 + temp_v0->unk2) & 0xFF, (temp_v0->unk1 + temp_v0->unk3) & 0xFF);
                func_800F0254(0x1F800000, temp_v0->unk0, (temp_v0->unk1 + temp_v0->unk3) & 0xFF);
                func_800F0260(0x1F800000, temp_v0->unk0, temp_v0->unk1);
                func_800F01E8(0x1F800000, 0, 0);
                var_s3_2 = 0;
                temp_v0_2 = var_s1->unk10;
                sp20 = (u16) temp_v0_2;
                sp10 = (u16) temp_v0_2;
                temp_v0_3 = var_s1->unk14;
                sp22 = (u16) temp_v0_3;
                sp12 = (u16) temp_v0_3;
                temp_v0_4 = var_s1->unk18;
                var_s0 = (var_s3 * 0x68) + ((var_s1->unkB2 * 4) + &D_801B447C);
                sp24 = (u16) temp_v0_4;
                sp14 = (u16) temp_v0_4;
                var_s5 = var_s0;
                if (var_s1->unkB0 != 0) {
                    do {
                        if ((u8) var_s1->unkAE < 2U) {
                            var_s5 = var_s0;
                            var_s0 += 4;
                        }
                        func_800F013C(0x1F800000, *var_s5);
                        func_800F014C(0x1F800000, *var_s5);
                        func_800F012C(0x1F800000, *var_s0);
                        func_800F0144(0x1F800000, *var_s0);
                        var_s4 += 8;
                        sp18 = sp20;
                        sp1A = sp22;
                        sp1C = sp24;
                        temp_a1 = sp10 + var_s1->unkA4;
                        sp10 = temp_a1;
                        temp_a1_2 = temp_a1 + var_s4->unk0;
                        sp20 = temp_a1_2;
                        temp_a2 = sp12 + var_s1->unkA6;
                        sp12 = temp_a2;
                        temp_a2_2 = temp_a2 + var_s4->unk2;
                        sp22 = temp_a2_2;
                        temp_a3 = sp14 + var_s1->unkA8;
                        sp14 = temp_a3;
                        temp_a3_2 = temp_a3 + var_s4->unk4;
                        sp24 = temp_a3_2;
                        func_800F0180(0x1F800000, temp_a1_2, temp_a2_2, temp_a3_2 - var_s1->unkB3);
                        func_800F0190(0x1F800000, (s16) sp18, (s16) sp1A, (s16) sp1C - var_s1->unkB3);
                        func_800F01A0(0x1F800000, temp_a1_2, temp_a2_2, var_s1->unkB3 + sp24);
                        func_800F01B0(0x1F800000, (s16) sp18, (s16) sp1A, var_s1->unkB3 + (s16) sp1C);
                        func_8016679C(arg0, 0x1F800000);
                        func_800F01E8(0x1F800000, 0, -0x14);
                        var_s3_2 += 1;
                    } while (var_s3_2 < (s32) var_s1->unkB0);
                }
            }
            var_s6 -= 1;
            var_s1 += 0xB4;
        } while (var_s6 != 0);
    }
}
