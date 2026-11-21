/* m2c reference for func_8013D7BC @ 8013D7BC (215 words). Generated; not compiled or validated. */
? func_80124FC8(VECTOR *, VECTOR *, VECTOR *);      /* extern */
? func_80125050(VECTOR *, VECTOR *, void *);        /* extern */
s32 func_8013DB18(void *, VECTOR *);                /* extern */
? func_8013DBB4(void *, VECTOR *, u16);             /* extern */
s32 func_8013DD50(void *, VECTOR *);                /* extern */
? func_8016B504(? *, s32, s32 *);                   /* extern */
? func_8016B574(? *, s32, s32 *);                   /* extern */
extern s32 D_801C3854;
extern s32 D_801C3858;
extern ? D_801DFF60;
extern ? D_801DFF84;
extern ? D_801E24E0;
extern ? D_801E2E40;
extern ? D_801E37A0;
extern ? D_801E3930;
extern ? D_801E3AC0;
extern ? D_801E3C50;
extern ? D_801E3DE0;
extern ? D_801E3EB0;

void func_8013D7BC(void *arg0, s32 arg1) {
    s32 sp10;
    s32 sp14;
    s32 sp18;
    VECTOR sp20;
    VECTOR *temp_s5;
    s16 temp_v1;
    s16 var_a1;
    s32 *temp_s2;
    s32 *temp_s2_2;
    s32 temp_s1;
    s32 temp_s1_2;
    s32 temp_v1_2;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a2;
    s32 var_s0;
    s32 var_s3;
    s32 var_s3_2;

    var_s0 = 0;
    var_a0 = 0;
    temp_s5 = arg0 + ((arg1 * 0x54) + 0x544);
    if (arg0->unk829 != 0) {
        var_a0 = func_8013DB18(arg0, temp_s5) != 0;
    }
    if (var_a0 != 0) {
        if ((s16) arg0->unk738->unk18 != arg0->unk1F8) {
            mathMulTransVec(arg0->unk738 + 0x28, temp_s5 + 0x24, temp_s5);
            func_80124FC8(arg0->unk738 + 0x1C, temp_s5, temp_s5);
        }
        if (!(temp_s5->unk48 & 0x8000)) {
            var_s0 = func_8013DD50(arg0, temp_s5);
        }
        if (var_s0 == 0) {
            var_s3 = D_801C3858;
            if (var_s3 == -1) {
                var_a2 = 0;
                var_s3_2 = D_801C3854;
                var_a1 = 0;
                if (var_s3_2 != -1) {
                    var_a0_2 = var_s3_2 * 2;
                    do {
                        temp_v1 = *(var_a0_2 + &D_801E37A0);
                        if (var_a1 < temp_v1) {
                            var_a1 = temp_v1;
                            var_a2 = var_s3_2;
                        }
                        var_s3_2 = (((var_a0_2 + var_s3_2) * 4) + &D_801E24E0)->unk8;
                        var_a0_2 = var_s3_2 * 2;
                    } while (var_s3_2 != -1);
                }
                var_s3 = var_a2;
            } else {
                func_8016B574(&D_801E2E40, var_s3, &D_801C3858);
                func_8016B504(&D_801E24E0, var_s3, &D_801C3854);
            }
            if (arg0->unk20C == 0) {
                func_8013DBB4(arg0, temp_s5, (u16) var_s3);
            } else {
                sp14 = 0;
                sp18 = 0;
                sp10 = (s32) (arg0->unk170 << 0x10) >> 0x11;
                mathMulTransVec(arg0 + 0x1A4, (VECTOR *) &sp10, &sp20);
                *(var_s3 + &D_801E3EB0) = 0;
                if (arg0->unk20C > 0) {
                    temp_s1 = var_s3 * 0x30;
                    func_80125050(&sp20, temp_s5, temp_s1 + &D_801DFF60);
                    func_80124FC8(&sp20, temp_s5, temp_s1 + (&D_801DFF60 + 0xC));
                    temp_s2 = &temp_s5->pad;
                    func_80124FC8(&sp20, (VECTOR *) temp_s2, temp_s1 + (&D_801DFF60 + 0x24));
                    func_80125050(&sp20, (VECTOR *) temp_s2, temp_s1 + (&D_801DFF60 + 0x18));
                    *(var_s3 + &D_801E3DE0) = 1;
                } else {
                    temp_s1_2 = var_s3 * 0x30;
                    func_80125050(&sp20, temp_s5, temp_s1_2 + &D_801DFF84);
                    func_80124FC8(&sp20, temp_s5, temp_s1_2 + (&D_801DFF84 - 0xC));
                    temp_s2_2 = &temp_s5->pad;
                    func_80124FC8(&sp20, (VECTOR *) temp_s2_2, temp_s1_2 + (&D_801DFF84 - 0x18));
                    func_80125050(&sp20, (VECTOR *) temp_s2_2, temp_s1_2 + (&D_801DFF84 - 0x24));
                    *(var_s3 + &D_801E3DE0) = 0;
                }
                *((var_s3 * 2) + &D_801E3930) = arg0->unk738->unk18;
            }
            temp_v1_2 = var_s3 * 2;
            temp_s5->unk48 = (u16) var_s3;
            *(temp_v1_2 + &D_801E3C50) = temp_s5->unk4A;
            *(temp_v1_2 + &D_801E37A0) = 0;
            *(temp_v1_2 + &D_801E3AC0) = 0;
        }
    }
}
