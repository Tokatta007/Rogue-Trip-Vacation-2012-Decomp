/* m2c reference for func_8014996C @ 8014996C (142 words). Generated; not compiled or validated. */
? func_80149BA4(void *);                            /* extern */
? func_80164168(void *);                            /* extern */
? func_8016417C(void *);                            /* extern */
void *func_801641F8();                              /* extern */
? func_80164274(void *, ?);                         /* extern */
? func_8016B4CC(s32, ?, s32);                       /* extern */
? func_8016B504(s32, s32, s32);                     /* extern */
static void *D_801C34EC = NULL;

void func_8014996C(void *arg0) {
    s32 temp_v1;
    s32 var_s2;
    s32 var_s2_2;
    s32 var_s2_3;
    s32 var_v0;
    void *temp_v0;
    void *temp_v0_2;
    void *var_s1;
    void *var_v1;
    void *var_v1_2;

    func_8016B4CC(arg0 + 0x10B8, 0x28, arg0 + 0x174C);
    func_8016B4CC(arg0 + 0x1298, 0x28, arg0 + 0x1750);
    var_s2 = 0;
    var_s1 = arg0;
    do {
        func_8016B504(arg0 + 0x1298, var_s2, arg0 + 0x1750);
        temp_v0 = func_801641F8();
        func_8016417C(temp_v0);
        func_80164168(temp_v0);
        temp_v0->unkC = 0;
        temp_v0->unkD = 0;
        func_80164274(temp_v0, 0);
        var_s1->unk24 = temp_v0;
        if (var_s1->unk1C != NULL) {
            var_s1->unk1C->unk254 = 0x1000;
        }
        if (var_s1->unk20 != NULL) {
            var_s1->unk20->unk254 = 0x1000;
        }
        var_s1->unk20 = NULL;
        var_s2 += 1;
        var_s1->unk1C = (void *) var_s1->unk20;
        var_s1 += 0x68;
    } while (var_s2 < 0x28);
    temp_v0_2 = func_801641F8();
    func_8016417C(temp_v0_2);
    func_80164168(temp_v0_2);
    temp_v0_2->unkC = 0;
    temp_v0_2->unkD = 0;
    arg0->unk1064 = temp_v0_2;
    arg0->unk1760 = 0;
    arg0->unk173C = func_801641F8();
    func_8016417C(arg0->unk173C);
    var_s2_2 = 0;
    func_80164168(arg0->unk173C);
    arg0->unk173C->unkC = 1;
    var_v1 = arg0;
    arg0->unk173C->unkD = 0;
    do {
        var_v1->unk1658 = 0;
        var_v1->unk165C = 0;
        var_s2_2 += 1;
        var_v1 += 8;
    } while (var_s2_2 < 0x1C);
    arg0->unk1738 = 0;
    temp_v1 = D_801C34EC->unk7D4;
    if (temp_v1 != 0) {
        var_v0 = 7;
        if (temp_v1 != 2) {

        } else {
            var_v0 = 3;
        }
    } else {
        var_v0 = 0xF;
    }
    arg0->unk1758 = var_v0;
    arg0->unk175C = var_v0;
    var_s2_3 = 0;
    var_v1_2 = arg0;
    do {
        var_v1_2->unk17A0 = 0;
        var_v1_2->unk17A8 = 0;
        var_v1_2->unk17B8 = 0;
        var_v1_2->unk17C0 = 0;
        var_v1_2->unk17E0 = 0;
        var_v1_2->unk17E8 = 0;
        var_v1_2->unk1818 = 0;
        var_v1_2->unk1820 = 0;
        var_v1_2->unk1828 = 0;
        var_v1_2->unk1830 = 0;
        var_v1_2->unk1838 = 0;
        var_v1_2->unk1854 = 0;
        var_v1_2->unk185C = 0;
        var_v1_2->unk1864 = 0;
        var_v1_2->unk1884 = 0;
        var_v1_2->unk188C = 0;
        var_v1_2->unk1894 = 0;
        var_v1_2->unk18A4 = 0;
        var_v1_2 += 4;
        var_s2_3 += 1;
        arg0->unk1768 = 0;
    } while (var_s2_3 < 2);
    func_80149BA4(arg0);
}
