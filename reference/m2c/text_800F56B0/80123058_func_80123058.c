/* m2c reference for func_80123058 @ 80123058 (57 words). Generated; not compiled or validated. */
? func_80101150(s32, s32, s32);                     /* extern */
? func_80101750(s32, s32, ?);                       /* extern */
s32 func_801216F0(s32);                             /* extern */
s32 func_80121748(s32, s32);                        /* extern */

void func_80123058(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_s0;
    s32 var_a2;

    (arg0 + (arg1 * 4))->unk12710 = arg2;
    if ((arg0 + (arg2 * 4))->unkB768 == 1) {
        var_a2 = arg0 + ((func_801216F0(arg2) * 0x8B8) + 0xB788);
    } else {
        var_a2 = arg0 + ((func_80121748(arg0, arg2) * 0x958) + 0xC8F8);
    }
    temp_s0 = arg0 + 0x6220;
    func_80101150(temp_s0, arg1, var_a2);
    func_80101750(temp_s0, arg1, 1);
}
