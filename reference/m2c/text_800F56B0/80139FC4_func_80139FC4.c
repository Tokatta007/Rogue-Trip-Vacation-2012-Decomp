/* m2c reference for func_80139FC4 @ 80139FC4 (42 words). Generated; not compiled or validated. */
? func_80138370(s32, s32, ?, ?);                    /* extern */
extern ? D_801B3A14;
extern s32 D_801C383C;
extern s32 D_801C3840;

void func_80139FC4(s32 arg0) {
    s32 temp_v0;
    s32 temp_v0_2;

    temp_v0 = D_801C3840 - 1;
    D_801C3840 = temp_v0;
    if (temp_v0 < 0) {
        temp_v0_2 = D_801C383C + 1;
        D_801C383C = temp_v0_2;
        if (temp_v0_2 >= 6) {
            D_801C383C = 0;
        }
        D_801C3840 = 0x10;
    }
    func_80138370(arg0, *((D_801C383C * 4) + &D_801B3A14), 0, 0);
    func_80138370(arg0, *(((D_801C383C + 6) * 4) + &D_801B3A14), 0x11F, 0);
}
