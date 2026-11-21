/* m2c reference for func_801214D8 @ 801214D8 (65 words). Generated; not compiled or validated. */
void func_801214D8(void *arg0, s32 arg1) {
    s32 var_v1;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a2;
    void *temp_a2_2;

    var_v1 = 0;
    if (arg0->unk127AC != 0) {
        var_v1 = arg0->unk127AD == 0;
    }
    if ((var_v1 != 0) && (arg0->unk12754 == arg0->unk127A4)) {
        arg0->unk127AD = 1U;
        temp_a2 = arg0 + 0xC8F8;
        temp_a0 = (arg1 * 0x958) + arg0;
        (temp_a2 + (arg0->unk12750 * 0x958))->unk738->unkC = 1;
        temp_a0_2 = temp_a0 + 0xCADC;
        temp_a2_2 = temp_a2 + (arg0->unk12750 * 0x958);
        temp_a2_2->unk1E4 = (s32) temp_a0->unkCADC;
        temp_a2_2->unk1E8 = (s32) temp_a0_2->unk4;
        temp_a2_2->unk1EC = (s32) temp_a0_2->unk8;
        arg0->unk12750 = (s32) (arg0->unk12750 + 1);
    }
}
