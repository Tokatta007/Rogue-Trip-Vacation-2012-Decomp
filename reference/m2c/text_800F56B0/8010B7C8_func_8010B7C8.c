/* m2c reference for func_8010B7C8 @ 8010B7C8 (314 words). Generated; not compiled or validated. */
? func_80125420(void *, void *);                    /* extern */
? func_80125464(void *, void *);                    /* extern */
? func_80125518(void *, s16, s16, s16);             /* extern */

void func_8010B7C8(void *arg0) {
    s16 temp_a1;
    u16 temp_v0;
    u16 temp_v0_2;
    void *temp_s0;
    void *temp_s0_2;
    void *temp_s1;
    void *temp_s1_2;
    void *temp_s4;
    void *temp_s5;
    void *temp_s6;
    void *temp_s7;
    void *var_a0;

    temp_s7 = arg0 + 0x47C;
    func_80125518(temp_s7, (s16) ((s32) arg0->unk16E * -1), (s16) arg0->unk172, (s16) arg0->unk16C);
    temp_s6 = arg0 + 0x484;
    func_80125518(temp_s6, (s16) arg0->unk16E, (s16) arg0->unk172, (s16) arg0->unk16C);
    temp_s5 = arg0 + 0x48C;
    func_80125518(temp_s5, (s16) arg0->unk16E, (s16) arg0->unk174, (s16) arg0->unk16C);
    temp_s4 = arg0 + 0x494;
    func_80125518(temp_s4, (s16) ((s32) arg0->unk16E * -1), (s16) arg0->unk174, (s16) arg0->unk16C);
    temp_s0 = arg0 + 0x49C;
    temp_a1 = -(s16) arg0->unk164;
    func_80125518(temp_s0, (s16) ((s32) ((temp_a1 + ((u32) temp_a1 >> 0x1F)) << 0xF) >> 0x10), (s16) arg0->unk166, (s16) (arg0->unk16C + 0x20));
    func_80125464(arg0 + 0x4A4, temp_s0);
    arg0->unk4A4 = (u16) (arg0->unk4A4 + (arg0->unk164 / 3));
    func_80125464(arg0 + 0x4AC, temp_s0);
    temp_v0 = arg0->unk164;
    temp_s1 = arg0 + 0x4B4;
    arg0->unk4AC = (u16) (arg0->unk4AC + (((temp_v0 << 0x10) / 98304) - ((s32) ((s32) (temp_v0 << 0x10) >> 0xF) >> 0x1F)));
    func_80125464(temp_s1, temp_s0);
    arg0->unk4B4 = (s16) ((s16) arg0->unk164 / 2);
    func_80125464(arg0 + 0x4BC, temp_s1);
    arg0->unk4BE = (u16) (arg0->unk4BE - (((s16) arg0->unk166 - (s16) arg0->unk168) / 3));
    func_80125464(arg0 + 0x4C4, temp_s1);
    temp_s0_2 = arg0 + 0x4CC;
    arg0->unk4C6 = (u16) (arg0->unk4C6 - ((((s16) arg0->unk166 - (s16) arg0->unk168) * 2) / 3));
    func_80125464(temp_s0_2, temp_s1);
    arg0->unk4CE = (u16) arg0->unk168;
    func_80125464(arg0 + 0x4D4, temp_s0_2);
    arg0->unk4D4 = (u16) (arg0->unk4D4 - (arg0->unk164 / 3));
    func_80125464(arg0 + 0x4DC, temp_s0_2);
    temp_v0_2 = arg0->unk164;
    temp_s1_2 = arg0 + 0x4E4;
    arg0->unk4DC = (u16) (arg0->unk4DC - (((temp_v0_2 << 0x10) / 98304) - ((s32) ((s32) (temp_v0_2 << 0x10) >> 0xF) >> 0x1F)));
    func_80125464(temp_s1_2, temp_s0_2);
    arg0->unk4E4 = (s16) ((s16) -(s16) arg0->unk164 / 2);
    func_80125464(arg0 + 0x4EC, temp_s1_2);
    arg0->unk4EE = (u16) (arg0->unk4EE + (((s16) arg0->unk166 - (s16) arg0->unk168) / 3));
    func_80125464(arg0 + 0x4F4, temp_s1_2);
    arg0->unk4F6 = (u16) (arg0->unk4F6 + ((((s16) arg0->unk166 - (s16) arg0->unk168) * 2) / 3));
    func_80125464(arg0->unk738 + 0x4C, temp_s7);
    func_80125464(arg0->unk738 + 0x54, temp_s6);
    func_80125464(arg0->unk738 + 0x5C, temp_s5);
    func_80125464(arg0->unk738 + 0x64, temp_s4);
    var_a0 = arg0 + 0x568;
    if (arg0->unk7C0 == 0xE0) {
        func_80125518(arg0->unk738 + 0x8C, 0, (s16) (arg0->unk166 + 0x18), (s16) (arg0->unk16C + 0x30));
        func_80125518(arg0->unk738 + 0x94, 0, (s16) (arg0->unk168 - 0x18), (s16) (arg0->unk16C + 0x30));
        var_a0 = arg0 + 0x568;
    }
    func_80125420(var_a0, temp_s7);
    func_80125420(arg0 + 0x5BC, temp_s6);
    func_80125420(arg0 + 0x610, temp_s5);
    func_80125420(arg0 + 0x664, temp_s4);
    arg0->unk478 = 9;
}
