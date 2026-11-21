/* m2c reference for func_801579BC @ 801579BC (167 words). Generated; not compiled or validated. */
? func_80155A58(s32, ? *);                          /* extern */
s32 func_80157C58(?, s32, ? *);                     /* extern */
extern s16 D_800F4A70;
extern s32 D_801B49FC;
extern s32 D_801B4D08;
extern ? D_801E47B0;
extern ? D_801E47B1;
extern ? D_801E47B2;
extern ? D_801E47B4;
extern ? D_801E47B8;
extern ? D_801E4D8C;
extern ? D_801E63B0;
extern ? D_801E6BB0;
static s8 D_800F4A30[0x20] = {
    0x43,
    0x44,
    0x5F,
    0x63,
    0x61,
    0x63,
    0x68,
    0x65,
    0x66,
    0x69,
    0x6C,
    0x65,
    0x3A,
    0x20,
    0x64,
    0x69,
    0x72,
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
    0,
    0,
}; /* const */
static s8 D_800F4A50[0x1C] = {
    0x43,
    0x44,
    0x5F,
    0x63,
    0x61,
    0x63,
    0x68,
    0x65,
    0x66,
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
    0x2E,
    0x2E,
    0x2E,
    0xA,
    0,
}; /* const */
static u16 D_800F4A6C[3] = { 0x2E, 0, 0x2E2E };     /* const */
static s8 D_800F4A72 = 0;                           /* const */
static s8 D_800F4A74[0x1C] = {
    9,
    0x28,
    0x25,
    0x30,
    0x32,
    0x78,
    0x3A,
    0x25,
    0x30,
    0x32,
    0x78,
    0x3A,
    0x25,
    0x30,
    0x32,
    0x78,
    0x29,
    0x20,
    0x25,
    0x38,
    0x64,
    0x20,
    0x25,
    0x73,
    0xA,
    0,
    0,
    0,
}; /* const */
static s8 D_800F4A90[0x24] = {
    0x43,
    0x44,
    0x5F,
    0x63,
    0x61,
    0x63,
    0x68,
    0x65,
    0x66,
    0x69,
    0x6C,
    0x65,
    0x3A,
    0x20,
    0x25,
    0x64,
    0x20,
    0x66,
    0x69,
    0x6C,
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
    0,
    0,
    0,
    0,
    0,
}; /* const */

s32 func_801579BC(s32 arg0) {
    s32 sp18;
    ? *var_s0;
    ? *var_s4;
    s32 var_s1;
    s32 var_s2;
    s32 var_v0;
    void *var_s3;
    void *var_v0_2;

    if (arg0 != D_801B4D08) {
        var_s0 = &D_801E63B0;
        if (func_80157C58(1, *(&D_801E4D8C + (arg0 * 0x2C)), &D_801E63B0) != 1) {
            var_v0 = -1;
            if (D_801B49FC > 0) {
                printf(D_800F4A30);
                return -1;
            }
            /* Duplicate return node #24. Try simplifying control flow for better match */
            return var_v0;
        }
        var_v0_2 = &D_801E63B0 + 0x800;
        if (D_801B49FC >= 2) {
            printf(D_800F4A50);
            var_v0_2 = &D_801E63B0 + 0x800;
        }
        var_s2 = 0;
        if ((u32) &D_801E63B0 < (u32) var_v0_2) {
            var_s3 = &D_801E47B0 + 8;
            var_s1 = 0;
            var_s4 = &D_801E47B0;
loop_8:
            if (var_s0->unk0 != 0) {
                sp18 = (unaligned s32) var_s0->unk2;
                func_80155A58(sp18, var_s4);
                *(var_s1 + (&D_801E47B0 + 4)) = (unaligned s32) var_s0->unkA;
                switch (var_s2) {                   /* irregular */
                case 0:
                    D_801E47B0.unk8 = (u16) *D_800F4A6C;
                    break;
                case 1:
                    D_801E47B0.unk20 = (s16) D_800F4A70;
                    D_801E47B0.unk22 = (s8) D_800F4A72;
                    break;
                default:
                    memcpy(var_s3, var_s0 + 0x21, (s32) var_s0->unk20);
                    *(var_s3 + var_s0->unk20) = 0;
                    break;
                }
                if (D_801B49FC >= 2) {
                    printf(D_800F4A74, *(&D_801E47B0 + var_s1), *(&D_801E47B1 + var_s1), *(&D_801E47B2 + var_s1), *(&D_801E47B4 + var_s1), var_s3);
                }
                var_s3 += 0x18;
                var_s1 += 0x18;
                var_s2 += 1;
                var_s0 += var_s0->unk0;
                var_s4 += 0x18;
                if ((var_s2 < 0x40) && ((u32) var_s0 < (u32) &D_801E6BB0)) {
                    goto loop_8;
                }
            }
        }
        D_801B4D08 = arg0;
        if (var_s2 < 0x40) {
            *(&D_801E47B8 + (var_s2 * 0x18)) = 0;
        }
        var_v0 = 1;
        if (D_801B49FC >= 2) {
            printf(D_800F4A90, var_s2);
            goto block_23;
        }
        /* Duplicate return node #24. Try simplifying control flow for better match */
        return var_v0;
    }
block_23:
    var_v0 = 1;
    return var_v0;
}
