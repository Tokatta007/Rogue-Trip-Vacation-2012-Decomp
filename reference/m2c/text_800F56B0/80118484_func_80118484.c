/* m2c reference for func_80118484 @ 80118484 (199 words). Generated; not compiled or validated. */
s16 func_80178A1C(s32);                             /* extern */
s32 func_80178A2C();                                /* extern */

void func_80118484(void *arg0) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_v0;
    s32 temp_v1;
    s32 temp_v1_2;

    temp_v0 = func_80178A2C();
    if (temp_v0 != 0) {
        arg0->unk274 = (s32) (arg0->unk270 * func_80178A1C());
        temp_a0 = arg0->unk284;
        temp_v1 = func_80178A1C() * 0xC3;
        arg0->unk288 = (s32) (((temp_a0 * temp_v1) / 1000) << 6);
        temp_a0_2 = arg0->unk27C;
        temp_v1_2 = func_80178A1C((s32) (temp_a0 * temp_v1) >> 0x1F) * 0xC3;
        arg0->unk280 = (s32) (((temp_a0_2 * temp_v1_2) / 1000) << 6);
        arg0->unk294 = (s32) (arg0->unk28C * arg0->unk290 * func_80178A1C((s32) (temp_a0_2 * temp_v1_2) >> 0x1F));
        arg0->unk29C = (s32) ((s32) (arg0->unk29C * arg0->unk2A4) / temp_v0);
        arg0->unk298 = (s32) ((s32) (arg0->unk298 * arg0->unk2A4) / temp_v0);
        arg0->unk278 = (s32) ((s32) (arg0->unk278 * arg0->unk2A4) / temp_v0);
        arg0->unk2F4 = (u16) ((s32) ((s16) arg0->unk2F4 * arg0->unk2A4) / temp_v0);
        arg0->unk2F2 = (u16) ((s32) ((s16) arg0->unk2F2 * arg0->unk2A4) / temp_v0);
        arg0->unk2A8 = (s32) ((s32) (arg0->unk2A8 * arg0->unk2A4) / temp_v0);
        arg0->unk2A4 = temp_v0;
    }
}
