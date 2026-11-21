/* m2c reference for func_8011E990 @ 8011E990 (260 words). Generated; not compiled or validated. */
? func_800F012C(?, s32);                            /* extern */
? func_800F0180(?, s16, s16, s16);                  /* extern */
? func_800F0190(?, u16, s16, s16);                  /* extern */
? func_800F01A0(?, s32, s32, s16);                  /* extern */
? func_800F01B0(?, u16, s32, s16);                  /* extern */
? func_800F01C0(?, u16, u16);                       /* extern */
? func_800F01CC(?, ?);                              /* extern */
? func_800F01E8(?, ?, s8);                          /* extern */
? func_800F0220(?, s32);                            /* extern */
? func_800F023C(?, s32, s32);                       /* extern */
? func_800F0248(?, s32, s32);                       /* extern */
? func_800F0254(?, s32, s32);                       /* extern */
? func_800F0260(?, s32, s32);                       /* extern */
? func_800F029C(?, s32, s32, s32, s32, s32);        /* extern */
? func_800F0318(?, ?);                              /* extern */
? func_8016679C(s32, ?);                            /* extern */
extern ? D_801823F0;
extern ? D_801834D8;
extern s32 D_801C3788;
extern ? D_801C7580;

void func_8011E990(s32 arg0) {
    s16 temp_s1;
    s32 temp_s0_2;
    s32 temp_s0_3;
    s32 temp_s0_4;
    s32 temp_s0_5;
    s32 temp_s1_2;
    s32 temp_s1_3;
    s32 temp_s1_4;
    s32 temp_s2;
    s32 temp_s2_2;
    s32 var_fp;
    u16 temp_s0;
    u8 var_s0;
    u8 var_s1;
    u8 var_s4;
    u8 var_s5;
    void *temp_s3;
    void *var_s6;

    var_fp = D_801C3788;
    if (var_fp != -1) {
        func_800F0318(0x1F800000, 5);
    }
loop_2:
    if (var_fp != -1) {
        temp_s3 = (var_fp * 0x58) + &D_801C7580;
        if (temp_s3->unk24 & 0x1000) {
            var_s6 = (temp_s3->unk46 * 0xC) + ((temp_s3->unk4F * 0xC) + &D_801834D8);
        } else {
            var_s6 = (temp_s3->unk47 * 0xC) + &D_801834D8;
        }
        if (temp_s3->unk24 & 0x8000) {
            func_800F0318(0x1F800000, 5);
            temp_s1 = (s16) temp_s3->unk1E - temp_s3->unk28;
            func_800F0180(0x1F800000, temp_s3->unk26 + (s16) temp_s3->unk1C, temp_s1, (s16) temp_s3->unk20);
            temp_s0 = (s16) temp_s3->unk1C - temp_s3->unk26;
            func_800F0190(0x1F800000, temp_s0, temp_s1, (s16) temp_s3->unk20);
            temp_s1_2 = temp_s3->unk28 + (s16) temp_s3->unk1E;
            func_800F01B0(0x1F800000, temp_s0, temp_s1_2, (s16) temp_s3->unk20);
            func_800F01A0(0x1F800000, temp_s3->unk26 + (s16) temp_s3->unk1C, temp_s1_2, (s16) temp_s3->unk20);
            *(u8 *)0x1F800003 |= 0x80;
            var_s0 = var_s6->unk0;
            var_s4 = var_s6->unk1;
            var_s5 = var_s0;
            var_s1 = var_s4;
            if (temp_s3->unk4D & 1) {
                var_s5 = var_s0 + var_s6->unk2;
            } else {
                var_s0 += var_s6->unk2;
            }
            if (temp_s3->unk4D & 2) {
                var_s1 += var_s6->unk3;
            } else {
                var_s4 += var_s6->unk3;
            }
            if (temp_s3->unk4D & 4) {
                temp_s0_2 = var_s0 & 0xFF;
                temp_s2 = var_s1 & 0xFF;
                func_800F023C(0x1F800000, temp_s0_2, temp_s2);
                temp_s1_3 = var_s4 & 0xFF;
                func_800F0248(0x1F800000, temp_s0_2, temp_s1_3);
                temp_s0_3 = var_s5 & 0xFF;
                func_800F0254(0x1F800000, temp_s0_3, temp_s1_3);
                func_800F0260(0x1F800000, temp_s0_3, temp_s2);
            } else {
                temp_s2_2 = var_s5 & 0xFF;
                temp_s1_4 = var_s1 & 0xFF;
                func_800F023C(0x1F800000, temp_s2_2, temp_s1_4);
                temp_s0_4 = var_s0 & 0xFF;
                func_800F0248(0x1F800000, temp_s0_4, temp_s1_4);
                temp_s0_5 = var_s4 & 0xFF;
                func_800F0254(0x1F800000, temp_s0_4, temp_s0_5);
                func_800F0260(0x1F800000, temp_s2_2, temp_s0_5);
            }
        } else {
            func_800F01CC(0x1F800000, 2);
            func_800F0180(0x1F800000, (s16) temp_s3->unk1C, (s16) temp_s3->unk1E, (s16) temp_s3->unk20);
            func_800F0190(0x1F800000, temp_s3->unk26, (s16) temp_s3->unk28, 0);
            func_800F029C(0x1F800000, temp_s3->unk4D & 0xFF, var_s6->unk0 & 0xFF, var_s6->unk1 & 0xFF, (s32) var_s6->unk2, var_s6->unk3 - temp_s3->unk54);
        }
        func_800F0220(0x1F800000, temp_s3->unk24 & 0x800);
        func_800F012C(0x1F800000, temp_s3->unk2C);
        func_800F01C0(0x1F800000, var_s6->unk4, var_s6->unk6);
        func_800F01E8(0x1F800000, 0, -(s8) temp_s3->unk55);
        func_8016679C(arg0, 0x1F800000);
        var_fp = ((var_fp * 0xC) + &D_801823F0)->unk8;
        goto loop_2;
    }
}
