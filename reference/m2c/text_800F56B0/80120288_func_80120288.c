/* m2c reference for func_80120288 @ 80120288 (478 words). Generated; not compiled or validated. */
? func_800FD594();                                  /* extern */
? func_800FEC08(void *, void *, void *);            /* extern */
? func_80100FBC(void *);                            /* extern */
? func_80101144(void *, ?);                         /* extern */
? func_801011E4(void *, ?, ?, ?);                   /* extern */
? func_801123F8();                                  /* extern */
? func_80119E24(void *);                            /* extern */
? func_8011A1D4();                                  /* extern */
? func_8011B0B0();                                  /* extern */
? func_8011FECC(void *, s32, s32);                  /* extern */
? func_80120A00(void *);                            /* extern */
? func_80120A48(void *);                            /* extern */
? func_80120AD8(void *);                            /* extern */
? func_80125B64(void *);                            /* extern */
? func_8012700C();                                  /* extern */
? func_80129740(void *);                            /* extern */
? func_8012A088(s32);                               /* extern */
? func_8012E3AC();                                  /* extern */
s32 func_80132ED4();                                /* extern */
? func_80132FA4();                                  /* extern */
s32 func_80133034();                                /* extern */
? func_8013304C(?);                                 /* extern */
? func_80133098();                                  /* extern */
? func_80133974();                                  /* extern */
? func_8013D090();                                  /* extern */
? func_8013E560();                                  /* extern */
? func_8013FF74();                                  /* extern */
? func_80140A84(void *);                            /* extern */
? func_801428A8(void *);                            /* extern */
? func_8014996C(void *);                            /* extern */
? func_80163990();                                  /* extern */
? func_8016428C();                                  /* extern */
? func_8016CDEC();                                  /* extern */
? func_8016CE68(?);                                 /* extern */
? func_8016F018(?, ?, ?, ?);                        /* extern */
? func_8016F064();                                  /* extern */
? func_8016FF7C();                                  /* extern */
? func_80176DCC();                                  /* extern */
? func_801787CC(?);                                 /* extern */
u32 func_801788E4();                                /* extern */
? func_80178CB8();                                  /* extern */
? func_80178D44(s32, ?, ?);                         /* extern */
? func_80179778();                                  /* extern */
? func_801F5414(void *, s16);                       /* extern */
? func_801F5424(void *);                            /* extern */
? func_801F542C(void *);                            /* extern */
? func_801F544C(void *);                            /* extern */
? func_801F5460(void *);                            /* extern */
? func_801F54A0(void *);                            /* extern */
? func_801F5840(void *, s16);                       /* extern */
? func_801F5918(void *);                            /* extern */
? func_801F5C30(void *);                            /* extern */
? func_801F5CD0(void *);                            /* extern */
? func_801F5D1C(void *, s32);                       /* extern */
? func_801F5D5C(void *);                            /* extern */
? func_801F648C(void *);                            /* extern */
? func_801F66AC(void *);                            /* extern */
? func_801F6B20(void *);                            /* extern */
? func_801F6D58(void *);                            /* extern */
? func_801F7080(void *, s32);                       /* extern */
? func_801F7568(void *);                            /* extern */
? func_801F769C(void *);                            /* extern */
? func_801F80B0();                                  /* extern */
? func_801F85EC(void *);                            /* extern */
? func_801F9A20(void *);                            /* extern */
? func_801FA9E8(void *, s32);                       /* extern */
? func_801FB448(void *, s32);                       /* extern */
extern s32 D_801C37A8;
extern s32 D_801C37C4;
static s32 D_801C34F0 = 0;

