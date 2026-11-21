/* m2c reference for func_801532DC @ 801532DC (232 words). Generated; not compiled or validated. */
? func_8011BC6C(void *, ?, ?, ?, s32, s32);         /* extern */
s32 func_8012340C(s32, void *);                     /* extern */
void *func_801244FC(s32, s32);                      /* extern */
? func_8013BDCC(s32, ?, ?, ? *);                    /* extern */
? func_8013BEA8(s32);                               /* extern */
u8 func_80176CBC(u8, ?, ?);                         /* extern */
s32 func_80178A1C();                                /* extern */
extern ? D_801C3100;
extern ? D_801C31CC;
static s32 D_801C34EC = 0;
static s32 D_801C34F4 = 0;
static s32 D_801C3600 = 1;
static s32 D_801C3604 = 0;
static s32 D_801C3608 = 0;

void func_801532DC(s32 arg0, s32 arg1) {
    s32 temp_s0_2;
    s32 temp_s0_5;
    s32 var_a0;
    s32 var_v0;
    u16 temp_v0;
    void *temp_a0;
    void *temp_s0;
    void *temp_s0_3;
    void *temp_s0_4;
    void *temp_s0_6;
    void *temp_s0_7;
    void *temp_s1;
    void *temp_v0_2;
    void *temp_v1;
    void *temp_v1_2;

    temp_s1 = arg0 + (arg1 * 2);
    temp_s1->unk18AC = (u16) (temp_s1->unk18AC + func_80178A1C());
    temp_v0 = temp_s1->unk18AC;
    temp_s1->unk18AC = (u16) (temp_v0 + 1);
    if ((s16) temp_v0 < 0xB4) {
        temp_s0 = arg0 + (arg1 * 4);
        temp_v0_2 = temp_s0->unk18A4;
        var_a0 = 0;
        if (temp_v0_2 != NULL) {
            if ((*temp_v0_2->unk0 & 0xFFF0) != 0x2120) {
                var_a0 = func_801244FC(D_801C34EC, func_8012340C(D_801C34EC, temp_s0->unk18A4))->unk8C != 0;
            }
            if (var_a0 != 0) {
                temp_s1->unk18AC = 0xB4U;
            }
            D_801C31CC.unk8 = 0x47;
            D_801C31CC.unkC = 0x47;
            temp_v1 = temp_s0->unk18A4;
            temp_v1_2 = temp_v1 + 0x1C;
            D_801C3100.unk0 = (s32) temp_v1->unk1C;
            D_801C3100.unk4 = (s32) temp_v1_2->unk4;
            D_801C31CC.unk0 = &D_801C3100;
            D_801C3100.unk8 = (s32) temp_v1_2->unk8;
            func_8013BDCC(D_801C34F4, 0, 0, &D_801C31CC);
            if (D_801C3600 < 0) {
                temp_s0->unk18A4->unk8 = func_80176CBC(temp_s0->unk18A4->unk8, 0, 0xD);
                if ((u8) temp_s0->unk18A4->unk8 < 0x5BU) {
                    D_801C3600 = 1;
                    func_8011BC6C(temp_s0->unk18A4 + 0x1C, 0, 0xA, 0xF, 0, 0);
                }
            } else {
                temp_s0->unk18A4->unk8 = func_80176CBC(temp_s0->unk18A4->unk8, 0xFF, 0xD);
                if ((u8) temp_s0->unk18A4->unk8 >= 0xA4U) {
                    D_801C3600 = -1;
                }
            }
            temp_s0_2 = arg1 * 4;
            if (D_801C3604 < 0) {
                temp_s0_3 = arg0 + temp_s0_2;
                temp_s0_3->unk18A4->unk9 = func_80176CBC(temp_s0_3->unk18A4->unk9, 0, 5);
                var_v0 = 1;
                if ((u8) temp_s0_3->unk18A4->unk9 < 0x5BU) {
                    goto block_15;
                }
            } else {
                temp_s0_4 = arg0 + temp_s0_2;
                temp_s0_4->unk18A4->unk9 = func_80176CBC(temp_s0_4->unk18A4->unk9, 0xFF, 5);
                var_v0 = -1;
                if ((u8) temp_s0_4->unk18A4->unk9 >= 0xA4U) {
block_15:
                    D_801C3604 = var_v0;
                }
            }
            temp_s0_5 = arg1 * 4;
            if (D_801C3608 < 0) {
                temp_s0_6 = arg0 + temp_s0_5;
                temp_s0_6->unk18A4->unkA = func_80176CBC(temp_s0_6->unk18A4->unkA, 0, 9);
                if ((u8) temp_s0_6->unk18A4->unkA < 0x5BU) {
                    D_801C3608 = 1;
                }
            } else {
                temp_s0_7 = arg0 + temp_s0_5;
                temp_s0_7->unk18A4->unkA = func_80176CBC(temp_s0_7->unk18A4->unkA, 0xFF, 9);
                if ((u8) temp_s0_7->unk18A4->unkA >= 0xA4U) {
                    D_801C3608 = -1;
                }
            }
        }
    } else {
        (arg0 + arg1)->unk18B0 = 0;
        temp_s1->unk18AC = 0U;
        D_801C31CC.unk8 = 0x47;
        D_801C31CC.unkC = 0x47;
        func_8013BEA8(D_801C34F4);
        temp_a0 = arg0 + (arg1 * 4);
        if (temp_a0->unk18A4 != NULL) {
            temp_a0->unk18A4->unk8 = 0x80;
            temp_a0->unk18A4->unk9 = 0x80;
            temp_a0->unk18A4->unkA = 0x80;
        }
    }
}
