/* m2c reference for func_80148A00 @ 80148A00 (236 words). Generated; not compiled or validated. */
? func_8011BC6C(void *, s32 *, ?, ?, s32, s32);     /* extern */
? func_80128E80(void *, void *);                    /* extern */
? func_8013BDCC(s32, ?, ?, ? *);                    /* extern */
? func_801640EC(void *);                            /* extern */
extern ? D_801C3100;
extern ? D_801C31CC;
static s32 D_801C34F4 = 0;

void func_80148A00(void *arg0, s32 arg1) {
    s32 sp18;
    s32 sp1C;
    s32 sp20;
    s16 temp_s3;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s1;
    s32 var_s3;
    s32 var_v0;
    u16 var_v0_2;
    void *temp_a2;
    void *temp_v0;
    void *temp_v1;
    void *var_s2;

    if (arg0->unk95 != 0) {
        arg0->unk95 = 0U;
        arg0->unk81 = 1;
        arg0->unk98 = 0;
        arg0->unk97 = 0;
        if (arg0->unkF4 != 0) {
            switch (arg1) {
            case 3:
                var_s3 = 5;
                break;
            case 1:
                var_s3 = 0xA;
                if (arg0->unk7C0 == 0xF0) {
                    var_s3 = 0x12;
                }
                if (arg0->unk1A2 != 0) {
                    var_s3 += (arg0->unk1A2 & 0xFF) / 10;
                }
                sp18 = arg0->unk244;
                sp1C = arg0->unk248;
                sp20 = arg0->unk24C + 0x12;
                func_8011BC6C(arg0 + 0x544, &sp18, 5, 0x27, 0, 0);
                func_8011BC6C(arg0 + 0x598, &sp18, 5, 0x27, 0, 0);
                func_8011BC6C(arg0 + 0x5EC, &sp18, 5, 0x27, 0, 0);
                func_8011BC6C(arg0 + 0x640, &sp18, 5, 0x27, 0, 0);
                D_801C31CC.unk8 = 6;
                temp_a2 = arg0 + 0x1E4;
                D_801C3100.unk0 = (s32) arg0->unk1E4;
                D_801C3100.unk4 = (s32) temp_a2->unk4;
                D_801C31CC.unk0 = &D_801C3100;
                D_801C3100.unk8 = (s32) temp_a2->unk8;
                func_8013BDCC(D_801C34F4, 0, 0, &D_801C31CC);
                break;
            case 5:
                var_s3 = 0xA;
                break;
            case 7:
                var_s3 = 2;
block_13:
                arg0->unkA5 = 1;
                break;
            case 8:
                var_s3 = 5;
                goto block_13;
            case 4:
            case 6:
                var_s3 = 0xD;
                break;
            case 2:
            case 9:
                var_s3 = 2;
                break;
            default:
                var_s3 = 0;
                break;
            }
            var_s0 = 0;
            var_s2 = arg0;
            var_s1 = 0x544;
            temp_s3 = var_s3 + (s16) arg0->unk57A;
            do {
                func_80128E80(arg0, arg0 + var_s1);
                var_s2->unk57A = temp_s3;
                var_s2 += 0x54;
                var_s0 += 1;
                var_s1 += 0x54;
            } while (var_s0 < 2);
            if (arg1 >= 3) {
                if (arg0->unk20C >= 0) {
                    var_s0_2 = (rand() & 1) == 0;
                    goto block_25;
                }
                var_s0_2 = 3;
                var_v0 = 3 * 4;
                if (rand() & 1) {
                    var_s0_2 = 2;
block_25:
                    var_v0 = var_s0_2 * 4;
                }
                temp_v0 = arg0 + ((((var_v0 + var_s0_2) * 4) + var_s0_2) * 4);
                temp_v0->unk578 = (u16) (temp_v0->unk578 + 1);
            }
            arg0->unk188 = (u16) arg0->unk1F4;
            temp_s0 = (rand() & 0x1F) + 0x66;
            if (arg0->unk21C != 0) {
                arg0->unk188 = (u16) (arg0->unk188 + (temp_s0 + ((s32) (temp_s0 * 2 * arg0->unk21C) / (s32) arg0->unkE0)));
            } else {
                temp_s0_2 = temp_s0 >> 1;
                if (rand() & 1) {
                    var_v0_2 = arg0->unk188 - temp_s0_2;
                } else {
                    var_v0_2 = arg0->unk188 + temp_s0_2;
                }
                arg0->unk188 = var_v0_2;
            }
            func_801640EC(arg0 + 0x188);
            arg0->unk1EC = (s32) (arg0->unk1EC + 0x20);
            temp_v1 = arg0->unk738;
            temp_v1->unk24 = (s32) (temp_v1->unk24 + 0x20);
        }
    }
}
