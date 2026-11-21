/* m2c reference for func_80102710 @ 80102710 (185 words). Generated; not compiled or validated. */
s32 func_801250C8(void *, ?);                       /* extern */
s32 func_80176CBC(s32, s32, ?);                     /* extern */

s32 func_80102710(s32 arg0, s32 arg1, s32 arg2, void *arg3) {
    s32 sp10;
    s32 sp14;
    s32 sp18;
    VECTOR sp20;
    s32 var_a0;
    s32 var_s3;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    u16 temp_v0;
    void *temp_s0;
    void *temp_s1;

    temp_v0 = arg3->unk1E;
    var_s3 = 0;
    if (((s16) temp_v0 < 0x10) || ((u32) ((s16) temp_v0 - 0x1F4) < 0xC9U)) {
        var_v0_2 = arg3->unkC;
        if (var_v0_2 < 0) {
            var_v0_2 = -var_v0_2;
        }
        if (var_v0_2 >= 0xDAD) {
            goto block_5;
        }
    } else {
block_5:
        var_s3 = 1;
    }
    var_v0 = var_s3;
    if (var_s3 == 0) {
        sp10 = -arg3->unk4;
        sp14 = -arg3->unk8;
        sp18 = -arg3->unkC;
        temp_s1 = arg0 + (arg1 * 4);
        mathMulVec(temp_s1->unk3A0->unk738 + 0x28, (VECTOR *) &sp10, &sp20);
        temp_s0 = arg0 + (arg1 * 0xC);
        var_a0 = 0;
        if (temp_s0->unk358 != temp_s1->unk3B4) {
            var_v0_3 = arg3->unkC;
            if (var_v0_3 < 0) {
                var_v0_3 = -var_v0_3;
            }
            var_a0 = var_v0_3 >= 0x801;
        }
        if (var_a0 != 0) {
            temp_s0->unk358 = func_80176CBC(temp_s0->unk358, temp_s1->unk3B4, 5);
            return 1;
        }
        if (arg2 == 0) {
            if (sp20.vy < 0x800) {
                sp10 = 0;
                sp14 = -0x1000;
                sp18 = 0;
                mathMulTransVec(temp_s1->unk3A0->unk738 + 0x28, (VECTOR *) &sp10, arg3 + 4);
                arg3->unk10 = func_801250C8(temp_s1->unk3A0 + 0x244, 0);
                if (arg3->unk10 < 8) {
                    goto block_26;
                }
            }
            goto block_29;
        }
        if (arg2 == 1) {
            if ((s32) sp20 >= -0x7FF) {
                if ((arg0 + (arg1 * 0x198))->unkC == 0) {
                    sp10 = 0x1000;
                    sp14 = 0;
                    sp18 = 0;
                    mathMulTransVec(temp_s1->unk3A0->unk738 + 0x28, (VECTOR *) &sp10, arg3 + 4);
                    goto block_26;
                }
                goto block_24;
            }
            goto block_27;
        }
        var_v0 = var_s3;
        if (arg2 == 2) {
            if ((s32) sp20 < 0x800) {
                if ((arg0 + (arg1 * 0x198))->unkC != 0) {
block_24:
                    var_s3 = 1;
                    goto block_29;
                }
                sp10 = -0x1000;
                sp14 = 0;
                sp18 = 0;
                mathMulTransVec(temp_s1->unk3A0->unk738 + 0x28, (VECTOR *) &sp10, arg3 + 4);
                arg3->unk10 = func_801250C8(temp_s1->unk3A0 + 0x244, 0);
block_26:
                arg3->unk10 = 8;
                return var_s3;
            }
block_27:
            var_v0 = var_s3;
            if (arg3->unkC != 0) {
                arg3->unkC = (s32) ((s32) arg3->unkC >> 2);
block_29:
                var_v0 = var_s3;
            }
            /* Duplicate return node #30. Try simplifying control flow for better match */
            return var_v0;
        }
        /* Duplicate return node #30. Try simplifying control flow for better match */
        return var_v0;
    }
    return var_v0;
}
