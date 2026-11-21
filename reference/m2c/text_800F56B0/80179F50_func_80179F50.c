/* m2c reference for func_80179F50 @ 80179F50 (322 words). Generated; not compiled or validated. */
? func_80179D08(void *, ? *, ? *, void *, s32);     /* extern */

s32 func_80179F50(void *arg0) {
    ? sp18;
    ? *var_s0;
    ? *var_s4;
    s32 *var_s1;
    s32 temp_a2;
    s32 temp_s3;
    s32 temp_v1;
    s32 var_s3;
    s32 var_s5;
    s32 var_s7;
    s32 var_v0;
    s32 var_v1;
    s32 var_v1_2;
    s32 var_v1_4;
    u32 var_v1_3;
    void *temp_a0;
    void *temp_a1;
    void *temp_a2_2;
    void *temp_t0;
    void *temp_t1;
    void *temp_v0;
    void *temp_v0_2;
    void *var_s6;

    var_v1 = 0;
    if (arg0->unk1EC == 0) {
        temp_v0 = arg0->unk0;
        if (temp_v0 != NULL) {
            var_v1 = (u32) (temp_v0->unk12 ^ 0xFF) > 0U;
        }
    }
    var_s6 = NULL;
    if (var_v1 != 0) {
        var_v1_2 = 0;
        if (arg0->unk1FC > 0) {
            var_v1_2 = (u32) (arg0->unk204 ^ 0xFF) > 0U;
        }
        if (var_v1_2 != 0) {
            arg0->unk1FC = (s32) (arg0->unk1FC - 1);
            temp_t1 = arg0->unk0;
            var_s7 = 0x20 - ((s32) (arg0->unk1FC << 5) / (s32) arg0->unk200);
            if (arg0->unk1F8 & 0x1F) {
                var_s4 = arg0 + 0xC;
            } else {
                var_s4 = (arg0->unk0 + (arg0->unk204 * 4))->unk18 + (((temp_t1->unk10 * ((s32) arg0->unk1F8 >> 5)) << 5) + 4);
            }
            var_s6 = (arg0->unk0 + (temp_t1->unk12 * 4))->unk18 + 4;
            if (arg0->unk1FC <= 0) {
                arg0->unk1F8 = 0;
            }
            goto block_21;
        }
        temp_t0 = (arg0->unk0 + (arg0->unk0->unk12 * 4))->unk18;
        arg0->unk1F8 = (s32) (arg0->unk1F8 + arg0->unk1F4);
        if (arg0->unk1F0 != 0) {
            if (((temp_t0->unk1 - 2) * 8) < arg0->unk1F8) {
                arg0->unk1F8 = (s32) ((temp_t0->unk1 - 1) * 8);
                arg0->unk1EC = 1;
                return 1;
            }
            goto block_17;
        }
        temp_v1 = temp_t0->unk1 * 8;
        if (arg0->unk1F8 >= temp_v1) {
            arg0->unk1F8 = (s32) (arg0->unk1F8 - temp_v1);
        }
block_17:
        temp_a1 = arg0->unk0;
        temp_a2 = (s32) arg0->unk1F8 >> 5;
        var_s7 = arg0->unk1F8 & 0x1F;
        var_v1_3 = temp_a2 + 1;
        var_s4 = temp_t0 + (((temp_a1->unk10 * temp_a2) << 5) + 4);
        if (var_s7 != 0) {
            if (var_v1_3 >= (u8) temp_t0->unk0) {
                var_v1_3 = 0;
            }
            var_s6 = temp_t0 + (((temp_a1->unk10 * var_v1_3) << 5) + 4);
        }
block_21:
        temp_v0_2 = arg0->unk0;
        var_s1 = temp_v0_2->unk14;
        var_s5 = temp_v0_2->unk10 & 0xFF;
loop_22:
        var_s5 -= 1;
        var_v0 = 0;
        if (var_s5 != -1) {
            temp_s3 = *var_s1;
            var_s1 += 4;
            if (var_s7 != 0) {
                var_s0 = &sp18;
                if (arg0->unk1FC == 0) {
                    var_s0 = arg0 + (((arg0->unk0->unk10 - var_s5) << 5) - 0x14);
                }
                func_80179D08(arg0, var_s0, var_s4, var_s6, var_s7);
                var_s3 = temp_s3 - 1;
            } else {
                var_s0 = var_s4;
                var_s3 = temp_s3 - 1;
            }
loop_28:
            if (var_s3 != -1) {
                temp_a0 = arg0->unk4 + (*var_s1 * 8);
                temp_a2_2 = arg0->unk8 + (*var_s1 * 8);
                temp_a2_2->unk0 = (s16) (var_s0->unk14 + ((s32) (((s16) temp_a0->unk0 * (s16) var_s0->unk0) + ((s16) temp_a0->unk2 * (s16) var_s0->unk6) + ((s16) temp_a0->unk4 * (s16) var_s0->unkC)) >> 0xC));
                temp_a2_2->unk2 = (s16) (var_s0->unk18 + ((s32) (((s16) temp_a0->unk0 * (s16) var_s0->unk2) + ((s16) temp_a0->unk2 * (s16) var_s0->unk8) + ((s16) temp_a0->unk4 * (s16) var_s0->unkE)) >> 0xC));
                var_s1 += 2;
                temp_a2_2->unk4 = (s16) (var_s0->unk1C + ((s32) (((s16) temp_a0->unk0 * (s16) var_s0->unk4) + ((s16) temp_a0->unk2 * (s16) var_s0->unkA) + ((s16) temp_a0->unk4 * (s16) var_s0->unk10)) >> 0xC));
                var_s3 -= 1;
                goto loop_28;
            }
            if ((s32) var_s1 & 3) {
                var_s1 += 2;
            }
            var_s4 += 0x20;
            var_s6 += 0x20;
            goto loop_22;
        }
        /* Duplicate return node #37. Try simplifying control flow for better match */
        return var_v0;
    }
    var_v1_4 = 0;
    if (arg0->unk1EC != 0) {
        var_v1_4 = (u32) arg0->unk1F0 > 0U;
    }
    var_v0 = 1;
    if (var_v1_4 == 0) {
        var_v0 = 0;
    }
    return var_v0;
}
