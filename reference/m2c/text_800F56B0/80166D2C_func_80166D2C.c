/* m2c reference for func_80166D2C @ 80166D2C (37 words). Generated; not compiled or validated. */
s32 func_801669CC(?, s32 *);                        /* extern */
s32 func_80166C04(s32, s32, s32);                   /* extern */
? func_80166D24(s32);                               /* extern */

s32 func_80166D2C(s32 arg0, ? arg1) {
    s32 sp10;
    s32 temp_s0;
    s32 temp_v0;

    sp10 = -1;
loop_1:
    temp_v0 = func_801669CC(arg1, &sp10);
    if (temp_v0 == -1) {
        return 0;
    }
    temp_s0 = func_80166C04(temp_v0, arg0, sp10);
    func_80166D24(temp_v0);
    if (sp10 == temp_s0) {
        return temp_s0;
    }
    goto loop_1;
}
