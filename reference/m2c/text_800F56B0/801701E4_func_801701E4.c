/* m2c reference for func_801701E4 @ 801701E4 (105 words). Generated; not compiled or validated. */
? func_8015C374(u16 *, s16, s16);                   /* extern */
extern s16 D_801C38E6;
extern ? D_801C38EA;
extern s16 D_801C38EE;
extern ? D_801F3988;

void func_801701E4(s16 arg0) {
    u16 sp10;
    u16 sp12;
    u16 sp14;
    s16 sp16;
    ? *var_s0;
    s16 var_a0;
    s16 var_s1;
    s32 var_s2;

    var_s2 = 0;
    if (D_801C38EE > 0) {
        var_s0 = &D_801F3988;
        do {
            var_a0 = arg0;
            var_s1 = 0;
            if (var_a0 != 0) {
                do {
                    var_s0->unkE = (u16) (var_s0->unkE - var_s0->unkC);
                    if (var_s0->unkE & 0x8000) {
                        var_s1 += 1;
                        var_s0->unkE = (u16) (var_s0->unkE + 0x3C);
                    }
                    var_a0 -= 1;
                    var_s1 += var_s0->unk8;
                } while (var_a0 != 0);
            }
            if (D_801C38EA.unk0 < var_s1) {
                var_s1 = D_801C38EA.unk0;
            }
            if (var_s1 != 0) {
                sp10 = var_s0->unk0;
                sp12 = var_s0->unk2;
                sp16 = var_s1;
                sp14 = var_s0->unk4;
                func_8015C374(&sp10, D_801C38EA.unk-6, D_801C38E6);
                sp12 = var_s0->unk2 + var_s1;
                sp16 = var_s0->unk6 - var_s1;
                func_8015C374(&sp10, (s16) var_s0->unk0, (s16) var_s0->unk2);
                sp10 = (u16) D_801C38EA.unk-6;
                sp12 = (u16) D_801C38E6;
                sp16 = var_s1;
                sp14 = var_s0->unk4;
                func_8015C374(&sp10, (s16) var_s0->unk0, ((s16) var_s0->unk2 + (s16) var_s0->unk6) - var_s1);
            }
            var_s2 += 1;
            var_s0 += 0x10;
        } while (var_s2 < D_801C38EE);
    }
}
