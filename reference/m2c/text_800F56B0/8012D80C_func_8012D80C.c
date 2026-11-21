/* m2c reference for func_8012D80C @ 8012D80C (155 words). Generated; not compiled or validated. */
s32 func_8016BD24(s32, s32);                        /* extern */
s32 func_8016BD5C(s32);                             /* extern */
extern ? D_8018459C;
extern ? D_8018461C;
static s32 D_801C3314[1] = { 0 };
static s32 D_801C331C = 0;
static s32 D_801C332C = 0;
static s32 D_801C3330 = 0;
static s32 D_801C3334 = 0;
static s32 D_801C3338 = 0;
static s32 D_801C34EC = 0;

void func_8012D80C(void) {
    s32 *temp_s1;
    s32 temp_a1;
    s32 var_s3;
    u8 temp_a0;
    void *temp_s0;
    void *temp_s0_2;
    void *temp_s0_3;
    void *temp_s2;
    void *temp_v1;
    void *temp_v1_2;

    var_s3 = 0;
loop_1:
    temp_a1 = var_s3 << 5;
    if (var_s3 < D_801C331C) {
        temp_s1 = &D_801C3314[var_s3];
        temp_s2 = temp_a1 + &D_8018459C;
        temp_s0 = D_801C34EC + ((*temp_s1 * 0x8B8) + 0xB788);
        temp_v1 = temp_s0 + 0x1E4;
        temp_s2->unkC = (s32) temp_s0->unk1E4;
        temp_s2->unk10 = (s32) temp_v1->unk4;
        temp_v1_2 = temp_s0 + 0x1F0;
        temp_s2->unk14 = (s32) temp_v1->unk8;
        temp_s2->unk18 = (s16) temp_v1_2->unk8;
        temp_s2->unk1A = (s16) temp_s0->unk1F0;
        temp_s2->unk1C = (s16) temp_v1_2->unk4;
        temp_s2->unk1E = (s16) temp_s0->unk10C;
        temp_s0_2 = temp_s0 + 0x264;
        temp_s2->unk4 = func_8016BD24(*temp_s1, temp_a1);
        temp_s2->unk8 = func_8016BD5C(*temp_s1);
        temp_s2->unk0 = 0;
        temp_s2->unk1 = (u8) ((temp_s2->unk1 & 0xFC) | (*temp_s1 & 3));
        temp_a0 = temp_s0_2->unk41;
        temp_s0_3 = temp_s0_2 + (s8) temp_a0;
        temp_s2->unk1 = (u8) ((temp_s2->unk1 & 0xC3) | (((s8) temp_a0 & 0xF) * 4));
        temp_s2->unk1 = (u8) ((temp_s2->unk1 & 0xBF) | ((temp_s0_3->unk43 != 0) << 6));
        temp_s2->unk1 = (u8) ((temp_s2->unk1 & 0x7F) | ((temp_s0_3->unk4C != 0) << 7));
        temp_s2->unk2 = (u8) ((temp_s2->unk2 & 0xFD) | ((*((*temp_s1 * 4) + &D_8018461C) & 1) * 2));
        temp_s2->unk2 = (u8) ((temp_s2->unk2 & 0xFE) | (D_801C332C & 1));
        temp_s2->unk2 = (u8) ((temp_s2->unk2 & 0xF7) | ((D_801C3330 & 1) * 8));
        if (D_801C3334 >= 0) {
            temp_s2->unk2 = (u8) (temp_s2->unk2 | 0x80);
            temp_s2->unk3 = (u8) D_801C3334;
            D_801C3334 = -1;
            var_s3 += 1;
        } else {
            if (D_801C3338 >= 0) {
                temp_s2->unk2 = (u8) (temp_s2->unk2 | 0x40);
                temp_s2->unk3 = (u8) D_801C3338;
                D_801C3338 = -1;
            }
            var_s3 += 1;
        }
        goto loop_1;
    }
}
