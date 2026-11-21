/* m2c reference for func_8017D290 @ 8017D290 (137 words). Generated; not compiled or validated. */
s32 func_801555D0(s32);                             /* extern */
s32 func_80155868(?, s8 *, ? *, s8);                /* extern */
extern s32 D_801B49FC;
static s8 D_800F54B4[0x10] = {
    0x74,
    0x72,
    0x61,
    0x63,
    0x6B,
    0x3D,
    0x25,
    0x64,
    0x2C,
    0x25,
    0x64,
    0xA,
    0,
    0,
    0,
    0,
}; /* const */
static s8 D_800F54C4[0x1C] = {
    0x43,
    0x64,
    0x47,
    0x65,
    0x74,
    0x54,
    0x6F,
    0x63,
    0x32,
    0x3A,
    0x20,
    0x25,
    0x30,
    0x32,
    0x78,
    0x3A,
    0x25,
    0x30,
    0x32,
    0x78,
    0x3A,
    0x30,
    0x30,
    0xA,
    0,
    0,
    0,
    0,
}; /* const */
static s8 D_800F54E0[0x14] = {
    0x43,
    0x64,
    0x47,
    0x65,
    0x74,
    0x54,
    0x6F,
    0x63,
    0x32,
    0x3A,
    0x20,
    0x65,
    0x72,
    0x72,
    0x6F,
    0x72,
    0xA,
    0,
    0,
    0,
}; /* const */

s32 func_8017D290(void *arg1) {
    s8 sp10;
    ? sp18;
    s32 temp_s1;
    s32 temp_s3;
    s32 temp_s6;
    s32 var_s0;
    s32 var_s2;
    s32 var_s2_2;
    s8 temp_a3;
    u8 temp_a1;
    u8 temp_a2;
    void *var_s0_2;
    void *var_s1;

    sp10 = 1;
    temp_s6 = func_801555D0(0);
    if (func_80155868(0x13, NULL, &sp18) != 0) {
        var_s0 = ((sp19 >> 4) * 0xA) + (sp19 & 0xF);
        temp_s3 = ((sp1A >> 4) * 0xA) + (sp1A & 0xF);
        if (D_801B49FC >= 2) {
            printf(D_800F54B4, var_s0, temp_s3);
        }
        sp10 = 0;
        if (func_80155868(0x14, &sp10, &sp18) != 0) {
            arg1->unk0 = sp19;
            arg1->unk2 = 0;
            arg1->unk1 = sp1A;
            var_s2 = 1;
            if (temp_s3 >= var_s0) {
                var_s1 = arg1 + 4;
loop_6:
                temp_a3 = ((var_s0 / 10) * 0x10) + (var_s0 % 10);
                sp10 = temp_a3;
                var_s2 += 1;
                if (func_80155868(0x14, &sp10, &sp18, temp_a3) != 0) {
                    var_s1->unk0 = sp19;
                    var_s0 += 1;
                    var_s1->unk2 = 0;
                    var_s1->unk1 = sp1A;
                    var_s1 += 4;
                    if (temp_s3 < var_s0) {
                        goto block_8;
                    }
                    goto loop_6;
                }
                goto block_13;
            }
block_8:
            temp_s1 = var_s2 - 1;
            if (D_801B49FC >= 2) {
                var_s2_2 = 0;
                if (temp_s1 >= 0) {
                    var_s0_2 = arg1;
                    do {
                        temp_a1 = var_s0_2->unk0;
                        temp_a2 = var_s0_2->unk1;
                        var_s0_2 += 4;
                        var_s2_2 += 1;
                        printf(D_800F54C4, temp_a1, temp_a2);
                    } while (temp_s1 >= var_s2_2);
                }
            }
            func_801555D0(temp_s6);
            return temp_s1;
        }
        goto block_13;
    }
block_13:
    if (D_801B49FC != 0) {
        printf(D_800F54E0);
    }
    func_801555D0(temp_s6);
    return 0;
}
