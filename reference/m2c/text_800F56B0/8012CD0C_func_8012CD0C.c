/* m2c reference for func_8012CD0C @ 8012CD0C (58 words). Generated; not compiled or validated. */
s32 func_8012CD0C(void *arg0) {
    s32 temp_v1;
    u8 temp_v0;

    temp_v0 = arg0->unk41;
    switch ((s8) temp_v0) {
    case 0:
        temp_v1 = arg0->unk0->unk7C0;
        if (temp_v1 != 0x20) {
            if (temp_v1 < 0x21) {
                if (temp_v1 != 0x10) {
                    return 0x1B;
                }
                return 0xC;
            }
            if ((temp_v1 != 0x30) && (temp_v1 != 0x40)) {
                return 0x1B;
            }
            return 0xE;
        }
        return 0xD;
    case 1:
        return 0;
    case 2:
        return 1;
    case 3:
        return 2;
    case 4:
        return 3;
    case 5:
        return 4;
    case 6:
        return 5;
    case 7:
        return 6;
    case 8:
        return 7;
    default:
        return 1;
    }
}
