/* m2c reference for func_80148DB0 @ 80148DB0 (201 words). Generated; not compiled or validated. */
? func_80148A00(void *, ?);                         /* extern */
? func_801640EC(void *);                            /* extern */
s32 func_80176C1C(s32, s16, ?);                     /* extern */

void func_80148DB0(void *arg0) {
    s32 var_a0;
    s32 var_a0_2;
    s32 var_s1;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v1;
    s32 var_v1_2;
    u16 temp_v0;

    if (arg0->unkF4 == 0) {
        arg0->unk9A = 0U;
        arg0->unk9B = 0U;
        arg0->unk218 = 0;
        return;
    }
    temp_v0 = arg0->unk194;
    switch ((s16) temp_v0) {
    case 5:
        var_s1 = 0xE3;
        break;
    case 6:
    case 7:
        var_s1 = 0x38;
        break;
    case 2:
    case 3:
    case 4:
    case 8:
    case 9:
    case 10:
        var_s1 = 0x155;
        break;
    default:
        var_s1 = 0x1C7;
        break;
    }
    if (arg0->unk90 == 0) {
        arg0->unk95 = 1;
        func_80148A00(arg0, 3);
    }
    if (arg0->unk9A != 0) {
        if (arg0->unk218 > 0) {
            var_v0 = arg0->unk1F4 + var_s1;
        } else {
            var_v0 = arg0->unk1F4 - var_s1;
        }
        arg0->unk1F4 = var_v0;
        arg0->unk188 = (u16) arg0->unk1F4;
        func_801640EC(arg0 + 0x188);
        if ((arg0->unk1F4 * (s16) arg0->unk188) < 0) {
            arg0->unk18C = (u16) (arg0->unk18C + 1);
        }
    }
    if (arg0->unk9B != 0) {
        if (arg0->unk218 > 0) {
            var_v0_2 = arg0->unk1F0 + var_s1;
        } else {
            var_v0_2 = arg0->unk1F0 - var_s1;
        }
        arg0->unk1F0 = var_v0_2;
        arg0->unk186 = (u16) arg0->unk1F0;
        func_801640EC(arg0 + 0x186);
        if ((arg0->unk1F0 * (s16) arg0->unk186) < 0) {
            arg0->unk18C = (u16) (arg0->unk18C + 1);
        }
    }
    var_a0 = 0;
    if (arg0->unk7A4 < arg0->unkC8) {
        var_a0 = (arg0->unk18C << 0x10) > 0;
    }
    if (var_a0 != 0) {
        if (arg0->unk9B != 0) {
            var_v1 = arg0->unk1F0;
            if (var_v1 < 0) {
                var_v1 = -var_v1;
            }
            if (var_v1 < (var_s1 * 3)) {
                arg0->unk9B = 0U;
                arg0->unk218 = 0;
                arg0->unk1F0 = 0;
                goto block_34;
            }
        } else {
            var_v1_2 = arg0->unk1F4;
            if (var_v1_2 < 0) {
                var_v1_2 = -var_v1_2;
            }
            if (var_v1_2 < (var_s1 * 3)) {
                arg0->unk9A = 0U;
                arg0->unk218 = 0;
                arg0->unk1F4 = 0;
block_34:
                arg0->unk188 = 0U;
                arg0->unk186 = 0U;
                arg0->unk18C = 0U;
            }
        }
    } else {
        var_a0_2 = arg0->unkEC;
        if ((s16) arg0->unk18C < 3) {
            var_a0_2 = var_a0_2 >> (3 - (s16) arg0->unk18C);
        }
        if (arg0->unk20C != 0) {
            if (arg0->unk20C > 0) {
                var_v0_3 = arg0->unk20C - var_a0_2;
            } else {
                var_v0_3 = arg0->unk20C + var_a0_2;
            }
            arg0->unk20C = var_v0_3;
        }
        arg0->unk204 = (s32) (s16) arg0->unk18E;
        arg0->unk86 = 1;
        arg0->unk1F8 = func_80176C1C(arg0->unk1F8, (s16) arg0->unk190, 3);
    }
}
