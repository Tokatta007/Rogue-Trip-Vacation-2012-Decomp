/* m2c reference for func_8014C57C @ 8014C57C (168 words). Generated; not compiled or validated. */
? func_80125130(void *, s32 *);                     /* extern */
? func_8014D250(s32, void *);                       /* extern */
? func_8016408C(void *);                            /* extern */
u16 func_80176CBC(s16, s16, ?);                     /* extern */

void func_8014C57C(s32 arg0, void *arg1, void *arg2) {
    s32 sp10;
    s16 var_a1;
    s32 var_a0;
    s32 var_v0;
    s32 var_v0_2;
    u16 var_v0_3;
    void *temp_s0;

    func_80125130(arg2, &sp10);
    arg2->unk8 = (s32) (sp18 - (s16) arg1->unk14->unk18);
    func_8016408C(arg2 + 8);
    arg2->unk0 = (s32) (sp10 - (s16) arg1->unk14->unk14);
    func_8016408C(arg2);
    var_a0 = 0;
    var_v0 = arg2->unk8;
    if (var_v0 < 0) {
        var_v0 = -var_v0;
    }
    temp_s0 = arg1->unk14 + 0x14;
    if (var_v0 < 0x556) {
        var_v0_2 = arg2->unk0;
        if (var_v0_2 < 0) {
            var_v0_2 = -var_v0_2;
        }
        if (var_v0_2 >= 0x556) {
            goto block_6;
        }
    } else {
block_6:
        var_a0 = 1;
    }
    if (var_a0 != 0) {
        func_8014D250(arg0, arg1);
        arg1->unk3C = 0U;
        arg1->unk3E = 0U;
        return;
    }
    arg1->unk3C = func_80176CBC((s16) arg1->unk3C, (s16) arg1->unk44, 5);
    arg1->unk3E = func_80176CBC((s16) arg1->unk3E, (s16) arg1->unk44, 9);
    if (arg1->unk20 != 0x15) {
        if ((s16) arg1->unk3C < arg2->unk8) {
            temp_s0->unk4 = (u16) (temp_s0->unk4 + arg1->unk3C);
            var_a1 = -0x200;
            if (arg1->unk20 == 2) {
                goto block_17;
            }
        } else if (arg2->unk8 < -(s16) arg1->unk3C) {
            temp_s0->unk4 = (u16) (temp_s0->unk4 - arg1->unk3C);
            var_a1 = 0x200;
            if (arg1->unk20 == 2) {
                goto block_17;
            }
        } else {
            temp_s0->unk4 = (u16) (temp_s0->unk4 + arg2->unk8);
            var_a1 = 0;
            if (arg1->unk20 == 2) {
block_17:
                temp_s0->unk2 = func_80176CBC((s16) temp_s0->unk2, var_a1, 3);
            }
        }
    }
    if ((s16) arg1->unk3E < arg2->unk0) {
        var_v0_3 = temp_s0->unk0 + arg1->unk3E;
    } else if (arg2->unk0 < -(s16) arg1->unk3E) {
        var_v0_3 = temp_s0->unk0 - arg1->unk3E;
    } else {
        var_v0_3 = temp_s0->unk0 + arg2->unk0;
    }
    temp_s0->unk0 = var_v0_3;
}