void func_80120288(void *arg0, s32 arg2) {
    ? sp10;
    ? sp28;
    ? var_a1_2;
    s16 var_s1_3;
    s16 var_s1_6;
    s32 temp_v1_4;
    s32 var_a0;
    s32 var_a1;
    s32 var_a2;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s0_3;
    s32 var_s0_4;
    s32 var_s0_5;
    s32 var_s0_6;
    s32 var_s0_7;
    s32 var_s0_8;
    s32 var_s1_2;
    s32 var_s1_4;
    s32 var_s1_5;
    s32 var_s1_7;
    s32 var_s1_8;
    s32 var_s1_9;
    s32 var_s2_2;
    s32 var_s4;
    s32 var_t1;
    s32 var_t3;
    s32 var_v1;
    u32 temp_v1_3;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a1;
    void *temp_s0;
    void *temp_s0_2;
    void *temp_v0;
    void *temp_v1;
    void *temp_v1_2;
    void *var_a0_2;
    void *var_a3;
    void *var_s1;
    void *var_s2;
    void *var_t0;

    var_a2 = arg2;
    var_s0 = 0;
    var_s2 = arg0;
    var_s4 = 0;
    var_s1 = arg0;
loop_1:
    if (var_s0 < 2) {
        func_8011FECC(arg0, var_s0, var_a2);
        var_a2 = 0;
        if (var_s1->unk127AE == 0) {
            temp_v0 = var_s2 + 0xB788;
            (sp + (var_s0 * 4))->unk40 = (s32) temp_v0->unk7DC;
            var_a0 = var_s4;
            do {
                temp_a1 = temp_v0 + var_a2;
                var_a2 += 1;
                *(&sp10 + var_a0) = temp_a1->unk2A7;
                *(&sp28 + var_a0) = temp_a1->unk2B0;
                var_a0 = var_a2 + var_s4;
            } while (var_a2 < 9);
            temp_a0 = var_s2 + 0xB788;
            var_s1->unk1237C = (s8) temp_a0->unk274;
            var_s1->unk1237E = (u8) temp_a0->unk2A4;
        }
        var_s2 += 0x8B8;
        var_s4 += 9;
        var_s1 += 1;
        var_s0 += 1;
        goto loop_1;
    }
    memset(arg0 + 0xB788, 0, 0x1170);
    memset(arg0 + 0xC8F8, 0, 0x4168);
    memset(arg0 + 0x10A60, 0, 1);
    var_t1 = 0;
    var_t0 = arg0;
    var_a3 = arg0;
    var_t3 = 0;
loop_8:
    if (var_t1 < 2) {
        var_a1 = 0;
        if (var_t0->unk127AE == 0) {
            temp_v1 = var_a3 + 0xB788;
            temp_v1->unk7DC = (s32) (sp + (var_t1 * 4))->unk40;
            var_v1 = var_t3;
            do {
                temp_a0_2 = temp_v1 + var_a1;
                temp_a0_2->unk2A7 = (u8) *(&sp10 + var_v1);
                var_a1 += 1;
                temp_a0_2->unk2B0 = (u8) *(&sp28 + var_v1);
                var_v1 = var_a1 + var_t3;
            } while (var_a1 < 9);
            temp_v1_2 = var_a3 + 0xB788;
            temp_v1_2->unk274 = (s32) (s8) var_t0->unk1237C;
            temp_v1_2->unk2A4 = (u8) var_t0->unk1237E;
        }
        var_t0 += 1;
        var_a3 += 0x8B8;
        var_t3 += 9;
        var_t1 += 1;
        goto loop_8;
    }
    func_80120A00(arg0);
    func_80120A48(arg0);
    func_80120AD8(arg0);
    func_800FEC08(arg0 + 0x3C44, arg0 + 0x3CC4, arg0 + 0x4944);
    func_800FEC08(arg0 + 0x15CC, arg0 + 0x164C, arg0 + 0x3BCC);
    arg0->unk12728 = 0;
    arg0->unk12750 = 0;
    arg0->unk12710 = 0;
    arg0->unk12760 = 0;
    arg0->unk1106D = 0;
    srand(func_801788E4());
    arg0->unk127A0 = (s32) (rand() & 3);
    var_s1_2 = 0;
    func_8016428C();
    func_80178CB8();
    func_80125B64(arg0);
    var_s2_2 = 0x12380;
    arg0->unk123F0 = 0;
    do {
        func_80129740(arg0 + var_s2_2);
        var_s1_2 += 1;
        var_s2_2 += 0x1C;
    } while (var_s1_2 < 4);
    func_801428A8(arg0 + 0x123F4);
    temp_v1_3 = arg0->unk12688;
    switch (temp_v1_3) {
    case 0:
        var_s1_3 = 0;
        var_s0_2 = 0x1136C;
        do {
            func_801F5840(arg0 + var_s0_2, var_s1_3);
            var_s1_3 += 1;
            var_s0_2 += 0x11C;
        } while (var_s1_3 < 4);
        func_801F85EC(arg0 + 0x117DC);
        break;
    case 2:
        func_801F5CD0(arg0 + 0x11B70);
        func_801F6D58(arg0 + 0x11ADC);
        func_801F7568(arg0 + 0x11B1C);
        func_801F9A20(arg0 + 0x11A54);
        func_801F5460(arg0 + 0x11AC0);
        break;
    case 3:
        func_801F542C(arg0 + 0x11CE4);
        func_801F769C(arg0 + 0x11D28);
        break;
    case 5:
        var_s1_4 = 0;
        var_s0_3 = 0x11C6C;
        do {
            func_801F5C30(arg0 + var_s0_3);
            var_s1_4 += 1;
            var_s0_3 += 0x18;
        } while (var_s1_4 < 5);
        func_801F66AC(arg0 + 0x11C24);
        break;
    case 7:
        func_801F544C(arg0 + 0x118E4);
        func_801F5D5C(arg0 + 0x11870);
        func_801F6B20(arg0 + 0x11A48);
        var_s1_5 = 0;
        var_s0_4 = 0x1191C;
        do {
            func_801F7080(arg0 + var_s0_4, var_s1_5);
            var_s1_5 += 1;
            var_s0_4 += 0x64;
        } while (var_s1_5 < 3);
        func_801F80B0();
        break;
    case 8:
        var_s1_6 = 0;
        var_s0_5 = 0x11D50;
        do {
            func_801F5414(arg0 + var_s0_5, var_s1_6);
            var_s1_6 += 1;
            var_s0_5 += 0x70;
        } while (var_s1_6 < 2);
        var_s1_7 = 0;
        var_s0_6 = 0x11E30;
        do {
            func_801F5D1C(arg0 + var_s0_6, var_s1_7);
            var_s1_7 += 1;
            var_s0_6 += 0x20;
        } while (var_s1_7 < 3);
        break;
    case 9:
        func_801F648C(arg0 + 0x12170);
        func_801F542C(arg0 + 0x121A0);
        break;
    case 10:
        func_801F5918(arg0 + 0x11E90);
        func_801F5424(arg0 + 0x11EA4);
        break;
    case 11:
        var_s1_8 = 0;
        var_s0_7 = 0x11EB8;
        do {
            func_801FB448(arg0 + var_s0_7, var_s1_8);
            var_s1_8 += 1;
            var_s0_7 += 0x40;
        } while (var_s1_8 < 4);
        var_s1_9 = 0;
        var_s0_8 = 0x11FB8;
        do {
            func_801FA9E8(arg0 + var_s0_8, var_s1_9);
            var_s1_9 += 1;
            var_s0_8 += 0x2C;
        } while (var_s1_9 < 0xA);
        func_801F54A0(arg0 + 0x10FF4);
        break;
    }
    func_80133098();
    temp_v1_4 = arg0->unk7D8;
    if (temp_v1_4 != 0) {
        if ((temp_v1_4 >= 0) && (temp_v1_4 < 6) && (temp_v1_4 >= 3)) {
            func_8013304C(2);
            temp_s0 = arg0 + 0x6220;
            func_80179778();
            func_80178D44(func_80132ED4(), 2, 0);
            func_80178D44(func_80133034(), 3, 1);
            func_80100FBC(temp_s0);
            func_80101144(temp_s0, 2);
            func_801011E4(temp_s0, 0, 6, 0);
            var_a0_2 = temp_s0;
            var_a1_2 = 1;
        } else {
            goto block_47;
        }
    } else {
        D_801C37C4 = 1;
block_47:
        temp_s0_2 = arg0 + 0x6220;
        func_80178D44(func_80132ED4(), 0, 0);
        func_8013304C(0);
        func_80100FBC(temp_s0_2);
        func_80101144(temp_s0_2, 1);
        var_a0_2 = temp_s0_2;
        var_a1_2 = 0;
    }
    func_801011E4(var_a0_2, var_a1_2, 6, 0);
    func_8016CDEC();
    func_8016CE68(0x2000);
    func_8016F064();
    func_8016F018(0, 0xFF, 0xFF, 0xFF);
    func_80132FA4();
    func_8012A088(D_801C34F0);
    func_8011A1D4();
    func_8012E3AC();
    func_8014996C(arg0 + 0x496C);
    func_80119E24(arg0 + 0x10A60);
    func_80140A84(arg0 + 0x10A64);
    func_8011B0B0();
    func_80176DCC();
    func_8013FF74();
    func_8012700C();
    func_801123F8();
    func_8013E560();
    func_800FD594();
    func_801787CC(0);
    func_80163990();
    func_8016FF7C();
    func_8013D090();
    arg0->unk127DE = 0;
    arg0->unk127DF = 0;
    arg0->unk127E0 = 0;
    arg0->unk127E1 = 0;
    func_80133974();
    D_801C37A8 = 1;
}
