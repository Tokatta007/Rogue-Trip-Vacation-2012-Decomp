/* m2c reference for func_8012EEE8 @ 8012EEE8 (63 words). Generated; not compiled or validated. */
s32 func_8016BDA8(s32);                             /* extern */
static void *D_801C34EC = NULL;

void func_8012EEE8(void *arg0, s8 arg1, s8 arg2, s32 arg3) {
    s32 var_s2;
    s32 var_v0;

    var_s2 = 0;
    if (func_8016BDA8(arg0->unk7D0) != 0) {
        var_s2 = arg0->unk8B5 != 0;
    }
    if ((var_s2 != 0) && (D_801C34EC->unk7D8 != 0)) {
        if (arg3 == 0) {
            arg0->unk8AC = arg1;
            arg0->unk8AD = arg2;
            arg0->unk8A0 = 0;
            arg0->unk8A4 = 0;
            return;
        }
        if (arg0->unk82F == 0) {
            var_v0 = arg2 & 0xFF;
            if (arg1 & 0xFF) {
                arg0->unk8AC = arg1;
                arg0->unk8A0 = arg3;
                var_v0 = arg2 & 0xFF;
            }
            if (var_v0 != 0) {
                arg0->unk8AD = arg2;
                arg0->unk8A4 = arg3;
            }
        }
    }
}
