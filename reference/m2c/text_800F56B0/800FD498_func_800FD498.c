/* m2c reference for func_800FD498 @ 800FD498 (63 words). Generated; not compiled or validated. */
s32 func_800FF594(s32, void *);                     /* extern */
static void *D_801C34EC = NULL;

s32 func_800FD498(void *arg0) {
    s32 temp_a0;
    s32 var_s0;
    s32 var_v0;
    s32 var_v0_2;
    u32 temp_v1;

    var_s0 = 0;
    temp_v1 = D_801C34EC->unk12688;
    temp_a0 = func_800FF594(arg0->unk44, arg0 + 0x1E4);
    switch (temp_v1) {
    case 0:
        var_v0_2 = temp_a0 < 0xA;
block_16:
        var_v0 = 0;
        if (var_v0_2 != 0) {
block_17:
            var_s0 = 1;
        default:
block_18:
            var_v0 = var_s0;
        }
        break;
    case 1:
        if (temp_a0 != 0xB) {
            var_v0_2 = (u32) (temp_a0 - 5) < 4U;
            goto block_16;
        }
        goto block_17;
    case 2:
        var_v0_2 = temp_a0 < 8;
        goto block_16;
    case 5:
        var_v0_2 = temp_a0 < 4;
        goto block_16;
    case 6:
        var_v0 = 0;
        if (temp_a0 == 8) {
            var_s0 = 1;
            goto block_18;
        }
        break;
    case 7:
        if (temp_a0 >= 4) {
            var_v0 = 0;
            if (temp_a0 == 5) {
                var_s0 = 1;
                goto block_18;
            }
        } else {
            goto block_17;
        }
        break;
    case 8:
        var_v0_2 = temp_a0 < 2;
        goto block_16;
    case 9:
        if (temp_a0 >= 2) {
            var_v0_2 = (u32) (temp_a0 - 4) < 4U;
            goto block_16;
        }
        goto block_17;
    case 10:
        var_v0_2 = temp_a0 < 3;
        goto block_16;
    }
    return var_v0;
}
