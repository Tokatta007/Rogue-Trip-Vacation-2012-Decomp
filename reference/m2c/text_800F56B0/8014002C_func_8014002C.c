/* m2c reference for func_8014002C @ 8014002C (262 words). Generated; not compiled or validated. */
s32 func_8015A000(s32);                             /* extern */
s32 func_8016FEA4(void *, void *);                  /* extern */

void func_8014002C(void *arg0) {
    s32 sp10;
    s32 sp14;
    s32 sp18;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a1;
    s32 temp_s5;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_a0;
    s32 var_s1;
    s32 var_s4;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_4;
    s32 var_v1;
    s8 var_s5;
    s8 var_v0_3;
    u16 temp_v0_3;
    u16 temp_v1;
    u16 var_v0_5;
    u16 var_v0_6;
    void *temp_s1;
    void *temp_s2;
    void *var_s0;
    void *var_s0_2;
    void *var_s2;
    void *var_s3;

    temp_s1 = arg0 + 0x10;
    if (arg0->unkC == 0) {
        var_s0 = NULL;
        var_v0 = 0x280;
    } else {
        var_s0 = arg0->unkC + 0x1C;
        var_v0 = func_8016FEA4(temp_s1, var_s0);
    }
    temp_s5 = var_v0 >> 7;
    if (temp_s5 < 2) {
        var_s5 = 2;
        goto block_7;
    }
    var_s5 = 1 << (0x1F - func_8015A000(temp_s5));
    var_v0_2 = var_s5 * 8;
    if (var_s5 >= 0x11) {
        var_s5 = 0x10;
block_7:
        var_v0_2 = var_s5 * 8;
    }
    temp_s2 = arg0 + (var_v0_2 + 0x1C);
    arg0->unkB0 = var_s5;
    if (arg0->unkAF == 0x11) {
        var_v0_3 = (rand() & 3) + 1;
    } else {
        var_v0_3 = 1;
    }
    arg0->unkB1 = var_v0_3;
    temp_a0 = 0x1F - func_8015A000((s32) var_s5);
    if (var_s0 != NULL) {
        sp10 = (s32) (var_s0->unk0 - arg0->unk10) >> 2;
        sp14 = (s32) (var_s0->unk4 - temp_s1->unk4) >> 2;
        sp18 = (s32) (var_s0->unk8 - temp_s1->unk8) >> 2;
        arg0->unkA4 = (s16) ((s32) (var_s0->unk0 - arg0->unk10) >> temp_a0);
        arg0->unkA6 = (s16) ((s32) (var_s0->unk4 - temp_s1->unk4) >> temp_a0);
        var_v0_4 = (s32) (var_s0->unk8 - temp_s1->unk8) >> temp_a0;
    } else {
        sp10 = (rand() & 0xFF) - 0x7F;
        temp_v0 = (rand() & 0xFF) - 0x7F;
        sp14 = temp_v0;
        temp_v0_2 = rand() & 0x7F;
        sp18 = temp_v0_2;
        arg0->unkA4 = (s16) (sp10 >> 1);
        arg0->unkA6 = (s16) (temp_v0 >> 1);
        var_v0_4 = temp_v0_2 >> 1;
    }
    arg0->unkA8 = (s16) var_v0_4;
    temp_s2->unk4 = 0U;
    temp_s2->unk2 = (u16) temp_s2->unk4;
    var_s1 = var_s5 >> 1;
    temp_s2->unk0 = (u16) temp_s2->unk2;
    if (var_s1 != 0) {
        do {
            var_s3 = arg0 + 0x1C;
            var_s0_2 = arg0 + ((var_s1 * 8) + 0x1C);
            var_s2 = arg0 + ((var_s1 * 0x10) + 0x1C);
            var_s4 = var_s1;
            if (var_s1 < var_s5) {
                do {
                    if (rand() & 7) {
                        if (rand() & 1) {
                            var_s0_2->unk0 = (s16) -(s16) (u16) sp14;
                            var_v0_5 = (u16) sp10;
                        } else {
                            var_s0_2->unk0 = (s16) (u16) sp14;
                            var_v0_5 = (u16) -(s32) (u16) sp10;
                        }
                        var_s0_2->unk2 = var_v0_5;
                        if (rand() & 1) {
                            var_s0_2->unk0 = (s16) ((s32) ((u16) var_s0_2->unk0 << 0x10) >> 0x11);
                            var_s0_2->unk2 = (u16) ((s32) (var_s0_2->unk2 << 0x10) >> 0x11);
                        }
                    } else {
                        var_s0_2->unk2 = 0U;
                        var_s0_2->unk0 = (s16) var_s0_2->unk2;
                    }
                    temp_a1 = rand();
                    var_v1 = sp14;
                    var_a0 = sp10;
                    if (sp10 < 0) {
                        var_a0 = -var_a0;
                    }
                    if (var_v1 < 0) {
                        var_v1 = -var_v1;
                    }
                    var_v0_6 = temp_a1 & var_v1;
                    if (var_a0 >= var_v1) {
                        var_v0_6 = temp_a1 & var_a0;
                    }
                    var_s4 += var_s1 * 2;
                    temp_a0_2 = var_s1 * 0x10;
                    var_s0_2->unk4 = var_v0_6;
                    var_s0_2->unk0 = (s16) ((u16) var_s0_2->unk0 + ((s32) ((s16) var_s3->unk0 + (s16) var_s2->unk0) >> 1));
                    var_s0_2->unk2 = (u16) (var_s0_2->unk2 + ((s32) ((s16) var_s3->unk2 + (s16) var_s2->unk2) >> 1));
                    temp_v1 = var_s3->unk4;
                    var_s3 = var_s2;
                    temp_v0_3 = var_s2->unk4;
                    var_s2 += temp_a0_2;
                    var_s0_2->unk4 = (u16) (var_s0_2->unk4 + ((s32) ((s16) temp_v1 + (s16) temp_v0_3) >> 1));
                    var_s0_2 += temp_a0_2;
                } while (var_s4 < var_s5);
            }
            var_s1 = var_s1 >> 1;
            sp10 = sp10 >> 1;
            sp18 = sp18 >> 1;
            sp14 = sp14 >> 1;
        } while (var_s1 != 0);
    }
}
