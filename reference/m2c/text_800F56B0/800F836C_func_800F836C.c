/* m2c reference for func_800F836C @ 800F836C (40 words). Generated; not compiled or validated. */
? func_800FECB4(s32, s32, s16, s32);                /* extern */
? func_800FF4C8(s32, s16, s32, s32);                /* extern */
? func_80144FF8(void *, s16);                       /* extern */
s32 func_80147B88(void *);                          /* extern */

void func_800F836C(void *arg0) {
    s32 temp_s0;

    temp_s0 = arg0 + 0xC;
    arg0->unkAD = 1;
    func_800FF4C8(arg0->unk44, (s16) arg0->unk5C, temp_s0, arg0->unk4);
    func_800FECB4(arg0->unk44, arg0->unk3C + 0x1C, (s16) arg0->unk5C, temp_s0);
    func_80144FF8(arg0, (s16) arg0->unk20);
    if (func_80147B88(arg0) != 0) {
        arg0->unk6E = 0;
        arg0->unk77C = 0x1A4;
    }
    arg0->unk874 = 0;
}
