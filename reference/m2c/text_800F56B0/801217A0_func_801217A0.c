/* m2c reference for func_801217A0 @ 801217A0 (102 words). Generated; not compiled or validated. */
? func_80121938(s32, s32, ?);                       /* extern */
? func_80121A00(s32, s32, ?);                       /* extern */
? func_80121C44(s32, s32, ?);                       /* extern */
? func_8012224C(s32, s32, ?);                       /* extern */
? func_80122398(s32, s32, ?);                       /* extern */
? func_801223FC(s32, s32, ?);                       /* extern */
s16 func_80178A1C();                                /* extern */

void func_801217A0(void *arg0, s32 arg2, ? arg3) {
    ? var_a3;
    s32 var_a1;
    s32 var_a2;
    void *var_v0;
    void *var_v1;

    var_a2 = arg2;
    var_a3 = arg3;
    arg0->unk127A8 = 0;
    var_a1 = 0;
    if (arg0->unk12750 > 0) {
        var_a3 = 0x8000;
        var_a2 = arg0 + 0x10000;
        var_v1 = arg0;
        var_v0 = var_v1 + 0xC8F8;
        do {
            if ((var_v0->unk8C == 0) && (var_v1->unkD23D != 0)) {
                arg0->unk127A8 = (s32) (arg0->unk127A8 + 1);
            }
            var_v1 += 0x958;
            var_a1 += 1;
            var_v0 = var_v1 + 0xC8F8;
        } while (var_a1 < arg0->unk12750);
    }
    if (arg0->unk7D8 != 0) {
        if (arg0->unk127DE != 0) {
            if (arg0->unk12790 != 0) {
                if (arg0->unk127E6 == 0) {
                    func_80121938(var_a1, var_a2, var_a3);
                    arg0->unk127E6 = 1U;
                }
                arg0->unk12790 = (s32) (arg0->unk12790 - func_80178A1C());
                if (arg0->unk12790 <= 0) {
                    arg0->unk12790 = 0;
                }
            } else {
                func_80121A00(var_a1, var_a2, var_a3);
            }
        } else {
            if (arg0->unk127DF != 0) {
                func_80121C44(var_a1, var_a2, var_a3);
                return;
            }
            if (arg0->unk127E0 != 0) {
                func_8012224C(var_a1, var_a2, var_a3);
                return;
            }
            if (arg0->unk127E1 != 0) {
                func_80122398(var_a1, var_a2, var_a3);
                return;
            }
            func_801223FC(var_a1, var_a2, var_a3);
        }
    }
}
