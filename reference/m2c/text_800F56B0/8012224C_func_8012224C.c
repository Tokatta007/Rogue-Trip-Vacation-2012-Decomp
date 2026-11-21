/* m2c reference for func_8012224C @ 8012224C (83 words). Generated; not compiled or validated. */
? func_800F5E1C(void *, s32);                       /* extern */

void func_8012224C(void *arg0) {
    s32 var_s2;
    s32 var_s3;
    s32 var_v0_2;
    void *temp_s0;
    void *temp_s1;
    void *var_v0;

    arg0->unk127E1 = 1;
    temp_s1 = (arg0 + 0x10A64)->unk330;
    if (temp_s1 != NULL) {
        var_s3 = 0;
        if (temp_s1->unk7B8 == 1) {
            var_s2 = 0;
loop_3:
            if (var_s3 < arg0->unk12750) {
                temp_s0 = arg0 + (var_s2 + 0xC8F8);
                if ((temp_s0->unk7C0 < 0xD0) && (temp_s1->unk80C >= 4)) {
                    temp_s0->unk8 = 3;
                    var_v0 = NULL;
                    if (temp_s0 != NULL) {
                        var_v0 = temp_s0 + 4;
                    }
                    var_v0->unk6C = 1;
                    var_v0_2 = 0x10;
                    if (temp_s1->unk7B8 == 1) {
                        var_v0_2 = 0x12;
                    }
                    temp_s0->unk58 = var_v0_2;
                    func_800F5E1C(temp_s0, (arg0 + (temp_s1->unk7D0 * 4))->unk1240C);
                    temp_s0->unk34 = (void *) (temp_s1 + 0x1E4);
                    temp_s0->unk780 = 0;
                }
                var_s2 += 0x958;
                var_s3 += 1;
                goto loop_3;
            }
        }
    }
}
