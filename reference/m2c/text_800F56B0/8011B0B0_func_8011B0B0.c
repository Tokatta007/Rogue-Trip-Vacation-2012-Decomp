/* m2c reference for func_8011B0B0 @ 8011B0B0 (272 words). Generated; not compiled or validated. */
void *func_8011D40C(s32 *, ?, ?, ?);                /* extern */
? func_8016B4CC(? *, ?, ? *);                       /* extern */
? func_8016B504(? *, s32, ? *);                     /* extern */
extern ? D_801823F0;
extern ? D_80182AF8;
extern ? D_80183200;
extern ? D_801832F0;
extern ? D_801C3788;
extern ? D_801C378C;
extern ? D_801C3790;
extern ? D_801C3794;
static s32 D_801C32C0[3] = { 0, 1, 9 };
static s16 D_801C32CC = 0;
static void *D_801C34EC = NULL;

void func_8011B0B0(void) {
    s32 sp10;
    s32 sp14;
    s32 sp18;
    s32 temp_s1;
    s32 var_s1;
    s32 var_s1_2;
    s32 var_s1_3;
    s32 var_s1_4;
    s32 var_s1_5;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_4;
    void *temp_v0_5;

    *D_801C32C0 = 0;
    D_801C32CC = 0;
    func_8016B4CC(&D_801823F0, 0x96, &D_801C3788);
    func_8016B4CC(&D_80182AF8, 0x96, &D_801C378C);
    var_s1 = 0;
    do {
        func_8016B504(&D_80182AF8, var_s1, &D_801C378C);
        var_s1 += 1;
    } while (var_s1 < 0x96);
    func_8016B4CC(&D_80183200, 0x14, &D_801C3790);
    func_8016B4CC(&D_801832F0, 0x14, &D_801C3794);
    var_s1_2 = 0;
    do {
        func_8016B504(&D_801832F0, var_s1_2, &D_801C3794);
        var_s1_2 += 1;
    } while (var_s1_2 < 0x14);
    temp_s1 = D_801C34EC->unk12688;
    switch (temp_s1) {                              /* switch 1; irregular */
    case 8:                                         /* switch 1 */
        sp10 = 0xB18;
        sp14 = -0x1708;
        sp18 = 0x40;
        temp_v0 = func_8011D40C(&sp10, 0, 0, 0x3F);
        temp_v0->unkC = 0;
        temp_v0->unk10 = 0;
        temp_v0->unk14 = temp_s1;
        temp_v0->unk33 = 0;
        temp_v0->unk34 = 0x28;
        temp_v0->unk35 = 7;
        temp_v0->unk36 = 0;
        temp_v0->unk37 = 0x19;
        temp_v0->unk38 = 0;
        temp_v0->unk2A = 0x1F40;
        sp10 = 0x200;
        sp14 = -0x1200;
        sp18 = 0x40;
        temp_v0_2 = func_8011D40C(&sp10, 0, 0, 0x2F);
        temp_v0_2->unk28 = (u16) sp18;
        temp_v0_2->unkC = 0;
        temp_v0_2->unk10 = 0;
        temp_v0_2->unk14 = 0x1E;
        temp_v0_2->unk33 = 0;
        temp_v0_2->unk34 = 0xF;
        temp_v0_2->unk35 = 3;
        temp_v0_2->unk36 = 0;
        temp_v0_2->unk37 = 6;
        temp_v0_2->unk38 = 0;
        temp_v0_2->unk2A = 0x2EE0;
        temp_v0_2->unk3F = -0x20;
        return;
    case 1:                                         /* switch 1 */
        var_s1_3 = 0;
        sp10 = -0x14D8;
        sp14 = 0x348;
        sp18 = -0x18;
        do {
            temp_v0_3 = func_8011D40C(&sp10, 0, 0, 0x33);
            temp_v0_3->unk28 = (u16) sp18;
            temp_v0_3->unkC = 0;
            temp_v0_3->unk10 = 0;
            temp_v0_3->unk14 = 0;
            temp_v0_3->unk33 = 0;
            temp_v0_3->unk34 = 0x3C;
            temp_v0_3->unk35 = 0xF;
            temp_v0_3->unk36 = 0;
            temp_v0_3->unk37 = 4;
            temp_v0_3->unk38 = 1;
            temp_v0_3->unk2A = 0xFA0;
            temp_v0_3->unk32 = 0x7F;
            var_s1_3 += 1;
            sp10 += 0xF0;
        } while (var_s1_3 < 3);
        return;
    case 5:                                         /* switch 1 */
        var_s1_4 = 0;
        do {
            switch (var_s1_4) {                     /* switch 2; irregular */
            case 0:                                 /* switch 2 */
                sp14 = -0x4E8;
                sp10 = -0x1B48;
                sp18 = 0xC90;
                break;
            case 1:                                 /* switch 2 */
                sp10 = -0xB48;
block_22:
                sp14 = -0x16E8;
                sp18 = 0xD88;
                break;
            case 2:                                 /* switch 2 */
                sp10 = -0x1B48;
                goto block_22;
            }
            temp_v0_4 = func_8011D40C(&sp10, 0, 0, 0x3E);
            var_s1_4 += 1;
            temp_v0_4->unkC = 0;
            temp_v0_4->unk10 = 0;
            temp_v0_4->unk14 = 0x14;
            temp_v0_4->unk33 = 0;
            temp_v0_4->unk34 = 0x2D;
            temp_v0_4->unk35 = 7;
            temp_v0_4->unk36 = 0;
            temp_v0_4->unk37 = 0x14;
            temp_v0_4->unk38 = 7;
            temp_v0_4->unk2A = 0x1F40;
            temp_v0_4->unk3B = 0x44;
            temp_v0_4->unk3C = 0x80;
            temp_v0_4->unk3F = 0;
        } while (var_s1_4 < 3);
        var_s1_5 = 0;
        sp10 = 0xFB8;
        sp14 = 0x180;
        sp18 = 0x490;
        do {
            temp_v0_5 = func_8011D40C(&sp10, 0, 0, 0x33);
            temp_v0_5->unk28 = (u16) sp18;
            temp_v0_5->unkC = 0;
            temp_v0_5->unk10 = 0;
            temp_v0_5->unk14 = 0;
            temp_v0_5->unk33 = 0;
            temp_v0_5->unk34 = 0x2D;
            temp_v0_5->unk35 = 7;
            temp_v0_5->unk36 = 0;
            temp_v0_5->unk37 = 6;
            temp_v0_5->unk38 = 1;
            temp_v0_5->unk2A = 0xFA0;
            temp_v0_5->unk32 = 0x3F;
            var_s1_5 += 1;
            sp10 += 0x400;
        } while (var_s1_5 < 4);
        return;
    }
}
