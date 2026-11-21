/* m2c reference for func_8012A578 @ 8012A578 (30 words). Generated; not compiled or validated. */
void func_8012A578(void *arg0) {
    s32 temp_v1;

    temp_v1 = arg0->unk0->unk7C0;
    switch (temp_v1) {                              /* irregular */
    case 0xA0:
    case 0xB0:
    case 0x50:
        arg0->unk18 = 0x4B0;
        return;
    case 0xF0:
        arg0->unk18 = 0x12C;
        return;
    default:
        arg0->unk18 = 0x5DC;
        return;
    }
}
