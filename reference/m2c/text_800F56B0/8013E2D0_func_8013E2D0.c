/* m2c reference for func_8013E2D0 @ 8013E2D0 (164 words). Generated; not compiled or validated. */
? func_800F012C(?, ?);                              /* extern */
? func_800F0154(?, s32, void *);                    /* extern */
? func_800F01E8(?, ?, ?);                           /* extern */
? func_800F0220(?, ?);                              /* extern */
? func_800F0318(?, ?);                              /* extern */
? func_8016679C(s32, ?);                            /* extern */
? func_8016B504(? *, s32, ? *);                     /* extern */
? func_8016B574(? *, s32, s32 *);                   /* extern */
s32 func_80178A1C();                                /* extern */
extern s32 D_801C3854;
extern ? D_801C3858;
extern ? D_801DFF60;
extern ? D_801E24E0;
extern ? D_801E2E40;
extern ? D_801E37A0;
extern ? D_801E3C50;
static void *D_801C34EC = NULL;

void func_8013E2D0(s32 arg0) {
    ? *var_s0;
    ? var_a1;
    s16 *temp_v0;
    s16 temp_a0_2;
    s16 var_s5;
    s32 temp_a1;
    s32 temp_v1_2;
    s32 var_s1;
    s32 var_s3;
    s32 var_v0;
    u16 *temp_a0;
    u16 temp_v1;

    func_800F0318(0x1F800000, 3);
    func_800F0220(0x1F800000, 1);
    func_800F01E8(0x1F800000, 0, -2);
    var_s5 = -1;
    var_s3 = D_801C3854;
loop_1:
    if (var_s3 != -1) {
        temp_a1 = var_s3 * 2;
        temp_a0 = temp_a1 + &D_801E37A0;
        temp_v1 = *temp_a0 + func_80178A1C();
        *temp_a0 = temp_v1;
        if ((s16) temp_v1 >= 0x1E1) {
            func_8016B574(&D_801E24E0, var_s3, &D_801C3854);
            func_8016B504(&D_801E2E40, var_s3, &D_801C3858);
            var_v0 = var_s3 * 2;
        } else {
            temp_v0 = temp_a1 + &D_801E3C50;
            temp_a0_2 = *temp_v0;
            var_s1 = 0;
            if (temp_a0_2 != var_s5) {
                var_s5 = (s16) (u16) *temp_v0;
                switch (temp_a0_2) {
                default:
                    var_a1 = 0xF0F0F;
                    break;
                case 1:
                    temp_v1_2 = D_801C34EC->unk12688;
                    if (temp_v1_2 != 2) {
                        if ((temp_v1_2 < 3) || (temp_v1_2 >= 8) || (temp_v1_2 < 6)) {
                            var_a1 = 0x11142A;
                        } else {
                            var_a1 = 0xF0F40;
                        }
                    } else {
                        var_a1 = 0x152850;
                    }
                    break;
                case 3:
                    var_a1 = 0x527C94;
                    break;
                case 5:
                    var_a1 = 0x527C94;
                    if (D_801C34EC->unk12688 == 0xA) {
                        var_a1 = 0x264064;
                    }
                    break;
                case 10:
                    var_a1 = 0xAAAACC;
                    break;
                case 11:
                    var_a1 = 0x234D4F;
                    break;
                case 12:
                    var_a1 = 0x505050;
                    break;
                }
                func_800F012C(0x1F800000, var_a1);
                var_s1 = 0;
            }
            var_s0 = &D_801DFF60;
            do {
                func_800F0154(0x1F800000, var_s1, (var_s3 * 0x30) + var_s0);
                var_s1 += 1;
                var_s0 += 0xC;
            } while (var_s1 < 4);
            func_8016679C(arg0, 0x1F800000);
            var_v0 = var_s3 * 2;
        }
        var_s3 = (((var_v0 + var_s3) * 4) + &D_801E24E0)->unk8;
        goto loop_1;
    }
}
