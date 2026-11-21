/* m2c reference for func_80179904 @ 80179904 (47 words). Generated; not compiled or validated. */
s32 func_80178A2C();                                /* extern */

void func_80179904(void *arg0) {
    arg0->unk4 = (s32) arg0->unk0->unkC;
    arg0->unk8 = (s32) arg0->unk0->unk8;
    arg0->unk0->unk12 = 0xFF;
    arg0->unk1EC = 0;
    arg0->unk1F0 = 0;
    arg0->unk20C = 0;
    arg0->unk1F4 = 8;
    arg0->unk1FC = 0;
    arg0->unk200 = (s32) (func_80178A2C() / (s32) (((s32) arg0->unk1F4 >> 3) + 1));
    arg0->unk1F8 = 0;
    arg0->unk204 = 0xFF;
}
