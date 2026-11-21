/* m2c reference for func_8013E77C @ 8013E77C (359 words). Generated; not compiled or validated. */
void *func_80112DE0(void *, void *, ?, s32 *, s32, s32, s32, s32, s32); /* extern */
void *func_8011D40C(?, ?, void *, ?);               /* extern */
? func_80125490(void *, s32);                       /* extern */
? func_8013E6C8(void *);                            /* extern */
? func_8016F9A8(s32, void *, void *);               /* extern */
? func_8016FC78(void *, void *, s32);               /* extern */
extern ? D_801B439C;
extern ? D_801E3F78;

void func_8013E77C(void *arg0, s32 arg1, u16 arg2, s32 arg3) {
    s32 sp28;
    s32 sp2C;
    s32 sp30;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s3;
    s32 temp_s7;
    s32 var_a0;
    s32 var_s0;
    s32 var_s5;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v1;
    s32 var_v1_2;
    void *temp_a0;
    void *temp_s2;
    void *temp_v0;
    void *var_s1;
    void *var_s4;

    if (arg3 != 0x10) {
        if (arg3 < 0x11) {
            var_a0 = 0;
            if (arg3 != 0xF) {
                var_v1 = 0 * 4;
            } else {
                var_a0 = 9;
                goto block_8;
            }
        } else {
            var_a0 = 0;
            if (arg3 == 0x11) {
                var_a0 = 1;
            }
            goto block_8;
        }
    } else {
        var_a0 = 2;
block_8:
        var_v1 = var_a0 * 4;
    }
    var_s1 = ((var_v1 + var_a0) * 8) + &D_801E3F78;
    var_s4 = (var_a0 * 0xE) + &D_801B439C;
    var_s5 = var_a0;
    temp_s7 = var_s5 + 7;
    if (var_s5 < temp_s7) {
loop_11:
        temp_v0 = var_s1->unk0;
        if (temp_v0 != NULL) {
            if (temp_v0->unk0 != 0) {
                func_8013E6C8(var_s1);
            }
            temp_s2 = var_s1->unk0;
            temp_s2->unkC = 1;
            temp_s2->unk0 = (s32) var_s1->unk4;
            var_s1->unk20 = arg2;
            var_s1->unk22 = (u8) var_s4->unkB;
            var_s1->unk23 = (u8) var_s4->unkC;
            var_s0 = 0x46 - (var_s1->unk22 * 4);
            temp_s3 = 0x708 - (var_s1->unk23 << 7);
            if (arg3 == 0xF) {
                var_s0 *= 2;
            }
            var_s1->unkC = (s32) ((((s32) (var_s4->unk0 << 0x10) >> 0xC) + (rand() & 0x3FF)) - 0x200);
            var_s1->unk10 = (s32) ((((s32) (var_s4->unk2 << 0x10) >> 0xC) + (rand() & 0x3FF)) - 0x200);
            var_v1_2 = var_s1->unkC;
            var_v0 = var_s1->unk10;
            if (var_v1_2 < 0) {
                var_v1_2 = -var_v1_2;
            }
            if (var_v0 < 0) {
                var_v0 = -var_v0;
            }
            if (var_v1_2 >= var_v0) {
                var_v0_2 = var_s1->unkC;
            } else {
                var_v0_2 = var_s1->unk10;
            }
            if (var_v0_2 < 0) {
                var_v0_2 = -var_v0_2;
            }
            temp_a0 = var_s1 + 0xC;
            var_s1->unk14 = (s32) ((((s32) (var_s4->unk4 << 0x10) >> 0xC) + 0x5DC) - var_v0_2);
            func_8016FC78(temp_a0, temp_a0, var_s0);
            func_80125490(temp_s2 + 0x28, arg1);
            func_8016F9A8(arg1, var_s4, temp_s2 + 0x1C);
            temp_s2->unk1C = (s32) (temp_s2->unk1C + arg0->unk0);
            temp_s2->unk20 = (s32) (temp_s2->unk20 + arg0->unk4);
            temp_s2->unk24 = (s32) (temp_s2->unk24 + arg0->unk8);
            temp_s0 = temp_s3 >> 1;
            var_s1->unk18 = (s16) ((rand() % temp_s3) - temp_s0);
            var_s1->unk1A = (s16) ((rand() % temp_s3) - temp_s0);
            var_s1->unk1C = (s16) ((rand() % temp_s3) - temp_s0);
            temp_s0_2 = rand() & 3;
            switch (temp_s0_2) {                    /* irregular */
            case 0:
                var_s1->unk8 = func_8011D40C(0, 0x1F4, temp_s2, 0x44);
                var_s1->unk8->unk2C = (u8) var_s4->unk8;
                var_s1->unk8->unk2D = (u8) var_s4->unk9;
                var_s1->unk8->unk2E = (u8) var_s4->unkA;
                var_s1->unk8->unk32 = 0;
                var_s1->unk8->unk34 = 0xA;
                var_s1->unk8->unk35 = 7;
                var_s1->unk8->unk36 = 0;
                var_s1->unk8->unk37 = 2;
                var_s1->unk8->unk38 = 0;
block_35:
                var_s1->unk24 = 1;
                var_s5 += 1;
                break;
            case 1:
                var_s1->unk24 = 0;
                var_s5 += 1;
                break;
            case 2:
                sp28 = (s32) (s8) var_s4->unk8;
                sp2C = (s32) (s8) var_s4->unk9;
                sp30 = (s32) (s8) var_s4->unkA;
                var_s1->unk8 = func_80112DE0(var_s1->unk0 + 0x1C, var_s1->unk0 + 0x28, 0, &sp28, 8, 0xA, 4, 4, 0x1F4);
                var_s1->unk24 = temp_s0_2;
                var_s5 += 1;
                break;
            default:
                var_s1->unk8 = func_8011D40C(0, 0x1F4, temp_s2, 0x14);
                var_s1->unk8->unk2C = (u8) var_s4->unk8;
                var_s1->unk8->unk2D = (u8) var_s4->unk9;
                var_s1->unk8->unk2E = (u8) var_s4->unkA;
                var_s1->unk8->unk32 = 0;
                var_s1->unk8->unkC = 3;
                var_s1->unk8->unk10 = 3;
                var_s1->unk8->unk14 = 3;
                var_s1->unk8->unk33 = 3;
                var_s1->unk8->unk34 = 0x11;
                var_s1->unk8->unk35 = 3;
                var_s1->unk8->unk36 = 0;
                var_s1->unk8->unk37 = 1;
                var_s1->unk8->unk38 = 1;
                goto block_35;
            }
            var_s1 += 0x28;
            var_s4 += 0xE;
            if (var_s5 < temp_s7) {
                goto loop_11;
            }
        }
    }
}
