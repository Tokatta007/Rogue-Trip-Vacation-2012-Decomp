/* m2c reference for func_8010D5FC @ 8010D5FC (117 words). Generated; not compiled or validated. */
? func_8010DBC4(void *, ? *);                       /* extern */
? func_8010F828(void *, void *, ? *);               /* extern */
? func_8010FDC4(void *, void *, ?);                 /* extern */
? func_801254DC(s32, ?, ?, ?);                      /* extern */
? func_8013C9C0(s32, ?, void *, s32);               /* extern */
? func_80144BC8(void *, ?, ?);                      /* extern */
? func_8016408C(s32 *, s32, s32);                   /* extern */
static void *D_801C34EC = NULL;
static s32 D_801C34F4 = 0;

void func_8010D5FC(void *arg0) {
    ? sp10;
    s32 sp20;
    ? var_a1;
    s32 temp_a1;
    s32 temp_a2;
    s32 temp_lo;
    s32 var_a3;
    s32 var_a3_2;
    s32 var_v0;
    void *var_a2;

    arg0->unk539 = 0U;
    func_801254DC(arg0 + 0x46C, 0, 0, 0);
    func_8010DBC4(arg0, &sp10);
    if (arg0->unk53A != 0) {
        if (arg0->unk6BC == 0) {
            func_8010FDC4(arg0, arg0 + 0x1F0, 0);
        }
        if (arg0->unk539 != 0) {
            func_8010F828(arg0, arg0 + 0x460, &sp10);
        }
        arg0->unk8D = 1;
        if (arg0->unk7B8 == 2) {
            arg0->unk533 = (u8) (arg0->unk533 + 1);
        }
        if ((arg0->unkA0 != 0) && (arg0->unk8C == 0)) {
            arg0->unk10C = -1;
            arg0->unk8C = 1U;
            D_801C34EC->unk1275C = 0xB4;
            func_80144BC8(arg0, 0, 0xB4);
        }
        temp_a1 = arg0->unk7A4;
        temp_a2 = arg0->unk25C;
        sp20 = arg0->unk1F8 - arg0->unk204;
        temp_lo = (s32) (temp_a1 * 0x64) / temp_a2;
        func_8016408C(&sp20, temp_a1, temp_a2);
        var_a3 = sp20;
        if (sp20 < 0) {
            var_a3 = -var_a3;
        }
        if (var_a3 < 0x200) {
            var_v0 = temp_lo * var_a3;
            if (var_v0 < 0) {
                var_v0 += 0x1FF;
            }
            var_a1 = 9;
            var_a2 = arg0 + 0x1E4;
            var_a3_2 = var_v0 >> 9;
        } else {
            var_a1 = 0xA;
            var_a2 = arg0 + 0x1E4;
            var_a3_2 = temp_lo;
        }
        func_8013C9C0(D_801C34F4, var_a1, var_a2, var_a3_2);
    }
}
