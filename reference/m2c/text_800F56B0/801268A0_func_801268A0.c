/* m2c reference for func_801268A0 @ 801268A0 (315 words). Generated; not compiled or validated. */
? func_80102E88(void *, ?, s32 *, ?);               /* extern */
? func_80123058(void *, ?, s32, s32);               /* extern */
s32 func_80125094(void *, s32);                     /* extern */
? func_801253C8(s32 *, s32);                        /* extern */
extern s32 D_801C37AC;
extern s32 D_801C37B8;
extern s32 D_801C37BC;
extern s32 D_801C37C0;

void func_801268A0(void *arg0, s32 arg1) {
    s32 sp10;
    s32 sp14;
    s32 sp18;
    s32 temp_a3;
    s32 temp_s4;
    s32 temp_s7;
    s32 temp_v0;
    s32 var_s0;
    s32 var_s1;
    s32 var_s2;
    s32 var_s3;
    s32 var_s6;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v0_4;
    void *temp_s0;
    void *var_a0;

    var_s6 = -1;
    var_s2 = 0x7FFFFFFF;
    var_s3 = 0x7FFFFFFF;
    temp_s4 = D_801C37AC;
    D_801C37AC = -1;
    var_s0 = 0;
    D_801C37BC = 0;
    D_801C37B8 = 0;
    temp_s7 = (arg0 + 0x10A64)->unk38 + 0x1C;
    if (arg0->unk12750 > 0) {
        var_s1 = 0;
        do {
            temp_v0 = func_80125094(arg0 + (var_s1 + 0xC8F8) + 0x1E4, temp_s7);
            if (temp_v0 < var_s2) {
                D_801C37AC = var_s0;
                var_s2 = temp_v0;
            } else if ((temp_v0 < var_s3) && (temp_v0 < (var_s2 + 0x640))) {
                var_s6 = var_s0;
                var_s3 = temp_v0;
            }
            var_s1 += 0x958;
            var_s0 += 1;
        } while (var_s0 < arg0->unk12750);
    }
    if (D_801C37AC == -1) {
        D_801C37AC = 0;
    }
    if (arg1 == 0) {
        func_80123058(arg0, 0, ((D_801C37AC * 0x958) + arg0 + 0xC8F8)->unk7C8);
        if (D_801C37C0 != 0) {
            func_80102E88(arg0 + 0x6220, 0, arg0 + ((temp_s4 * 0x958) + 0xC8F8) + 0x1E4, 0);
            return;
        }
        if (var_s2 < 0x960) {
            func_801253C8(&sp10, temp_s7);
            if (rand() & 1) {
                var_v0 = sp10 + 0xC8;
            } else {
                var_v0 = sp10 - 0xC8;
            }
            sp10 = var_v0;
            if (rand() & 1) {
                var_v0_2 = sp14 + 0xC8;
            } else {
                var_v0_2 = sp14 - 0xC8;
            }
            sp14 = var_v0_2;
            sp18 = sp18 + 0x78 + (rand() & 0x1F);
            func_80102E88(arg0 + 0x6220, 0, &sp10, 1);
            D_801C37C0 = 1;
        }
    } else {
        if (arg1 == 1) {
            if (D_801C37C0 != 0) {
                func_80102E88(arg0 + 0x6220, 0, arg0 + ((temp_s4 * 0x958) + 0xC8F8) + 0x1E4, 0);
                D_801C37C0 = 0;
            }
            if ((D_801C37AC == temp_s4) && (var_s6 != -1)) {
                goto block_45;
            }
            goto block_46;
        }
        var_a0 = arg0 + 0x6220;
        if (D_801C37C0 == 0) {
            if (arg0->unk122C8 == 0) {
                var_a0 = arg0 + 0x6220;
                goto block_30;
            }
            temp_s0 = (arg0 + 0x10A64)->unk330;
            if ((temp_s0 != NULL) && (func_80125094(temp_s0 + 0x1E4, arg0->unk122C8 + 0x1C) < 0x960)) {
                temp_a3 = temp_s0->unk7D0;
                D_801C37C0 = 1;
                D_801C37AC = temp_a3;
                func_80123058(arg0, 0, ((temp_a3 * 0x958) + arg0 + 0xC8F8)->unk7C8, temp_a3);
                func_801253C8(&sp10, arg0->unk122C8 + 0x1C);
                if (rand() & 1) {
                    var_v0_3 = sp10 + 0xC8;
                } else {
                    var_v0_3 = sp10 - 0xC8;
                }
                sp10 = var_v0_3;
                if (rand() & 1) {
                    var_v0_4 = sp14 + 0xC8;
                } else {
                    var_v0_4 = sp14 - 0xC8;
                }
                sp14 = var_v0_4;
                sp18 = sp18 + 0x78 + (rand() & 0x1F);
                func_80102E88(arg0 + 0x6220, 0, &sp10, 1);
            }
            if (D_801C37C0 == 0) {
                if ((D_801C37AC == temp_s4) && (var_s6 != -1)) {
                    goto block_45;
                }
                goto block_46;
            }
        } else {
block_30:
            func_80102E88(var_a0, 0, arg0 + ((temp_s4 * 0x958) + 0xC8F8) + 0x1E4, 0);
            D_801C37C0 = 0;
            if ((D_801C37AC == temp_s4) && (var_s6 != -1)) {
block_45:
                D_801C37AC = var_s6;
            }
block_46:
            func_80123058(arg0, 0, ((D_801C37AC * 0x958) + arg0 + 0xC8F8)->unk7C8);
        }
    }
}
