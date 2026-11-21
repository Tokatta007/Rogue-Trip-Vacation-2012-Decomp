/* m2c reference for func_8015735C @ 8015735C (182 words). Generated; not compiled or validated. */
s32 func_80157634(? *, s8 *);                       /* extern */
s32 func_80157654();                                /* extern */
s32 func_80157918(s32, s8 *);                       /* extern */
s32 func_801579BC(s32);                             /* extern */
extern s32 D_801B49FC;
extern s32 D_801B4A08;
extern s32 D_801B4D0C;
extern ? D_801E47B8;
static s8 D_800F48C4[0x1C] = {
    0x25,
    0x73,
    0x3A,
    0x20,
    0x70,
    0x61,
    0x74,
    0x68,
    0x20,
    0x6C,
    0x65,
    0x76,
    0x65,
    0x6C,
    0x20,
    0x28,
    0x25,
    0x64,
    0x29,
    0x20,
    0x65,
    0x72,
    0x72,
    0x6F,
    0x72,
    0xA,
    0,
    0,
}; /* const */
static s8 D_800F48E0[0x18] = {
    0x25,
    0x73,
    0x3A,
    0x20,
    0x64,
    0x69,
    0x72,
    0x20,
    0x77,
    0x61,
    0x73,
    0x20,
    0x6E,
    0x6F,
    0x74,
    0x20,
    0x66,
    0x6F,
    0x75,
    0x6E,
    0x64,
    0xA,
    0,
    0,
}; /* const */
static s8 D_800F48F8[0x1C] = {
    0x43,
    0x64,
    0x53,
    0x65,
    0x61,
    0x72,
    0x63,
    0x68,
    0x46,
    0x69,
    0x6C,
    0x65,
    0x3A,
    0x20,
    0x64,
    0x69,
    0x73,
    0x63,
    0x20,
    0x65,
    0x72,
    0x72,
    0x6F,
    0x72,
    0xA,
    0,
    0,
    0,
}; /* const */
static s8 D_800F4914[0x20] = {
    0x43,
    0x64,
    0x53,
    0x65,
    0x61,
    0x72,
    0x63,
    0x68,
    0x46,
    0x69,
    0x6C,
    0x65,
    0x3A,
    0x20,
    0x73,
    0x65,
    0x61,
    0x72,
    0x63,
    0x68,
    0x69,
    0x6E,
    0x67,
    0x20,
    0x25,
    0x73,
    0x2E,
    0x2E,
    0x2E,
    0xA,
    0,
    0,
}; /* const */
static s8 D_800F4934[0xC] = { 0x25, 0x73, 0x3A, 0x20, 0x20, 0x66, 0x6F, 0x75, 0x6E, 0x64, 0xA, 0 }; /* const */
static s8 D_800F4940[0x10] = {
    0x25,
    0x73,
    0x3A,
    0x20,
    0x6E,
    0x6F,
    0x74,
    0x20,
    0x66,
    0x6F,
    0x75,
    0x6E,
    0x64,
    0xA,
    0,
    0,
}; /* const */

void *func_8015735C(void *arg0, s8 *arg1) {
    s8 sp10;
    ? *var_s3;
    s32 var_a0;
    s32 var_s1_2;
    s32 var_s2;
    s32 var_s2_2;
    s32 var_v0_2;
    s8 *var_a0_2;
    s8 *var_a1;
    s8 *var_s0_2;
    s8 *var_s1;
    s8 var_v0;
    u8 var_v1;
    void *var_s0;

    if (D_801B4D0C != D_801B4A08) {
        if (func_80157654() != 0) {
            D_801B4D0C = D_801B4A08;
            goto block_3;
        }
        /* Duplicate return node #38. Try simplifying control flow for better match */
        return NULL;
    }
block_3:
    if (*arg1 != 0x5C) {
        return NULL;
    }
    sp10 = 0;
    var_a0 = 1;
    var_s0_2 = arg1;
    var_s2 = 0;
loop_7:
    var_v0 = *var_s0_2;
    var_v1 = (u8) *var_s0_2;
    var_s1 = &sp10;
    if (var_v0 != 0x5C) {
loop_9:
        var_v0_2 = var_s2 < 8;
        if (var_v1 != 0) {
            var_s0_2 += 1;
            *var_s1 = (s8) var_v1;
            var_v1 = (u8) *var_s0_2;
            var_s1 += 1;
            if (*var_s0_2 == 0x5C) {
                var_v0 = *var_s0_2;
                goto block_12;
            }
            goto loop_9;
        }
    } else {
block_12:
        var_v0_2 = var_s2 < 8;
        if (var_v0 != 0) {
            var_s0_2 += 1;
            *var_s1 = 0;
            var_a0 = func_80157918(var_a0, &sp10);
            if (var_a0 != -1) {
                var_s2 += 1;
                if (var_s2 >= 8) {
                    goto block_15;
                }
                goto loop_7;
            }
            sp10 = 0;
block_15:
            var_v0_2 = var_s2 < 8;
        }
    }
    if (var_v0_2 == 0) {
        if (D_801B49FC > 0) {
            printf(D_800F48C4, arg1, var_s2);
            return NULL;
        }
        goto block_37;
    }
    if (sp10 == 0) {
        var_a1 = arg1;
        if (D_801B49FC > 0) {
            var_a0_2 = D_800F48E0;
            goto block_36;
        }
        goto block_37;
    }
    *var_s1 = 0;
    if (func_801579BC(var_a0) == 0) {
        if (D_801B49FC > 0) {
            printf(D_800F48F8);
            return NULL;
        }
        /* Duplicate return node #38. Try simplifying control flow for better match */
        return NULL;
    }
    var_s2_2 = 0;
    if (D_801B49FC >= 2) {
        printf(D_800F4914, &sp10);
        var_s2_2 = 0;
    }
    var_s0 = &D_801E47B8 - 8;
    var_s3 = &D_801E47B8;
    var_s1_2 = 0;
loop_28:
    if (*(&D_801E47B8 + var_s1_2) != 0) {
        if (func_80157634(var_s3, &sp10) != 0) {
            if (D_801B49FC >= 2) {
                printf(D_800F4934, &sp10);
            }
            arg0->unk0 = (s32) var_s0->unk0;
            arg0->unk4 = (s32) var_s0->unk4;
            arg0->unk8 = (s32) var_s0->unk8;
            arg0->unkC = (s32) var_s0->unkC;
            arg0->unk10 = (s32) var_s0->unk10;
            arg0->unk14 = (s32) var_s0->unk14;
            return var_s0;
        }
        var_s0 += 0x18;
        var_s3 += 0x18;
        var_s2_2 += 1;
        var_s1_2 += 0x18;
        if (var_s2_2 >= 0x40) {
            goto block_34;
        }
        goto loop_28;
    }
block_34:
    var_a1 = &sp10;
    if (D_801B49FC > 0) {
        var_a0_2 = D_800F4940;
block_36:
        printf(var_a0_2, var_a1);
    }
block_37:
    return NULL;
}
