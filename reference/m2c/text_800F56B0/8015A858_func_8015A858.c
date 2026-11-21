/* m2c reference for func_8015A858 @ 8015A858 (71 words). Generated; not compiled or validated. */
s32 func_8015B5AC(s32, ?, s16, s32);                /* extern */
? func_8015C2B4(s16 *, s32);                        /* extern */

s32 func_8015A858(s32 arg0, s32 arg1, ? arg2, s16 arg3, s32 arg4, s32 arg5, s32 arg6) {
    s16 sp10;
    s16 sp12;
    s16 sp14;
    s16 sp16;
    s32 var_v0;

    M2C_ERROR(/* Read from unset register $k0 */)->unk4 = (s32) M2C_ERROR(/* Read from unset register $at */);
    M2C_ERROR(/* Read from unset register $k0 */)->unk8 = (s32) M2C_ERROR(/* Read from unset register $v0 */);
    M2C_ERROR(/* Read from unset register $k0 */)->unkC = (s32) M2C_ERROR(/* Read from unset register $v1 */);
    M2C_ERROR(/* Read from unset register $k0 */)->unk7C = (s32) saved_reg_ra;
    M2C_ERROR(/* Read from unset register $k0 */)->unk4 = (s32) M2C_ERROR(/* Read from unset register $at */);
    M2C_ERROR(/* Read from unset register $k0 */)->unk8 = (s32) M2C_ERROR(/* Read from unset register $v0 */);
    M2C_ERROR(/* Read from unset register $k0 */)->unkC = (s32) COP0_EPC;
    M2C_ERROR(/* Read from unset register $k0 */)->unk7C = (s32) saved_reg_ra;
    sp10 = arg3;
    sp16 = (s16) arg6;
    sp12 = (s16) arg4;
    switch (arg1) {                                 /* irregular */
    case 0:
        var_v0 = arg5;
        if (arg5 < 0) {
            var_v0 = arg5 + 3;
        }
        sp14 = (s16) (var_v0 >> 2);
        break;
    case 1:
        sp14 = (s16) (arg5 / 2);
        break;
    case 2:
        sp14 = (s16) arg5;
        break;
    }
    func_8015C2B4(&sp10, arg0);
    return func_8015B5AC(arg1, arg2, arg3, arg4) & 0xFFFF;
}
