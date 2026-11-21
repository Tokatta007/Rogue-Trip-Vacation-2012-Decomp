/* m2c reference for func_80167250 @ 80167250 (111 words). Generated; not compiled or validated. */
? func_8015C008(?);                                 /* extern */
? func_8015C5A0(void *);                            /* extern */
? func_801679F0(void *, u8, u8);                    /* extern */
extern ? D_801BC180;
static u16 D_801C363C = 0;
static u16 D_801C363E = 0;

void func_80167250(u8 arg0, u8 *arg1) {
    u32 var_v1;
    u8 *var_s2;
    u8 var_a2;
    void *temp_s0;
    void *temp_s1;

    var_s2 = arg1;
    temp_s1 = (arg0 * 0x28) + &D_801BC180;
    func_8015C008(0);
    func_8015C5A0(temp_s1 + 0x1C);
    var_a2 = *var_s2;
    if (var_a2 != 0) {
        var_v1 = var_a2 - 8;
        do {
            switch (var_v1) {                       /* switch 1 */
            case 2:                                 /* switch 1 */
                D_801C363C = 0;
                /* fallthrough */
            case 5:                                 /* switch 1 */
                D_801C363E += temp_s1->unk1;
                var_s2 += 1;
                break;
            case 24:                                /* switch 1 */
                D_801C363C += temp_s1->unk0 + temp_s1->unk2;
                var_s2 += 1;
                break;
            case 1:                                 /* switch 1 */
                D_801C363C += ((u8) temp_s1->unk2 >> 1) + temp_s1->unk0;
                var_s2 += 1;
                break;
            case 0:                                 /* switch 1 */
                D_801C363C -= 1;
                var_s2 += 1;
                break;
            default:                                /* switch 1 */
                temp_s0 = temp_s1 + 8;
                func_801679F0(temp_s0, arg0, var_a2);
                func_8015C008(0);
                func_8015C5A0(temp_s0);
                var_s2 += 1;
                break;
            }
            var_a2 = *var_s2;
            var_v1 = var_a2 - 8;
        } while (var_a2 != 0);
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
