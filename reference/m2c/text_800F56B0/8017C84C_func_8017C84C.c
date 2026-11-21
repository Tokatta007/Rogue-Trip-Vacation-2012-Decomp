/* m2c reference for func_8017C84C @ 8017C84C (46 words). Generated; not compiled or validated. */
? func_801737FC(?);                                 /* extern */
extern s32 D_801C2478;
extern ? D_801F4350;
extern s8 D_801F4B34;
extern s16 D_801F4B52;

void func_8017C84C(s16 arg0) {
    s32 var_a0;
    s32 var_s0;

    var_s0 = 0;
    if (D_801F4B34 > 0) {
        var_a0 = 0 & 0xFF;
        do {
            if (!(D_801C2478 & (1 << var_a0)) && (*(&D_801F4350 + (var_a0 * 0x36)) == arg0)) {
                D_801F4B52 = var_s0 & 0xFF;
                func_801737FC(0);
            }
            var_s0 += 1;
            var_a0 = var_s0 & 0xFF;
        } while ((var_s0 & 0xFF) < D_801F4B34);
    }
}
