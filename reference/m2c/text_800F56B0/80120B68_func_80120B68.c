/* m2c reference for func_80120B68 @ 80120B68 (211 words). Generated; not compiled or validated. */
? func_800FEC24(void *);                            /* extern */
? func_800FF868(void *);                            /* extern */
? func_80100A28();                                  /* extern */
? func_80127344();                                  /* extern */
? func_801333BC(? *);                               /* extern */
? func_8013E62C();                                  /* extern */
? func_80140BBC(void *, void *);                    /* extern */
? func_80164D98();                                  /* extern */
? func_801686BC();                                  /* extern */
? func_8016A630();                                  /* extern */
? func_8016BB58();                                  /* extern */
? func_8016BB9C();                                  /* extern */
? func_8016CE68(?);                                 /* extern */
? func_8016F018(?, ?, ?, ?);                        /* extern */
? func_80179548(?, ?, ?);                           /* extern */
? func_801F5420(void *, s16);                       /* extern */
? func_801F5438(void *);                            /* extern */
? func_801F5458(void *);                            /* extern */
? func_801F5478(void *);                            /* extern */
? func_801F54C8(void *);                            /* extern */
? func_801F585C(void *, s16);                       /* extern */
? func_801F592C(void *);                            /* extern */
? func_801F5CF0(void *);                            /* extern */
? func_801F5D68(void *);                            /* extern */
? func_801F66CC(void *);                            /* extern */
? func_801F7578(void *);                            /* extern */
extern ? D_801B2E1C;
extern s32 D_801C37AC;
extern s32 D_801C37B0;
extern s32 D_801C37B4;
extern s32 D_801C37B8;
extern s32 D_801C37C0;
extern s32 D_801C37C4;

void func_80120B68(void *arg0) {
    s16 var_s0;
    s16 var_s0_2;
    s32 var_s1;
    s32 var_s1_2;
    u32 temp_v1;
    void *temp_s0;
    void *temp_s3;

    arg0->unk127E2 = 0;
    temp_s3 = arg0 + 0x7DC;
    func_8016BB9C();
    temp_s0 = arg0 + 0x15CC;
    func_8016BB58();
    func_80100A28();
    func_800FF868(temp_s3);
    func_800FEC24(arg0 + 0x3C44);
    func_800FEC24(temp_s0);
    func_80140BBC(arg0 + 0x10A64, temp_s0);
    func_8016F018(0, 0xFF, 0xFF, 0xFF);
    func_80179548(0x64, 0x7D, 0x96);
    func_8016CE68(0x2000);
    func_801686BC();
    func_8016A630();
    func_80164D98();
    func_8013E62C();
    func_80127344();
    func_801333BC(&D_801B2E1C);
    if (arg0->unk7D8 == 0) {
        D_801C37B0 = 0;
        D_801C37B4 = 0;
        D_801C37B8 = 0;
        D_801C37C0 = 0;
        D_801C37C4 = 1;
        D_801C37AC = 0;
    }
    func_800FF868(temp_s3);
    arg0->unk1267C = 0x3E80;
    temp_v1 = arg0->unk12688;
    switch (temp_v1) {
    case 0:
        var_s0 = 0;
        var_s1 = 0x1136C;
        do {
            func_801F585C(arg0 + var_s1, var_s0);
            var_s0 += 1;
            var_s1 += 0x11C;
        } while (var_s0 < 4);
block_20:
        arg0->unk1267C = 0x960;
        break;
    case 2:
        func_801F5478(arg0 + 0x11AC0);
        func_801F7578(arg0 + 0x11B1C);
        func_801F5CF0(arg0 + 0x11B70);
block_13:
        arg0->unk1267C = 0x5F0;
        break;
    case 3:
        arg0->unk1267C = 0x3E8;
        break;
    case 1:
        arg0->unk1267C = 0xAA0;
        break;
    case 6:
        arg0->unk1267C = 0xFA0;
        break;
    case 5:
        func_801F66CC(arg0 + 0x11C24);
        arg0->unk1267C = 0xE10;
        break;
    case 7:
        func_801F5D68(arg0 + 0x11870);
        func_801F5458(arg0 + 0x118E4);
        goto block_13;
    case 4:
        arg0->unk12680 = 0x1770;
        arg0->unk1267C = 0x1E0;
        break;
    case 8:
        var_s0_2 = 0;
        var_s1_2 = 0x11D50;
        do {
            func_801F5420(arg0 + var_s1_2, var_s0_2);
            var_s0_2 += 1;
            var_s1_2 += 0x70;
        } while (var_s0_2 < 2);
        arg0->unk1267C = 0x7D0;
        break;
    case 9:
        arg0->unk1267C = 0xC80;
        break;
    case 10:
        func_801F592C(arg0 + 0x11E90);
        func_801F5438(arg0 + 0x11EA4);
        goto block_20;
    case 11:
        arg0->unk1267C = 0x1F40;
        func_801F54C8(arg0 + 0x10FF4);
        /* fallthrough */
    default:
        break;
    }
    arg0->unk12754 = (s32) arg0->unk12750;
}
