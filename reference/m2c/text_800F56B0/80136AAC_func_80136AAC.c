/* m2c reference for func_80136AAC @ 80136AAC (71 words). Generated; not compiled or validated. */
? func_80136A1C(void *);                            /* extern */
s32 func_80136C10();                                /* extern */
static s8 D_800F3BF4[0x24] = {
    0x45,
    0x72,
    0x72,
    0x6F,
    0x72,
    0x3A,
    0x20,
    0x25,
    0x73,
    0x20,
    0x69,
    0x73,
    0x6E,
    0x27,
    0x74,
    0x20,
    0x61,
    0x20,
    0x76,
    0x61,
    0x6C,
    0x69,
    0x64,
    0x20,
    0x54,
    0x4D,
    0x53,
    0x20,
    0x66,
    0x69,
    0x6C,
    0x65,
    0xA,
    0,
    0,
    0,
}; /* const */
static s8 D_800F3C18[0x28] = {
    0x45,
    0x72,
    0x72,
    0x6F,
    0x72,
    0x3A,
    0x20,
    0x25,
    0x73,
    0x20,
    0x69,
    0x73,
    0x6E,
    0x27,
    0x74,
    0x20,
    0x74,
    0x68,
    0x65,
    0x20,
    0x63,
    0x75,
    0x72,
    0x72,
    0x65,
    0x6E,
    0x74,
    0x20,
    0x76,
    0x65,
    0x72,
    0x73,
    0x69,
    0x6F,
    0x6E,
    0xA,
    0,
    0,
    0,
    0,
}; /* const */
static s8 D_800F3C40[0x38] = {
    0x20,
    0x20,
    0x20,
    0x20,
    0x20,
    0x20,
    0x20,
    0x28,
    0x74,
    0x68,
    0x65,
    0x20,
    0x66,
    0x69,
    0x6C,
    0x65,
    0x20,
    0x69,
    0x73,
    0x20,
    0x76,
    0x65,
    0x72,
    0x73,
    0x69,
    0x6F,
    0x6E,
    0x20,
    0x25,
    0x64,
    0x2C,
    0x20,
    0x63,
    0x75,
    0x72,
    0x72,
    0x65,
    0x6E,
    0x74,
    0x20,
    0x76,
    0x65,
    0x72,
    0x73,
    0x69,
    0x6F,
    0x6E,
    0x20,
    0x69,
    0x73,
    0x20,
    0x25,
    0x64,
    0x29,
    0xA,
    0,
}; /* const */

s32 func_80136AAC(s32 *arg0) {
    s32 *var_s0;
    s32 *var_s0_2;
    s32 temp_s3;
    s32 temp_s4;
    s32 var_s1;
    u32 *temp_s0;
    u32 *temp_s0_2;
    u32 var_s2;
    void *var_s0_3;

    if (arg0 == NULL) {
        return 0;
    }
    var_s0 = arg0 + 4;
    if (*arg0 != 0x50535854) {
        var_s0 -= 4;
        printf(D_800F3BF4, func_80136C10());
        exit(-1);
    }
    var_s0_2 = var_s0 + 4;
    if (*var_s0 != 0x43) {
        var_s0_2 -= 4;
        printf(D_800F3C18, func_80136C10());
        printf(D_800F3C40, *var_s0_2, 0x43);
        exit(-1);
    }
    temp_s4 = var_s0_2->unk0;
    temp_s3 = var_s0_2->unk4;
    var_s1 = 0;
    temp_s0 = var_s0_2 + 4 + 4 + (temp_s3 * 4);
    var_s2 = *temp_s0;
    if (temp_s3 > 0) {
        var_s0_3 = temp_s0 + 4;
        do {
            func_80136A1C(var_s0_3);
            temp_s0_2 = var_s0_3 + ((var_s2 >> 2) * 4);
            var_s2 = *temp_s0_2;
            var_s1 += 1;
            var_s0_3 = temp_s0_2 + 4;
        } while (var_s1 < temp_s3);
    }
    return temp_s4;
}
