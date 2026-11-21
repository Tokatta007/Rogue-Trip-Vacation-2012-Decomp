/* m2c reference for func_8015E068 @ 8015E068 (152 words). Generated; not compiled or validated. */
? func_8015EE4C(?, ?);                              /* extern */
s32 func_8015EF68(s32);                             /* extern */
extern ? D_801BAD50;
extern s32 D_801BAD54;
extern s32 *D_801BAE20;
extern s32 *D_801BAE2C;
extern s32 D_801BAE40;
extern s32 D_801BAE44;
extern s32 D_801BAE4C;
extern ? D_801EB148;
extern ? D_801EB14C;
extern ? D_801EB150;

s32 func_8015E068(void) {
    s32 var_v0;

    var_v0 = 1;
    if (!(*D_801BAE2C & 0x01000000)) {
        D_801BAE4C = func_8015EF68(0);
        if ((D_801BAE40 != D_801BAE44) && !(*D_801BAE2C & 0x01000000)) {
loop_4:
            if ((((D_801BAE44 + 1) & 0x3F) == D_801BAE40) && (D_801BAD54 == 0)) {
                func_8015EE4C(2, 0);
            }
            if (!(*D_801BAE20 & 0x04000000)) {
                do {

                } while (!(*D_801BAE20 & 0x04000000));
            }
            *(&D_801EB148 + (D_801BAE44 * 0x60))(*(&D_801EB14C + (D_801BAE44 * 0x60)), *(&D_801EB150 + (D_801BAE44 * 0x60)));
            D_801BAE44 = (D_801BAE44 + 1) & 0x3F;
            if ((D_801BAE40 != D_801BAE44) && !(*D_801BAE2C & 0x01000000)) {
                goto loop_4;
            }
        }
        func_8015EF68(D_801BAE4C);
        if ((D_801BAE40 == D_801BAE44) && !(*D_801BAE2C & 0x01000000) && (D_801BAD50.unk0 != 0) && (D_801BAD50.unk4 != NULL)) {
            (&D_801BAD50 - 8)->unk8 = 0;
            D_801BAD50.unk4(D_801BAD50.unk4);
        }
        var_v0 = (D_801BAE40 - D_801BAE44) & 0x3F;
    }
    return var_v0;
}
