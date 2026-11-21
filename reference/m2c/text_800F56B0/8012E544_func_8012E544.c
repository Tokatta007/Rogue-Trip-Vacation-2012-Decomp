/* m2c reference for func_8012E544 @ 8012E544 (125 words). Generated; not compiled or validated. */
s32 func_800FF594(s32, s32);                        /* extern */
? func_80124C4C(s32, s32, s32);                     /* extern */
s32 func_80125094(s32, void *);                     /* extern */
? func_801253C8(s32, void *);                       /* extern */
s32 func_8012EAEC(? *);                             /* extern */
extern ? D_8018462C;
extern s32 D_801C37DC;
static s32 D_801C34EC = 0;

s32 func_8012E544(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 sp10;
    s32 sp14;
    ? *var_s2;
    s32 temp_s0;
    s32 temp_v0;
    s32 var_fp;
    s32 var_s4;
    s32 var_s5;
    s32 var_s6;
    s32 var_s7;
    s32 var_v1;
    void *var_s1;

    var_s7 = 0;
    var_fp = 0;
    temp_v0 = D_801C34EC + 0x15CC;
    sp10 = temp_v0;
    sp14 = func_800FF594(temp_v0, arg0);
    if (arg2 != 0) {
        var_s6 = 0x7FFFFFFF;
        var_s5 = 0x7FFFFFFF;
    } else {
        var_s6 = 0xFA0;
        var_s5 = 0xFA0;
    }
    var_s4 = 0;
    var_s2 = &D_8018462C;
loop_4:
    if (var_s4 < D_801C37DC) {
        if (func_8012EAEC(var_s2) & 0xFF) {
            var_v1 = 0;
            if ((u32) ((u16) *var_s2->unk8 >> 4) >= 0x190U) {
                var_v1 = (u32) ((u16) *var_s2->unk8 >> 4) < 0x194U;
            }
            if (arg3 != 0) {
                var_s1 = var_s2 + 0xC;
                if (var_v1 & 0xFF) {
                    goto block_12;
                }
            } else {
                var_s1 = var_s2 + 0xC;
                if (!(var_v1 & 0xFF)) {
block_12:
                    temp_s0 = func_80125094(arg0, var_s1);
                    if (func_800FF594(sp10, arg0) == sp14) {
                        if (temp_s0 < var_s6) {
                            var_s6 = temp_s0;
                            var_fp = 1;
                            var_s7 = 1;
                            goto block_18;
                        }
                    } else if (!(var_fp & 0xFF) && (temp_s0 < var_s5)) {
                        var_s5 = temp_s0;
                        var_s7 = 1;
block_18:
                        func_801253C8(arg1, var_s1);
                    }
                }
            }
        }
        var_s2 += 0x18;
        var_s4 += 1;
        goto loop_4;
    }
    if (var_s7 == 0) {
        func_80124C4C(D_801C34EC, arg0, arg1);
    }
    return var_s7;
}
