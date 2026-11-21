/* m2c reference for func_80157F3C @ 80157F3C (51 words). Generated; not compiled or validated. */
? func_801555D0(s32);                               /* extern */
? func_801555E4(s32);                               /* extern */
? func_80155734(?, ?);                              /* extern */
? func_80155A14(s32);                               /* extern */
extern ? (*D_801B4D18)(?, s32);
extern ? D_801B4D1C;

void func_80157F3C(void) {
    D_801B4D1C.unk8 = (s32) (D_801B4D1C.unk8 + (D_801B4D1C.unk10 * 4));
    D_801B4D1C.unk14 = (s32) (D_801B4D1C.unk14 - 1);
    D_801B4D1C.unk20 = (s32) (D_801B4D1C.unk20 + 1);
    if (D_801B4D1C.unk14 == 0) {
        func_801555D0(D_801B4D1C.unk24);
        func_801555E4(D_801B4D1C.unk28);
        if (D_801B4D1C.unk30 & 1) {
            func_80155A14(D_801B4D1C.unk2C);
        }
        func_80155734(9, 0);
        if (D_801B4D18 != NULL) {
            D_801B4D18(2, D_801B4D1C.unk34);
        }
    }
}
