/* m2c reference for func_8015AEC4 @ 8015AEC4 (199 words). Generated; not compiled or validated. */
? func_8015B774(void *, void *);                    /* extern */
? func_8015C5FC(void *);                            /* extern */
extern ? D_801BA168;
extern ? D_801BA18C;
extern s32 D_801BA2E8;
extern s32 D_801BA2EC;

void *func_8015AEC4(s32 arg0) {
    void *sp10;
    s32 sp14;
    s32 sp18;
    s32 sp1C;
    s32 sp20;
    s32 sp24;
    s16 var_s1;
    s16 var_s5;
    s32 temp_a0;
    s32 temp_s6;
    s32 temp_s7;
    s32 var_a0;
    s32 var_fp;
    s32 var_s4;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v1;
    s8 *var_s0;
    s8 temp_v0;
    s8 temp_v1_2;
    u8 temp_v1;
    u8 temp_v1_3;
    void *temp_a1;
    void *temp_a2;
    void *temp_s0;
    void *temp_s3;
    void *var_s2;

    var_a0 = arg0;
    sp1C = 0x80;
    sp20 = 0x80;
    sp14 = 0;
    sp24 = 0x80;
    if ((var_a0 < 0) || (var_v0 = var_a0 * 2, ((var_a0 < D_801BA2E8) == 0))) {
        var_a0 = D_801BA2EC;
        var_v0 = var_a0 * 2;
        if (*(&D_801BA18C + (var_a0 * 0x30)) == 0) {
            return NULL;
        }
    }
    temp_s3 = ((var_v0 + var_a0) * 0x10) + &D_801BA168;
    temp_a2 = temp_s3 + 0x10;
    sp10 = temp_a2;
    var_s0 = temp_s3->unk24;
    var_fp = temp_s3->unk1C;
    var_s1 = temp_s3->unk8;
    var_s5 = temp_s3->unkA;
    sp18 = var_s5 + temp_s3->unkE;
    var_s2 = temp_s3->unk20;
    temp_s6 = temp_s3->unk2C;
    temp_s7 = var_s1 + temp_s3->unkC;
    func_8015B774(sp10, temp_a2);
loop_30:
    temp_v1 = (u8) *var_s0;
    if (*var_s0 != 0) {
        if (var_fp != 0) {
            var_s4 = 0;
            switch ((s8) temp_v1) {                 /* irregular */
            case 0x7E:
                var_s0 += 1;
                if (var_s0->unk0 == 0x63) {
                    temp_s0 = var_s0 + 1;
                    temp_v0 = var_s0->unk1;
                    temp_v1_2 = temp_s0->unk1;
                    var_s0 = temp_s0 + 1 + 1;
                    sp1C = (temp_v0 - 0x30) * 0x10;
                    sp20 = (temp_v1_2 - 0x30) * 0x10;
                    sp24 = (*var_s0 - 0x30) * 0x10;
                }
                break;
            case 0x9:
                var_s1 += 0x20;
block_22:
                if ((var_s1 >= temp_s7) && (temp_s6 == 0)) {
                case 0xA:
                    var_s4 = 1;
                }
                break;
            default:
                temp_v1_3 = (u8) *var_s0;
                if ((u32) (temp_v1_3 - 0x61) < 0x1AU) {
                    var_v1 = (s8) temp_v1_3 - 0x40;
                } else {
                    var_v1 = (s8) temp_v1_3 - 0x20;
                }
                var_v0_2 = var_v1;
                if (var_v1 < 0) {
                    var_v0_2 = var_v1 + 0xF;
                }
                temp_a0 = var_v0_2 >> 4;
                var_s2->unkC = (s8) ((var_v1 - (temp_a0 * 0x10)) * 8);
                var_s2->unkD = (s8) (temp_a0 * 8);
                var_s2->unk8 = var_s1;
                var_s2->unkA = var_s5;
                temp_a1 = var_s2;
                var_s2->unk4 = (u8) sp1C;
                var_s2->unk5 = (u8) sp20;
                var_s2->unk6 = (u8) sp24;
                var_s2 += 0x10;
                AddPrim(sp10, temp_a1);
                /* fallthrough */
            case 0x20:
                var_s1 += 8;
                goto block_22;
            }
            if (var_s4 != 0) {
                if (sp14 < var_s1) {
                    sp14 = (s32) var_s1;
                }
                var_s5 += 8;
                var_s1 = temp_s3->unk8;
                if (var_s5 < sp18) {
                    goto block_29;
                }
            } else {
block_29:
                var_s0 += 1;
                var_fp -= 1;
                goto loop_30;
            }
        }
    }
    if (temp_s3->unk7 != 0) {
        AddPrim(sp10, temp_s3);
        if (temp_s6 != 0) {
            temp_s3->unkC = (s16) (sp14 - (u16) temp_s3->unk8);
            temp_s3->unkE = (s16) (var_s5 - ((u16) temp_s3->unkA - 8));
        }
    }
    func_8015C5FC(sp10);
    temp_s3->unk28 = 0;
    *temp_s3->unk24 = 0;
    return sp10;
}
