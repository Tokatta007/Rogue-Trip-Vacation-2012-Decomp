/* m2c reference for func_80121938 @ 80121938 (50 words). Generated; not compiled or validated. */
? func_800F6D3C(void *, s32);                       /* extern */

void func_80121938(void *arg0) {
    s32 var_s1;
    s32 var_s2;
    void *temp_v0;
    void *var_s3;

    var_s1 = 0;
    if (arg0->unk12750 > 0) {
        var_s3 = arg0;
        var_s2 = 0;
        do {
            func_800F6D3C(arg0 + (var_s2 + 0xC8F8), arg0->unk127A0);
            arg0->unk127A0 = (s32) (arg0->unk127A0 + 1);
            if (arg0->unk127A0 >= 4) {
                arg0->unk127A0 = 0;
            }
            temp_v0 = var_s3 + 0x8000;
            var_s3 += 0x958;
            var_s2 += 0x958;
            temp_v0->unk523F = 0;
            var_s1 += 1;
        } while (var_s1 < arg0->unk12750);
    }
}
