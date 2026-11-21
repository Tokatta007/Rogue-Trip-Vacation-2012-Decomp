/* m2c reference for func_800FC8A4 @ 800FC8A4 (104 words). Generated; not compiled or validated. */
s32 func_800FF594(s32, void *);                     /* extern */
? func_80125050(void *, void *, s32 *);             /* extern */
s32 func_801250C8(s32 *, ?);                        /* extern */
? func_801253C8(void *, s32);                       /* extern */
s32 func_801297D4(s32, void *, ?, void *);          /* extern */
s32 func_8012BD30(void *);                          /* extern */
s32 func_8012E544(void *, void *, ?, ?);            /* extern */
s32 func_8015A62C(s32, s32);                        /* extern */
? func_8016408C(s32 *);                             /* extern */
static s32 D_801C34EC = 0;

void func_800FC8A4(void *arg0) {
    s32 sp10;
    s32 sp20;
    s32 temp_s0_2;
    s32 temp_v0;
    s32 var_s0;
    s32 var_v0;
    void *temp_s0;
    void *temp_s2;

    arg0->unk821 = 0;
    if ((func_8012BD30(arg0 + 0x264) < 0xC) && (arg0->unk58 != 0xA) && ((s16) arg0->unk506 >= 0x385) && (arg0->unk7AC < 0xAF0)) {
        if (arg0->unk58 == 8) {
            temp_v0 = func_801297D4(D_801C34EC, arg0 + 0x1E4, 0xBB8, arg0 + 0x8E0);
            var_s0 = 1;
            if (temp_v0 != 0) {
                arg0->unk34 = temp_v0;
                func_801253C8(arg0 + 0x72C, arg0->unk34);
            } else {
                arg0->unk58 = 0;
                var_s0 = 0;
            }
        } else {
            var_s0 = func_8012E544(arg0 + 0x1E4, arg0 + 0x72C, 0, 0);
        }
        temp_s0 = arg0 + 0x1E4;
        if (var_s0 != 0) {
            temp_s2 = arg0 + 0x72C;
            func_80125050(temp_s0, temp_s2, &sp10);
            if (func_801250C8(&sp10, 0) < arg0->unk18) {
                sp20 = arg0->unk1F8 - func_8015A62C(sp10, sp14);
                func_8016408C(&sp20);
                var_v0 = sp20;
                if (var_v0 < 0) {
                    var_v0 = -var_v0;
                }
                if (var_v0 < 0x155) {
                    temp_s0_2 = func_800FF594(arg0->unk44, temp_s0);
                    if (func_800FF594(arg0->unk44, temp_s2) == temp_s0_2) {
                        arg0->unk821 = 1;
                    }
                }
            }
        }
    }
    arg0->unk69 = 1;
}
