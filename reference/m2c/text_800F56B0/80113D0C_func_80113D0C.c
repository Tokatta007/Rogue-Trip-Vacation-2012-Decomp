/* m2c reference for func_80113D0C @ 80113D0C (340 words). Generated; not compiled or validated. */
? func_800F012C(?, s32);                            /* extern */
? func_800F013C(?, s32);                            /* extern */
? func_800F0144(?, s32);                            /* extern */
? func_800F014C(?, s32);                            /* extern */
? func_800F0180(?, s16, s16, s16);                  /* extern */
? func_800F0190(?, s16, s16, s16);                  /* extern */
? func_800F01A0(?, s16, s16, s16);                  /* extern */
? func_800F01B0(?, s16, s16, s16);                  /* extern */
? func_800F01C0(?, u16, u16);                       /* extern */
? func_800F01E8(?, ?, s8);                          /* extern */
? func_800F0220(?, ?);                              /* extern */
? func_800F023C(?, u8, u8);                         /* extern */
? func_800F0248(?, s32, u8);                        /* extern */
? func_800F0254(?, s32, s32);                       /* extern */
? func_800F0260(?, u8, s32);                        /* extern */
? func_800F0318(?, ?);                              /* extern */
? func_8011397C(void *, ? *, s16);                  /* extern */
? func_8016679C(s32, ?);                            /* extern */
extern ? D_80180B3C;
extern ? D_801834D8;
extern ? D_801C3FC0;
static s32 D_801C32A8 = 0;

void func_80113D0C(s32 arg0) {
    ? sp10;
    s32 sp80;
    ? *temp_s1;
    ? *var_s0;
    s16 var_fp;
    s16 var_s7;
    s16 var_v1_2;
    s32 temp_a0;
    s32 temp_v0;
    s32 temp_v1;
    s32 var_v0;
    s32 var_v1;
    u8 temp_a1;
    u8 temp_a2;
    u8 temp_v0_2;
    void *temp_s4;
    void *temp_s5;
    void *var_s2;
    void *var_s6;

    sp80 = D_801C32A8;
    if (D_801C32A8 != -1) {
        func_800F0318(0x1F800000, 9);
        func_800F0220(0x1F800000, 1);
        *(u8 *)0x1F800003 |= 0x80;
        do {
            temp_s4 = (sp80 * 0x26C) + &D_801C3FC0;
            func_800F01E8(0x1F800000, 0, (s8) temp_s4->unk262);
            if (!(temp_s4->unk254 & 0x2000)) {
                var_s0 = &sp10;
                temp_v0 = (s8) temp_s4->unk25E >> temp_s4->unk261;
                var_s6 = temp_s4 + ((temp_v0 << 6) + 0xC);
                func_8011397C(var_s6, var_s0, (s16) temp_s4->unk254);
                temp_a0 = ((s8) temp_s4->unk25E >> temp_s4->unk261) - ((s8) temp_s4->unk260 >> temp_s4->unk261);
                var_v1 = temp_a0;
                var_v0 = var_v1 * 2;
                if (var_v1 < 0) {
                    var_v1 = temp_a0 + (temp_s4->unk268 + 1);
                    var_v0 = var_v1 * 2;
                }
                var_s2 = (temp_s4->unk267 * 0xC) + &D_801834D8 + ((var_v0 + var_v1) * 4);
                var_v1_2 = temp_v0 + 1;
                var_s7 = var_v1_2;
                var_fp = 1;
loop_9:
                temp_s5 = var_s6;
                if (var_v1_2 != ((s8) temp_s4->unk25F + 1)) {
                    var_s6 = temp_s5 + 0x40;
                    temp_s1 = var_s0;
                    var_s0 = &sp10 + (var_fp * 0x38);
                    if ((s32) temp_s4->unk268 < var_s7) {
                        var_s7 = 0;
                        var_s6 = temp_s4 + 0xC;
                    }
                    var_fp ^= 1;
                    func_8011397C(var_s6, var_s0, (s16) temp_s4->unk254);
                    func_800F012C(0x1F800000, var_s6->unkC);
                    func_800F0144(0x1F800000, var_s6->unkC);
                    func_800F01C0(0x1F800000, var_s2->unk4, var_s2->unk6);
                    func_800F023C(0x1F800000, var_s2->unk0, var_s2->unk1);
                    func_800F0248(0x1F800000, (var_s2->unk0 + var_s2->unk2) & 0xFF, var_s2->unk1);
                    func_800F0254(0x1F800000, (var_s2->unk0 + var_s2->unk2) & 0xFF, (var_s2->unk1 + var_s2->unk3) & 0xFF);
                    temp_a1 = var_s2->unk0;
                    temp_a2 = var_s2->unk1;
                    temp_v0_2 = var_s2->unk3;
                    var_s2 += 0xC;
                    func_800F0260(0x1F800000, temp_a1, (temp_a2 + temp_v0_2) & 0xFF);
                    func_800F013C(0x1F800000, temp_s5->unkC);
                    func_800F014C(0x1F800000, temp_s5->unkC);
                    func_800F0180(0x1F800000, (s16) var_s0->unk18, (s16) var_s0->unk1A, (s16) var_s0->unk1C);
                    func_800F0190(0x1F800000, (s16) temp_s1->unk18, (s16) temp_s1->unk1A, (s16) temp_s1->unk1C);
                    func_800F01A0(0x1F800000, (s16) var_s0->unk10, (s16) var_s0->unk12, (s16) var_s0->unk14);
                    func_800F01B0(0x1F800000, (s16) temp_s1->unk10, (s16) temp_s1->unk12, (s16) temp_s1->unk14);
                    func_8016679C(arg0, 0x1F800000);
                    func_800F0180(0x1F800000, (s16) var_s0->unk8, (s16) var_s0->unkA, (s16) var_s0->unkC);
                    func_800F0190(0x1F800000, (s16) temp_s1->unk8, (s16) temp_s1->unkA, (s16) temp_s1->unkC);
                    func_800F01A0(0x1F800000, (s16) var_s0->unk20, (s16) var_s0->unk22, (s16) var_s0->unk24);
                    func_800F01B0(0x1F800000, (s16) temp_s1->unk20, (s16) temp_s1->unk22, (s16) temp_s1->unk24);
                    func_8016679C(arg0, 0x1F800000);
                    func_800F0180(0x1F800000, (s16) var_s0->unk30, (s16) var_s0->unk32, (s16) var_s0->unk34);
                    func_800F0190(0x1F800000, (s16) temp_s1->unk30, (s16) temp_s1->unk32, (s16) temp_s1->unk34);
                    func_800F01A0(0x1F800000, (s16) var_s0->unk28, (s16) var_s0->unk2A, (s16) var_s0->unk2C);
                    func_800F01B0(0x1F800000, (s16) temp_s1->unk28, (s16) temp_s1->unk2A, (s16) temp_s1->unk2C);
                    func_8016679C(arg0, 0x1F800000);
                    var_v1_2 = var_s7 + 1;
                    var_s7 = var_v1_2;
                    goto loop_9;
                }
            }
            temp_v1 = ((sp80 * 0xC) + &D_80180B3C)->unk8;
            sp80 = temp_v1;
        } while (temp_v1 != -1);
    }
}
