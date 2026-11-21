/* m2c reference for func_80167434 @ 80167434 (112 words). Generated; not compiled or validated. */
? func_8015C008(?);                                 /* extern */
? func_8015C5A0(void *);                            /* extern */
? func_801679F0(void *, u8, s32);                   /* extern */
extern ? D_801BC180;
static u16 D_801C363C = 0;
static u16 D_801C363E = 0;

void func_80167434(u8 arg0, s32 arg1) {
    s32 temp_v0;
    void *temp_s0;
    void *temp_s1;
    void *var_v0;

    temp_s1 = (arg0 * 0x28) + &D_801BC180;
    func_8015C008(0);
    func_8015C5A0(temp_s1 + 0x1C);
    temp_v0 = arg1 & 0xFF;
    switch (temp_v0) {                              /* switch 1 */
    case 10:                                        /* switch 1 */
        D_801C363C = 0;
        var_v0 = (arg0 * 0x28) + &D_801BC180;
block_4:
        D_801C363E += var_v0->unk1;
        break;
    case 13:                                        /* switch 1 */
        var_v0 = (arg0 * 0x28) + &D_801BC180;
        goto block_4;
    case 32:                                        /* switch 1 */
        D_801C363C += temp_s1->unk0 + temp_s1->unk2;
        break;
    case 9:                                         /* switch 1 */
        D_801C363C += ((u8) temp_s1->unk2 >> 1) + temp_s1->unk0;
        break;
    case 8:                                         /* switch 1 */
        D_801C363C -= 1;
        break;
    default:                                        /* switch 1 */
        temp_s0 = temp_s1 + 8;
        func_801679F0(temp_s0, arg0, arg1 & 0xFF);
        func_8015C008(0);
        func_8015C5A0(temp_s0);
        break;
    }
    temp_s1->unkC = (u8) temp_s1->unk4;
    temp_s1->unkD = (u8) temp_s1->unk5;
    temp_s1->unkE = (u8) temp_s1->unk6;
    switch (arg0) {                                 /* switch 2; irregular */
    case 1:                                         /* switch 2 */
        temp_s1->unk2 = arg0;
        break;
    case 0:                                         /* switch 2 */
    case 2:                                         /* switch 2 */
        temp_s1->unk2 = 3U;
        break;
    }
    func_8015C008(0);
}
