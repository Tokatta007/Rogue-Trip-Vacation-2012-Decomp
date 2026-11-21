/* m2c reference for func_80147DD0 @ 80147DD0 (264 words). Generated; not compiled or validated. */
? func_8016408C(s32 *);                             /* extern */
s16 func_80178A1C(s32);                             /* extern */
static void *D_801C34EC = NULL;

void func_80147DD0(void *arg0) {
    s32 sp10;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_s1;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v0_4;
    s32 var_v1;

    sp10 = (s16) arg0->unk24 - arg0->unk1F8;
    func_8016408C(&sp10);
    arg0->unk764 = 0x3F;
    var_s1 = sp10;
    if (sp10 < 0) {
        var_s1 = -var_s1;
    }
    if (var_s1 < 0x1C7) {
        arg0->unk75C = (s32) arg0->unk768;
        var_a0 = 0x140;
        arg0->unk764 = (s32) (arg0->unk764 * 2);
    } else if (var_s1 < 0x31C) {
        var_a0 = 0x640;
        arg0->unk75C = (s32) arg0->unk76C;
        arg0->unk764 = (s32) (arg0->unk764 + ((s32) arg0->unk764 >> 1));
    } else {
        if (var_s1 < 0x471) {
            var_v0 = arg0->unk770;
            var_a0 = 0x7D0;
        } else if (var_s1 < 0x5C7) {
            var_v0 = arg0->unk774;
            var_a0 = 0x640;
        } else {
            var_v0 = arg0->unk778;
            var_a0 = 0x320;
        }
        arg0->unk75C = var_v0;
    }
    if (arg0->unk1C < var_a0) {
        if (var_s1 >= 0x72) {
            arg0->unk764 = (s32) ((s32) (arg0->unk764 * arg0->unk1C) / var_a0);
            goto block_15;
        }
    } else {
block_15:
        if (var_s1 >= 0x72) {
            var_v1 = arg0->unkC;
            var_v0_2 = arg0->unk10;
            if (var_v1 < 0) {
                var_v1 = -var_v1;
            }
            if (var_v0_2 < 0) {
                var_v0_2 = -var_v0_2;
            }
            if (var_v1 >= var_v0_2) {
                var_v0_3 = arg0->unkC;
            } else {
                var_v0_3 = arg0->unk10;
            }
            if (var_v0_3 < 0) {
                var_v0_3 = -var_v0_3;
            }
            if (var_v0_3 < 0x10) {
                arg0->unk764 = (s32) ((s32) arg0->unk764 >> 2);
                arg0->unk75C = (s32) ((s32) arg0->unk75C >> 2);
            }
        }
    }
    if (((s32) arg0->unk18 >> 1) < arg0->unk75C) {
        arg0->unk75C = (s32) ((s32) arg0->unk18 >> 1);
    }
    if (arg0->unk75C < 0xA0) {
        arg0->unk75C = 0xA0;
    }
    arg0->unk760 = (s32) ((s32) (arg0->unk764 * arg0->unkD0) >> 6);
    if (arg0->unk760 < (((func_80178A1C(var_a0) * 0x16DA) / 1000) << 6)) {
        arg0->unk760 = (s32) (((func_80178A1C() * 0x16DA) / 1000) << 6);
        arg0->unk764 = (s32) ((s32) (arg0->unk760 << 6) / (s32) arg0->unkD0);
    }
    var_a0_2 = 0;
    if (D_801C34EC->unk12688 == 3) {
        var_a0_2 = (s16) arg0->unk5C == 0x7E;
    }
    var_v0_4 = var_s1 < 0x71;
    if (var_a0_2 != 0) {
        arg0->unk760 = (s32) (((func_80178A1C(var_a0_2) * 0x230A) / 1000) << 6);
        arg0->unk764 = (s32) ((s32) (arg0->unk760 << 6) / (s32) arg0->unkD0);
        var_v0_4 = var_s1 < 0x71;
    }
    if (var_v0_4 != 0) {
        arg0->unk7B0 = 0;
        return;
    }
    arg0->unk7B0 = (s32) (arg0->unk75C + 0x320);
}
