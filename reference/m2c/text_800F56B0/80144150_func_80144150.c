/* m2c reference for func_80144150 @ 80144150 (343 words). Generated; not compiled or validated. */
s16 func_80178A1C(s32);                             /* extern */
s32 func_80178A2C();                                /* extern */

void func_80144150(void *arg0) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_v0;
    s32 temp_v1;
    s32 temp_v1_2;

    arg0->unkC0 = (s32) arg0->unkBC;
    arg0->unkD8 = (s32) arg0->unkD4;
    temp_v0 = func_80178A2C();
    if ((temp_v0 != 0) && (temp_v0 != 0x14)) {
        arg0->unkC0 = (s32) ((s32) (arg0->unkC0 * 0x14) / temp_v0);
        arg0->unkD8 = (s32) ((s32) (arg0->unkD8 * 0x14) / temp_v0);
        arg0->unk238 = (s32) ((s32) (arg0->unk238 * 0x14) / temp_v0);
        arg0->unk23C = (s32) ((s32) (arg0->unk23C * 0x14) / temp_v0);
        arg0->unk240 = (s32) ((s32) (arg0->unk240 * 0x14) / temp_v0);
    }
    arg0->unkC4 = (s32) ((arg0->unkC0 * ((s16) arg0->unk15C * 5)) / 100);
    arg0->unkEC = (s32) (arg0->unkC0 * arg0->unk100);
    arg0->unkC8 = (s32) (arg0->unkC4 * 0xA);
    temp_a0 = arg0->unkD8;
    temp_v1 = (s16) arg0->unk15C * 5;
    arg0->unkDC = (s32) ((temp_a0 * temp_v1) / 100);
    arg0->unkE0 = (s32) (arg0->unkD8 * (s16) arg0->unk156);
    arg0->unkE4 = (s32) ((arg0->unkE0 * arg0->unkFC) / 100);
    temp_a0_2 = arg0->unk104;
    temp_v1_2 = func_80178A1C((s32) (temp_a0 * temp_v1) >> 0x1F) * 0xC3;
    arg0->unkD0 = (s32) (((((temp_a0_2 * temp_v1_2) / 1000) << 6) * (s16) arg0->unk15C) / 100);
    arg0->unkCC = (s32) ((s32) arg0->unkD0 >> 1);
    arg0->unk760 = (s32) ((s32) (arg0->unk764 * arg0->unkD0) >> 6);
    temp_a0_3 = ((func_80178A1C((s32) (temp_a0_2 * temp_v1_2) >> 0x1F) * 0x3CF) / 1000) << 6;
    if (arg0->unk760 < temp_a0_3) {
        arg0->unk760 = (s32) (((func_80178A1C(temp_a0_3) * 0x3CF) / 1000) << 6);
    }
    if (temp_v0 != 0) {
        arg0->unk208 = (s32) ((s32) (arg0->unk208 * arg0->unk754) / temp_v0);
        arg0->unk20C = (s32) ((s32) (arg0->unk20C * arg0->unk754) / temp_v0);
        arg0->unk210 = (s32) ((s32) (arg0->unk210 * arg0->unk754) / temp_v0);
        arg0->unk21C = (s32) ((s32) (arg0->unk21C * arg0->unk754) / temp_v0);
    }
    arg0->unk754 = temp_v0;
    arg0->unk25C = (s32) arg0->unkD0;
}
