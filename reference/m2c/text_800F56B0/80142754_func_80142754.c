/* m2c reference for func_80142754 @ 80142754 (85 words). Generated; not compiled or validated. */
void *func_801244FC(void *, s32);                   /* extern */
? func_80125050(void *, s32, s32 *);                /* extern */
s32 func_801250C8(s32 *, ?);                        /* extern */
s32 func_8015A62C(s32, s32);                        /* extern */
? func_8016408C(s32 *);                             /* extern */
static void *D_801C34EC = NULL;

s32 func_80142754(void *arg0) {
    s32 sp10;
    s32 sp20;
    s32 sp24;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_s2;
    s32 var_s2_2;
    s32 var_s3;
    s32 var_v0;
    void *temp_v1;

    var_s3 = 0x7FFFFFFF;
    sp24 = 0;
    var_s2 = D_801C34EC->unk12728 + D_801C34EC->unk12750;
loop_1:
    var_s2_2 = var_s2 - 1;
loop_2:
    if (var_s2_2 != -1) {
        temp_v1 = func_801244FC(D_801C34EC, var_s2_2);
        var_s2_2 -= 1;
        if (temp_v1->unk8C == 0) {
            func_80125050(temp_v1 + 0x1E4, arg0->unk320 + 0x1C, &sp10);
            temp_v0 = func_801250C8(&sp10, 0);
            var_s2_2 = (var_s2_2 + 1) - 1;
            if (temp_v0 < 0x960) {
                var_s2_2 = (var_s2_2 + 1) - 1;
                if (temp_v0 < var_s3) {
                    temp_v0_2 = func_8015A62C(sp10, sp14);
                    sp20 = temp_v0_2 - (temp_v1 + 0x1F0)->unk8;
                    func_8016408C(&sp20);
                    var_v0 = sp20;
                    if (var_v0 < 0) {
                        var_v0 = -var_v0;
                    }
                    var_s2_2 = (var_s2_2 + 1) - 1;
                    if (var_v0 < 0x471) {
                        var_s2 = var_s2_2 + 1;
                        var_s3 = temp_v0;
                        sp24 = temp_v0_2;
                        goto loop_1;
                    }
                }
            }
        }
        goto loop_2;
    }
    sp24 += 0x800;
    func_8016408C(&sp24);
    return sp24;
}
