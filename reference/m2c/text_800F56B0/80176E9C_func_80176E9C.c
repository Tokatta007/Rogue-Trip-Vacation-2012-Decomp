/* m2c reference for func_80176E9C @ 80176E9C (139 words). Generated; not compiled or validated. */
u16 func_801594CC(s32, u32);                        /* extern */
u16 func_8015959C(s32);                             /* extern */
extern s16 D_801C38F0;
extern ? D_801F4D08;

void func_80176E9C(s32 arg0, u32 arg1) {
    ? *var_s0;
    s32 var_a0;
    s32 var_s2;
    u16 temp_a0;
    u16 temp_s1;
    u32 var_a1;
    void *temp_v1;

    var_a1 = arg1;
    var_s2 = 0;
    if (D_801C38F0 > 0) {
        var_s0 = &D_801F4D08;
        var_a0 = arg0;
        do {
            if (var_a0 != 0) {
                do {
                    var_s0->unk4 = (s32) (var_s0->unk14 + var_s0->unk4);
                    var_s0->unk10 = (s32) (var_s0->unk10 + var_s0->unk8);
                    if (var_s0->unk10 >= 0) {
                        var_s0->unk10 = (s32) (var_s0->unk10 - var_s0->unkC);
                        var_s0->unk4 = (s32) (var_s0->unk4 + 1);
                    }
                    var_a0 -= 1;
                } while (var_a0 != 0);
            }
            temp_s1 = func_801594CC(var_s0->unk4, var_a1);
            temp_v1 = var_s0->unk0;
            var_a1 = var_s0->unk18;
            temp_a0 = func_8015959C(var_s0->unk4);
            switch (var_a1) {
            case 0:
                temp_v1->unk10 = temp_a0;
                temp_v1->unk8 = (u16) temp_v1->unk10;
                temp_v1->unkA = temp_s1;
                temp_v1->unkE = (s16) -(s16) temp_v1->unkA;
                var_s0 += 0x1C;
                break;
            case 1:
                temp_v1->unk10 = temp_a0;
                temp_v1->unk0 = (u16) temp_v1->unk10;
                temp_v1->unkC = temp_s1;
                temp_v1->unk4 = (s16) -(s16) temp_v1->unkC;
                var_s0 += 0x1C;
                break;
            case 2:
                temp_v1->unk8 = temp_a0;
                temp_v1->unk0 = (u16) temp_v1->unk8;
                temp_v1->unk2 = temp_s1;
                temp_v1->unk6 = (s16) -(s16) temp_v1->unk2;
                var_s0 += 0x1C;
                break;
            case 3:
                temp_v1->unk10 = temp_a0;
                temp_v1->unk8 = (u16) temp_v1->unk10;
                temp_v1->unkE = (s16) temp_s1;
                temp_v1->unkA = (u16) -(s32) (u16) temp_v1->unkE;
                var_s0 += 0x1C;
                break;
            case 4:
                temp_v1->unk10 = temp_a0;
                temp_v1->unk0 = (u16) temp_v1->unk10;
                temp_v1->unk4 = (s16) temp_s1;
                temp_v1->unkC = (u16) -(s32) (u16) temp_v1->unk4;
                var_s0 += 0x1C;
                break;
            case 5:
                temp_v1->unk8 = temp_a0;
                temp_v1->unk0 = (u16) temp_v1->unk8;
                temp_v1->unk6 = (s16) temp_s1;
                temp_v1->unk2 = (u16) -(s32) (u16) temp_v1->unk6;
                /* fallthrough */
            default:
                var_s0 += 0x1C;
                break;
            }
            var_s2 += 1;
            var_a0 = arg0;
        } while (var_s2 < D_801C38F0);
    }
}
