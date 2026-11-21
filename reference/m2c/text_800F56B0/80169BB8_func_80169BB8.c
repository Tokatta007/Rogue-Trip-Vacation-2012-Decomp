/* m2c reference for func_80169BB8 @ 80169BB8 (162 words). Generated; not compiled or validated. */
? func_80168DF4();                                  /* extern */
? func_8016939C(s32, s32, s32);                     /* extern */

void func_80169BB8(s32 **arg0, s32 arg1, s32 arg2, s32 **arg3, s32 **arg4) {
    s32 **temp_s4;
    s32 **temp_t0;
    s32 **var_s1;
    s32 **var_s2_2;
    s32 **var_s6;
    s32 **var_v0;
    s32 *temp_s2_2;
    s32 *temp_t0_2;
    s32 var_s2;
    s32 var_s4;
    s32 var_s7;
    u16 temp_s2;
    u16 var_s1_2;
    u16 var_s6_2;

    *(s32 *)0x1F80006C = saved_reg_s0;
    temp_t0 = *(s32 ***)0x1F8000A0;
    *(s32 ***)0x1F800094 = sp;
    *(s32 ***)0x1F800098 = saved_reg_gp;
    *(s32 ***)0x1F80009C = saved_reg_fp;
    temp_t0->unk0 = saved_reg_s1;
    temp_t0->unk4 = (s32) saved_reg_s2;
    temp_t0->unk8 = (s32) saved_reg_s3;
    temp_t0->unkC = (s32) saved_reg_s4;
    temp_t0->unk10 = (s32) saved_reg_s5;
    temp_t0->unk14 = (s32) saved_reg_s6;
    temp_t0->unk18 = (s32) saved_reg_s7;
    temp_t0->unk1C = arg0;
    temp_t0->unk20 = arg1;
    temp_t0->unk24 = (s32) saved_reg_ra;
    temp_t0->unk28 = (s32) *(s32 ***)0x1F80006C;
    *(s32 ***)0x1F800008 = arg0;
    var_s7 = arg0->unk48;
    *(s32 ***)0x1F800010 = (u16) var_s7;
    *(s32 ***)0x1F8000BA = (u16) var_s7;
    *(s32 ***)0x1F800014 = arg0 + 0x4C;
    var_s6 = arg1 + 4;
    *(s32 ***)0x1F800018 = var_s6;
    *(s32 ***)0x1F8000A4 = arg3;
    *(s32 ***)0x1F8000A8 = arg4;
    *(s32 ***)0x1F8000B0 = NULL;
    *(s32 ***)0x1F8000B8 = 0U;
    *(s32 ***)0x1F8000BC = (s32 **)0xFF00000F;
    *(s32 ***)0x1F8000D0 = (s32 **)0xFFFFF0;
    do {
        var_s6->unk14 = 0;
        var_s6->unk1E = -1;
        var_s6->unk1C = 0;
        var_s7 -= 1;
        var_s6 += 0x20;
    } while (var_s7 > 0);
    var_s1 = *(s32 ***)0x1F8000B4;
    var_s2 = 0xA;
    do {
        *var_s1 = NULL;
        var_s2 -= 1;
        var_s1 += 4;
    } while (var_s2 > 0);
    temp_t0_2 = arg0->unk0;
    var_s4 = 0x64;
    if ((temp_t0_2 != NULL) && ((temp_t0_2->unk0 & 0xF) == 1)) {
        var_s4 = temp_t0_2->unk10;
    }
    *(s32 ***)0x1F8000C0 = var_s4;
    if ((arg2 != 0) && (**(s32 ***)0x1F80001C != NULL)) {
        *(s32 ***)0x1F8000AC = NULL;
        *(s32 ***)0x1F80000C = var_s4 * var_s4;
        if (*(s32 ***)0x1F800024 == NULL) {
            func_80168DF4();
        }
    }
    var_s1_2 = *(s32 ***)0x1F800010;
    var_s2_2 = *(s32 ***)0x1F800018;
    var_s6_2 = *(s32 ***)0x1F8000BA;
loop_12:
    var_s1_2 -= 1;
    if ((s32) var_s1_2 > 0) {
        if ((*(s32 ***)0x1F8000B8 != 0) || (*var_s2_2 == (s32 *)2)) {
            *var_s2_2 = NULL;
            var_s6_2 += 1;
        }
        var_s2_2 += 0x20;
        goto loop_12;
    }
    *(s32 ***)0x1F8000BA = var_s6_2;
    var_v0 = *(s32 ***)0x1F8000D8;
loop_18:
    if (((s32) var_s6_2 > 0) && (var_v0 != NULL)) {
        temp_s2 = var_v0->unkC;
        *(s32 ***)0x1F8000AC = var_v0;
        temp_s4 = *(s32 ***)0x1F800008;
        if ((temp_s2 & 0xFF & (temp_s2 >> 8)) && (temp_s4 != var_v0)) {
            temp_s2_2 = var_v0 + 0x28;
            **(s32 ***)0x1F800020 = temp_s2_2;
            GTE_RT11RT12 = var_v0->unk28;
            GTE_RT13RT21 = temp_s2_2->unk4;
            GTE_RT22RT23 = temp_s2_2->unk8;
            GTE_RT31RT32 = temp_s2_2->unkC;
            GTE_RT33 = temp_s2_2->unk10;
            func_8016939C(temp_s4->unk1C - var_v0->unk1C, temp_s4->unk20 - var_v0->unk20, temp_s4->unk24 - var_v0->unk24);
            func_80168DF4();
        }
        var_s6_2 = *(s32 ***)0x1F8000BA;
        var_v0 = (*(s32 ***)0x1F8000AC)->unk10;
        goto loop_18;
    }
}
