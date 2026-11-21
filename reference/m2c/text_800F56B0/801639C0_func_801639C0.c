/* m2c reference for func_801639C0 @ 801639C0 (40 words). Generated; not compiled or validated. */
void *func_80163DA8();                              /* extern */
void *func_80163E04();                              /* extern */
? func_80167B44(void *, s32, s32, s32);             /* extern */

void func_801639C0(s32 arg2) {
    void *temp_v0;
    void *temp_v0_2;

    temp_v0 = func_80163DA8();
    if (temp_v0 != NULL) {
        temp_v0_2 = func_80163E04();
        if (temp_v0_2 != NULL) {
            temp_v0_2->unk0 = 1;
            temp_v0_2->unkC = 0;
            temp_v0_2->unk4 = -1;
            temp_v0_2->unk14 = arg2;
            temp_v0_2->unk20 = temp_v0;
            temp_v0_2->unk18 = 0;
            func_80167B44(temp_v0_2 + 0x24, temp_v0->unk8, temp_v0->unkC, temp_v0->unk10);
            func_80167B44(temp_v0_2 + 0x38, temp_v0->unk8, temp_v0->unkC, temp_v0->unk10);
            temp_v0_2->unk1C = 8;
        }
    }
}
