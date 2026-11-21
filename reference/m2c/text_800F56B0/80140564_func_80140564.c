/* m2c reference for func_80140564 @ 80140564 (111 words). Generated; not compiled or validated. */
? func_8014002C(? *);                               /* extern */
? func_80140444(? *);                               /* extern */
extern ? D_801B454C;
static s32 D_801C35C0 = 0;

void func_80140564(void) {
    ? *var_s0;
    s32 var_s1;
    s32 var_v1;
    s32 var_v1_2;
    s8 var_v1_3;
    u32 temp_v1;

    var_s0 = &D_801B454C;
    var_s1 = 5;
    D_801C35C0 = 0;
    do {
        func_80140444(var_s0);
        var_v1 = 0;
        if (var_s0->unkAF != 0) {
            var_v1 = (var_s0->unkAC << 0x10) > 0;
        }
        if (var_v1 != 0) {
            D_801C35C0 += 1;
            temp_v1 = var_s0->unkAE & 0xFF;
            switch (temp_v1) {
            case 1:
                var_s0->unkB2 = 0;
                var_s0->unkAE = 2U;
                func_8014002C(var_s0);
                var_s0->unkB3 = 0x48;
                var_s1 -= 1;
                break;
            case 2:
                var_s0->unkAE = 3U;
                var_s0->unkB3 = 0x30;
                var_s1 -= 1;
                break;
            case 3:
                var_s0->unkAE = 0U;
                var_s0->unkB3 = 0x18;
                var_s1 -= 1;
                break;
            case 0:
                var_v1_2 = 0;
                if (var_s0->unkAF == 0x11) {
                    var_v1_2 = (rand() & 0xF) == 0;
                }
                if (var_v1_2 != 0) {
                    var_s0->unkAE = 4U;
                } else {
                    var_s0->unkB2 = (s8) (rand() & 7);
                }
                var_s0->unkB1 = (u8) (var_s0->unkB1 - 1);
                if (var_s0->unkB1 == 0) {
                    func_8014002C(var_s0);
                }
                var_v1_3 = 8;
                if (var_s0->unkAF == 0x11) {
                    var_v1_3 = 0x18;
                }
                var_s0->unkB3 = var_v1_3;
                var_s1 -= 1;
                break;
            case 4:
                var_s0->unkAE = 5U;
                var_s1 -= 1;
                break;
            case 5:
                var_s0->unkAE = 0U;
                goto block_21;
            }
        } else {
        default:
block_21:
            var_s1 -= 1;
        }
        var_s0 += 0xB4;
    } while (var_s1 != 0);
}
