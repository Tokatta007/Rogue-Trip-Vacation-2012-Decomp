/* m2c reference for func_8017EE5C @ 8017EE5C (131 words). Generated; not compiled or validated. */
? func_8017DEE8();                                  /* extern */
? func_8017DF0C();                                  /* extern */
? func_8017E234(s32);                               /* extern */
? func_8017F07C(?, ?, s32 *);                       /* extern */
s32 func_8017F54C(s32);                             /* extern */
? func_8017F628(s32, s8 *);                         /* extern */
? func_8017FC18();                                  /* extern */
s32 func_8017FDD4();                                /* extern */
extern s32 D_801F52C4;
extern ? D_801F52D0;
static s8 D_800F566C[0x20] = {
    0x41,
    0x63,
    0x63,
    0x65,
    0x73,
    0x73,
    0x20,
    0x44,
    0x65,
    0x6E,
    0x69,
    0x65,
    0x64,
    0x2E,
    0x20,
    0x3A,
    0x20,
    0x73,
    0x79,
    0x73,
    0x74,
    0x65,
    0x6D,
    0x20,
    0x62,
    0x75,
    0x73,
    0x79,
    0xA,
    0,
    0,
    0,
}; /* const */

s32 func_8017EE5C(s32 arg0, s8 *arg1, s32 arg2, s32 *arg3, s32 arg4, s32 arg5) {
    s8 sp10;
    ? sp30;
    ? sp50;
    s32 sp58;
    ? *var_a2;
    s32 temp_v0;
    s32 var_s1;
    s32 var_s2;
    s32 var_s3;
    s32 var_s4;
    s32 var_v0;
    void *var_a3;
    void *var_s0;

    if (D_801F52D0.unk0 != 0) {
        printf(D_800F566C);
        return -1;
    }
    func_8017F628(arg0, &sp10);
    strcat(&sp10, arg1);
    var_s2 = 0;
    var_s1 = 0;
    sp58 = 0;
    D_801F52C4 |= 1 << D_801F52D0.unkC;
    var_s4 = 0;
    if ((arg4 + arg5) > 0) {
        var_s3 = 0;
loop_4:
        if (var_s1 == 0) {
loop_5:
            func_8017FC18();
            var_s0 = firstfile(&sp10, &sp30);
            var_v0 = var_s1 < arg4;
            if (var_s0 == NULL) {
                temp_v0 = func_8017F54C(func_8017FDD4());
                sp58 = temp_v0;
                if (temp_v0 != 0) {
                    var_s2 += 1;
                    if (var_s2 >= 4) {
                        func_8017DEE8();
                        func_8017E234(arg0);
                        func_8017F07C(0, 0, &sp58);
                        func_8017DF0C();
                        return sp58;
                    }
                    goto loop_5;
                }
                goto block_10;
            }
            goto block_11;
        }
        var_s0 = nextfile(&sp30);
block_10:
        var_v0 = var_s1 < arg4;
        if (var_s0 != NULL) {
block_11:
            if (var_v0 == 0) {
                var_a3 = var_s3 + arg2;
                if (arg2 != 0) {
                    var_a2 = &sp30;
                    do {
                        var_a3->unk0 = (s32) var_a2->unk0;
                        var_a3->unk4 = (s32) var_a2->unk4;
                        var_a3->unk8 = (s32) var_a2->unk8;
                        var_a3->unkC = (s32) var_a2->unkC;
                        var_a2 += 0x10;
                        var_a3 += 0x10;
                    } while (var_a2 != &sp50);
                    var_a3->unk0 = (s32) var_a2->unk0;
                    var_a3->unk4 = (s32) var_a2->unk4;
                    var_s3 += 0x28;
                    var_s4 += 1;
                }
            }
            var_s1 += 1;
            if (var_s1 >= (arg4 + arg5)) {
                goto block_17;
            }
            goto loop_4;
        }
        goto block_17;
    }
block_17:
    if (arg3 != NULL) {
        *arg3 = var_s4;
    }
    return 0;
}
