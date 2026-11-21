/* m2c reference for func_80162E50 @ 80162E50 (83 words). Generated; not compiled or validated. */
s32 func_80162F9C(void *);                          /* extern */
? func_80162FD4(void *, void *);                    /* extern */

s32 func_80162E50(void *arg0) {
    u8 temp_v0;
    u8 temp_v1;
    void *temp_v0_2;

    temp_v1 = arg0->unk46;
    if (temp_v1 != 3) {
        if ((s32) temp_v1 < 4) {
            if (temp_v1 != 2) {
                return 1;
            }
            arg0->unkE3 = (u8) arg0->unk3C->unk3;
            arg0->unkE6 = 0;
            arg0->unkE4 = (u8) arg0->unk3C->unk4;
            arg0->unkE9 = (u8) arg0->unk3C->unk5;
            arg0->unkEC = 0;
            arg0->unkEA = (u8) arg0->unk3C->unk6;
            goto block_13;
        }
        if (temp_v1 != 4) {
            return 1;
        }
        temp_v0 = arg0->unk47 + 1;
        arg0->unk47 = temp_v0;
        arg0->unkEC = (s32) (arg0->unkEC + 8 + ((arg0->unk3C->unk4 + 3) & 0x1FC));
        if ((u32) (temp_v0 & 0xFF) >= (u8) arg0->unkEA) {
            if (func_80162F9C(arg0) >= 0x81) {
                arg0->unk46 = 0xFEU;
                arg0->unk49 = 2;
            } else {
                arg0->unk46 = 0xFFU;
                func_80162FD4(arg0, arg0 + 0x63);
                arg0->unk46 = 2U;
            }
        }
        return 0;
    }
    temp_v0_2 = arg0->unk3C;
    arg0->unk47 = 0U;
    arg0->unkE6 = (s16) (temp_v0_2->unk5 + (temp_v0_2->unk4 << 8));
block_13:
    return 1;
}
