/* m2c reference for func_800F810C @ 800F810C (59 words). Generated; not compiled or validated. */
s32 func_8012BD30(void *);                          /* extern */
? func_8012C3BC(void *, ?);                         /* extern */
static void *D_801C34EC = NULL;

void func_800F810C(void *arg0) {
    s32 temp_s1;
    s32 var_s0;
    s32 var_s0_2;
    void *var_a0;

    if (arg0->unk88C >= 0x709) {
        var_s0 = 0;
        if ((arg0->unk820 == 0) && ((D_801C34EC->unk7D8 != 0) || (func_8012BD30(arg0 + 0x264) < (D_801C34EC->unk12688 * 2)))) {
            var_s0 = 1;
        }
        if (var_s0 != 0) {
            temp_s1 = D_801C34EC->unk7D4 + 1;
            var_s0_2 = 0;
            if (temp_s1 > 0) {
                var_a0 = arg0 + 0x264;
                do {
                    func_8012C3BC(var_a0, 2);
                    var_s0_2 += 1;
                    var_a0 = arg0 + 0x264;
                } while (var_s0_2 < temp_s1);
            }
        }
        arg0->unk58 = 0;
    }
}
