/* m2c reference for func_80142918 @ 80142918 (120 words). Generated; not compiled or validated. */
? func_8010B7C8(void *);                            /* extern */
? func_8012A3F0(void *, void *);                    /* extern */
s32 func_8013A06C();                                /* extern */
? func_80142AF8(void *);                            /* extern */
? func_80144150(void *, ?);                         /* extern */
? func_80147934(void *);                            /* extern */
? func_80147D10(void *);                            /* extern */
? func_80149BA4(s32);                               /* extern */
static s32 D_801C34EC = 0;

void func_80142918(void *arg0) {
    s32 var_a0;
    s32 var_a0_2;
    u8 temp_s0;
    u8 temp_s1;
    u8 temp_s2;
    u8 temp_s3;
    u8 temp_s4;
    void *var_v1;
    void *var_v1_2;

    temp_s4 = arg0->unk19E & 0xFF;
    temp_s2 = arg0->unk1A3 & 0xFF;
    temp_s3 = arg0->unk196 & 0xFF;
    temp_s0 = arg0->unk197 & 0xFF;
    temp_s1 = arg0->unk198 & 0xFF;
    memset(arg0 + 0xBC, 0, 0xE8);
    arg0->unk19E = temp_s4;
    arg0->unk1A3 = temp_s2;
    arg0->unk196 = temp_s3;
    arg0->unk197 = temp_s0;
    arg0->unk198 = temp_s1;
    memset(arg0 + 0x7C, 0, 0x2B);
    arg0->unk1A2 = 0;
    func_80147934(arg0);
    arg0->unk19C = 1;
    arg0->unk19E = 1U;
    arg0->unk34 = 0;
    arg0->unk7E0 = 0;
    arg0->unk7E4 = 0;
    arg0->unk7E8 = 0;
    arg0->unk7EC = 0;
    arg0->unk7F0 = 0;
    arg0->unk7F4 = 0;
    arg0->unk7F8 = 0;
    arg0->unk804 = 0;
    arg0->unk784 = (s32) ((rand() & 0xFF) + 0x708);
    arg0->unk10C = 0;
    func_80142AF8(arg0);
    func_80147D10(arg0);
    func_8010B7C8(arg0);
    var_a0 = 0;
    arg0->unk500 = 0;
    arg0->unk508 = 0x4B0;
    arg0->unk10C = (s32) arg0->unk110;
    var_v1 = arg0;
    arg0->unk162 = (u16) arg0->unk160;
    arg0->unk537 = 0;
    arg0->unk504 = 0;
    arg0->unk208 = 0;
    arg0->unk20C = 0;
    arg0->unk210 = 0;
    arg0->unk214 = 0;
    arg0->unk218 = 0;
    arg0->unk21C = 0;
    do {
        var_v1->unk578 = 0;
        var_v1->unk57A = -1;
        var_a0 += 1;
        var_v1 += 0x54;
    } while (var_a0 < 4);
    arg0->unk260 = 0;
    func_80144150(arg0, -1);
    var_a0_2 = 0;
    var_v1_2 = arg0;
    do {
        var_v1_2->unk58C = -1;
        var_v1_2->unk592 = 0;
        var_v1_2->unk594 = 0;
        var_v1_2->unk595 = 0;
        var_a0_2 += 1;
        var_v1_2 += 0x54;
    } while (var_a0_2 < 4);
    func_8012A3F0(arg0 + 0x264, arg0);
    if (func_8013A06C() == 0) {
        func_80149BA4(D_801C34EC + 0x496C);
    }
}
