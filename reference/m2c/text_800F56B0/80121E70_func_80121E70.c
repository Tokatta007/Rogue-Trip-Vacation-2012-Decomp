/* m2c reference for func_80121E70 @ 80121E70 (135 words). Generated; not compiled or validated. */
? func_800F5E1C(void *, s32);                       /* extern */
? func_800F6D3C(void *, s32);                       /* extern */
? func_8012208C(s32 *, s32 *);                      /* extern */

void func_80121E70(void *arg0, void *arg1, s32 arg2) {
    s32 sp10;
    s32 sp14;
    s32 var_s2;
    s32 var_s3;
    void *temp_s0;
    void *temp_s0_2;
    void *temp_s0_3;

    func_8012208C(&sp10, &sp14);
    if (sp10 >= 0) {
        temp_s0 = arg0 + ((sp10 * 0x958) + 0xC8F8);
        temp_s0->unk8 = 3;
        temp_s0->unk58 = arg2;
        temp_s0->unk34 = (s32) (arg1 + 0x1E4);
        temp_s0->unk780 = 0;
        func_800F5E1C(temp_s0, (arg0 + (arg1->unk7C8 * 4))->unk1241C);
        if (temp_s0->unk6F != 0) {
            temp_s0->unk822 = 1;
        }
    }
    if (arg0->unk7D4 > 0) {
        temp_s0_2 = arg0 + ((sp14 * 0x958) + 0xC8F8);
        if (sp14 >= 0) {
            temp_s0_2->unk8 = 3;
            temp_s0_2->unk58 = arg2;
            temp_s0_2->unk34 = (void *) (arg1 + 0x1E4);
            temp_s0_2->unk780 = 0;
            func_800F5E1C(temp_s0_2, (arg0 + (arg1->unk7C8 * 4))->unk1241C);
        }
    }
    var_s2 = 0;
    if (arg0->unk12750 > 0) {
        var_s3 = 0;
        do {
            temp_s0_3 = arg0 + (var_s3 + 0xC8F8);
            if (arg0->unk7D8 == 0) {
                if (((temp_s0_3 + 0x1A4) != (arg1 + 0x1A4)) && (var_s2 != sp10) && (var_s2 != sp14)) {
                    temp_s0_3->unk58 = 0;
                    var_s3 += 0x958;
                } else {
                    goto block_17;
                }
            } else {
                func_800F6D3C(temp_s0_3, arg0->unk127A0);
                arg0->unk127A0 = (s32) (arg0->unk127A0 + 1);
                if (arg0->unk127A0 >= 4) {
                    arg0->unk127A0 = 0;
                }
                temp_s0_3->unk947 = 0;
block_17:
                var_s3 += 0x958;
            }
            var_s2 += 1;
        } while (var_s2 < arg0->unk12750);
    }
}
