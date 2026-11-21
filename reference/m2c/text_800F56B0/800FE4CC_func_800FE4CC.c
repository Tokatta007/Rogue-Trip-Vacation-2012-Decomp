/* m2c reference for func_800FE4CC @ 800FE4CC (168 words). Generated; not compiled or validated. */
s32 func_800FE76C(void *, s32);                     /* extern */
? func_8013C824(s32, ?, void *, ?);                 /* extern */
? func_8015A05C(u16 *, s32);                        /* extern */
s16 func_80176C1C(s16, s32, ?);                     /* extern */
extern ? D_801C3768;
extern ? D_801C3770;
extern ? D_801C3D08;
extern ? D_801C3D98;
extern ? D_801C3E28;
extern ? D_801C3EB8;
static s32 D_801C34F4 = 0;

void func_800FE4CC(void *arg0) {
    u16 sp10;
    s16 sp12;
    u16 sp14;
    s16 var_s1;
    s32 *temp_v0;
    s32 temp_a0;
    s32 temp_a1;
    s32 var_a0;
    s32 var_s3;
    s32 var_s6;
    u16 *temp_s2;
    u16 temp_s0;
    void *var_s5;

    temp_v0 = *((arg0->unk78 * 4) + (((s32) arg0->unk7C0 >> 4) * 8) + &D_801C3D08);
    var_a0 = 0;
    if ((temp_v0 != NULL) && (*temp_v0 & 0x7F000000)) {
        func_8013C824(D_801C34F4, 0xA, arg0 + 0x1E4, 0);
        var_a0 = 0;
    }
    temp_a1 = (s32) arg0->unk7C0 >> 4;
    if (arg0->unk7C0 == 0xE0) {
        var_a0 = (s16) arg0->unk160 == 0x40;
    }
    if (var_a0 != 0) {
        var_s5 = *((arg0->unk78 * 4) + &D_801C3768);
        var_s6 = *((arg0->unk78 * 4) + &D_801C3770);
    } else {
        temp_a0 = temp_a1 * 8;
        var_s5 = *((arg0->unk78 * 4) + temp_a0 + &D_801C3D98);
        var_s6 = *((arg0->unk78 * 4) + temp_a0 + &D_801C3E28);
    }
    temp_s2 = (temp_a1 * 4) + ((arg0->unk78 * 2) + &D_801C3EB8);
    if (var_s6 != 0) {
        var_s3 = 0;
        if (var_s5 != NULL) {
            temp_s0 = *temp_s2;
            var_s1 = -0x38E;
            if (func_800FE76C(arg0, temp_a1) != 0) {
                if (arg0->unk7C0 == 0xE0) {
                    var_s1 = -0x2AA;
                }
                if ((s16) temp_s0 != var_s1) {
                    *temp_s2 = func_80176C1C((s16) temp_s0, var_s1 + 0xE3, 9);
                    var_s3 = 1;
                    if ((s16) temp_s0 < var_s1) {
                        *temp_s2 = var_s1;
                        var_s3 = 1;
                    }
                }
            } else if ((s16) temp_s0 != 0) {
                *temp_s2 = func_80176C1C((s16) temp_s0, 0x155, 9);
                var_s3 = 1;
                if ((s16) temp_s0 > 0) {
                    *temp_s2 = 0;
                    var_s3 = 1;
                }
            }
            if (var_s3 != 0) {
                if ((u16) *temp_s2 != 0) {
                    var_s5->unk4 = 1;
                    sp12 = 0;
                } else {
                    var_s5->unk4 = 0;
                    sp12 = 0;
                }
                if (arg0->unk7C0 == 0xE0) {
                    sp10 = 0;
                    sp14 = 0;
                    sp12 = -(s16) (u16) *temp_s2;
                } else if (arg0->unk7C0 == 0x40) {
                    sp14 = 0;
                    sp10 = (u16) *temp_s2;
                } else {
                    sp10 = 0;
                    sp14 = (u16) *temp_s2;
                }
                func_8015A05C(&sp10, var_s6 + 4);
            }
        }
    }
}
