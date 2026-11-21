/* m2c reference for func_800FE8EC @ 800FE8EC (176 words). Generated; not compiled or validated. */
? func_8015A05C(u16 *, s32);                        /* extern */
? func_8016408C(void *);                            /* extern */
? func_801640EC(u16 *);                             /* extern */
s32 func_80176C1C(s32, s16, ?);                     /* extern */
extern ? D_801C3730;
extern ? D_801C3738;
extern ? D_801C3740;
extern ? D_801C3748;
extern ? D_801C3750;

void func_800FE8EC(void *arg0) {
    u16 sp10;
    s16 sp12;
    u16 sp14;                                       /* compiler-managed */
    s32 *temp_a0;
    s32 var_v0;
    u16 temp_a1;

    if (*((arg0->unk78 * 4) + &D_801C3738) != 0) {
        temp_a0 = (arg0->unk78 * 4) + &D_801C3750;
        *temp_a0 += (s32) (arg0->unk20C * 0x2FA) / (s32) arg0->unk25C;
        func_8016408C((arg0->unk78 * 4) + &D_801C3750);
        sp12 = 0;
        sp14 = 0;
        sp10 = *((arg0->unk78 * 4) + &D_801C3750);
        func_8015A05C(&sp10, *((arg0->unk78 * 4) + &D_801C3738) + 4);
    }
    if (*((arg0->unk78 * 4) + &D_801C3730) != 0) {
        var_v0 = 0x200;
        if (arg0->unkE0 >= arg0->unk21C) {
            var_v0 = -0x200;
            if (arg0->unk21C >= -arg0->unkE0) {
                var_v0 = (s32) (arg0->unk21C << 9) / (s32) arg0->unkE0;
            }
        }
        sp14 = (u16) var_v0;
        if (arg0->unk20C < 0) {
            sp14 = -(s16) sp14;
        }
        *((arg0->unk78 * 4) + &D_801C3740) = func_80176C1C(*((arg0->unk78 * 4) + &D_801C3740), sp14, 5);
        sp10 = arg0->unk1F0 - arg0->unk22C;
        func_801640EC(&sp10);
        temp_a1 = sp10;
        sp10 = temp_a1 * 4;
        *((arg0->unk78 * 4) + &D_801C3748) = func_80176C1C(*((arg0->unk78 * 4) + &D_801C3748), (s16) (temp_a1 * 4), 9);
        sp12 = 0;
        sp10 = *((arg0->unk78 * 4) + &D_801C3748);
        sp14 = *((arg0->unk78 * 4) + &D_801C3740);
        func_8015A05C(&sp10, *((arg0->unk78 * 4) + &D_801C3730) + 4);
    }
}
