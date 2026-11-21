/* m2c reference for func_8011D8AC @ 8011D8AC (110 words). Generated; not compiled or validated. */
s32 func_8011BC6C(VECTOR *, s32 *, s32, ?, s32, s32); /* extern */
? func_8011D3A4(s32, ?);                            /* extern */
? func_80124FC8(void *, VECTOR *, VECTOR *);        /* extern */
? func_8013CAE0(s32, ?, VECTOR *);                  /* extern */
? func_8013CDD4(s32, VECTOR *);                     /* extern */
s32 func_80178A70();                                /* extern */
static s32 D_801C34F4 = 0;

void func_8011D8AC(void *arg0, MATRIX *arg1) {
    s32 sp18;
    s32 sp1C;
    s32 sp20;
    VECTOR sp28;
    ? var_s1;
    s32 temp_s0;
    s32 var_s2;
    u32 temp_v1;

    if (func_80178A70() & 1) {
        sp18 = 0x600 - (rand() & 0xC00);
        sp1C = 0xAF0;
        sp20 = 0;
        mathMulTransVec(arg1, (VECTOR *) &sp18, &sp28);
        func_80124FC8(arg0, &sp28, &sp28);
        sp28.vz = arg0->unk8 + 0xA0;
        sp18 = 0x40 - (rand() & 0x7F);
        sp1C = 0x40 - (rand() & 0x7F);
        sp20 = (rand() & 0x1F) + 0x50;
        temp_s0 = rand() & 0xF;
        var_s2 = temp_s0 + 0x41;
        temp_v1 = rand() & 7;
        switch (temp_v1) {
        case 0:
            var_s1 = 0x17;
            break;
        case 1:
            var_s1 = 0x15;
            break;
        case 2:
            var_s1 = 0x16;
            break;
        case 3:
            var_s1 = 0x14;
            break;
        case 4:
            var_s1 = 0x1F;
            break;
        case 5:
            var_s1 = 0xE;
            var_s2 -= 0x37;
            break;
        case 6:
            var_s1 = 6;
            var_s2 -= 0x37;
            break;
        default:
            var_s1 = 0xF;
            var_s2 = temp_s0 + 0xA;
            break;
        }
        if (rand() & 1) {
            func_8013CAE0(D_801C34F4, 0xE, &sp28);
        }
        func_8013CDD4(D_801C34F4, &sp28);
        func_8011D3A4(func_8011BC6C(&sp28, &sp18, var_s2 & 0xFFFF, var_s1, 0, 0), 0);
    }
}
