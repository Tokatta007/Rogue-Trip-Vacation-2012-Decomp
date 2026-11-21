/* m2c reference for func_8016A5A0 @ 8016A5A0 (36 words). Generated; not compiled or validated. */
extern ? D_801BC1F8;

void func_8016A5A0(void *arg0, void *arg1) {
    s32 var_v0;

    var_v0 = (arg0->unk0 * D_801BC1F8.unk0) + (arg0->unk4 * D_801BC1F8.unk2) + (arg0->unk8 * D_801BC1F8.unk4);
    if (var_v0 < 0) {
        var_v0 += 0xFFF;
    }
    if (((var_v0 >> 0xC) + D_801BC1F8.unk8) > 0) {
        arg1->unk0 = 1;
        arg1->unk2 = (u16) D_801BC1F8.unkE;
        arg1->unk1 = 0;
        arg1->unk14 = 0;
    }
}
