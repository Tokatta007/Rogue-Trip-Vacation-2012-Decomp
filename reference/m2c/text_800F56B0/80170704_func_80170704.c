/* m2c reference for func_80170704 @ 80170704 (324 words). Generated; not compiled or validated. */
? func_80170598(void *, s32, s32, s32);             /* extern */
? func_80170C14(void *, u8);                        /* extern */
? func_80170C50(void *, s32, s32, s32);             /* extern */
? func_80170DF0(void *, s32, s32, s32);             /* extern */
s16 func_801716F0(void *);                          /* extern */
? func_80171B7C(s16, s16, void *);                  /* extern */
? func_80171C8C(s16, s16, s16, void *);             /* extern */
? func_80171ECC(s16, s16, s16, s16);                /* extern */

s32 func_80170704(void *arg0, ? arg1, ? arg2, s32 arg3, s32 arg4, s32 arg9, s32 arg11, ? arg13, s16 arg14) {
    s32 sp10;
    s32 sp14;
    s32 sp18;
    s32 sp1C;
    s32 sp3C;
    s32 sp40;
    ? sp4C;
    ? sp6C;
    ? *var_v0_2;
    ? *var_v0_3;
    ? *var_v0_4;
    ? *var_v0_5;
    ? *var_v1_3;
    ? *var_v1_4;
    s16 temp_a3;
    s16 temp_s3;
    s16 var_s1;
    s16 var_s1_2;
    s32 *var_a0_2;
    s32 *var_a0_3;
    s32 *var_a1;
    s32 *var_a1_2;
    s32 *var_v1;
    s32 *var_v1_2;
    s32 var_a0;
    s32 var_s1_3;
    s32 var_v0;
    u16 temp_v1;
    void *var_s0;
    void *var_s0_2;

    var_v1 = &sp40;
    var_v0_2 = &arg1;
    do {
        var_v1->unk0 = var_v0_2->unk0;
        var_v1->unk4 = (s32) var_v0_2->unk4;
        var_v1->unk8 = (s32) var_v0_2->unk8;
        var_v1->unkC = (s32) var_v0_2->unkC;
        var_v0_2 += 0x10;
        var_v1 += 0x10;
    } while (var_v0_2 != &arg13);
    var_v1->unk0 = var_v0_2->unk0;
    var_v1->unk4 = (s32) var_v0_2->unk4;
    var_v1_2 = &sp10;
    var_v0_3 = &sp4C;
    do {
        var_v1_2->unk0 = var_v0_3->unk0;
        var_v1_2->unk4 = (s32) var_v0_3->unk4;
        var_v1_2->unk8 = (s32) var_v0_3->unk8;
        var_v1_2->unkC = (s32) var_v0_3->unkC;
        var_v0_3 += 0x10;
        var_v1_2 += 0x10;
    } while (var_v0_3 != &sp6C);
    var_v1_2->unk0 = var_v0_3->unk0;
    var_v1_2->unk4 = (s32) var_v0_3->unk4;
    var_v1_2->unk8 = (s32) var_v0_3->unk8;
    func_80170598(arg0, sp40, sp44, sp48);
    var_v0 = 0;
    if (arg11 >= arg0->unk3D4) {
        func_80171B7C((s16) (arg0 + (arg14 * 4))->unk3DC, arg14, arg0 + 0x320);
        var_a0 = 0;
        if ((arg0->unk3D0 < (s32) arg0->unk320) || ((u8) arg0->unk320 >= 0x18U)) {
            var_a0 = 1;
        }
        var_v0 = 0;
        if (var_a0 == 0) {
            var_s1 = 0;
            var_s0 = arg0;
loop_10:
            if (var_s1 < (s32) arg0->unk320) {
                func_80171C8C((s16) (arg0 + (arg14 * 4))->unk3DC, arg14, var_s1, arg0 + 0x300);
                temp_s3 = func_801716F0(arg0);
                var_a0_2 = &sp40;
                var_v0_4 = &arg1;
                do {
                    var_a0_2->unk0 = var_v0_4->unk0;
                    var_a0_2->unk4 = (s32) var_v0_4->unk4;
                    var_a0_2->unk8 = (s32) var_v0_4->unk8;
                    var_a0_2->unkC = (s32) var_v0_4->unkC;
                    var_v0_4 += 0x10;
                    var_a0_2 += 0x10;
                } while (var_v0_4 != &arg13);
                var_a1 = &sp10;
                var_v1_3 = &sp4C;
                var_a0_2->unk0 = var_v0_4->unk0;
                var_a0_2->unk4 = (s32) var_v0_4->unk4;
                sp3C = (s32) temp_s3;
                do {
                    var_a1->unk0 = var_v1_3->unk0;
                    var_a1->unk4 = (s32) var_v1_3->unk4;
                    var_a1->unk8 = (s32) var_v1_3->unk8;
                    var_a1->unkC = (s32) var_v1_3->unkC;
                    var_v1_3 += 0x10;
                    var_a1 += 0x10;
                } while (var_v1_3 != &sp6C);
                var_a1->unk0 = var_v1_3->unk0;
                var_a1->unk4 = (s32) var_v1_3->unk4;
                var_a1->unk8 = (s32) var_v1_3->unk8;
                func_80170C50(arg0, sp40, sp44, sp48);
                var_s0->unk240 = temp_s3;
                var_s0->unk242 = (s16) (arg0->unk304 & 0xFF);
                var_s0->unk244 = (s16) (arg0->unk305 & 0xFF);
                var_s0->unk246 = (s16) (arg0->unk302 & 0xFF);
                *(arg0 + ((s16) (u16) var_s0->unk240 * 0x18)) = arg3;
                (arg0 + ((s16) (u16) var_s0->unk240 * 0x18))->unk4 = arg4;
                (arg0 + ((s16) (u16) var_s0->unk240 * 0x18))->unk8 = arg9;
                (arg0 + ((s16) (u16) var_s0->unk240 * 0x18))->unk10 = var_s1;
                var_s1 += 1;
                (arg0 + ((s16) (u16) var_s0->unk240 * 0x18))->unkC = (s32) arg0->unk3D4;
                temp_v1 = (u16) var_s0->unk240;
                var_s0 += 8;
                (arg0 + ((s16) temp_v1 * 0x18))->unk14 = 1;
                goto loop_10;
            }
            var_s1_2 = 0;
            if (arg0->unk320 != 0) {
                var_s0_2 = arg0;
                do {
                    temp_a3 = var_s1_2;
                    var_s1_2 += 1;
                    sp10 = (s32) (s16) var_s0_2->unk242;
                    sp18 = 0;
                    sp1C = 0;
                    sp14 = (s32) (s16) var_s0_2->unk244;
                    func_80171ECC((s16) var_s0_2->unk240, (s16) (arg0 + (arg14 * 4))->unk3DC, arg14, temp_a3);
                    var_s0_2 += 8;
                } while (var_s1_2 < (s32) arg0->unk320);
            }
            var_s1_3 = 0;
            if (arg0->unk320 != 0) {
                var_a0_3 = &sp40;
                do {
                    var_v0_5 = &arg1;
loop_22:
                    var_a0_3->unk0 = var_v0_5->unk0;
                    var_a0_3->unk4 = (s32) var_v0_5->unk4;
                    var_a0_3->unk8 = (s32) var_v0_5->unk8;
                    var_a0_3->unkC = (s32) var_v0_5->unkC;
                    var_v0_5 += 0x10;
                    var_a0_3 += 0x10;
                    if (var_v0_5 != &arg13) {
                        goto loop_22;
                    }
                    var_a1_2 = &sp10;
                    var_v1_4 = &sp4C;
                    var_a0_3->unk0 = var_v0_5->unk0;
                    var_a0_3->unk4 = (s32) var_v0_5->unk4;
                    sp3C = var_s1_3;
loop_24:
                    var_a1_2->unk0 = var_v1_4->unk0;
                    var_a1_2->unk4 = (s32) var_v1_4->unk4;
                    var_a1_2->unk8 = (s32) var_v1_4->unk8;
                    var_a1_2->unkC = (s32) var_v1_4->unkC;
                    var_v1_4 += 0x10;
                    var_a1_2 += 0x10;
                    if (var_v1_4 != &sp6C) {
                        goto loop_24;
                    }
                    var_a1_2->unk0 = var_v1_4->unk0;
                    var_a1_2->unk4 = (s32) var_v1_4->unk4;
                    var_a1_2->unk8 = (s32) var_v1_4->unk8;
                    func_80170DF0(arg0, sp40, sp44, sp48);
                    var_s1_3 += 1;
                    var_a0_3 = &sp40;
                } while (var_s1_3 < (s32) arg0->unk320);
            }
            func_80170C14(arg0, arg0->unk320);
            var_v0 = 1;
        }
    }
    return var_v0;
}
