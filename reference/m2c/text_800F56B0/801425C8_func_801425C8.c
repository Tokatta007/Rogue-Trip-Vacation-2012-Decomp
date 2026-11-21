/* m2c reference for func_801425C8 @ 801425C8 (54 words). Generated; not compiled or validated. */
? func_800FECB4(s32, s32, s16, void *);             /* extern */
u16 func_800FF20C(s32, s32);                        /* extern */
? func_80118484(void *);                            /* extern */
s32 func_801426A0(void *);                          /* extern */

void func_801425C8(void *arg0) {
    arg0->unk334 = 3;
    arg0->unk5A = (u16) arg0->unk58;
    arg0->unk58 = func_800FF20C(arg0->unk40, arg0->unk320 + 0x1C);
    func_800FECB4(arg0->unk40, arg0->unk320 + 0x1C, (s16) arg0->unk58, arg0 + 8);
    arg0->unk27C = func_801426A0(arg0);
    arg0->unk284 = (s32) arg0->unk27C;
    func_80118484(arg0);
    arg0->unk33C = (s32) ((rand() % 1200) + 0x258);
    arg0->unk338 = (s32) arg0->unk33C;
}
