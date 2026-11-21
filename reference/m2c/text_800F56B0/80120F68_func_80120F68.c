/* m2c reference for func_80120F68 @ 80120F68 (30 words). Generated; not compiled or validated. */
? func_8012EEA0(void *);                            /* extern */

void func_80120F68(void *arg0) {
    s32 var_s0;
    s32 var_s1;

    var_s0 = 0;
    if (arg0->unk12728 > 0) {
        var_s1 = 0xB788;
        do {
            func_8012EEA0(arg0 + var_s1);
            var_s1 += 0x8B8;
            var_s0 += 1;
        } while (var_s0 < arg0->unk12728);
    }
}
