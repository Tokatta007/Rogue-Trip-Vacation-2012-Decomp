/* m2c reference for func_80171058 @ 80171058 (298 words). Generated; not compiled or validated. */
? func_80170598(void *, s32, s32, s32);             /* extern */
? func_80170C50(void *, s32, s32, s32);             /* extern */
? func_80170DF0(void *, s32, s32, s32);             /* extern */
s16 func_80171500(void *, s32, s32, s32);           /* extern */
? func_80171580(void *, s32, s32, s32);             /* extern */
? func_80171B7C(s16, s16, s32);                     /* extern */
? func_80171C8C(s16, s16, s32, void *);             /* extern */

void func_80171058(void *arg0, ? arg1, ? arg2, ? arg3, s32 arg11, ? arg13, s16 arg14) {
    ? sp10;
    s32 sp3C;
    s32 sp40;
    ? sp4C;
    ? sp6C;
    ? *var_a0_2;
    ? *var_a1;
    ? *var_a1_3;
    ? *var_v0;
    ? *var_v0_2;
    ? *var_v0_3;
    ? *var_v0_4;
    ? *var_v0_5;
    ? *var_v0_6;
    ? *var_v1_2;
    ? *var_v1_3;
    ? *var_v1_4;
    ? *var_v1_5;
    ? *var_v1_6;
    ? *var_v1_8;
    s16 temp_v0;
    s32 *var_a0;
    s32 *var_a0_3;
    s32 *var_a1_2;
    s32 *var_v1;
    s32 *var_v1_7;
    s32 var_s4;
    s32 var_s5;
    void *temp_v0_2;
    void *var_s6;

    func_80171B7C((s16) (arg0 + (arg14 * 4))->unk3DC, arg14, arg0 + 0x320);
    var_v1 = &sp40;
    var_v0 = &arg1;
    do {
        var_v1->unk0 = var_v0->unk0;
        var_v1->unk4 = (s32) var_v0->unk4;
        var_v1->unk8 = (s32) var_v0->unk8;
        var_v1->unkC = (s32) var_v0->unkC;
        var_v0 += 0x10;
        var_v1 += 0x10;
    } while (var_v0 != &arg13);
    var_v1->unk0 = var_v0->unk0;
    var_v1->unk4 = (s32) var_v0->unk4;
    var_v1_2 = &sp10;
    var_v0_2 = &sp4C;
    do {
        var_v1_2->unk0 = (s32) var_v0_2->unk0;
        var_v1_2->unk4 = (s32) var_v0_2->unk4;
        var_v1_2->unk8 = (s32) var_v0_2->unk8;
        var_v1_2->unkC = (s32) var_v0_2->unkC;
        var_v0_2 += 0x10;
        var_v1_2 += 0x10;
    } while (var_v0_2 != &sp6C);
    var_v1_2->unk0 = (s32) var_v0_2->unk0;
    var_v1_2->unk4 = (s32) var_v0_2->unk4;
    var_v1_2->unk8 = (s32) var_v0_2->unk8;
    func_80170598(arg0, sp40, sp44, sp48);
    var_v0_3 = &arg1;
    if (arg11 >= arg0->unk3D4) {
        var_s4 = 0;
        if (arg0->unk320 != 0) {
            var_s6 = arg0;
            var_s5 = 0;
            var_a0 = &sp40;
loop_7:
            var_v0_4 = &arg1;
            do {
                var_a0->unk0 = var_v0_4->unk0;
                var_a0->unk4 = (s32) var_v0_4->unk4;
                var_a0->unk8 = (s32) var_v0_4->unk8;
                var_a0->unkC = (s32) var_v0_4->unkC;
                var_v0_4 += 0x10;
                var_a0 += 0x10;
            } while (var_v0_4 != &arg13);
            var_a1 = &sp10;
            var_v1_3 = &sp4C;
            var_a0->unk0 = arg13.unk0;
            var_a0->unk4 = (s32) arg13.unk4;
            sp3C = var_s5 >> 0x10;
            do {
                var_a1->unk0 = (s32) var_v1_3->unk0;
                var_a1->unk4 = (s32) var_v1_3->unk4;
                var_a1->unk8 = (s32) var_v1_3->unk8;
                var_a1->unkC = (s32) var_v1_3->unkC;
                var_v1_3 += 0x10;
                var_a1 += 0x10;
            } while (var_v1_3 != &sp6C);
            var_a1->unk0 = (s32) sp6C.unk0;
            var_a1->unk4 = (s32) sp6C.unk4;
            var_a1->unk8 = (s32) sp6C.unk8;
            temp_v0 = func_80171500(arg0, sp40, sp44, sp48);
            if (temp_v0 != -1) {
                func_80171C8C((s16) (arg0 + (arg14 * 4))->unk3DC, arg14, var_s5 >> 0x10, arg0 + 0x300);
                var_a1_2 = &sp40;
                var_s6->unk240 = temp_v0;
                var_v1_4 = &arg1;
                var_s6->unk246 = (s16) (arg0->unk302 & 0xFF);
                do {
                    var_a1_2->unk0 = var_v1_4->unk0;
                    var_a1_2->unk4 = (s32) var_v1_4->unk4;
                    var_a1_2->unk8 = (s32) var_v1_4->unk8;
                    var_a1_2->unkC = (s32) var_v1_4->unkC;
                    var_v1_4 += 0x10;
                    var_a1_2 += 0x10;
                } while (var_v1_4 != &arg13);
                var_a0_2 = &sp10;
                var_v1_5 = &sp4C;
                var_a1_2->unk0 = arg13.unk0;
                var_a1_2->unk4 = (s32) arg13.unk4;
                sp3C = (s32) temp_v0;
                do {
                    var_a0_2->unk0 = (s32) var_v1_5->unk0;
                    var_a0_2->unk4 = (s32) var_v1_5->unk4;
                    var_a0_2->unk8 = (s32) var_v1_5->unk8;
                    var_a0_2->unkC = (s32) var_v1_5->unkC;
                    var_v1_5 += 0x10;
                    var_a0_2 += 0x10;
                } while (var_v1_5 != &sp6C);
                var_a0_2->unk0 = (s32) sp6C.unk0;
                var_a0_2->unk4 = (s32) sp6C.unk4;
                var_a0_2->unk8 = (s32) sp6C.unk8;
                func_80170C50(arg0, sp40, sp44, sp48);
                var_a0_3 = &sp40;
                var_v0_5 = &arg1;
                do {
                    var_a0_3->unk0 = var_v0_5->unk0;
                    var_a0_3->unk4 = (s32) var_v0_5->unk4;
                    var_a0_3->unk8 = (s32) var_v0_5->unk8;
                    var_a0_3->unkC = (s32) var_v0_5->unkC;
                    var_v0_5 += 0x10;
                    var_a0_3 += 0x10;
                } while (var_v0_5 != &arg13);
                var_a1_3 = &sp10;
                var_v1_6 = &sp4C;
                var_a0_3->unk0 = var_v0_5->unk0;
                var_a0_3->unk4 = (s32) var_v0_5->unk4;
                sp3C = var_s4;
                do {
                    var_a1_3->unk0 = (s32) var_v1_6->unk0;
                    var_a1_3->unk4 = (s32) var_v1_6->unk4;
                    var_a1_3->unk8 = (s32) var_v1_6->unk8;
                    var_a1_3->unkC = (s32) var_v1_6->unkC;
                    var_v1_6 += 0x10;
                    var_a1_3 += 0x10;
                } while (var_v1_6 != &sp6C);
                var_a1_3->unk0 = (s32) var_v1_6->unk0;
                var_a1_3->unk4 = (s32) var_v1_6->unk4;
                var_a1_3->unk8 = (s32) var_v1_6->unk8;
                func_80170DF0(arg0, sp40, sp44, sp48);
                temp_v0_2 = arg0 + (temp_v0 * 0x18);
                temp_v0_2->unkC = (s32) arg0->unk3D4;
                temp_v0_2->unk14 = 0;
            }
            var_s6 += 8;
            var_s5 += 0x10000;
            var_s4 += 1;
            if (var_s4 < (s32) arg0->unk320) {
                var_a0 = &sp40;
                goto loop_7;
            }
        }
    } else {
        var_v1_7 = &sp40;
        do {
            var_v1_7->unk0 = var_v0_3->unk0;
            var_v1_7->unk4 = (s32) var_v0_3->unk4;
            var_v1_7->unk8 = (s32) var_v0_3->unk8;
            var_v1_7->unkC = (s32) var_v0_3->unkC;
            var_v0_3 += 0x10;
            var_v1_7 += 0x10;
        } while (var_v0_3 != &arg13);
        var_v1_7->unk0 = var_v0_3->unk0;
        var_v1_7->unk4 = (s32) var_v0_3->unk4;
        var_v1_8 = &sp10;
        var_v0_6 = &sp4C;
        do {
            var_v1_8->unk0 = (s32) var_v0_6->unk0;
            var_v1_8->unk4 = (s32) var_v0_6->unk4;
            var_v1_8->unk8 = (s32) var_v0_6->unk8;
            var_v1_8->unkC = (s32) var_v0_6->unkC;
            var_v0_6 += 0x10;
            var_v1_8 += 0x10;
        } while (var_v0_6 != &sp6C);
        var_v1_8->unk0 = (s32) var_v0_6->unk0;
        var_v1_8->unk4 = (s32) var_v0_6->unk4;
        var_v1_8->unk8 = (s32) var_v0_6->unk8;
        func_80171580(arg0, sp40, sp44, sp48);
    }
}
