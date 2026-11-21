/* m2c reference for func_8011425C @ 8011425C (67 words). Generated; not compiled or validated. */
? func_801643F8(s32, s32, ? *);                     /* extern */
? func_8016B1F0(s32);                               /* extern */
? func_8016CE78(s32);                               /* extern */
extern s32 D_801C3780;
extern ? func_801143B0;
extern ? func_801143B8;

void func_8011425C(s32 arg0, s32 arg1) {
    ? *var_a2;
    s32 *temp_s1;
    s32 *var_s1;
    s32 temp_s2;
    s32 var_s0;

    if (arg0 != 0) {

    }
    func_8016CE78(*(s32 *)0x800201E0);
    D_801C3780 = *(s32 *)0x800201E0;
    temp_s1 = *(s32 **)0x800201E4;
    var_s0 = 0;
    func_8016B1F0(*(s32 *)0x800201EC);
    temp_s2 = *temp_s1;
    var_s1 = temp_s1 + 4;
    if (temp_s2 > 0) {
        do {
            if (*var_s1 != 0) {
                var_a2 = &func_801143B0;
                if (arg1 == 0) {
                    var_a2 = &func_801143B8;
                }
                func_801643F8(*var_s1, D_801C3780, var_a2);
            }
            var_s0 += 1;
            var_s1 += 4;
        } while (var_s0 < temp_s2);
    }
}
