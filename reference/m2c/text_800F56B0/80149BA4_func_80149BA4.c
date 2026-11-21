/* m2c reference for func_80149BA4 @ 80149BA4 (103 words). Generated; not compiled or validated. */
void *func_80124584(s32, ?, s32);                   /* extern */
? func_8016D6BC(s32, ?);                            /* extern */
static s32 D_801C34EC = 0;

void func_80149BA4(void *arg0) {
    s32 var_s3;
    void *temp_v0;
    void *var_s0;
    void *var_s1;
    void *var_s2;

    var_s3 = 0;
    var_s1 = arg0;
    var_s2 = var_s1;
    var_s0 = var_s2;
    arg0->unk1764 = 0;
    arg0->unk176C = 0;
loop_1:
    if (var_s3 < 2) {
        var_s1->unk17A8 = 0;
        var_s0->unk17B0 = 0;
        var_s0->unk17B4 = 0;
        var_s0->unk17B6 = 0;
        var_s1->unk17C8 = 0;
        var_s0->unk17D0 = 0;
        var_s0->unk17D2 = 0;
        var_s0->unk17D4 = 0;
        var_s0->unk17D8 = 0;
        var_s0->unk17DA = 0;
        var_s0->unk17DC = 0;
        var_s2->unk17F0 = 0;
        var_s0->unk17F4 = 0;
        var_s0->unk17F6 = 0;
        var_s0->unk17F8 = 0;
        func_8016D6BC(arg0->unk16D8, 0);
        func_8016D6BC(arg0->unk16DC, 0);
        if (var_s1->unk17E8 != NULL) {
            var_s1->unk17E8->unkC = 0;
            if (var_s1->unk17E0 != NULL) {
                temp_v0 = func_80124584(D_801C34EC, 0x50, var_s3);
                if ((temp_v0 != NULL) && (temp_v0->unk8C == 0)) {
                    var_s1->unk17E0->unkC = 1;
                }
            }
        }
        var_s0->unk17FC = 0;
        var_s2->unk1840 = 0;
        var_s0->unk1850 = 0;
        if (var_s1->unk1820 != NULL) {
            var_s1->unk1820->unkC = 0;
            var_s1->unk1828->unkC = 0;
            var_s1->unk1830->unkC = 0;
        }
        var_s1->unk185C = 0;
        var_s1->unk1864 = 0;
        var_s2->unk186C = 0;
        var_s0->unk1872 = 0;
        var_s1->unk188C = 0;
        var_s1->unk1894 = 0;
        var_s2->unk189C = 0;
        var_s0->unk18A0 = 0;
        var_s1->unk18A4 = 0;
        var_s1 += 4;
        var_s2->unk18AC = 0;
        var_s2 += 2;
        var_s0->unk18B0 = 0;
        var_s0->unk18B2 = 0;
        var_s0 += 1;
        var_s3 += 1;
        goto loop_1;
    }
}
