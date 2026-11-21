/* m2c reference for func_80170C50 @ 80170C50 (104 words). Generated; not compiled or validated. */
? func_8017627C(void *, s32, s32, ?);               /* extern */
static s32 D_801C36A4 = 0;
static s32 D_801C36B4 = 0;

void func_80170C50(void *arg0, ? arg1, ? arg2, ? arg3, s32 arg5, s32 arg6, s32 arg13, u16 arg15) {
    ? var_a3;
    s32 var_a1;
    s32 var_a1_2;
    s32 var_a2;
    s32 var_v0;
    s32 var_v1;
    s32 var_v1_2;

    var_a3 = arg3;
    var_a1 = -1;
    if (arg13 != 0) {
        var_a2 = arg6;
        var_a1_2 = arg5;
        var_v1 = arg15 << 0x10;
    } else {
        if (arg6 != -1) {
            var_a1 = (arg0->unk307 - arg0->unk306) * arg6;
        }
        var_a3 = 0x51EB0000;
        if (var_a1 != -1) {
            var_a3 = 0x51EB851F;
            var_v1_2 = var_a1 % 100;
            if (var_v1_2 >= 0x80) {
                var_v1_2 = 0x7F;
            }
            var_v0 = var_v1_2;
            if (var_v1_2 < 0) {
                var_v0 = 0;
            }
            arg0->unk304 = (u8) (arg0->unk306 + (var_a1 / 100));
            arg0->unk305 = (u8) ((var_v0 * 0x7F) / 100);
        } else {
            arg0->unk304 = 0x3CU;
            arg0->unk305 = 0U;
        }
        var_a2 = D_801C36B4;
        if ((s32) arg0->unk304 < D_801C36B4) {
            var_a2 = arg0->unk304 & 0xFF;
        }
        var_a1_2 = D_801C36A4;
        if ((s32) arg0->unk305 < D_801C36A4) {
            var_a1_2 = arg0->unk305 & 0xFF;
        }
        var_v1 = arg15 << 0x10;
    }
    arg0->unk330 = (s32) (1 << (var_v1 >> 0x10));
    arg0->unk334 = 0x60;
    arg0->unk346 = (u16) (var_a2 << 8);
    arg0->unk346 = (u16) (arg0->unk346 + var_a1_2);
    arg0->unk348 = (s16) ((arg0->unk304 & 0xFF) << 8);
    func_8017627C(arg0 + 0x330, var_a1_2, var_a2, var_a3);
}
