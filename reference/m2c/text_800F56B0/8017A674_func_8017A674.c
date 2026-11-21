/* m2c reference for func_8017A674 @ 8017A674 (140 words). Generated; not compiled or validated. */
s32 func_8015EE1C(s8, ? *);                         /* extern */
? func_8015EE7C(? *);                               /* extern */
? func_80178B40(?, s32, ?);                         /* extern */
? func_80178C78(?);                                 /* extern */
extern ? D_801C30E4;
extern ? D_801C30F0;
extern ? func_8017A8E4;
extern ? func_8017A930;

void func_8017A674(s32 arg0) {
    ? *var_a1;
    ? var_s2;
    s32 var_s1;
    s32 var_v0;
    s8 temp_a0;
    void *temp_a1;

    var_v0 = 0x3E6;
    do {
        var_v0 -= 1;
    } while (var_v0 >= 0);
    var_s2 = 0xF2000002;
    var_s1 = 0x44E8;
    D_801C30F0.unk2 = 6;
    D_801C30F0.unk0 = 0;
    D_801C30F0.unk1 = 0;
    D_801C30F0.unk-4 = 0;
    switch (D_801C30F0.unk-10) {                    /* irregular */
    case 0:
        D_801C30F0.unk2 = 0x7F;
        return;
    case 5:
        D_801C30F0.unk2 = 0;
        if (arg0 == 0) {
            D_801C30F0.unk0 = 1;
        } else {
            var_s2 = 0xF2000003;
            var_s1 = 1;
        }
    case 2:
block_18:
        if (D_801C30F0.unk0 != 0) {
            EnterCriticalSection();
            func_8015EE7C(D_801C30F0.unk-8);
        } else {
            EnterCriticalSection();
            func_80178C78(var_s2);
            func_80178B40(var_s2, var_s1 & 0xFFFF, 0x1000);
            temp_a0 = D_801C30F0.unk2;
            if (temp_a0 == 0) {
                var_a1 = &func_8017A8E4;
                D_801C30F0.unk-4 = func_8015EE1C(0, NULL);
            } else {
                var_a1 = &func_8017A930;
                if (D_801C30F0.unk1 == 0) {
                    var_a1 = D_801C30F0.unk-8;
                }
            }
            func_8015EE1C(temp_a0, var_a1);
        }
        ExitCriticalSection();
        return;
    case 3:
        var_s1 = 0x89D0;
        goto block_18;
    default:
        if (D_801C30E4.unk0 == 0) {
            temp_a1 = &D_801C30E4 - 4;
            if (D_801C30E4.unk-4 < 0x46) {
                temp_a1->unk11 = (u8) (temp_a1->unk11 + 1);
                var_s1 = 0x204CC0 / (s32) D_801C30E4.unk-4;
            } else {
                var_s1 = 0x409980 / (s32) D_801C30E4.unk-4;
            }
            goto block_18;
        }
        break;
    }
}
