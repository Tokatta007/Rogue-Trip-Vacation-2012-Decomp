/* m2c reference for func_80172C6C @ 80172C6C (209 words). Generated; not compiled or validated. */
? func_801727DC();                                  /* extern */
? func_801737FC(?);                                 /* extern */
? func_801744AC(?, ? *);                            /* extern */
? func_801761BC(?);                                 /* extern */
? func_8017627C(s32 *);                             /* extern */
extern s16 D_801F4330;
extern s16 D_801F4332;
extern s16 D_801F4334;
extern s16 D_801F4336;
extern s16 D_801F4338;
extern s16 D_801F433A;
extern ? D_801F4340;
extern ? D_801F4342;
extern ? D_801F4344;
extern ? D_801F4346;
extern ? D_801F4348;
extern ? D_801F434A;
extern ? D_801F434C;
extern ? D_801F4350;
extern ? D_801F4352;
extern ? D_801F4354;
extern ? D_801F4356;
extern ? D_801F435D;
extern ? D_801F435E;
extern ? D_801F4360;
extern ? D_801F4362;
extern ? D_801F4364;
extern ? D_801F4366;
extern ? D_801F436A;
extern ? D_801F436C;
extern ? D_801F436E;
extern ? D_801F4370;
extern ? D_801F4372;
extern ? D_801F4850;
extern ? D_801F4870;
extern s16 D_801F4A38;
extern ? D_801F4A40;
extern s16 D_801F4AD8;
extern s16 D_801F4B20;
extern s16 D_801F4B22;
extern s8 D_801F4B34;
extern s16 D_801F4B52;
extern ? D_801F4B58;
extern s8 D_801F4B68;
extern s16 D_801F4BB0;
extern ? D_801F4C00;

void func_80172C6C(s8 arg0) {
    s32 sp10;
    s32 sp14;
    s16 sp18;
    s16 sp1A;
    s16 sp24;
    s32 sp2C;
    s16 sp4A;
    s16 sp4C;
    s16 var_s0_4;
    s32 temp_v0;
    s32 temp_v1;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s0_3;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;

    func_801761BC(0);
    D_801F4AD8 = 0;
    func_801744AC(0x20, &D_801F4C00);
    var_s0 = 0;
    var_v0 = 0 & 0xFFFF;
    do {
        *((var_v0 * 2) + &D_801F4870) = 0;
        var_s0 += 1;
        var_v0 = var_s0 & 0xFFFF;
    } while ((u32) (var_s0 & 0xFFFF) < 0xC0U);
    var_s0_2 = 0;
    var_v0_2 = 0 & 0xFFFF;
    do {
        *(&D_801F4850 + var_v0_2) = 0;
        var_s0_2 += 1;
        var_v0_2 = var_s0_2 & 0xFFFF;
    } while ((u32) (var_s0_2 & 0xFFFF) < 0x18U);
    D_801F4BB0 = 0;
    var_s0_3 = 0;
    var_v0_3 = 0 & 0xFFFF;
    do {
        *(&D_801F4B58 + var_v0_3) = 0;
        var_s0_3 += 1;
        var_v0_3 = var_s0_3 & 0xFFFF;
    } while ((u32) (var_s0_3 & 0xFFFF) < 0x10U);
    if ((u32) arg0 >= 0x18U) {
        D_801F4B34 = 0x18;
    } else {
        D_801F4B34 = arg0;
    }
    var_s0_4 = 0;
    sp14 = 0x60093;
    sp24 = 0x1000;
    sp2C = 0x1000;
    sp4A = 0x80FF;
    sp18 = 0;
    sp1A = 0;
    sp4C = 0x4000;
    if (D_801F4B34 > 0) {
        do {
            temp_v1 = var_s0_4 & 0xFFFF;
            temp_v0 = temp_v1 * 0x36;
            *(&D_801F4342 + temp_v0) = 0x18;
            *(&D_801F4340 + temp_v0) = 0xFF;
            *(&D_801F435D + temp_v0) = 0;
            *(&D_801F4344 + temp_v0) = 0;
            *(&D_801F4346 + temp_v0) = 0;
            *(&D_801F4350 + temp_v0) = -1;
            *(&D_801F4352 + temp_v0) = 0;
            *(&D_801F4354 + temp_v0) = 0;
            *(&D_801F4356 + temp_v0) = 0xFF;
            *(&D_801F4348 + temp_v0) = 0;
            *(&D_801F434C + temp_v0) = 0;
            *(&D_801F434A + temp_v0) = 0x40;
            *(&D_801F435E + temp_v0) = 0;
            *(&D_801F4360 + temp_v0) = 0;
            *(&D_801F4362 + temp_v0) = 0;
            *(&D_801F4364 + temp_v0) = 0;
            *(&D_801F436A + temp_v0) = 0;
            *(&D_801F436C + temp_v0) = 0;
            *(&D_801F436E + temp_v0) = 0;
            *(&D_801F4370 + temp_v0) = 0;
            *(&D_801F4372 + temp_v0) = 0;
            *(&D_801F4366 + temp_v0) = 0;
            sp10 = 1 << temp_v1;
            func_8017627C(&sp10);
            D_801F4B52 = var_s0_4;
            func_801737FC(1);
            var_s0_4 += 1;
        } while ((var_s0_4 & 0xFFFF) < D_801F4B34);
    }
    D_801F4A40.unk0 = 0;
    D_801F4A40.unk8 = 0x3FFF;
    D_801F4A40.unkA = 0x3FFF;
    D_801F4A40.unk4 = 0;
    D_801F4330 = 0;
    D_801F4332 = 0;
    D_801F4A38 = 0;
    D_801F4334 = 0;
    D_801F4336 = 0;
    D_801F4338 = 0;
    D_801F433A = 0;
    D_801F4B68 = 0;
    D_801F4B20 = 0;
    D_801F4B22 = 0x80;
    func_801727DC();
}
