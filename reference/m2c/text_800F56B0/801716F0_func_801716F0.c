/* m2c reference for func_801716F0 @ 801716F0 (19 words). Generated; not compiled or validated. */
s32 func_801716F0(s32 *arg0) {
    s32 *var_v1;
    s32 var_a1;

    var_a1 = 0;
    var_v1 = arg0;
loop_1:
    if (*var_v1 == -1) {
        arg0->unk3D0 = (s32) (arg0->unk3D0 - 1);
        return var_a1;
    }
    var_a1 += 1;
    var_v1 += 0x18;
    if (var_a1 >= 0x18) {
        return -1;
    }
    goto loop_1;
}
