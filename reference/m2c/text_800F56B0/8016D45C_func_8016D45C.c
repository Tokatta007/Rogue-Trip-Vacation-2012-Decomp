/* m2c reference for func_8016D45C @ 8016D45C (81 words). Generated; not compiled or validated. */
? func_8016D750(s32, u8);                           /* extern */
extern u16 D_801C38DC;

void func_8016D45C(void *arg0) {
    s32 temp_a1;
    s32 var_a0;
    s32 var_s1;
    s32 var_s1_2;
    s32 var_v0;
    s32 var_v1;
    s32 var_v1_2;
    s32 var_v1_3;
    s8 var_s2;

    arg0->unkE = (u16) (arg0->unkE + D_801C38DC);
    var_s1 = 0;
    if ((u16) arg0->unk6 < (u16) arg0->unkE) {
        var_v1 = 1;
        var_s2 = (arg0->unk3 & 0x7F) - 1;
        if (var_s2 > 0) {
            var_s1_2 = 1;
            do {
                var_v1 += 1;
                var_s1_2 += var_v1;
            } while (var_s2 >= var_v1);
            var_s1 = var_s1_2 - var_v1;
        }
        var_a0 = 0;
        temp_a1 = rand() % var_s1;
        var_v1_2 = 0;
        if (var_s2 > 0) {
            var_v0 = var_s2 - 0;
loop_7:
            var_a0 += var_v0;
            if (temp_a1 < var_a0) {
                var_s2 = var_v1_2 + 1;
            } else {
                var_v1_2 += 1;
                var_v0 = var_s2 - var_v1_2;
                if (var_v1_2 < var_s2) {
                    goto loop_7;
                }
            }
        }
        arg0->unkC = var_s2;
        var_v1_3 = 0;
        if (arg0->unk1C != 0) {
            var_v1_3 = arg0->unk5 == (u8) arg0->unkC;
        }
        if (var_v1_3 != 0) {
            func_8016D750(arg0->unk1C, arg0->unk13);
        }
    }
}
