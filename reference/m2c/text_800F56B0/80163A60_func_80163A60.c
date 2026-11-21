/* m2c reference for func_80163A60 @ 80163A60 (61 words). Generated; not compiled or validated. */
? func_801639C0(u16, u16, u32);                     /* extern */
void *func_80163D20(u32, u8);                       /* extern */
static s8 D_800F5074[0x2C] = {
    0x45,
    0x78,
    0x70,
    0x65,
    0x63,
    0x74,
    0x69,
    0x6E,
    0x67,
    0x20,
    0x61,
    0x6E,
    0x20,
    0x6F,
    0x62,
    0x6A,
    0x65,
    0x63,
    0x74,
    0x20,
    0x6E,
    0x6F,
    0x64,
    0x65,
    0x20,
    0x66,
    0x6F,
    0x72,
    0x20,
    0x63,
    0x6C,
    0x75,
    0x74,
    0x20,
    0x61,
    0x6E,
    0x69,
    0x6D,
    0x20,
    0x25,
    0x64,
    0x20,
    0xA,
    0,
}; /* const */

void func_80163A60(void *arg0, u32 arg1) {
    u16 temp_v1;
    void *temp_v0;

    if (arg0->unk0 & 0xF) {
        printf(D_800F5074, (u8) arg0->unk0 & 0xF);
        return;
    }
    temp_v0 = func_80163D20((u16) arg0->unk0 >> 4, arg0->unk2);
    if (temp_v0 != NULL) {
        temp_v1 = arg0->unkC->unkE;
        temp_v0->unk8 = (s32) ((temp_v1 & 0x3F) * 0x10);
        temp_v0->unkC = (u32) ((u32) (temp_v1 & 0xFFFF) >> 6);
        temp_v0->unk10 = 8;
        temp_v0->unk0 = (u16) ((u16) arg0->unk0 >> 4);
        temp_v0->unk2 = (u16) (arg0->unk2 & 0xFF);
        temp_v0->unk4 = arg1;
        if ((u32) temp_v0->unk4 < 9U) {
            func_801639C0(temp_v0->unk0, temp_v0->unk2, temp_v0->unk4);
        }
    }
}
