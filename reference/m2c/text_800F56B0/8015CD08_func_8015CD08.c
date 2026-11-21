/* m2c reference for func_8015CD08 @ 8015CD08 (32 words). Generated; not compiled or validated. */
s32 func_8015D2F4(s16, s16);                        /* extern */
s32 func_8015D38C(s16, s16);                        /* extern */

void func_8015CD08(void *arg0, void *arg1) {
    arg0->unk3 = 2;
    arg0->unk4 = func_8015D2F4(arg1->unk0, arg1->unk2);
    arg0->unk8 = func_8015D38C((s16) (((u16) arg1->unk0 + arg1->unk4) - 1), (s16) (((u16) arg1->unk2 + arg1->unk6) - 1));
}
