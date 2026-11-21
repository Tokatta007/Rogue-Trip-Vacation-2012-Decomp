/* m2c reference for func_8012E484 @ 8012E484 (48 words). Generated; not compiled or validated. */
? func_8012E9C0(void *, u16 *, ?);                  /* extern */
extern ? D_8018462C;
extern s32 D_801C37DC;
extern s8 D_801C37E8;
extern s8 D_801C37E9;
extern ? D_801CB9E0;
extern ? D_801CBA30;

void func_8012E484(u16 *arg0, ? arg1) {
    func_8012E9C0((D_801C37DC * 0x18) + &D_8018462C, arg0, arg1);
    if ((u32) ((u16) *arg0 >> 4) < 0x194U) {
        *(D_801C37E9 + &D_801CBA30) = (u8) D_801C37DC;
        D_801C37E9 = (u8) D_801C37E9 + 1;
    } else {
        *(D_801C37E8 + &D_801CB9E0) = (u8) D_801C37DC;
        D_801C37E8 = (u8) D_801C37E8 + 1;
    }
    D_801C37DC += 1;
}
