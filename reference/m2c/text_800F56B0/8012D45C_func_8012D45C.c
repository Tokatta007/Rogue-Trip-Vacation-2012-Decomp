/* m2c reference for func_8012D45C @ 8012D45C (204 words). Generated; not compiled or validated. */
void *func_80124CBC(s32);                           /* extern */
? func_8012A154(s32, ?, ?, ?, s32, s32);            /* extern */
? func_8012BD20(void *, s32, s32);                  /* extern */
s32 func_8012D290(? *, s32);                        /* extern */
? func_8012DAC4(s32, s32);                          /* extern */
? func_8012EB08(u8);                                /* extern */
? func_80132CF4(?, ?);                              /* extern */
? func_8016BCB4(s32, s32);                          /* extern */
? func_8016BCEC(s32, s32);                          /* extern */
extern ? D_801845DC;
static s32 D_801C3304 = 0;
static s32 D_801C3320 = 0;
static s32 D_801C332C = 0;
static s32 D_801C3330 = 0;
static s32 D_801C34EC = 0;
static s32 D_801C34F0 = 0;

s32 func_8012D45C(void) {
    s32 sp18;
    s32 sp1C;
    s32 sp20;
    ? *var_s0;
    s32 var_s2;
    s32 var_s4;
    s32 var_v1;
    void *temp_s1;
    void *temp_s2;
    void *temp_v1;
    void *var_s3;

    var_s2 = 0;
    var_s0 = &D_801845DC;
    var_s4 = 0;
    if (func_8012D290(&D_801845DC, D_801C3320 << 5) != 0) {
        var_s3 = &D_801845DC + 3;
loop_2:
        if (var_s4 < D_801C3320) {
            temp_s1 = D_801C34EC + (((var_s0->unk1 & 3) * 0x8B8) + 0xB788);
            temp_s1->unk1E4 = (s32) var_s0->unkC;
            temp_v1 = var_s0 + 0xC;
            temp_s1->unk1E8 = (s32) temp_v1->unk4;
            temp_s1->unk1EC = (s32) temp_v1->unk8;
            sp18 = (s32) (s16) var_s0->unk1A;
            sp1C = (s32) (s16) var_s0->unk1C;
            sp20 = (s32) (s16) var_s0->unk18;
            temp_s1->unk1F0 = sp18;
            temp_s1->unk1F4 = (s32) sp18.unk4;
            temp_s1->unk1F8 = (s32) sp18.unk8;
            temp_s2 = temp_s1 + 0x264;
            if (temp_s1->unk10C > 0) {
                temp_s1->unk10C = (s32) var_s3->unk1B;
                var_v1 = 0;
                if ((var_s0->unk1E << 0x10) <= 0) {
                    var_v1 = temp_s1->unk8C == 0;
                }
                if (var_v1 != 0) {
                    func_80124CBC(D_801C34EC)->unkC = (void *) (temp_s1 + 0x1E4);
                    func_8012A154(D_801C34F0, 0, 1, 0x1E, temp_s1->unk7C4, 0);
                }
            } else if ((s16) var_s0->unk1E == temp_s1->unk110) {
                temp_s1->unk10C = (s32) var_s3->unk1B;
            }
            func_8016BCB4(var_s0->unk4, var_s0->unk1 & 3);
            func_8016BCEC(var_s0->unk8, var_s0->unk1 & 3);
            temp_s2->unk41 = (s8) (((u8) var_s0->unk1 >> 2) & 0xF);
            func_8012BD20(temp_s2, ((u8) var_s0->unk1 >> 2) & 0xF, ((u8) var_s0->unk1 >> 6) & 1);
            (temp_s2 + (((u8) var_s0->unk1 >> 2) & 0xF))->unk4C = (s8) ((u8) var_s0->unk1 >> 7);
            func_8012DAC4(var_s0->unk1 & 3, ((u8) var_s0->unk2 >> 1) & 1);
            D_801C332C = var_s0->unk2 & 1;
            var_s2 = 1;
            D_801C3330 = ((u8) var_s0->unk2 >> 3) & 1;
            if (var_s0->unk0 & 0x400000) {
                func_80124CBC(D_801C34EC)->unkC = (void *) (temp_s1 + 0x1E4);
                func_8012A154(D_801C34F0, 0, 1, 0x1E, (s32) var_s0->unk3, 0);
            }
            if (var_s0->unk0 & 0x800000) {
                func_8012EB08(var_s0->unk3);
            }
            var_s3 += 0x20;
            var_s0 += 0x20;
            var_s4 += 1;
            goto loop_2;
        }
    }
    if (D_801C3304 >= 4) {
        func_80132CF4(9, 0);
    }
    return var_s2;
}
