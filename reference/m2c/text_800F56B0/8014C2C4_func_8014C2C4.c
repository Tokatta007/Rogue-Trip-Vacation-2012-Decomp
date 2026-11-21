/* m2c reference for func_8014C2C4 @ 8014C2C4 (174 words). Generated; not compiled or validated. */
? func_80124FC8(VECTOR *, ? *, ? *);                /* extern */
? func_80125050(s32, s32, ? *);                     /* extern */
? func_8014C57C(s32, void *, ? *);                  /* extern */
? func_8014F1BC(s32, void *);                       /* extern */
u16 func_80176CBC(s16, ?, ?);                       /* extern */

void func_8014C2C4(s32 arg0, void *arg1) {
    ? sp10;
    s32 sp18;
    s32 sp20;
    s32 sp24;
    s32 sp28;
    VECTOR sp30;
    s16 var_v0;
    s16 var_v0_2;

    if (arg1->unk18 != 0) {
        func_80125050(arg1->unk14 + 0x1C, arg1->unk18 + 0x1C, &sp10);
        if (arg1->unk5F != 0) {
            sp20 = 0;
            sp24 = 0x140;
            sp28 = 0;
            mathMulTransVec(arg1->unk18 + 0x28, (VECTOR *) &sp20, &sp30);
            func_80124FC8(&sp30, &sp10, &sp10);
        }
        if (arg1->unk60 != 0) {
            sp18 += 0x60;
        }
        func_8014C57C(arg0, arg1, &sp10);
    } else if (arg1->unk20 != 0x13) {
        arg1->unk14->unk16 = func_80176CBC((s16) arg1->unk14->unk16, 0, 3);
    }
    if (((arg1->unk54 << 0x10) > 0) && (arg1->unk18 != 0)) {
        if (rand() & 1) {
            var_v0 = arg1->unk14->unk14 + (rand() % (s32) ((s32) (arg1->unk54 << 0x10) >> 0x11));
        } else {
            var_v0 = arg1->unk14->unk14 - (rand() % (s32) ((s32) (arg1->unk54 << 0x10) >> 0x11));
        }
        arg1->unk14->unk14 = var_v0;
        if (rand() & 1) {
            var_v0_2 = arg1->unk14->unk18 + (rand() % (s16) arg1->unk54);
        } else {
            var_v0_2 = arg1->unk14->unk18 - (rand() % (s16) arg1->unk54);
        }
        arg1->unk14->unk18 = var_v0_2;
    }
    func_8014F1BC(arg0, arg1);
}
