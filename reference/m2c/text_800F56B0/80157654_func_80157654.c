/* m2c reference for func_80157654 @ 80157654 (177 words). Generated; not compiled or validated. */
s32 func_80157C58(?, s32, ? *);                     /* extern */
extern s32 D_801B49FC;
extern s32 D_801B4D08;
extern ? D_801E4DB0;
extern ? D_801E4DB4;
extern ? D_801E4DB8;
extern ? D_801E63B0;
static s8 D_800F4950[0x2C] = {
    0x43,
    0x44,
    0x5F,
    0x6E,
    0x65,
    0x77,
    0x6D,
    0x65,
    0x64,
    0x69,
    0x61,
    0x3A,
    0x20,
    0x52,
    0x65,
    0x61,
    0x64,
    0x20,
    0x65,
    0x72,
    0x72,
    0x6F,
    0x72,
    0x20,
    0x69,
    0x6E,
    0x20,
    0x63,
    0x64,
    0x5F,
    0x72,
    0x65,
    0x61,
    0x64,
    0x28,
    0x50,
    0x56,
    0x44,
    0x29,
    0xA,
    0,
    0,
    0,
    0,
}; /* const */
static s8 D_800F497C[8] = { 0x43, 0x44, 0x30, 0x30, 0x31, 0, 0, 0 }; /* const */
static s8 D_800F4984[0x30] = {
    0x43,
    0x44,
    0x5F,
    0x6E,
    0x65,
    0x77,
    0x6D,
    0x65,
    0x64,
    0x69,
    0x61,
    0x3A,
    0x20,
    0x44,
    0x69,
    0x73,
    0x63,
    0x20,
    0x66,
    0x6F,
    0x72,
    0x6D,
    0x61,
    0x74,
    0x20,
    0x65,
    0x72,
    0x72,
    0x6F,
    0x72,
    0x20,
    0x69,
    0x6E,
    0x20,
    0x63,
    0x64,
    0x5F,
    0x72,
    0x65,
    0x61,
    0x64,
    0x28,
    0x50,
    0x56,
    0x44,
    0x29,
    0xA,
    0,
}; /* const */
static s8 D_800F49B4[0x24] = {
    0x43,
    0x44,
    0x5F,
    0x6E,
    0x65,
    0x77,
    0x6D,
    0x65,
    0x64,
    0x69,
    0x61,
    0x3A,
    0x20,
    0x52,
    0x65,
    0x61,
    0x64,
    0x20,
    0x65,
    0x72,
    0x72,
    0x6F,
    0x72,
    0x20,
    0x28,
    0x50,
    0x54,
    0x3A,
    0x25,
    0x30,
    0x38,
    0x78,
    0x29,
    0xA,
    0,
    0,
}; /* const */
static s8 D_800F49D8[0x20] = {
    0x43,
    0x44,
    0x5F,
    0x6E,
    0x65,
    0x77,
    0x6D,
    0x65,
    0x64,
    0x69,
    0x61,
    0x3A,
    0x20,
    0x73,
    0x61,
    0x72,
    0x63,
    0x68,
    0x69,
    0x6E,
    0x67,
    0x20,
    0x64,
    0x69,
    0x72,
    0x2E,
    0x2E,
    0xA,
    0,
    0,
    0,
    0,
}; /* const */
static s8 D_800F49F8[0x14] = {
    9,
    0x25,
    0x30,
    0x38,
    0x78,
    0x2C,
    0x25,
    0x30,
    0x34,
    0x78,
    0x2C,
    0x25,
    0x30,
    0x34,
    0x78,
    0x2C,
    0x25,
    0x73,
    0xA,
    0,
}; /* const */
static s8 D_800F4A0C[0x24] = {
    0x43,
    0x44,
    0x5F,
    0x6E,
    0x65,
    0x77,
    0x6D,
    0x65,
    0x64,
    0x69,
    0x61,
    0x3A,
    0x20,
    0x25,
    0x64,
    0x20,
    0x64,
    0x69,
    0x72,
    0x20,
    0x65,
    0x6E,
    0x74,
    0x72,
    0x69,
    0x65,
    0x73,
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

s32 func_80157654(void) {
    s32 sp18;
    ? *var_s1;
    s32 temp_s0;
    s32 temp_s3;
    s32 temp_v0;
    s32 var_a3;
    s32 var_v0;
    u8 temp_v1_2;
    void *temp_s2;
    void *temp_v1;

    temp_v0 = func_80157C58(1, 0x10, &D_801E63B0);
    if (temp_v0 != 1) {
        var_v0 = 0;
        if (D_801B49FC > 0) {
            printf(D_800F4950);
            return 0;
        }
        /* Duplicate return node #22. Try simplifying control flow for better match */
        return var_v0;
    }
    if (strncmp(&D_801E63B0 + 1, D_800F497C, 5) != 0) {
        var_v0 = 0;
        if (D_801B49FC > 0) {
            printf(D_800F4984);
            return 0;
        }
        /* Duplicate return node #22. Try simplifying control flow for better match */
        return var_v0;
    }
    sp18 = (unaligned s32) D_801E63B0.unk8C;
    if (func_80157C58(1, sp18, &D_801E63B0) != temp_v0) {
        var_v0 = 0;
        if (D_801B49FC > 0) {
            printf(D_800F49B4, sp18);
            return 0;
        }
        /* Duplicate return node #22. Try simplifying control flow for better match */
        return var_v0;
    }
    var_s1 = &D_801E63B0;
    if (D_801B49FC >= 2) {
        printf(D_800F49D8);
    }
    temp_v1 = &D_801E63B0 + 0x800;
    var_a3 = 0;
    if ((u32) &D_801E63B0 < (u32) temp_v1) {
loop_13:
        if (var_s1->unk0 != 0) {
            temp_s0 = var_a3 * 0x2C;
            *(temp_s0 + &D_801E4DB8) = (unaligned s32) var_s1->unk2;
            temp_s2 = temp_s0 + (&D_801E4DB8 + 4);
            temp_s3 = var_a3 + 1;
            *(&D_801E4DB0 + temp_s0) = temp_s3;
            *(&D_801E4DB4 + temp_s0) = (s32) var_s1->unk6;
            memcpy(temp_s2, var_s1 + 8, (s32) var_s1->unk0);
            *(temp_s2 + var_s1->unk0) = 0;
            temp_v1_2 = var_s1->unk0;
            var_s1 += temp_v1_2 + ((temp_v1_2 & 1) + 8);
            if (D_801B49FC >= 2) {
                printf(D_800F49F8, *(&D_801E4DB8 + temp_s0), *(&D_801E4DB0 + temp_s0), *(&D_801E4DB4 + temp_s0), temp_s2);
            }
            var_a3 = temp_s3;
            if (var_a3 < 0x80) {
                if ((u32) var_s1 >= (u32) temp_v1) {
                    goto block_18;
                }
                goto loop_13;
            }
        } else {
            goto block_18;
        }
    } else {
block_18:
        if (var_a3 < 0x80) {
            *(&D_801E4DB4 + (var_a3 * 0x2C)) = 0;
        }
    }
    D_801B4D08 = 0;
    var_v0 = 1;
    if (D_801B49FC >= 2) {
        printf(D_800F4A0C, var_a3);
        var_v0 = 1;
    }
    return var_v0;
}
